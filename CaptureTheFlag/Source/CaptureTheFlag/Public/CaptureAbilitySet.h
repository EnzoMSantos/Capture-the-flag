// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayAbilitySpec.h"
#include "CaptureAbilitySet.generated.h"

class UGameplayAbility;
class UGameplayEffect;

UCLASS()
class CAPTURETHEFLAG_API UCaptureAbilitySet : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UCaptureAbilitySet();

	UPROPERTY(EditDefaultsOnly, Category = "Abilities")
	TArray<TSubclassOf<UGameplayAbility>> GrantedAbilities;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	TArray<TSubclassOf<UGameplayEffect>> GrantedEffects;
	
	UFUNCTION(BlueprintCallable, Category = "Abilities")
	void GiveToAbilitySystem(class UAbilitySystemComponent* ASC) const;

	UFUNCTION(BlueprintCallable, Category = "Abilities")
	void RemoveFromAbilitySystem(class UAbilitySystemComponent* ASC) const;

protected:

	UPROPERTY(Transient)
	mutable TArray<FGameplayAbilitySpecHandle> GrantedAbilityHandles;

	UPROPERTY(Transient)
	mutable TArray<FActiveGameplayEffectHandle> GrantedEffectHandles;
};
