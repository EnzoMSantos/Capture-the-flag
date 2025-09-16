// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageGranadeAbility.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "GameplayEffect.h"
#include "DamageGranadeProjectile.h"
#include "CaptureCharacter.h"
#include "CapturePlayerState.h"

UDamageGranadeAbility::UDamageGranadeAbility()
{
	CooldownTag = FGameplayTag::RequestGameplayTag(FName("Cooldown.Granade.Damage"));
}


