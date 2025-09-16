// Fill out your copyright notice in the Description page of Project Settings.


#include "SlowGranadeAbility.h"
#include "GameplayEffect.h"
#include "AbilitySystemGlobals.h"
#include "SlowGranadeProjectile.h"

USlowGranadeAbility::USlowGranadeAbility()
{
	CooldownTag = FGameplayTag::RequestGameplayTag(FName("Cooldown.Granade.Slow"));
}
