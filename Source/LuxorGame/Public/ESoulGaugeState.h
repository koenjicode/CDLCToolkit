#pragma once
#include "CoreMinimal.h"
#include "ESoulGaugeState.generated.h"

UENUM(BlueprintType)
enum class ESoulGaugeState : uint8 {
    ES_GAUGE_ONE_CHARGE,
    ES_GAUGE_TWO_CHARGE,
    ES_GAUGE_ONE_BREAK,
    ES_GAUGE_TWO_BREAK,
    ES_GAUGE_ONE_RETURN,
    ES_GAUGE_TWO_CHARGING,
    ES_GAUGE_TIMER_START,
    ES_GAUGE_TIMER_END,
    ES_GAUGE_VALUE_USED_ONE,
    ES_GAUGE_VALUE_USED_TWO,
    ENUM_MAX UMETA(Hidden),
};

