#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleCharaMaegamiState.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleCharaMaegamiState : uint8 {
    Left,
    LeftToRight,
    Right,
    RightToLeft,
    ENUM_MAX UMETA(Hidden),
};

