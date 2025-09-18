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

    static ConstructorHelpers::FClassFinder<AGranadeProjectile> ProjectileBP(TEXT("/Game/GAS/BP_DamageGranade.BP_DamageGranade_C"));
    if (ProjectileBP.Succeeded())
    {
        GranadeData.ProjectileClass = ProjectileBP.Class;
        UE_LOG(LogTemp, Warning, TEXT("Projectile class loaded successfully: %s"), *GranadeData.ProjectileClass->GetName());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("FAILED to load projectile class! Check the path."));
        UE_LOG(LogTemp, Error, TEXT("Try these paths:"));
    }
}

void UBaseGranadeAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
    UE_LOG(LogTemp, Warning, TEXT("ActivateAbility called - HasAuthority: %d"), ActorInfo->OwnerActor.IsValid() ? ActorInfo->OwnerActor->HasAuthority() : false);

    if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
    {
        UE_LOG(LogTemp, Error, TEXT("CommitAbility FAILED - Possibly on cooldown or missing cost"));
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }

    AActor* Avatar = GetAvatarActorFromActorInfo();
    if (!Avatar)
    {
        UE_LOG(LogTemp, Error, TEXT("ActivateAbility - Avatar is null"));
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("About to call ThrowGranade - HasAuthority: %d"), Avatar->HasAuthority());

    if (Avatar->HasAuthority())
    {
        ThrowGranade();
    }

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

    EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
    UE_LOG(LogTemp, Warning, TEXT("ActivateAbility finished"));
}

void UBaseGranadeAbility::ThrowGranade()
{
    AActor* Avatar = GetAvatarActorFromActorInfo();
    if (!Avatar)
    {
        UE_LOG(LogTemp, Error, TEXT("ThrowGranade - Avatar is null"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("ThrowGranade called - HasAuthority: %d"), Avatar->HasAuthority());

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
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("ThrowGranade - World is null!"));
        return;
    }

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = Avatar;
    SpawnParams.Instigator = Cast<APawn>(Avatar);
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    FVector SpawnLocation = Avatar->GetActorLocation() + Avatar->GetActorForwardVector() * 100.f + FVector(0, 0, 50.f);
    FRotator SpawnRotation = Avatar->GetActorRotation();

    UE_LOG(LogTemp, Warning, TEXT("Spawning grenade at: %s"), *SpawnLocation.ToString());

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

    UE_LOG(LogTemp, Warning, TEXT("Grenade spawned and thrown successfully: %s"), *Grenade->GetName());
}

