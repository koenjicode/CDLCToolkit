#pragma once
#include "CoreMinimal.h"
#include "ELuxProfilePhotographMenuFactorDataKey.generated.h"

UENUM(BlueprintType)
enum class ELuxProfilePhotographMenuFactorDataKey : uint8 {
    Pose,
    FacialExpression,
    Looking,
    Background,
    BackFrame,
    FrontFrame,
    DisplayWeapon,
    AirVolume,
    PosePlaySpeed,
    AdjustPhotoFrame,
    Photograph,
    Num,
};

