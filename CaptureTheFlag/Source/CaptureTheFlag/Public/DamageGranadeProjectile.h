// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GranadeProjectile.h"
#include "DamageGranadeProjectile.generated.h"

class UGameplayEffect;


/**
 * 
 */
UCLASS()
class CAPTURETHEFLAG_API ADamageGranadeProjectile : public AGranadeProjectile
{
	GENERATED_BODY()
	
public:

	ADamageGranadeProjectile();

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float ExplosionDamage = 50.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float ExplosionRadius = 500.f;


protected:

	virtual void Explode() override;

private:

	void ApplyDamageToActors();
};
