#pragma once
#include "CoreMinimal.h"
#include "ELuxDisplaySettingItem.generated.h"

UENUM(BlueprintType)
enum class ELuxDisplaySettingItem : uint8 {
    DISPLAY_BRIGHTNESS,
    DISPLAY_UPPER_HUD,
    DISPLAY_DOWNER_HUD,
    DISPLAY_BATTLE_SUBTITLE,
    DISPLAY_DEMO_SUBTITLE,
    DISPLAY_PERSONAL_COMMENT,
    DISPLAY_CUSTOM_EFFECT,
    DISPLAY_SETTING_RESET,
    ENUM_MAX UMETA(Hidden),
};

