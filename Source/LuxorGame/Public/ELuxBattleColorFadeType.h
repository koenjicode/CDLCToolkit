#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleColorFadeType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleColorFadeType : uint8 {
    ADDITION,
    SUBTRACTION,
    INTERPOLATION,
    ENUM_MAX UMETA(Hidden),
};

