#pragma once
#include "CoreMinimal.h"
#include "ELuxSoulChargeType.generated.h"

UENUM(BlueprintType)
enum class ELuxSoulChargeType : uint8 {
    ESC_NORMAL,
    ESC_SAINT,
    ESC_EVIL,
    ENUM_MAX UMETA(Hidden),
};

