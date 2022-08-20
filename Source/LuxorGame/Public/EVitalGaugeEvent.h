#pragma once
#include "CoreMinimal.h"
#include "EVitalGaugeEvent.generated.h"

UENUM(BlueprintType)
enum class EVitalGaugeEvent : uint8 {
    EV_COMBO_FINISH,
    ENUM_MAX UMETA(Hidden),
};

