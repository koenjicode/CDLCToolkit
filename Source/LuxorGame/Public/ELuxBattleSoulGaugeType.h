#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleSoulGaugeType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleSoulGaugeType : uint8 {
    Normal,
    Infinity,
    Reset_0,
    Reset_50,
    Reset_100,
    ENUM_MAX UMETA(Hidden),
};

