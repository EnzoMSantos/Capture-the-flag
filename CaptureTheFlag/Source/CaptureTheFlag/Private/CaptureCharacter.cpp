// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureCharacter.h"
#include <Net/UnrealNetwork.h>

ACaptureCharacter::ACaptureCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ACaptureCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACaptureCharacter::PickupFlag()
{
	if (HasAuthority())
	{
		bHasFlag = true;
	}
}

void ACaptureCharacter::DropFlag()
{
	if (HasAuthority())
	{
		bHasFlag = false;
	}
}

void ACaptureCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACaptureCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACaptureCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ACaptureCharacter, bHasFlag);
}

