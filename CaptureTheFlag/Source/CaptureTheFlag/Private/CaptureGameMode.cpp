// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureGameMode.h"
#include "CaptureGameState.h"
#include "CapturePlayerState.h"
#include "CaptureCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/PlayerStart.h"
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
	if (HasAuthority())
	{
		ACapturePlayerState* PS = NewPlayer->GetPlayerState<ACapturePlayerState>();
		if (PS && PS->GetTeam() == ETeams::None)
		{
			int32 RedCount = 0;
			int32 BlueCount = 0;

			for (APlayerState* PlayerState : GameState->PlayerArray)
			{
				if (ACapturePlayerState* CPS = Cast<ACapturePlayerState>(PlayerState))
				{
					if (CPS->GetTeam() == ETeams::Red) RedCount++;
					else if (CPS->GetTeam() == ETeams::Blue) BlueCount++;
				}
			}

			ETeams NewTeam = (RedCount <= BlueCount) ? ETeams::Red : ETeams::Blue;
			PS->SetTeam(NewTeam);

			if (NewPlayer->GetPawn())
			{
				NewPlayer->GetPawn()->Destroy();
			}
			RestartPlayer(NewPlayer);

			UE_LOG(LogTemp, Warning, TEXT("Player assigned to team %d (Red: %d, Blue: %d)"),
				(int32)NewTeam, RedCount, BlueCount);
		}
	}
}

AActor* ACaptureGameMode::ChoosePlayerStart_Implementation(AController* Player)
{
	if (ACapturePlayerState* PS = Player->GetPlayerState<ACapturePlayerState>())
	{
		if (PS->GetTeam() != ETeams::None)
		{
			ABP_BaseZone* TeamBase = (PS->GetTeam() == ETeams::Red) ? RedBase : BlueBase;

			if (TeamBase)
			{
				APlayerStart* SpawnPoint = TeamBase->GetSpawnPointForPlayer(PS);
				if (SpawnPoint)
				{
					UE_LOG(LogTemp, Warning, TEXT("Spawning team %d player at: %s"),
						(int32)PS->GetTeam(), *SpawnPoint->GetName());
					return SpawnPoint;
				}
			}
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Using temporary spawn until team is assigned"));
	return Super::ChoosePlayerStart_Implementation(Player);;
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

