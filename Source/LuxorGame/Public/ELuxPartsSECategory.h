#pragma once
#include "CoreMinimal.h"
#include "ELuxPartsSECategory.generated.h"

UENUM(BlueprintType)
enum class ELuxPartsSECategory : uint8 {
    ESC_None,
    ESC_Mantle,
    ESC_Arm,
    ESC_Waist,
    ESC_Leg,
    ESC_Accessory,
    ESC_Footwear,
    ENUM_MAX UMETA(Hidden),
};

