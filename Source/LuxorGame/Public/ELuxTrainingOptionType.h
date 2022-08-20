#pragma once
#include "CoreMinimal.h"
#include "ELuxTrainingOptionType.generated.h"

UENUM(BlueprintType)
enum class ELuxTrainingOptionType : uint8 {
    ETO_DAMAGE_INFO,
    ETO_DAMAGE_ICON,
    ETO_KEY_DISPLAY,
    ETO_MODE_AND_STATE_INFO,
    ETO_FIGHT_REQUEST_ICON,
    ENUM_MAX UMETA(Hidden),
};

