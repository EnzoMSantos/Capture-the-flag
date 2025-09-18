// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageGranadeProjectile.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "GameplayEffect.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "CaptureCharacter.h"
#include "CapturePlayerState.h"

ADamageGranadeProjectile::ADamageGranadeProjectile()
{
	FuseTime = 3.f;
	ExplosionDamage = 50.f;
	ExplosionRadius = 500.f;
}

void ADamageGranadeProjectile::Explode()
{
	ApplyDamageToActors();
	Multicast_Explode();
	Destroy();
}

void ADamageGranadeProjectile::ApplyDamageToActors()
{
    if (!HasAuthority()) return;

    TArray<AActor*> OverlappingActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACaptureCharacter::StaticClass(), OverlappingActors);

    for (AActor* Actor : OverlappingActors)
    {
        float Distance = FVector::Distance(GetActorLocation(), Actor->GetActorLocation());
        if (Distance <= ExplosionRadius)
        {
            ACaptureCharacter* TargetCharacter = Cast<ACaptureCharacter>(Actor);
            ACaptureCharacter* OwnerCharacter = Cast<ACaptureCharacter>(GetOwner());

            if (TargetCharacter && OwnerCharacter)
            {
                ACapturePlayerState* TargetPS = TargetCharacter->GetPlayerState<ACapturePlayerState>();
                ACapturePlayerState* OwnerPS = OwnerCharacter->GetPlayerState<ACapturePlayerState>();

                if (TargetPS && OwnerPS && TargetPS->GetTeam() != OwnerPS->GetTeam())
                {
                    float DamageMultiplier = 1.0f - (Distance / ExplosionRadius);
                    float FinalDamage = ExplosionDamage * DamageMultiplier;

                    if (UAbilitySystemComponent* TargetASC = TargetCharacter->GetAbilitySystemComponent())
                    {
                        if (DamageEffectClass)
                        {
                            FGameplayEffectContextHandle ContextHandle = TargetASC->MakeEffectContext();
                            ContextHandle.AddSourceObject(this);

                            FGameplayEffectSpecHandle SpecHandle = TargetASC->MakeOutgoingSpec(DamageEffectClass, 1.0f, ContextHandle);
                            if (SpecHandle.IsValid())
                            {
                                SpecHandle.Data->SetSetByCallerMagnitude(
                                    FGameplayTag::RequestGameplayTag(FName("Data.Damage")),
                                    FinalDamage
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
