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
	if (ExplosionEffect)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());
	}
	DrawDebugSphere(GetWorld(), GetActorLocation(), ExplosionRadius, 12, FColor::Red, false, 2.0f);
}

void AGranadeProjectile::BeginPlay()
{
	Super::BeginPlay();

	MeshComponent->OnComponentHit.AddDynamic(this, &AGranadeProjectile::OnProjectileHit);
}

void AGranadeProjectile::OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	Explode();
}

void AGranadeProjectile::Explode()
{
	ApplyDamageToActors();

	Multicast_Explode();
	Destroy();
}

void AGranadeProjectile::ApplyDamageToActors()
{
	if (!HasAuthority()) return;

	TArray<AActor*> OverlappingActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), OverlappingActors);

	for (AActor* Actor : OverlappingActors)
	{
		float Distance = FVector::Distance(GetActorLocation(), Actor->GetActorLocation());
		if (Distance <= ExplosionRadius)
		{
			float DamageMultiplier = 1.0f - (Distance / ExplosionRadius);
			float FinalDamage = ExplosionDamage * DamageMultiplier;

			UGameplayStatics::ApplyDamage(
				Actor,
				FinalDamage,
				GetInstigatorController(),
				this,
				UDamageType::StaticClass()
			);
		}
	}
}


