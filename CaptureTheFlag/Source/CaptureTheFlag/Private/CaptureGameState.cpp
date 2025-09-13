// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureGameState.h"
#include "Net/UnrealNetwork.h"
#include "FlagActor.h"
#include "CapturePlayerState.h"
#include "CaptureCharacter.h"
#include "EngineUtils.h"

ACaptureGameState::ACaptureGameState()
{
	RedScore = 0;
	BlueScore = 0;
}

void ACaptureGameState::AddScore(ETeams Team)
{
	if (HasAuthority())
	{
		if (Team == ETeams::Red)
			RedScore++;
		else if (Team == ETeams::Blue)
			BlueScore++;

		ForceNetUpdate();
	}
}

void ACaptureGameState::ResetScores()
{
	if (HasAuthority())
	{
		RedScore = 0;
		BlueScore = 0;
		ForceNetUpdate();
	}
}

void ACaptureGameState::Multicast_ApplyAllTeamMaterials_Implementation()
{
	for (APlayerState* PlayerState : PlayerArray)
	{
		if (ACapturePlayerState* CapturePS = Cast<ACapturePlayerState>(PlayerState))
		{
			CapturePS->ApplyTeamMaterial();
		}
	}
}

void ACaptureGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACaptureGameState, RedScore);
	DOREPLIFETIME(ACaptureGameState, BlueScore);
}
