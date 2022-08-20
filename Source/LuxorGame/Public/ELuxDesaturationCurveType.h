#pragma once
#include "CoreMinimal.h"
#include "ELuxDesaturationCurveType.generated.h"

UENUM(BlueprintType)
enum class ELuxDesaturationCurveType : uint8 {
    Erightness,
    Fraction,
    ENUM_MAX UMETA(Hidden),
};

