#pragma once
#include "CoreMinimal.h"
#include "ELuxPartCategory.generated.h"

UENUM(BlueprintType)
enum class ELuxPartCategory : uint8 {
    EEC_Nude,
    EEC_Hair,
    EEC_Face,
    EEC_Face_Optional,
    EEC_Head,
    EEC_Mask,
    EEC_Inner,
    EEC_Upper,
    EEC_Lower,
    EEC_Neck,
    EEC_Arm,
    EEC_Shoulder,
    EEC_Socks,
    EEC_Feet,
    EEC_Accessory,
    EEC_Outer,
    EEC_Waist,
    EEC_Mantle,
    EEC_Extra1,
    EEC_Extra2,
    EEC_Extra3,
    EEC_RacialParts1,
    EEC_RacialParts2,
    EEC_RacialParts3,
    EEC_RacialParts4,
    EEC_Unique,
    ENUM_MAX UMETA(Hidden),
};

