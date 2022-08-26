#pragma once
#include "CoreMinimal.h"
#include "ELuxBodyScale.generated.h"

UENUM(BlueprintType)
enum class ELuxBodyScale : uint8 {
    EBS_SHOULDER,
    EBS_UPPER,
    EBS_LOWER,
    EBS_FACE,
    EBS_HAND,
    EBS_BODY,
    EBS_UPPERARM,
    EBS_FOREARM,
    EBS_CHEST,
    EBS_SLENDERNESS,
    EBS_WAIST,
    EBS_THIGH,
    EBS_CALF,
    EBS_FATNESS,
    EBS_BREAST,
    ENUM_MAX UMETA(Hidden),
};

