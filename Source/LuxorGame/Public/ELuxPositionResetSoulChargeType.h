#pragma once
#include "CoreMinimal.h"
#include "ELuxPositionResetSoulChargeType.generated.h"

UENUM(BlueprintType)
enum class ELuxPositionResetSoulChargeType : uint8 {
    PRSC_NONE,
    PRSC_RESET,
    ENUM_MAX UMETA(Hidden),
};

