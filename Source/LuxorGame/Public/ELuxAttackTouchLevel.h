#pragma once
#include "CoreMinimal.h"
#include "ELuxAttackTouchLevel.generated.h"

UENUM(BlueprintType)
enum class ELuxAttackTouchLevel : uint8 {
    E_ATL_HIGH,
    E_ATL_MIDDLE,
    E_ATL_LOW,
    E_ATL_SMIDDLE,
    E_ATL_SLOW,
    E_ATL_OTHER,
    E_ATL_NULL,
    ENUM_MAX UMETA(Hidden),
};

