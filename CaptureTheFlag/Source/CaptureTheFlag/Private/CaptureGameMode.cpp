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
	//DefaultPawnClass = ACaptureCharacter::StaticClass();
	
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
			PS->SetTeam(NumPlayers % 2 == 0 ? ETeams::Red : ETeams::Blue);
		}
	}
}

void ACaptureGameMode::PlayerScored(ACapturePlayerState* ScoringPlayer)
{
	if (!ScoringPlayer || !HasAuthority()) return;

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
		//GS->ResetScores();
	}

	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), true);
}

