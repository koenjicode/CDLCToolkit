#pragma once
#include "CoreMinimal.h"
#include "ELuxSolarisationCurveType.generated.h"

UENUM(BlueprintType)
enum class ELuxSolarisationCurveType : uint8 {
    Exp,
    MaxIntensity,
    MiddlePoint,
    RadiusStart,
    RadiusEnd,
    ENUM_MAX UMETA(Hidden),
};

