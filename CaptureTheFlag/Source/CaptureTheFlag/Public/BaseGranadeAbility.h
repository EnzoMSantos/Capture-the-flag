// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Types/GranadeData.h"
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
	TSubclassOf<class AGranadeProjectile> GranadeProjectile;

	UPROPERTY(EditDefaultsOnly, Category = "Grenade")
	float ThrowForce = 1500.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	FGranadeData GranadeData;

	UPROPERTY(EditDefaultsOnly, Category = "Cooldown")
	FGameplayTag CooldownTag;

	FGameplayTagContainer CooldownTags;
	FGameplayTagContainer BlockAbilitiesWithTags;

	virtual const FGameplayTagContainer* GetCooldownTags() const override;

	virtual void ApplyCooldown(const FGameplayAbilitySpecHandle Handle, 
		const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo 
		ActivationInfo) const override;

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;

	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, 
		const FGameplayAbilityActorInfo* ActorInfo, 
		const FGameplayTagContainer* SourceTags = nullptr, 
		const FGameplayTagContainer* TargetTags = nullptr, 
		OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;



protected:

	UFUNCTION(BlueprintCallable)
	void ThrowGranade();

};
