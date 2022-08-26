#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleVariableAITriggerType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleVariableAITriggerType : uint8 {
    None,
    BattleCount,
    BattlePoint,
    PlayerLife,
    RingOut,
    SoulCharge,
    ENUM_MAX UMETA(Hidden),
};

