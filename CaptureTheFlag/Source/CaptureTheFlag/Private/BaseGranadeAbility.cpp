// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGranadeAbility.h"
#include "AbilitySystemComponent.h"
#include "GranadeProjectile.h"
#include "Types/GranadeData.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "CaptureCharacter.h"

UBaseGranadeAbility::UBaseGranadeAbility()
{
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;

    GranadeData.Type = EGranadeType::Damage;
    GranadeData.Cooldown = 5.f;
    GranadeData.MaxStack = 3;

    CooldownTag = FGameplayTag::RequestGameplayTag(FName("Cooldown.Granade.Damage"));
    CooldownTags.AddTag(CooldownTag);
    BlockAbilitiesWithTags.AddTag(CooldownTag);

    static ConstructorHelpers::FClassFinder<AGranadeProjectile> ProjectileBP(TEXT("/Game/GAS/BP_DamageGranade.BP_DamageGranade_C"));
    if (ProjectileBP.Succeeded())
    {
        GranadeData.ProjectileClass = ProjectileBP.Class;
        UE_LOG(LogTemp, Warning, TEXT("Projectile class loaded successfully: %s"), *GranadeData.ProjectileClass->GetName());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("FAILED to load projectile class! Check the path."));
    }

    static ConstructorHelpers::FClassFinder<UGameplayEffect> CooldownGE(TEXT("/Game/GAS/GameplayEffects/GE_Cooldown"));
    if (CooldownGE.Succeeded())
    {
        CooldownGameplayEffectClass = CooldownGE.Class;
        UE_LOG(LogTemp, Warning, TEXT("Cooldown GE loaded successfully"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("FAILED to load cooldown GE!"));
    }
}

const FGameplayTagContainer* UBaseGranadeAbility::GetCooldownTags() const
{
    return &CooldownTags;
}

void UBaseGranadeAbility::ApplyCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
    if (CooldownGameplayEffectClass && ActorInfo->AbilitySystemComponent.IsValid())
    {
        UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get();

        FGameplayEffectContextHandle Context = ASC->MakeEffectContext();
        Context.AddSourceObject(this);

        FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(CooldownGameplayEffectClass, 1.f, Context);
        if (SpecHandle.IsValid())
        {
            SpecHandle.Data->SetSetByCallerMagnitude(CooldownTag, GranadeData.Cooldown);
            ASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
            UE_LOG(LogTemp, Warning, TEXT("Cooldown applied: %f seconds"), GranadeData.Cooldown);
        }
    }
}

void UBaseGranadeAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
    if (ActorInfo->AbilitySystemComponent.IsValid())
    {
        FGameplayTagContainer CooldownTagsToCheck;
        CooldownTagsToCheck.AddTag(FGameplayTag::RequestGameplayTag(FName("Cooldown.Granade.Damage")));

        FGameplayEffectQuery Query = FGameplayEffectQuery::MakeQuery_MatchAnyEffectTags(CooldownTagsToCheck);

        int32 ActiveCooldowns = ActorInfo->AbilitySystemComponent->GetActiveEffects(Query).Num();

        if (ActiveCooldowns > 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("BLOCKED: Ability on cooldown"));
            EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
            return;
        }
    }

    if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
    {
        UE_LOG(LogTemp, Error, TEXT("CommitAbility FAILED"));
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }

    ApplyCooldown(Handle, ActorInfo, ActivationInfo);

    AActor* Avatar = GetAvatarActorFromActorInfo();
    if (!Avatar)
    {
        UE_LOG(LogTemp, Error, TEXT("ActivateAbility - Avatar is null"));
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }

    if (Avatar->HasAuthority())
    {
        ThrowGranade();
    }

    EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

bool UBaseGranadeAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
    if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
    {
        UE_LOG(LogTemp, Warning, TEXT("CanActivateAbility: 0 (Super blocked)"));
        return false;
    }

    if (ActorInfo && ActorInfo->AbilitySystemComponent.IsValid())
    {
        UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get();

        FGameplayTagContainer CooldownTagsToCheck;
        CooldownTagsToCheck.AddTag(FGameplayTag::RequestGameplayTag(FName("Cooldown.Granade.Damage")));

        FGameplayEffectQuery Query = FGameplayEffectQuery::MakeQuery_MatchAnyEffectTags(CooldownTagsToCheck);

        TArray<FActiveGameplayEffectHandle> CooldownEffects = ASC->GetActiveEffects(Query);

        TArray<FActiveGameplayEffectHandle> AllEffects = ASC->GetActiveEffects(FGameplayEffectQuery());

        UE_LOG(LogTemp, Warning, TEXT("Cooldown effects: %d, All effects: %d"), CooldownEffects.Num(), AllEffects.Num());

        if (CooldownEffects.Num() > 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("BLOCKED: Found %d cooldown effects"), CooldownEffects.Num());

            for (const FActiveGameplayEffectHandle& EffectHandle : CooldownEffects)
            {
                if (const FActiveGameplayEffect* ActiveEffect = ASC->GetActiveGameplayEffect(EffectHandle))
                {
                    float RemainingTime = ActiveEffect->GetTimeRemaining(0.0f); 
                    UE_LOG(LogTemp, Warning, TEXT("Cooldown: %s, Time remaining: %.2f"),
                        *ActiveEffect->Spec.Def->GetName(), RemainingTime);
                }
            }

            return false;
        }

        for (const FActiveGameplayEffectHandle& EffectHandle : AllEffects)
        {
            if (const FActiveGameplayEffect* ActiveEffect = ASC->GetActiveGameplayEffect(EffectHandle))
            {
                if (ActiveEffect->Spec.Def && ActiveEffect->Spec.Def->GetName().Contains(TEXT("Cooldown"), ESearchCase::IgnoreCase))
                {
                    float RemainingTime = ActiveEffect->GetTimeRemaining(0.0f); 
                    UE_LOG(LogTemp, Warning, TEXT("Found cooldown by name: %s, Time remaining: %.2f"),
                        *ActiveEffect->Spec.Def->GetName(), RemainingTime);

                    if (RemainingTime > 0.1f) 
                    {
                        UE_LOG(LogTemp, Warning, TEXT("BLOCKED: Ability on cooldown (%.2fs remaining)"), RemainingTime);
                        return false;
                    }
                }
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("CanActivateAbility: 1 (No cooldown found)"));
    return true;

}



void UBaseGranadeAbility::ThrowGranade()
{
    AActor* Avatar = GetAvatarActorFromActorInfo();
    if (!Avatar)
    {
        UE_LOG(LogTemp, Error, TEXT("ThrowGranade - Avatar is null"));
        return;
    }

    if (!Avatar->HasAuthority())
    {
        UE_LOG(LogTemp, Warning, TEXT("ThrowGranade called on client - skipping"));
        return;
    }

    if (!GranadeData.ProjectileClass)
    {
        UE_LOG(LogTemp, Error, TEXT("ThrowGranade - ProjectileClass is null!"));
        return;
    }

    UWorld* World = Avatar->GetWorld();
    if (!World) return;

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = Avatar;
    SpawnParams.Instigator = Cast<APawn>(Avatar);
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    FVector SpawnLocation = Avatar->GetActorLocation() + Avatar->GetActorForwardVector() * 100.f + FVector(0, 0, 50.f);
    FRotator SpawnRotation = Avatar->GetActorRotation();

    AGranadeProjectile* Grenade = World->SpawnActor<AGranadeProjectile>(
        GranadeData.ProjectileClass,
        SpawnLocation,
        SpawnRotation,
        SpawnParams
    );

    if (!Grenade)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to spawn grenade!"));
        return;
    }

    FVector LaunchVelocity = Avatar->GetActorForwardVector() * ThrowForce;
    Grenade->Throw(LaunchVelocity);

    UE_LOG(LogTemp, Warning, TEXT("Grenade spawned and thrown successfully!"));
}

