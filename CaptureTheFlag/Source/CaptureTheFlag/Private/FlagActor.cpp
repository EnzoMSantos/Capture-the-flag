// Fill out your copyright notice in the Description page of Project Settings.


#include "FlagActor.h"
#include "Components/StaticMeshComponent.h"
#include "CaptureCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/GameState.h"

AFlagActor::AFlagActor()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	MeshComp->SetCollisionProfileName("OverlapAllDynamic");
	MeshComp->SetGenerateOverlapEvents(true);
	MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

void AFlagActor::BeginPlay()
{
	Super::BeginPlay();
	InitialLocation = GetActorLocation();

	if (HasAuthority())
	{
		if (HasAuthority())
		{
			MeshComp->OnComponentBeginOverlap.AddDynamic(this, &AFlagActor::OnOverlapBegin);
		}
	}
}

void AFlagActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsValid(Carrier))
	{
		FVector HeadOffset = FVector(0, 0, Carrier->GetCapsuleComponent()->GetScaledCapsuleHalfHeight());
		FVector BackOffset = -Carrier->GetActorForwardVector() * 80.f; 
		FVector UpOffset = FVector(0, 0, 40.f); 

		FVector NewLocation = Carrier->GetActorLocation() + HeadOffset + BackOffset + UpOffset;
		SetActorLocation(NewLocation);

		SetActorRotation(FRotator(0, Carrier->GetActorRotation().Yaw + 180.f, 0));
	}

}

void AFlagActor::Server_PickupFlag_Implementation(ACaptureCharacter* NewCarrier)
{
	if (!NewCarrier || Carrier) return;

	Carrier = NewCarrier;
	Carrier->PickupFlag();

	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	OnRep_Carrier();
}

void AFlagActor::Server_DropFlag_Implementation(FVector DropLocation)
{
	if (!Carrier) return;

	Carrier->Server_DropFlag();
	Carrier = nullptr;

	MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SetActorLocation(DropLocation);
}

void AFlagActor::Server_ResetFlag_Implementation()
{
	Carrier = nullptr;
	MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SetActorLocation(InitialLocation);
}

void AFlagActor::ResetFlag()
{
	if (HasAuthority())
	{
		Server_ResetFlag();
	}
}

void AFlagActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!HasAuthority()) return;
	if (Carrier) return;

	ACaptureCharacter* Character = Cast<ACaptureCharacter>(OtherActor);
	if (Character && !Character->HasFlag())
	{
		Server_PickupFlag(Character);
	}
}

void AFlagActor::OnRep_Carrier()
{
	if (Carrier)
	{
		MeshComp->SetVisibility(true);
	}
	else
	{
		MeshComp->SetVisibility(true);
	}
}

void AFlagActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AFlagActor, Carrier);
}

