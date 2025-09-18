// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageGranadeAbility.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "GameplayEffect.h"
#include "DamageGranadeProjectile.h"
#include "CaptureCharacter.h"
#include "GranadeProjectile.h"
#include "CapturePlayerState.h"

UDamageGranadeAbility::UDamageGranadeAbility()
{
	CooldownTag = FGameplayTag::RequestGameplayTag(FName("Cooldown.Granade.Damage"));

    UE_LOG(LogTemp, Warning, TEXT("Cooldown Tag: %s"), *CooldownTag.ToString());

    CooldownGameplayEffectClass = LoadClass<UGameplayEffect>(
        nullptr,
        TEXT("/Game/GAS/GameplayEffects/GE_Cooldown.GE_Cooldown_C")
    );

    if (!CooldownGameplayEffectClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("Cooldown GE could not be loaded at runtime"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("COOLDOWN FIND"));
    }

    static ConstructorHelpers::FClassFinder<AGranadeProjectile> ProjectileBP(TEXT("/Game/Blueprints/GAS/BP_DamageGranade.BP_DamageGranade_C"));
    if (ProjectileBP.Succeeded())
    {
        GranadeData.ProjectileClass = ProjectileBP.Class;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("BP_GranadeProjectile not found! Check path."));
    }
}


