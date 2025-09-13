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


void ACapturePlayerState::ApplyTeamMaterial()
{
	if (!GetWorld()) return;

	UE_LOG(LogTemp, Warning, TEXT("ApplyTeamMaterial - HasAuthority: %d"), HasAuthority());

	for (TActorIterator<ACaptureCharacter> It(GetWorld()); It; ++It)
	{
		ACaptureCharacter* Character = *It;
		if (Character && Character->GetPlayerState() == this)
		{
			ApplyMaterialToCharacter(Character);
			break;
		}
	}
}


void ACapturePlayerState::OnRep_Team()
{
    UE_LOG(LogTemp, Warning, TEXT("Team changed to: %d"), (int32)Team);
	ApplyTeamMaterial();
}

void ACapturePlayerState::ApplyMaterialToCharacter(ACaptureCharacter* Character)
{
	if (!Character || !Character->GetMesh()) return;

	USkeletalMeshComponent* Mesh = Character->GetMesh();
	UMaterialInterface* OutlineMaterial = LoadObject<UMaterialInterface>
		(nullptr, TEXT("/Game/Materials/M_TeamOutline.M_TeamOutline"));

	if (OutlineMaterial)
	{
		UMaterialInstanceDynamic* DynamicMaterial =
			UMaterialInstanceDynamic::Create(OutlineMaterial, this);

		FLinearColor Color = GetTeamColor();
		DynamicMaterial->SetVectorParameterValue(FName("TeamColor"), Color);
		DynamicMaterial->SetScalarParameterValue(FName("EmissiveIntensity"), 3.0f);
		DynamicMaterial->SetScalarParameterValue(FName("Outline Width"), 1.0f);

		Mesh->SetOverlayMaterial(DynamicMaterial);

		UE_LOG(LogTemp, Warning, TEXT("Material applied for team %d on: %s"),
			(int32)Team, *Character->GetName());
	}
}

void ACapturePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ACapturePlayerState, Team);
}
