#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h" 
#include "GranadeType.generated.h"

UENUM(BlueprintType)
enum class EGranadeType : uint8
{
	None    UMETA(DisplayName = "None"),
	Damage	UMETA(DisplayName = "Damage Granade"),
	Slow	UMETA(DisplayName = "Slow Granade"),
	Smoke	UMETA(DisplayName = "Smoke Granade"),
	Toxic	UMETA(DisplayName = "Toxic Granade"),
	Heal	UMETA(DisplayName = "Heal Granade")
};

USTRUCT(BlueprintType)
struct FGranadeSlot
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EGranadeType GranadeType = EGranadeType::None;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 Quantity = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float CooldownRemaining = 0.0f;

	FGranadeSlot() : GranadeType(EGranadeType::None), Quantity(0), CooldownRemaining(0.0f) {}

	FGranadeSlot(EGranadeType Type, int32 Count) : GranadeType(Type), Quantity(Count), CooldownRemaining(0.0f) {}
};
	
USTRUCT(BlueprintType)
struct FGranadeData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EGranadeType Type;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UTexture2D* Icon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UGameplayAbility> GranadeAbility;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float Cooldown = 5.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 MaxStack = 3;

	/*UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class AGrenadeProjectile> ProjectileClass;*/
};