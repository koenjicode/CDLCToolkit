#pragma once
#include "CoreMinimal.h"
#include "ELuxRadialBlurCurveType.generated.h"

UENUM(BlueprintType)
enum class ELuxRadialBlurCurveType : uint8 {
    Alpha,
    RGEDensity,
    RGERadius,
    ENUM_MAX UMETA(Hidden),
};

