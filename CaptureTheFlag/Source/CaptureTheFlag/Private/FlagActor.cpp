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
	if (Carrier && !Carrier->IsUnreachable() && IsValid(Carrier) && Carrier->HasFlag())
	{
		float HalfHeight = Carrier->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
		FVector HeadOffset = FVector(0, 0, HalfHeight);

		FVector NewLocation = Carrier->GetActorLocation() +
			(Carrier->GetActorForwardVector() * 50.f) +
			HeadOffset +
			FVector(0, 0, 50.f);

		SetActorLocation(NewLocation);
		SetActorRotation(FRotator(0, Carrier->GetActorRotation().Yaw, 0));
	}
}

void AFlagActor::Server_PickupFlag_Implementation(ACaptureCharacter* NewCarrier)
{
	if (!NewCarrier || Carrier || !IsValid(NewCarrier)) return;

	UE_LOG(LogTemp, Warning, TEXT("Server_PickupFlag - NewCarrier: %s"), *NewCarrier->GetName());

	Carrier = NewCarrier;
	Carrier->SetCarriedFlag(this);
	Carrier->PickupFlag();

	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	UE_LOG(LogTemp, Warning, TEXT("Pickup complete"));
}

void AFlagActor::Server_DropFlag_Implementation(FVector DropLocation)
{
	if (!Carrier) return;

	Carrier->Server_DropFlag();
	Carrier = nullptr;

	MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SetActorLocation(DropLocation);

	UE_LOG(LogTemp, Warning, TEXT("Flag dropped at location: %s"), *DropLocation.ToString());
}

void AFlagActor::Server_ResetFlag_Implementation()
{
	Carrier = nullptr;
	MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SetActorLocation(InitialLocation);
}

void AFlagActor::ResetFlag()
{
	static bool bIsResetting = false;
	if (bIsResetting) return;
	bIsResetting = true;

	UE_LOG(LogTemp, Warning, TEXT("=== RESET FLAG START ==="));

	if (HasAuthority())
	{
		ACaptureCharacter* OldCarrier = Carrier;
		Carrier = nullptr;

		if (OldCarrier && IsValid(OldCarrier))
		{
			OldCarrier->Server_DropFlag();
		}

		MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		SetActorLocation(InitialLocation, false, nullptr, ETeleportType::ResetPhysics);
		SetActorRotation(FRotator::ZeroRotator, ETeleportType::ResetPhysics);

		ForceNetUpdate();
	}

	bIsResetting = false;
	UE_LOG(LogTemp, Warning, TEXT("=== RESET FLAG COMPLETE ==="));
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
		FVector NewLocation = Carrier->GetActorLocation() + FVector(0, 0, 200.f);
		SetActorLocation(NewLocation);
		MeshComp->SetVisibility(false);
	}
	else
	{
		SetActorLocation(InitialLocation);
		MeshComp->SetVisibility(true);
	}
}

void AFlagActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AFlagActor, Carrier);
}

