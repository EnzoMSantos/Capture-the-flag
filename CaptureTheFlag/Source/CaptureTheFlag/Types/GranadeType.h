#pragma once

#include "CoreMinimal.h"
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

};
	