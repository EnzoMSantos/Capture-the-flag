// Fill out your copyright notice in the Description page of Project Settings.


#include "FlagActor.h"
#include "Components/StaticMeshComponent.h"

AFlagActor::AFlagActor()
{
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	MeshComp->SetCollisionProfileName("OverlapAllDynamic");
}

void AFlagActor::BeginPlay()
{
	Super::BeginPlay();
	InitialLocation = GetActorLocation();
	
}

void AFlagActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFlagActor::ResetFlag()
{
	SetActorLocation(InitialLocation);
}

