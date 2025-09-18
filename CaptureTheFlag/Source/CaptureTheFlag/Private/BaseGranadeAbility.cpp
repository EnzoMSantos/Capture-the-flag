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
        UE_LOG(LogTemp, Error, TEXT("CommitAbility FAILED!"));
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }

    ThrowGranade();

    if (UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo())
    {
        FGameplayEffectSpecHandle CooldownSpec = MakeOutgoingGameplayEffectSpec(
            Handle,
            ActorInfo,
            ActivationInfo,
            UGameplayEffect::StaticClass(), 
            1.0f 
        );

        if (CooldownSpec.IsValid())
        {
            ApplyGameplayEffectSpecToOwner(Handle, ActorInfo, ActivationInfo, CooldownSpec);
            UE_LOG(LogTemp, Warning, TEXT("Cooldown applied"));
        }
    }

    EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

void UBaseGranadeAbility::ThrowGranade()
{
    UE_LOG(LogTemp, Warning, TEXT("BaseGranadeAbility::ThrowGrenade() called"));
    UE_LOG(LogTemp, Warning, TEXT ("GranadeProjectileClass : % d"), (GranadeProjectile != nullptr));

        if (!GetAvatarActorFromActorInfo())
        {
            UE_LOG(LogTemp, Error, TEXT("Missing avatar actor"));
            return;
        }

    if (!GranadeProjectile)
    {
        UE_LOG(LogTemp, Error, TEXT("Missing grenade projectile class"));
        return;
    }

    if (!GetAvatarActorFromActorInfo() || !GranadeProjectile)
    {
        UE_LOG(LogTemp, Error, TEXT("Missing avatar actor or grenade projectile class"));
        return;
    }

    ACaptureCharacter* Character = Cast<ACaptureCharacter>(GetAvatarActorFromActorInfo());
    if (!Character)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to cast to ACaptureCharacter"));
        return;
    }

    FVector SpawnLocation = Character->GetActorLocation() + Character->GetActorForwardVector() * 100.0f + FVector(0, 0, 50.0f);
    FRotator SpawnRotation = Character->GetControlRotation();

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = Character;
    SpawnParams.Instigator = Character;

    if (AGranadeProjectile* Granade = GetWorld()->SpawnActor<AGranadeProjectile>(GranadeProjectile, SpawnLocation, SpawnRotation, SpawnParams))
    {
        FVector ThrowDirection = Character->GetControlRotation().Vector();
        Granade->Throw(ThrowDirection * ThrowForce);
        UE_LOG(LogTemp, Warning, TEXT("Grenade spawned and thrown successfully!"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to spawn grenade!"));
    }
}

