#pragma once
#include "CoreMinimal.h"
#include "ELuxPSApplyNodeTransformType.generated.h"

UENUM(BlueprintType)
enum class ELuxPSApplyNodeTransformType : uint8 {
    ENT_AUTO,
    ENT_LOCATION,
    ENT_LOCATION_AND_DIRECTION,
    ENT_LOCATION_AND_DIR_YZ,
    ENUM_MAX UMETA(Hidden),
};

