#pragma once
#include "CoreMinimal.h"
#include "ELuxBackgroundSpecialSpaceCurveType.generated.h"

UENUM(BlueprintType)
enum class ELuxBackgroundSpecialSpaceCurveType : uint8 {
    Amplitude,
    WaveSpeed,
    ENUM_MAX UMETA(Hidden),
};

