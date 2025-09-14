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
    if (!GetWorld())
    {
        UE_LOG(LogTemp, Warning, TEXT("ApplyTeamMaterial: No World"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("ApplyTeamMaterial - Player: %s, Team: %d, HasAuthority: %d"),
        *GetPlayerName(), (int32)Team, HasAuthority());

    APawn* OwnerPawn = GetPawn();
    if (!OwnerPawn)
    {
        UE_LOG(LogTemp, Warning, TEXT("ApplyTeamMaterial: No Pawn"));
        return;
    }

    if (ACaptureCharacter* Character = Cast<ACaptureCharacter>(OwnerPawn))
    {
        UE_LOG(LogTemp, Warning, TEXT("ApplyTeamMaterial: Found Character %s"), *Character->GetName());

        USkeletalMeshComponent* Mesh = Character->GetMesh();
        if (!Mesh)
        {
            UE_LOG(LogTemp, Warning, TEXT("ApplyTeamMaterial: No Mesh"));
            return;
        }

        UMaterialInterface* OutlineMaterial = LoadObject<UMaterialInterface>(
            nullptr, TEXT("/Game/Materials/M_TeamOutline.M_TeamOutline"));

        if (OutlineMaterial)
        {
            UMaterialInstanceDynamic* DynamicMaterial =
                UMaterialInstanceDynamic::Create(OutlineMaterial, this);

            FLinearColor Color = GetTeamColor();
            DynamicMaterial->SetVectorParameterValue(FName("TeamColor"), Color);
            DynamicMaterial->SetScalarParameterValue(FName("EmissiveIntensity"), 3.0f);
            DynamicMaterial->SetScalarParameterValue(FName("Outline Width"), 1.0f);

            Mesh->SetOverlayMaterial(DynamicMaterial);

            UE_LOG(LogTemp, Warning, TEXT("Material applied for team %d on: %s (Color: %s)"),
                (int32)Team, *Character->GetName(), *Color.ToString());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Outline material not found!"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("ApplyTeamMaterial: Pawn is not CaptureCharacter"));
    }
}


void ACapturePlayerState::OnRep_Team()
{
    UE_LOG(LogTemp, Warning, TEXT("OnRep_Team called - Player: %s, New Team: %d, IsLocallyControlled: %d"),
        *GetPlayerName(), (int32)Team, GetPawn() ? GetPawn()->IsLocallyControlled()
        : false);	ApplyTeamMaterial();
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
