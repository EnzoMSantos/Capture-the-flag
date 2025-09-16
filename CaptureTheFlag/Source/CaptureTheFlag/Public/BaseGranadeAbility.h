// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "BaseGranadeAbility.generated.h"

/**
 * 
 */
UCLASS()
class CAPTURETHEFLAG_API UBaseGranadeAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:

	UBaseGranadeAbility();

	UPROPERTY(EditDefaultsOnly, Category = "Grenade")
	TSubclassOf<class AGranadeProjectile> GranadeProjectileClass;

	UPROPERTY(EditDefaultsOnly, Category = "Grenade")
	float ThrowForce = 1500.f;

	UPROPERTY(EditDefaultsOnly, Category = "Cooldown")
	FGameplayTag CooldownTag;

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;

protected:

	UFUNCTION(BlueprintCallable)
	void ThrowGranade();

};
