// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_BaseZone.h"
#include "Components/BoxComponent.h"
#include "CaptureCharacter.h"
#include "CapturePlayerState.h"
#include "CaptureGameMode.h"
#include "GameFramework/PlayerStart.h"

ABP_BaseZone::ABP_BaseZone()
{
	PrimaryActorTick.bCanEverTick = false;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;
	TriggerBox->SetCollisionProfileName("Trigger");
}

void ABP_BaseZone::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())
	{
		TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ABP_BaseZone::OnOverlapBegin);
	}

	UE_LOG(LogTemp, Warning, TEXT("Base %s has %d spawn points"),
		(GetTeam() == ETeams::Red) ? TEXT("RED") : TEXT("BLUE"),
		TeamSpawnPoints.Num());
}

void ABP_BaseZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!HasAuthority()) return;

	if (ACaptureCharacter* Character = Cast<ACaptureCharacter>(OtherActor))
	{
		if (Character->HasFlag())
		{
			if (ACapturePlayerState* PS = Character->GetPlayerState<ACapturePlayerState>())
			{
				if (PS->GetTeam() == GetTeam())
				{
					Character->TryScore();
				}
			}
		}
	}

}

APlayerStart* ABP_BaseZone::GetSpawnPointForPlayer(ACapturePlayerState* PlayerState)
{
    UE_LOG(LogTemp, Warning, TEXT("GetSpawnPointForPlayer - BaseTeam: %d, PlayerTeam: %d, Player: %s"),
        (int32)GetTeam(),
        PlayerState ? (int32)PlayerState->GetTeam() : -1,
        PlayerState ? *PlayerState->GetPlayerName() : TEXT("NULL"));

    if (!PlayerState)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerState is null"));
        return nullptr;
    }

    if (GetTeam() != PlayerState->GetTeam())
    {
        UE_LOG(LogTemp, Error, TEXT("TEAM MISMATCH: Base=%d, Player=%d"),
            (int32)GetTeam(), (int32)PlayerState->GetTeam());
        return nullptr;
    }

    if (TeamSpawnPoints.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("No spawn points configured in base!"));
        return nullptr;
    }

    // Log todos os spawn points
    UE_LOG(LogTemp, Warning, TEXT("Available spawn points:"));
    for (int32 i = 0; i < TeamSpawnPoints.Num(); i++)
    {
        if (TeamSpawnPoints[i])
        {
            UE_LOG(LogTemp, Warning, TEXT("  %d: %s"), i, *TeamSpawnPoints[i]->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("  %d: INVALID"), i);
        }
    }

    int32 RandomIndex = FMath::RandRange(0, TeamSpawnPoints.Num() - 1);
    APlayerStart* SpawnPoint = TeamSpawnPoints[RandomIndex];

    UE_LOG(LogTemp, Warning, TEXT("Selected spawn point: %s (index %d)"),
        SpawnPoint ? *SpawnPoint->GetName() : TEXT("INVALID"), RandomIndex);

    return SpawnPoint;
}

