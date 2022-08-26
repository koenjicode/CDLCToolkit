#pragma once
#include "CoreMinimal.h"
#include "ELuxUIBattleTime.generated.h"

UENUM(BlueprintType)
enum class ELuxUIBattleTime : uint8 {
    TIME_INFINITY,
    TIME_99,
    TIME_60,
    TIME_45,
    TIME_30,
    TIME_15,
    TIME_MAX UMETA(Hidden),
};

