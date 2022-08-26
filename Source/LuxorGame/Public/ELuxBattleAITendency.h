#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleAITendency.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleAITendency : uint8 {
    Standard,
    Offense,
    Defense,
    GuardBreak,
    Run,
    ENUM_MAX UMETA(Hidden),
};

