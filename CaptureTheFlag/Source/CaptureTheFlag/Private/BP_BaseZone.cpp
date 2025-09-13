// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_BaseZone.h"
#include "Components/BoxComponent.h"
#include "CaptureCharacter.h"
#include "CapturePlayerState.h"
#include "CaptureGameMode.h"

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
	
}

void ABP_BaseZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!HasAuthority()) return;

	ACaptureCharacter* Character = Cast<ACaptureCharacter>(OtherActor);
	if (Character && Character->HasFlag())
	{
		if (ACapturePlayerState* PS = Character->GetPlayerState<ACapturePlayerState>())
		{
			if (PS->GetTeam() == Team)
			{
				Character->TryScore();
			}
		}
	}
}

