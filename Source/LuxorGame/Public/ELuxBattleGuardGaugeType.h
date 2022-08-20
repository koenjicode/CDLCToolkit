#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleGuardGaugeType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleGuardGaugeType : uint8 {
    Normal,
    Infinity,
    Reset_0,
    Reset_70,
    Reset_85,
    Reset_100,
    Fixed_100,
    ENUM_MAX UMETA(Hidden),
};

