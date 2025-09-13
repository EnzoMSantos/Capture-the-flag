#pragma once

#include "CoreMinimal.h"
#include "TeamsEnum.generated.h"

UENUM(BlueprintType)
enum class ETeams : uint8
{
    None UMETA(DisplayName = "None"),
    Red  UMETA(DisplayName = "Red"),
    Blue UMETA(DisplayName = "Blue")
};
