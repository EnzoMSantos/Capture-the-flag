// Fill out your copyright notice in the Description page of Project Settings.


#include "HealGranadeAbility.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "GameplayEffect.h"
#include "Kismet/GameplayStatics.h"
#include "CaptureCharacter.h"
#include "CapturePlayerState.h"

UHealGranadeAbility::UHealGranadeAbility()
{
	CooldownTag = FGameplayTag::RequestGameplayTag(FName("Cooldown.Granade.Heal"));

}

void UHealGranadeAbility::ApplyHealToTeam()
{
    if (!GetAvatarActorFromActorInfo()) return;

    ACaptureCharacter* OwnerCharacter = Cast<ACaptureCharacter>(GetAvatarActorFromActorInfo());
    if (!OwnerCharacter) return;

    ACapturePlayerState* OwnerPS = OwnerCharacter->GetPlayerState<ACapturePlayerState>();
    if (!OwnerPS) return;

    TArray<AActor*> OverlappingActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACaptureCharacter::StaticClass(), OverlappingActors);

    for (AActor* Actor : OverlappingActors)
    {
        float Distance = FVector::Distance(OwnerCharacter->GetActorLocation(), Actor->GetActorLocation());
        if (Distance <= HealRadius)
        {
            ACaptureCharacter* TargetCharacter = Cast<ACaptureCharacter>(Actor);
            if (TargetCharacter)
            {
                ACapturePlayerState* TargetPS = TargetCharacter->GetPlayerState<ACapturePlayerState>();
                if (TargetPS && TargetPS->GetTeam() == OwnerPS->GetTeam())
                {
                    if (UAbilitySystemComponent* TargetASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(TargetCharacter))
                    {
                        if (HealEffectClass)
                        {
                            FGameplayEffectContextHandle ContextHandle = TargetASC->MakeEffectContext();
                            ContextHandle.AddSourceObject(OwnerCharacter);

                            FGameplayEffectSpecHandle SpecHandle = TargetASC->MakeOutgoingSpec(HealEffectClass, 1.0f, ContextHandle);
                            if (SpecHandle.IsValid())
                            {
                                SpecHandle.Data->SetSetByCallerMagnitude(
                                    FGameplayTag::RequestGameplayTag(FName("Data.HealAmount")),
                                    HealAmount
                                );

                                TargetASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
                            }
                        }
                    }
                }
            }
        }
    }
}

void UHealGranadeAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
    if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
    {
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }

    ApplyHealToTeam();
    //ApplyCooldown();
    EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}
