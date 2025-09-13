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

void ACapturePlayerState::OnRep_Team()
{
}

void ACapturePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ACapturePlayerState, Team);
}
