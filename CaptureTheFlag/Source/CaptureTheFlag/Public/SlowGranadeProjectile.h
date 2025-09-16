// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GranadeProjectile.h"
#include "SlowGranadeProjectile.generated.h"

class UGameplayEffect;
/**
 * 
 */
UCLASS()
class CAPTURETHEFLAG_API ASlowGranadeProjectile : public AGranadeProjectile
{
	GENERATED_BODY()

public:
	ASlowGranadeProjectile();
	
    UPROPERTY(EditDefaultsOnly, Category = "Slow")
    float SlowDuration = 5.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Slow")
    float SlowPercentage = 0.5f;

    UPROPERTY(EditDefaultsOnly, Category = "Slow")
    float EffectRadius = 400.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Slow")
    TSubclassOf<UGameplayEffect> SlowEffectClass;

protected:

    virtual void Explode() override;

private:

    void ApplySlowToActors();
};
