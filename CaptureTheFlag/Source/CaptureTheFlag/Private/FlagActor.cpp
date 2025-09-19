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

void AFlagActor::Server_ResetFlag_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Server_ResetFlag called"));
	Multicast_ResetFlag();
}

void AFlagActor::Multicast_ResetFlag_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Multicast_ResetFlag called on all clients"));
	DetachFromCharacter();
}

void AFlagActor::AttachToCharacter(ACaptureCharacter* Character)
{
	if (!Character) return;

	UE_LOG(LogTemp, Warning, TEXT("Attaching flag to character: %s"), *Character->GetName());

	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	FAttachmentTransformRules Rules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);

	if (Character->GetMesh()->DoesSocketExist(TEXT("FlagSocket")))
	{
		AttachToComponent(Character->GetMesh(), Rules, TEXT("FlagSocket"));
		UE_LOG(LogTemp, Warning, TEXT("Attached to FlagSocket"));
	}
	else
	{
		FVector RelativeLocation(50.0f, 30.0f, 0.0f);
		FRotator RelativeRotation(0.0f, 0.0f, 0.0f);

		SetActorRelativeLocation(RelativeLocation);
		SetActorRelativeRotation(RelativeRotation);

		AttachToComponent(Character->GetMesh(), Rules);
		UE_LOG(LogTemp, Warning, TEXT("Attached with relative position"));
	}

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

void AFlagActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AFlagActor, InitialLocation);
}

void AFlagActor::ResetFlag()
{
	UE_LOG(LogTemp, Warning, TEXT("ResetFlag called"));

	if (HasAuthority())
	{
		Server_ResetFlag();
	}
}

void AFlagActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!HasAuthority()) return;

	if (ACaptureCharacter* Character = Cast<ACaptureCharacter>(OtherActor))
	{
		if (!Character->IsDead() && Character->GetCapsuleComponent()->GetCollisionEnabled() != ECollisionEnabled::NoCollision)
		{
			if (!Character->HasFlag())
			{
				AttachToCharacter(Character);
				UE_LOG(LogTemp, Warning, TEXT("Flag attached to living character"));
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Character already has flag"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Character cannot pick up flag - Dead: %d, Collision: %d"),
				Character->IsDead(),
				(int32)Character->GetCapsuleComponent()->GetCollisionEnabled());
		}
	}
}


