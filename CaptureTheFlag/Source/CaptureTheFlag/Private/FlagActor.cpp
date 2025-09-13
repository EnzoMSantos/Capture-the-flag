// Fill out your copyright notice in the Description page of Project Settings.


#include "FlagActor.h"
#include "Components/StaticMeshComponent.h"
#include "CaptureCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Net/UnrealNetwork.h"

AFlagActor::AFlagActor()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	MeshComp->SetCollisionProfileName("OverlapAllDynamic");
	MeshComp->SetGenerateOverlapEvents(true);
}

void AFlagActor::BeginPlay()
{
	Super::BeginPlay();
	InitialLocation = GetActorLocation();

	if (HasAuthority())
	{
		MeshComp->OnComponentBeginOverlap.AddDynamic(this, &AFlagActor::OnOverlapBegin);
	}
}

void AFlagActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFlagActor::ResetFlag()
{
	UE_LOG(LogTemp, Warning, TEXT("ResetFlag called"));
	DetachFromCharacter();
}

void AFlagActor::AttachToCharacter(ACaptureCharacter* Character)
{
	if (!Character) return;

	UE_LOG(LogTemp, Warning, TEXT("Attaching flag to character: %s"), *Character->GetName());

	FAttachmentTransformRules Rules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
	AttachToComponent(Character->GetMesh(), Rules, TEXT("None")); 

	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Character->SetHasFlag(true);
}

void AFlagActor::DetachFromCharacter()
{
	UE_LOG(LogTemp, Warning, TEXT("Detaching flag from character"));

	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	SetActorLocation(InitialLocation, false, nullptr, ETeleportType::ResetPhysics);
	SetActorRotation(FRotator::ZeroRotator, ETeleportType::ResetPhysics);

	ForceNetUpdate();
}

void AFlagActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!HasAuthority()) return;

	if (ACaptureCharacter* Character = Cast<ACaptureCharacter>(OtherActor))
	{
		if (!Character->HasFlag())
		{
			AttachToCharacter(Character);
		}
	}
}


