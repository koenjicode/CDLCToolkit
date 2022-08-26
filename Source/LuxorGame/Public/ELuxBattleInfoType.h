#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleInfoType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleInfoType : uint8 {
    EBI_BattleTimerSec,
    EBI_BattleTimerSpeed,
    EBI_BattleNum,
    EBI_BrightValue,
    ENUM_MAX UMETA(Hidden),
};

