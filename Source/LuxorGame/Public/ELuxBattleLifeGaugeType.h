#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleLifeGaugeType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleLifeGaugeType : uint8 {
    Normal,
    Infinity,
    Reset_5,
    Reset_10,
    Reset_20,
    Reset_30,
    Reset_50,
    Reset_100,
    ENUM_MAX UMETA(Hidden),
};

