// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGranadeAbility.h"
#include "DamageGranadeAbility.generated.h"

class UGameplayEffect;

/**
 * 
 */
UCLASS()
class CAPTURETHEFLAG_API UDamageGranadeAbility : public UBaseGranadeAbility
{
	GENERATED_BODY()

public:

	UDamageGranadeAbility();

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float ExplosionDamage = 50.f;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float ExplosionRadius = 500.f;

	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	TSubclassOf<UGameplayEffect> DamageEffectClass;

};
