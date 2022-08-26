#pragma once
#include "CoreMinimal.h"
#include "ELuxProfileBodyPhysicalScaleFactorDataKey.generated.h"

UENUM(BlueprintType)
enum class ELuxProfileBodyPhysicalScaleFactorDataKey : uint8 {
    Height,
    BodyShape,
    UpperArm,
    FrontArm,
    PectoralisMajor,
    Hip,
    Thigh,
    Calves,
    Abdomen,
    Breast,
    WaistLine,
    MuscleMass,
    Random,
    Reset,
    Num,
};

