#pragma once
#include "CoreMinimal.h"
#include "ELuxTraceEffectCurveType.generated.h"

UENUM(BlueprintType)
enum class ELuxTraceEffectCurveType : uint8 {
    Brightness,
    Color,
    Refracion,
    KeyFrame,
    Width,
    MaterialParam1,
    MaterialParam2,
    Num,
};

