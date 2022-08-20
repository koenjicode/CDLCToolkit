#pragma once
#include "CoreMinimal.h"
#include "ELuxGraphicOptionQualityLevel.generated.h"

UENUM(BlueprintType)
enum class ELuxGraphicOptionQualityLevel : uint8 {
    ELow,
    EMedium,
    EHigh,
    EUltra,
    ECinema,
    ECustom,
    ENUM_MAX UMETA(Hidden),
};

