#pragma once
#include "CoreMinimal.h"
#include "EGuardGaugeState.generated.h"

UENUM(BlueprintType)
enum class EGuardGaugeState : uint8 {
    EG_GAUGE_DEFAULT,
    EG_GAUGE_STATE_1,
    EG_GAUGE_STATE_2,
    EG_GAUGE_STATE_3,
    EG_GAUGE_STATE_4,
    EG_GAUGE_BREAK,
    ENUM_MAX UMETA(Hidden),
};

