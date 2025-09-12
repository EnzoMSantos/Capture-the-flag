// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureCharacter.h"

// Sets default values
ACaptureCharacter::ACaptureCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACaptureCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACaptureCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACaptureCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

