#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleMoveAttributeType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleMoveAttributeType : uint8 {
    High,
    Middle,
    Low,
    SpecialMiddle,
    SpecialLow,
    ENUM_MAX UMETA(Hidden),
};

