#pragma once
#include "CoreMinimal.h"
#include "ELuxRequestSide.generated.h"

UENUM(BlueprintType)
enum class ELuxRequestSide : uint8 {
    EMS_NOTHING,
    EMS_LEFT_SIDE,
    EMS_RIGHT_SIDE,
    ENUM_MAX UMETA(Hidden),
};

