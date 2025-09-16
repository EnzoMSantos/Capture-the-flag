// Fill out your copyright notice in the Description page of Project Settings.


#include "GranadeProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

AGranadeProjectile::AGranadeProjectile()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;
	MeshComponent->SetCollisionProfileName("Projectile");

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjectileMovement->InitialSpeed = 0.0f;
	ProjectileMovement->MaxSpeed = 0.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

}

void AGranadeProjectile::Throw(const FVector& Force)
{
	if (ProjectileMovement)
	{
		ProjectileMovement->Velocity = Force;
	}
}

void AGranadeProjectile::Multicast_Explode_Implementation()
{
	//Efeitos visuais, sonoros e UGameplayStatics::
	// SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());
	
}

void AGranadeProjectile::BeginPlay()
{
	Super::BeginPlay();

	MeshComponent->OnComponentHit.AddDynamic(this, &AGranadeProjectile::OnHit);
	GetWorld()->GetTimerManager().SetTimer(FuseTimerHandle, 
		this, &AGranadeProjectile::Explode, FuseTime, false);
	
}

void AGranadeProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
}

void AGranadeProjectile::Explode()
{
	Multicast_Explode();
	Destroy();
}


