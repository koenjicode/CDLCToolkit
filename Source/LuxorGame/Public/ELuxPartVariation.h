#pragma once
#include "CoreMinimal.h"
#include "ELuxPartVariation.generated.h"

UENUM(BlueprintType)
enum class ELuxPartVariation : uint8 {
    EPV_A,
    EPV_B,
    EPV_C,
    EPV_D,
    EPV_E,
    EPV_F,
    EPV_G,
    EPV_H,
    EPV_Broken,
    EPV_Evil,
    EPV_DEFAULT,
    ENUM_MAX UMETA(Hidden),
};

