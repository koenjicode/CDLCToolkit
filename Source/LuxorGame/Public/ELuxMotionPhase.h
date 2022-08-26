#pragma once
#include "CoreMinimal.h"
#include "ELuxMotionPhase.generated.h"

UENUM(BlueprintType)
enum class ELuxMotionPhase : uint8 {
    MOTION_PHASE_MAIN_MAIN,
    MOTION_PHASE_MAIN_SUB,
    MOTION_PHASE_SUB_MAIN,
    MOTION_PHASE_SUB_SUB,
    MOTION_PHASE_OPTION,
    ENUM_MAX UMETA(Hidden),
};

