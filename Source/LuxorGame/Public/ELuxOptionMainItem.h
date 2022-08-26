#pragma once
#include "CoreMinimal.h"
#include "ELuxOptionMainItem.generated.h"

UENUM(BlueprintType)
enum class ELuxOptionMainItem : uint8 {
    OPTION_DISPLAY_SETTING,
    OPTION_EBV_MODE_SETTING,
    OPTION_SOUND_SETTING,
    OPTION_P1_KEY_CONFIG,
    OPTION_P2_KEY_CONFIG,
    OPTION_STAGE_BGM_SETTING,
    ENUM_MAX UMETA(Hidden),
};

