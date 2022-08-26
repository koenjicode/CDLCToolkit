#pragma once
#include "CoreMinimal.h"
#include "ELuxProfileExPartPositionFactorDataKey.generated.h"

UENUM(BlueprintType)
enum class ELuxProfileExPartPositionFactorDataKey : uint8 {
    Part,
    MountingPosition,
    SlideLateral,
    SlideVertical,
    SlideDepth,
    WidthLateral,
    WidthVertical,
    WidthThickness,
    RotationVertical,
    RotationLateral,
    RotationSlope,
    PositionRandom,
    PositionReset,
    Num,
};

