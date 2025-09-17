// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureGameMode.h"
#include "CaptureGameState.h"
#include "CapturePlayerState.h"
#include "CaptureCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/PlayerStart.h"
#include "GameFramework/PlayerState.h"
#include "BP_BaseZone.h"

ACaptureGameMode::ACaptureGameMode()
{
	GameStateClass = ACaptureGameState::StaticClass();
	PlayerStateClass = ACapturePlayerState::StaticClass();
	
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass
	(TEXT("/Game/Blueprints/BP_CaptureCharacter"));
	
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	else
	{
		DefaultPawnClass = ACaptureCharacter::StaticClass();
	}
}

void ACaptureGameMode::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	UE_LOG(LogTemp, Warning, TEXT("=== PreLogin called ==="));

	if (NextTeamToAssign == 1)
	{
		Options.Append(TEXT("?Team=1"));
		NextTeamToAssign = 2;
	}
	else
	{
		Options.Append(TEXT("?Team=2"));
		NextTeamToAssign = 1;
	}

	UE_LOG(LogTemp, Warning, TEXT("Assigned team in PreLogin: %s"), *Options);

	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);
}

void ACaptureGameMode::BeginPlay()
{
	Super::BeginPlay();
	FindTeamBases();

}

void ACaptureGameMode::FindTeamBases()
{
	TArray<AActor*> BaseZones;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABP_BaseZone::StaticClass(), BaseZones);

	UE_LOG(LogTemp, Warning, TEXT("Found %d BaseZone actors"), BaseZones.Num());

	for (AActor* BaseZone : BaseZones)
	{
		if (ABP_BaseZone* Base = Cast<ABP_BaseZone>(BaseZone))
		{
			UE_LOG(LogTemp, Warning, TEXT("BaseZone: %s, Team: %d"),
				*Base->GetName(), (int32)Base->GetTeam());

			if (Base->GetTeam() == ETeams::Red)
			{
				RedBase = Base;
				UE_LOG(LogTemp, Warning, TEXT("Assigned as Red Base"));
			}
			else if (Base->GetTeam() == ETeams::Blue)
			{
				BlueBase = Base;
				UE_LOG(LogTemp, Warning, TEXT("Assigned as Blue Base"));
			}
		}
	}

	if (!RedBase) UE_LOG(LogTemp, Error, TEXT("Red Base not found!"));
	if (!BlueBase) UE_LOG(LogTemp, Error, TEXT("Blue Base not found!"));
}

void ACaptureGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	if (NewPlayer && NewPlayer->PlayerState)
	{
		FString TeamString = UGameplayStatics::ParseOption(OptionsString, TEXT("Team"));
		int32 Team = FCString::Atoi(*TeamString);

		if (APlayerState* PS = Cast<APlayerState>(NewPlayer->PlayerState))
		{
			PS->SetTeam(Team);
			UE_LOG(LogTemp, Warning, TEXT("PostLogin - Player assigned to team %d"), Team);
		}
	}
}

AActor* ACaptureGameMode::ChoosePlayerStart_Implementation(AController* Player)
{
	UE_LOG(LogTemp, Warning, TEXT("=== ChoosePlayerStart called ==="));

	if (ACapturePlayerState* PS = Player->GetPlayerState<ACapturePlayerState>())
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerState found - Team: %d, Player: %s"),
			(int32)PS->GetTeam(), *PS->GetPlayerName());

		if (PS->GetTeam() != ETeams::None)
		{
			ABP_BaseZone* TeamBase = (PS->GetTeam() == ETeams::Red) ? RedBase : BlueBase;

			if (TeamBase)
			{
				UE_LOG(LogTemp, Warning, TEXT("Team base found: %s"), *TeamBase->GetName());

				APlayerStart* SpawnPoint = TeamBase->GetSpawnPointForPlayer(PS);
				if (SpawnPoint)
				{
					UE_LOG(LogTemp, Warning, TEXT("SUCCESS: Spawning team %d at: %s"),
						(int32)PS->GetTeam(), *SpawnPoint->GetName());
					return SpawnPoint;
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Team base found but no spawn point returned!"));
				}
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Team base not found for team %d!"), (int32)PS->GetTeam());
				if (PS->GetTeam() == ETeams::Red) UE_LOG(LogTemp, Error, TEXT("RedBase is null: %d"), RedBase == nullptr);
				if (PS->GetTeam() == ETeams::Blue) UE_LOG(LogTemp, Error, TEXT("BlueBase is null: %d"), BlueBase == nullptr);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Player team is None - using fallback"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerState not found or not ACapturePlayerState"));
	}

	UE_LOG(LogTemp, Warning, TEXT("Using fallback spawn point"));
	AActor* FallbackSpawn = Super::ChoosePlayerStart_Implementation(Player);
	UE_LOG(LogTemp, Warning, TEXT("Fallback spawn: %s"), FallbackSpawn ? *FallbackSpawn->GetName() : TEXT("NULL"));
	return FallbackSpawn;
}

void ACaptureGameMode::PlayerScored(ACapturePlayerState* ScoringPlayer)
{
	if (!ScoringPlayer || !HasAuthority()) return;

	ACaptureGameState* GS = GetGameState<ACaptureGameState>();
	if (!GS) return;

	GS->AddScore(ScoringPlayer->GetTeam());

	UE_LOG(LogTemp, Warning, TEXT("Team %d scored! New score: %d-%d"),
		(int32)ScoringPlayer->GetTeam(), GS->GetRedScore(), GS->GetBlueScore());

	if (GS->GetRedScore() >= 3 || GS->GetBlueScore() >= 3)
	{
		FString WinningTeam = GS->GetRedScore() >= 3 ? "RED" : "BLUE";
		UE_LOG(LogTemp, Warning, TEXT("Team %s wins the game!"), *WinningTeam);

		ResetGame();
	}
}

void ACaptureGameMode::ResetGame()
{
	if (ACaptureGameState* GS = GetGameState<ACaptureGameState>())
	{
		//GS->ResetScores();
	}

	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), true);
}

void ACaptureGameMode::RestartPlayer(AController* NewPlayer)
{
	UE_LOG(LogTemp, Warning, TEXT("RestartPlayer called"));

	if (ACapturePlayerState* PS = NewPlayer->GetPlayerState<ACapturePlayerState>())
	{
		if (PS->GetTeam() == ETeams::None)
		{
			UE_LOG(LogTemp, Warning, TEXT("Team is None, assigning team before spawn"));

			int32 RedCount = 0;
			int32 BlueCount = 0;

			for (APlayerState* PlayerState : GameState->PlayerArray)
			{
				if (ACapturePlayerState* CPS = Cast<ACapturePlayerState>(PlayerState))
				{
					if (CPS != PS) 
					{
						if (CPS->GetTeam() == ETeams::Red) RedCount++;
						else if (CPS->GetTeam() == ETeams::Blue) BlueCount++;
					}
				}
			}

			ETeams NewTeam = (RedCount <= BlueCount) ? ETeams::Red : ETeams::Blue;
			PS->SetTeam(NewTeam);

			UE_LOG(LogTemp, Warning, TEXT("Assigned team %d in RestartPlayer"), (int32)NewTeam);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Player already has team: %d"), (int32)PS->GetTeam());
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("PlayerState not found in RestartPlayer"));
	}

	Super::RestartPlayer(NewPlayer);
}

