// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGranadeAbility.h"
#include "AbilitySystemComponent.h"
#include "GranadeProjectile.h"
#include "CaptureCharacter.h"

UBaseGranadeAbility::UBaseGranadeAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}

void UBaseGranadeAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	ThrowGranade();
	ApplyCooldown();
	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

void UBaseGranadeAbility::ThrowGranade()
{
}

void UBaseGranadeAbility::ApplyCooldown()
{
}
