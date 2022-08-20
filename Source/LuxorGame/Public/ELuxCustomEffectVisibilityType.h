#pragma once
#include "CoreMinimal.h"
#include "ELuxCustomEffectVisibilityType.generated.h"

UENUM(BlueprintType)
enum class ELuxCustomEffectVisibilityType : uint8 {
    CUSTOM_EFFECT_ON,
    CUSTOM_EFFECT_SELF_ONLY,
    CUSTOM_EFFECT_OPPONENT_ONLY,
    CUSTOM_EFFECT_OFF,
    ENUM_MAX UMETA(Hidden),
};

