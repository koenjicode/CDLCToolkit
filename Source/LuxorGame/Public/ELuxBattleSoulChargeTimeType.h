#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleSoulChargeTimeType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleSoulChargeTimeType : uint8 {
    Normal,
    Infinity,
    Zero,
    ENUM_MAX UMETA(Hidden),
};

