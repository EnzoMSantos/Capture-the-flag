// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureAbilitySet.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayAbilitySpec.h"
#include "GameplayEffect.h"

UCaptureAbilitySet::UCaptureAbilitySet()
{
}

void UCaptureAbilitySet::GiveToAbilitySystem(UAbilitySystemComponent* ASC) const
{
	if (!ASC) return;

	for (const TSubclassOf<UGameplayAbility>& AbilityClass : GrantedAbilities)
	{
		if (AbilityClass)
		{
			FGameplayAbilitySpec AbilitySpec(AbilityClass, 1);
			FGameplayAbilitySpecHandle Handle = ASC->GiveAbility(AbilitySpec);
			GrantedAbilityHandles.Add(Handle);
		}
	}

	for (const TSubclassOf<UGameplayEffect>& EffectClass : GrantedEffects)
	{
		if (EffectClass) 
		{
			FGameplayEffectContextHandle ContextHandle = ASC->MakeEffectContext();
			FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(EffectClass, 1.0f, ContextHandle);

			if (SpecHandle.IsValid())
			{
				FActiveGameplayEffectHandle EffectHandle = ASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
				GrantedEffectHandles.Add(EffectHandle);
			}
		}
	}
}

void UCaptureAbilitySet::RemoveFromAbilitySystem(UAbilitySystemComponent* ASC) const
{
	if (!ASC) return;

	for (const FGameplayAbilitySpecHandle& Handle : GrantedAbilityHandles)
	{
		ASC->ClearAbility(Handle);
	}
	GrantedAbilityHandles.Empty();

	for (const FActiveGameplayEffectHandle& Handle : GrantedEffectHandles)
	{
		ASC->RemoveActiveGameplayEffect(Handle);
		GrantedEffectHandles.Empty();
	}
}
