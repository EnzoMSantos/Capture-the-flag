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
	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

void UBaseGranadeAbility::ThrowGranade()
{
    if (!GetAvatarActorFromActorInfo() || !GranadeProjectileClass) return;

    ACaptureCharacter* Character = Cast<ACaptureCharacter>(GetAvatarActorFromActorInfo());
    if (!Character) return;

    FVector SpawnLocation = Character->GetActorLocation() + Character->GetActorForwardVector() * 100.0f + FVector(0, 0, 50.0f);
    FRotator SpawnRotation = Character->GetControlRotation();

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = Character;
    SpawnParams.Instigator = Character;

    if (AGranadeProjectile* Granade = GetWorld()->SpawnActor<AGranadeProjectile>(GranadeProjectileClass, SpawnLocation, SpawnRotation, SpawnParams))
    {
        FVector ThrowDirection = Character->GetControlRotation().Vector();
        Granade->Throw(ThrowDirection * ThrowForce);
    }
}

