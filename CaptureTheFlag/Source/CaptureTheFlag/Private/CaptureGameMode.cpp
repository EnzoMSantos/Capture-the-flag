// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureGameMode.h"
#include "CaptureGameState.h"
#include "CapturePlayerState.h"
#include "CaptureCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/PlayerStart.h"
#include "CapturePlayerController.h"
#include "FlagActor.h"
#include "GameFramework/PlayerState.h"
#include "EngineUtils.h"
#include "BP_BaseZone.h"

ACaptureGameMode::ACaptureGameMode()
{
	GameStateClass = ACaptureGameState::StaticClass();
	PlayerStateClass = ACapturePlayerState::StaticClass();

	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass
	(TEXT("/Game/Blueprints/BP_CapturePlayerController.BP_CapturePlayerController_C"));

	if (PlayerControllerBPClass.Class != nullptr)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
		UE_LOG(LogTemp, Warning, TEXT("PlayerController FINDED"));
	}
	else
	{
		PlayerControllerClass = ACapturePlayerController::StaticClass(); 
		UE_LOG(LogTemp, Error, TEXT("PlayerController NOT FOUND"));
	}

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

	TArray<UObject*> Blueprints;
	GetObjectsOfClass(UBlueprint::StaticClass(), Blueprints);

	for (UObject* Blueprint : Blueprints)
	{
		FString Path = Blueprint->GetPathName();
		if (Path.Contains(TEXT("PlayerController"), ESearchCase::IgnoreCase))
		{
			UE_LOG(LogTemp, Warning, TEXT("Found PlayerController BP: %s"), *Path);
		}
	}
}

void ACaptureGameMode::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	UE_LOG(LogTemp, Warning, TEXT("=== PreLogin called ==="));
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
	UE_LOG(LogTemp, Warning, TEXT("=== PostLogin started ==="));

	InitPlayerStateAndTeam(NewPlayer);

	Super::PostLogin(NewPlayer);

	UE_LOG(LogTemp, Warning, TEXT("=== PostLogin finished ==="));

}

APawn* ACaptureGameMode::SpawnDefaultPawnFor_Implementation(AController* NewController, AActor* StartSpot)
{
	UE_LOG(LogTemp, Warning, TEXT("=== SpawnDefaultPawnFor called ==="));

	InitPlayerStateAndTeam(NewController);

	return Super::SpawnDefaultPawnFor_Implementation(NewController, StartSpot);
}

AActor* ACaptureGameMode::ChoosePlayerStart_Implementation(AController* Player)
{
	UE_LOG(LogTemp, Warning, TEXT("=== ChoosePlayerStart called ==="));

	if (Player->IsLocalController() && HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("Listen server - using default spawn"));
		return Super::ChoosePlayerStart_Implementation(Player);
	}

	InitPlayerStateAndTeam(Player);

	if (ACapturePlayerState* PS = Cast<ACapturePlayerState>(Player->GetPlayerState<ACapturePlayerState>()))
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerState - Team: %d"), (int32)PS->GetTeam());

		if (PS->GetTeam() != ETeams::None)
		{
			ABP_BaseZone* TeamBase = (PS->GetTeam() == ETeams::Red) ? RedBase : BlueBase;

			if (TeamBase)
			{
				APlayerStart* SpawnPoint = TeamBase->GetSpawnPointForPlayer(PS);
				if (SpawnPoint)
				{
					UE_LOG(LogTemp, Warning, TEXT("SUCCESS: Spawning team %d at: %s"),
						(int32)PS->GetTeam(), *SpawnPoint->GetName());
					return SpawnPoint;
				}
			}
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Using fallback spawn"));
	return Super::ChoosePlayerStart_Implementation(Player);
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

		GetWorld()->GetWorldSettings()->SetTimeDilation(0.3f);

		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
			{
				GetWorld()->GetWorldSettings()->SetTimeDilation(1.0f);

				ResetGame();

			}, 1.0f, false); 
	}
}

void ACaptureGameMode::ResetGame()
{
	if (!HasAuthority()) return;

	UE_LOG(LogTemp, Warning, TEXT("Soft resetting game"));

	if (ACaptureGameState* GS = GetGameState<ACaptureGameState>())
	{
		GS->ResetScores();
	}

	for (TActorIterator<AFlagActor> It(GetWorld()); It; ++It)
	{
		It->ResetFlag();
	}

	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (APlayerController* PC = It->Get())
		{
			if (PC->GetPawn())
			{
				PC->GetPawn()->Destroy();
			}

			RestartPlayer(PC);
		}
	}

	if (ACaptureGameState* GS = GetGameState<ACaptureGameState>())
	{
		GS->OnScoreUpdated.Broadcast(0, 0);
	}
}

void ACaptureGameMode::RestartPlayer(AController* NewPlayer)
{
	Super::RestartPlayer(NewPlayer);

	if (ACaptureCharacter* Character = Cast<ACaptureCharacter>(NewPlayer->GetPawn()))
	{
		UE_LOG(LogTemp, Warning, TEXT("New character spawned: %s"), *Character->GetName());
	}
}

void ACaptureGameMode::InitPlayerStateAndTeam(AController* NewController)
{
	UE_LOG(LogTemp, Warning, TEXT("=== InitPlayerStateAndTeam called ==="));

	if (NewController->IsLocalController() && HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("Skip team assignment for listen server"));
		return;
	}

	if (!NewController->PlayerState)
	{
		NewController->InitPlayerState();
	}

	if (ACapturePlayerState* PS = Cast<ACapturePlayerState>(NewController->PlayerState))
	{
		if (PS->GetTeam() == ETeams::None)
		{
			int32 RedCount = 0;
			int32 BlueCount = 0;

			if (GameState)
			{
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
			}

			ETeams NewTeam = (RedCount <= BlueCount) ? ETeams::Red : ETeams::Blue;
			PS->SetTeam(NewTeam);

			UE_LOG(LogTemp, Warning, TEXT("Team assigned in Init: %d (Red: %d, Blue: %d)"),
				(int32)NewTeam, RedCount, BlueCount);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Team already set: %d"), (int32)PS->GetTeam());
		}
	}
}

void ACaptureGameMode::RequestRespawn(AController* Controller)
{
	if (!Controller || !HasAuthority()) return;

	if (Controller->GetPawn())
	{
		Controller->GetPawn()->Destroy();
	}

	RestartPlayer(Controller);

	if (ACapturePlayerController* PC = Cast<ACapturePlayerController>(Controller))
	{
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [PC]()
			{
				if (PC && PC->GetPawn())
				{
					PC->SetupHealthBinding();
				}
			}, 0.5f, false);
	}
}
