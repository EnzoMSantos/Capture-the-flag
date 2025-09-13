// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureGameMode.h"
#include "CaptureGameState.h"
#include "CapturePlayerState.h"
#include "Kismet/GameplayStatics.h"

ACaptureGameMode::ACaptureGameMode()
{
	GameStateClass = ACaptureGameState::StaticClass();
	PlayerStateClass = ACapturePlayerState::StaticClass();
}

void ACaptureGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	ACapturePlayerState* PS = NewPlayer->GetPlayerState<ACapturePlayerState>();
	if (PS)
	{
		int32 NumPlayers = GameState->PlayerArray.Num();
		PS->SetTeam(NumPlayers % 2 == 0 ? ETeams::Red : ETeams::Blue);
	}
}

void ACaptureGameMode::PlayerScored(ACapturePlayerState* ScoringPlayer)
{
	if (!ScoringPlayer) return;

	ACaptureGameState* GS = GetGameState<ACaptureGameState>();
	if (!GS) return;

	GS->AddScore(ScoringPlayer->GetTeam());

	if (GS->GetRedScore() >= 3 || GS->GetBlueScore() >= 3)
	{
		ResetGame();
	}
}

void ACaptureGameMode::ResetGame()
{
	if (ACaptureGameState* GS = GetGameState<ACaptureGameState>())
	{
		GS->AddScore(ETeams::None);
	}

	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), true);
}
