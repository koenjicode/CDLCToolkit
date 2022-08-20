#pragma once
#include "CoreMinimal.h"
#include "ELuxMotionPriorityType.generated.h"

UENUM(BlueprintType)
enum class ELuxMotionPriorityType : uint8 {
    MOTION_PRIORITY_TYPE_DEFAULT,
    MOTION_PRIORITY_TYPE_ROT,
    MOTION_PRIORITY_TYPE_POS,
    ENUM_MAX UMETA(Hidden),
};

