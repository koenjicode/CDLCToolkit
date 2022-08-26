#pragma once
#include "CoreMinimal.h"
#include "EBattleTimerState.generated.h"

UENUM(BlueprintType)
enum class EBattleTimerState : uint8 {
    ET_TIME_DEFAULT,
    ET_TIME_10,
    ET_TIME_5,
    ET_TIME_STOP,
    ENUM_MAX UMETA(Hidden),
};

