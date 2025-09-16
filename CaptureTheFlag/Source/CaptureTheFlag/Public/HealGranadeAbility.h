// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGranadeAbility.h"
#include "HealGranadeAbility.generated.h"

class UGameplayEffect;
/**
 * 
 */
UCLASS()
class CAPTURETHEFLAG_API UHealGranadeAbility : public UBaseGranadeAbility
{
	GENERATED_BODY()
	
public:

    UHealGranadeAbility();

    UPROPERTY(EditDefaultsOnly, Category = "Heal")
    float HealAmount = 30.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Heal")
    float HealRadius = 300.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Heal")
    TSubclassOf<UGameplayEffect> HealEffectClass;

    void ApplyHealToTeam();

protected:
    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle,
        const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayAbilityActivationInfo ActivationInfo,
        const FGameplayEventData* TriggerEventData) override;
};
