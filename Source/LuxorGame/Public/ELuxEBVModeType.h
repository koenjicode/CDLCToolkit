#pragma once
#include "CoreMinimal.h"
#include "ELuxEBVModeType.generated.h"

UENUM(BlueprintType)
enum class ELuxEBVModeType : uint8 {
    EBV_MODE_OFF,
    EBV_MODE_ON,
    ENUM_MAX UMETA(Hidden),
};

