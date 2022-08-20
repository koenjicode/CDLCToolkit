#pragma once
#include "CoreMinimal.h"
#include "ELuxBodyHeightType.generated.h"

UENUM(BlueprintType)
enum class ELuxBodyHeightType : uint8 {
    Low,
    MiddleLow,
    Middle,
    MiddleHigh,
    High,
    Num,
};

