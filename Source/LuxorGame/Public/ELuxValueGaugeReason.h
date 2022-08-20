#pragma once
#include "CoreMinimal.h"
#include "ELuxValueGaugeReason.generated.h"

UENUM(BlueprintType)
enum class ELuxValueGaugeReason : uint8 {
    EVGR_My,
    EVGR_Enemy,
    ENUM_MAX UMETA(Hidden),
};

