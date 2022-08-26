#pragma once
#include "CoreMinimal.h"
#include "ELuxGraphicSettingItem.generated.h"

UENUM(BlueprintType)
enum class ELuxGraphicSettingItem : uint8 {
    GRAPHIC_DISPLAY_RESOLUTION,
    GRAPHIC_WINDOW_MODE,
    GRAPHIC_V_SYNC,
    GRAPHIC_SCREEN_QUALITY,
    GRAPHIC_SCALING_RESOLUTION,
    GRAPHIC_ANTI_ALIASING,
    GRAPHIC_POST_PROCESS,
    GRAPHIC_SHADOW,
    GRAPHIC_TEXTURE,
    GRAPHIC_EFFECT,
    GRAPHIC_SETTING_RESET,
    ENUM_MAX UMETA(Hidden),
};

