#pragma once
#include "CoreMinimal.h"
#include "ELuxPartPriority.generated.h"

UENUM(BlueprintType)
enum class ELuxPartPriority : uint8 {
    EEP_Nude,
    EEP_Accessory,
    EEP_Chin,
    EEP_Mask,
    EEP_Head,
    EEP_Face,
    EEP_Hair,
    EEP_Socks,
    EEP_Inner,
    EEP_Arm,
    EEP_Upper,
    EEP_Outer,
    EEP_Shoulder,
    EEP_Neck,
    EEP_Lower,
    EEP_Waist,
    EEP_Feet,
    EEP_All,
    ENUM_MAX UMETA(Hidden),
};

