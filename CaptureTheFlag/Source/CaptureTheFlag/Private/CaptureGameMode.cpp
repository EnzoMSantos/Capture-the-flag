// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureGameMode.h"
#include "CaptureGameState.h"
#include "CapturePlayerState.h"
#include "CaptureCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

ACaptureGameMode::ACaptureGameMode()
{
	GameStateClass = ACaptureGameState::StaticClass();
	PlayerStateClass = ACapturePlayerState::StaticClass();
	
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass
	(TEXT("/Game/Blueprints/BP_CaptureCharacter"));
	
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
		UE_LOG(LogTemp, Warning, TEXT("Blueprint Character encontrado: %s"),
			*PlayerPawnBPClass.Class->GetName());
	}
	else
	{
		DefaultPawnClass = ACaptureCharacter::StaticClass();
		UE_LOG(LogTemp, Warning, TEXT("Blueprint não encontrado, usando classe C++"));
	}
}

void ACaptureGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void ACaptureGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	if (HasAuthority())
	{
		ACapturePlayerState* PS = NewPlayer->GetPlayerState<ACapturePlayerState>();
		if (PS && PS->GetTeam() == ETeams::None)
		{
			int32 NumPlayers = GameState->PlayerArray.Num();
			ETeams NewTeam = NumPlayers % 2 == 0 ? ETeams::Red : ETeams::Blue;
			PS->SetTeam(NewTeam);

			if (ACaptureGameState* GS = GetGameState<ACaptureGameState>())
			{
				GS->Multicast_ApplyAllTeamMaterials();
			}
		}
	}
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

