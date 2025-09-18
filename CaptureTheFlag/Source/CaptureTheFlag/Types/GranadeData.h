#pragma once

#include "CoreMinimal.h"
#include "GranadeType.h"
#include "GameplayAbilitySpec.h"
#include "GranadeData.generated.h"

class AGranadeProjectile;
class UGameplayAbility;

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AGranadeProjectile> ProjectileClass;
};
