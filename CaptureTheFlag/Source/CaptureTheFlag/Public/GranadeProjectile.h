// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayEffect.h"
#include "GranadeProjectile.generated.h"


UCLASS()
class CAPTURETHEFLAG_API AGranadeProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	AGranadeProjectile();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Damage")
	TSubclassOf<UGameplayEffect> DamageEffectClass;

	UPROPERTY(EditDefaultsOnly, Category = "Grenade")
	float FuseTime = 3.0f;

	UFUNCTION(BlueprintCallable)
	void Throw(const FVector& Force);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Explode();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grenade")
	UParticleSystem* ExplosionEffect;
	
	float ExplosionRadius = 500.f;
	float ExplosionDamage = 50.f;

protected:

	virtual void BeginPlay() override;


	UFUNCTION()
	void OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	virtual void Explode();

	void ApplyDamageToActors();

	FTimerHandle FuseTimerHandle;

};
