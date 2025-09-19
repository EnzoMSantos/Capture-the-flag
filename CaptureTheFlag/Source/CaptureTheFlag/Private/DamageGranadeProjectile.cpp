// Fill out your copyright notice in the Description page of Project Settings.


#include "CoreMinimal.h"
#include "DamageGranadeProjectile.h"
#include "CaptureCharacter.h"
#include "CapturePlayerState.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffect.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "Engine/OverlapResult.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "CollisionQueryParams.h"

ADamageGranadeProjectile::ADamageGranadeProjectile()
{
	FuseTime = 3.f;
	ExplosionDamage = 50.f;
	ExplosionRadius = 500.f;

    static ConstructorHelpers::FClassFinder<UGameplayEffect> DamageEffect(TEXT("/Game/GAS/GameplayEffects/GE_Damage.GE_Damage_C"));

    if (DamageEffect.Succeeded())
    {
        DamageEffectClass = DamageEffect.Class;
        UE_LOG(LogTemp, Warning, TEXT("Damage effect class loaded"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load damage effect class"));
    }
}

void ADamageGranadeProjectile::Explode()
{
	ApplyDamageToActors();
	Multicast_Explode();
	Destroy();
}

void ADamageGranadeProjectile::ApplyDamageToActors()
{
    if (!HasAuthority() || !GetWorld())
    {
        UE_LOG(LogTemp, Warning, TEXT("No authority or no world"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("ApplyDamageToActors called at location: %s"), *GetActorLocation().ToString());

    TArray<FOverlapResult> Overlaps;
    FCollisionShape Sphere = FCollisionShape::MakeSphere(ExplosionRadius);
    FCollisionQueryParams QueryParams;

    QueryParams.AddIgnoredActor(this);
    if (GetOwner())
        QueryParams.AddIgnoredActor(GetOwner());

    bool bHasHit = GetWorld()->OverlapMultiByChannel(
        Overlaps,
        GetActorLocation(),
        FQuat::Identity,
        ECC_Pawn,
        Sphere,
        QueryParams
    );

    UE_LOG(LogTemp, Warning, TEXT("Overlap found %d actors"), Overlaps.Num());

    if (!bHasHit)
    {
        UE_LOG(LogTemp, Warning, TEXT("No overlap hit"));
        return;
    }

    ACaptureCharacter* OwnerCharacter = Cast<ACaptureCharacter>(GetOwner());
    if (!OwnerCharacter)
    {
        UE_LOG(LogTemp, Warning, TEXT("No owner character"));
        return;
    }

    ACapturePlayerState* OwnerPS = OwnerCharacter->GetPlayerState<ACapturePlayerState>();
    if (!OwnerPS)
    {
        UE_LOG(LogTemp, Warning, TEXT("No owner player state"));
        return;
    }

    for (auto& Result : Overlaps)
    {
        if (!Result.GetActor()) continue;

        UE_LOG(LogTemp, Warning, TEXT("Found actor: %s"), *Result.GetActor()->GetName());

        ACaptureCharacter* TargetCharacter = Cast<ACaptureCharacter>(Result.GetActor());
        if (!TargetCharacter || TargetCharacter == OwnerCharacter)
        {
            UE_LOG(LogTemp, Warning, TEXT("Not a valid target character"));
            continue;
        }

        ACapturePlayerState* TargetPS = TargetCharacter->GetPlayerState<ACapturePlayerState>();
        if (!TargetPS)
        {
            UE_LOG(LogTemp, Warning, TEXT("No target player state"));
            continue;
        }

        if (TargetPS->GetTeam() == OwnerPS->GetTeam())
        {
            UE_LOG(LogTemp, Warning, TEXT("Same team, skipping"));
            continue;
        }

        float Distance = FVector::Distance(GetActorLocation(), TargetCharacter->GetActorLocation());
        float DamageMultiplier = FMath::Clamp(1.0f - (Distance / ExplosionRadius), 0.0f, 1.0f);
        float FinalDamage = ExplosionDamage * DamageMultiplier;

        FinalDamage = -FMath::Abs(FinalDamage);

        UE_LOG(LogTemp, Warning, TEXT("Applying damage: %.2f to %s"), FinalDamage, *TargetCharacter->GetName());

        if (UAbilitySystemComponent* TargetASC = TargetCharacter->GetAbilitySystemComponent())
        {
            if (DamageEffectClass)
            {
                FGameplayEffectContextHandle ContextHandle = TargetASC->MakeEffectContext();
                ContextHandle.AddSourceObject(this);

                FGameplayEffectSpecHandle SpecHandle = TargetASC->MakeOutgoingSpec(DamageEffectClass, 1.0f, ContextHandle);
                if (SpecHandle.IsValid())
                {
                    SpecHandle.Data->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Data.Damage")), FinalDamage);
                    TargetASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
                    UE_LOG(LogTemp, Warning, TEXT("Damage effect applied successfully"));
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("Invalid effect spec"));
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("No damage effect class"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("No ability system component on target"));
        }
    }

    DrawDebugSphere(GetWorld(), GetActorLocation(), ExplosionRadius, 32, FColor::Red, false, 2.0f);
}
