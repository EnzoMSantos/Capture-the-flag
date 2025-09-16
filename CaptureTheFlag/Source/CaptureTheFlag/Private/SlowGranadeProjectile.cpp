// Fill out your copyright notice in the Description page of Project Settings.


#include "SlowGranadeProjectile.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "GameplayEffect.h"
#include "Kismet/GameplayStatics.h"
#include "CaptureCharacter.h"
#include "CapturePlayerState.h"

ASlowGranadeProjectile::ASlowGranadeProjectile()
{
    FuseTime = 2.0f; 
    EffectRadius = 400.0f;
    SlowDuration = 5.0f;
    SlowPercentage = 0.5f; 
}

void ASlowGranadeProjectile::Explode()
{
    ApplySlowToActors();
    Multicast_Explode();
    Destroy();
}

void ASlowGranadeProjectile::ApplySlowToActors()
{
    if (!HasAuthority()) return;

    TArray<AActor*> OverlappingActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACaptureCharacter::StaticClass(), OverlappingActors);

    for (AActor* Actor : OverlappingActors)
    {
        float Distance = FVector::Distance(GetActorLocation(), Actor->GetActorLocation());
        if (Distance <= EffectRadius)
        {
            ACaptureCharacter* TargetCharacter = Cast<ACaptureCharacter>(Actor);
            ACaptureCharacter* OwnerCharacter = Cast<ACaptureCharacter>(GetOwner());

            if (TargetCharacter && OwnerCharacter)
            {
                ACapturePlayerState* TargetPS = TargetCharacter->GetPlayerState<ACapturePlayerState>();
                ACapturePlayerState* OwnerPS = OwnerCharacter->GetPlayerState<ACapturePlayerState>();

                if (TargetPS && OwnerPS && TargetPS->GetTeam() != OwnerPS->GetTeam())
                {
                    if (UAbilitySystemComponent* TargetASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(TargetCharacter))
                    {
                        if (SlowEffectClass)
                        {
                            FGameplayEffectContextHandle ContextHandle = TargetASC->MakeEffectContext();
                            ContextHandle.AddSourceObject(this);

                            FGameplayEffectSpecHandle SpecHandle = TargetASC->MakeOutgoingSpec(SlowEffectClass, 1.0f, ContextHandle);
                            if (SpecHandle.IsValid())
                            {
                                SpecHandle.Data->SetDuration(SlowDuration, false);
                                SpecHandle.Data->SetSetByCallerMagnitude(
                                    FGameplayTag::RequestGameplayTag(FName("Data.SlowIntensity")),
                                    SlowPercentage
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
