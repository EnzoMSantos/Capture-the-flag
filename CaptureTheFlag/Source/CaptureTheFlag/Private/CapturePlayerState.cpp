// Fill out your copyright notice in the Description page of Project Settings.


#include "CapturePlayerState.h"
#include "Net/UnrealNetwork.h"
#include "CaptureCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "EngineUtils.h"

ACapturePlayerState::ACapturePlayerState()
{
	Team = ETeams::None;
}

void ACapturePlayerState::SetTeam(ETeams NewTeam)
{
	if (HasAuthority())
	{
		Team = NewTeam;

		ForceNetUpdate();

		UE_LOG(LogTemp, Warning, TEXT("Team set to %d - ForceNetUpdate"), (int32)NewTeam);
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
    UE_LOG(LogTemp, Warning, TEXT("OnRep_Team called - Player: %s, New Team: %d, IsLocallyControlled: %d"),
        *GetPlayerName(), (int32)Team, GetPawn() ? GetPawn()->IsLocallyControlled()
        : false);	

}

void ACapturePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ACapturePlayerState, Team);
}
