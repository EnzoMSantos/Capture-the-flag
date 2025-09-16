// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGranadeAbility.h"
#include "SlowGranadeAbility.generated.h"

class UGameplayEffect;

/**
 * 
 */
UCLASS()
class CAPTURETHEFLAG_API USlowGranadeAbility : public UBaseGranadeAbility
{
	GENERATED_BODY()
	
public:

    USlowGranadeAbility();
	
    UPROPERTY(EditDefaultsOnly, Category = "Slow")
    float SlowDuration = 5.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Slow")
    float SlowPercentage = 0.5f;

    UPROPERTY(EditDefaultsOnly, Category = "Slow")
    TSubclassOf<UGameplayEffect> SlowEffectClass;
};
