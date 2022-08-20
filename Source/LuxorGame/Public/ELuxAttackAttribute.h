#pragma once
#include "CoreMinimal.h"
#include "ELuxAttackAttribute.generated.h"

UENUM(BlueprintType)
enum class ELuxAttackAttribute : uint8 {
    EAA_HIGH,
    EAA_MIDDLE,
    EAA_LOW,
    EAA_S_MIDDLE,
    EAA_S_LOW,
    EAA_UB_HIGH,
    EAA_UB_MIDDLE,
    EAA_UB_LOW,
    EAA_CATCH_AIR_HIGH,
    EAA_CATCH_AIR,
    EAA_CATCH_HIGH,
    EAA_CATCH_LOW,
    EAA_DOWN,
    EAA_UNKNOWN,
    ENUM_MAX UMETA(Hidden),
};

