// Fill out your copyright notice in the Description page of Project Settings.


#include "CapturePlayerState.h"
#include "Net/UnrealNetwork.h"

ACapturePlayerState::ACapturePlayerState()
{
	Team = ETeams::None;
}

void ACapturePlayerState::SetTeam(ETeams NewTeam)
{
	if (HasAuthority())
	{
		Team = NewTeam;
		OnRep_Team();
	}
}

FLinearColor ACapturePlayerState::GetTeamColor() const
{
	switch (Team)
	{
	case ETeams::Red: return FLinearColor::Red;
	case ETeams::Blue: return FLinearColor::Blue;
	default: return FLinearColor::White;
	}
}

void ACapturePlayerState::OnRep_Team()
{
	
}

void ACapturePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ACapturePlayerState, Team);
}
