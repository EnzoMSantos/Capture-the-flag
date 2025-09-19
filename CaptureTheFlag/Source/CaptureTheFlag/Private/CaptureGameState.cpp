// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureGameState.h"
#include "Net/UnrealNetwork.h"
#include "FlagActor.h"
#include "CapturePlayerState.h"
#include "CaptureCharacter.h"
#include "BaseHUDWidget.h"
#include "EngineUtils.h"

ACaptureGameState::ACaptureGameState()
{
	RedScore = 0;
	BlueScore = 0;
	RedTeamCount = 0;
	BlueTeamCount = 0;
}

ETeams ACaptureGameState::GetBalancedTeam()
{
	if (RedTeamCount <= BlueTeamCount)
	{
		RedTeamCount++;
		return ETeams::Red;
	}
	else
	{
		BlueTeamCount++;
		return ETeams::Blue;
	}
}

void ACaptureGameState::UpdateTeamCounts()
{
	RedTeamCount = 0;
	BlueTeamCount = 0;

	for (APlayerState* PlayerState : PlayerArray)
	{
		if (ACapturePlayerState* CPS = Cast<ACapturePlayerState>(PlayerState))
		{
			if (CPS->GetTeam() == ETeams::Red) RedTeamCount++;
			else if (CPS->GetTeam() == ETeams::Blue) BlueTeamCount++;
		}
	}
}

void ACaptureGameState::AddScore(ETeams Team)
{
	if (HasAuthority())
	{
		if (Team == ETeams::Red)
			RedScore++;
		else if (Team == ETeams::Blue)
			BlueScore++;

		OnScoreUpdated.Broadcast(RedScore, BlueScore);
		ForceNetUpdate();

		UE_LOG(LogTemp, Warning, TEXT("Score updated to: %d-%d"), RedScore, BlueScore);
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

void ACaptureGameState::OnRep_RedScore()
{
	OnScoreUpdated.Broadcast(RedScore, BlueScore);
	UE_LOG(LogTemp, Warning, TEXT("OnRep_RedScore called: %d-%d"), RedScore, BlueScore);

}

void ACaptureGameState::OnRep_BlueScore()
{
	OnScoreUpdated.Broadcast(RedScore, BlueScore);
	UE_LOG(LogTemp, Warning, TEXT("OnRep_BlueScore called: %d-%d"), RedScore, BlueScore);
}

void ACaptureGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACaptureGameState, RedScore);
	DOREPLIFETIME(ACaptureGameState, BlueScore);
	DOREPLIFETIME(ACaptureGameState, RedTeamCount);
	DOREPLIFETIME(ACaptureGameState, BlueTeamCount);
}
