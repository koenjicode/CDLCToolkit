#pragma once
#include "CoreMinimal.h"
#include "ELuxMenuSoundEventType.generated.h"

UENUM(BlueprintType)
enum class ELuxMenuSoundEventType : uint8 {
    EVENT_NONE,
    EVENT_SELECT_V,
    EVENT_SELECT_H,
    EVENT_DECIDE,
    EVENT_FINAL_DECIDE,
    EVENT_CANCEL,
    EVENT_ERROR,
    EVENT_EXTRA_01,
    EVENT_EXTRA_02,
    EVENT_EXTRA_03,
    EVENT_EXTRA_04,
    EVENT_EXTRA_05,
    EVENT_EXTRA_06,
    EVENT_EXTRA_07,
    EVENT_EXTRA_08,
    EVENT_EXTRA_09,
    EVENT_EXTRA_10,
    EVENT_EXTRA_11,
    EVENT_EXTRA_12,
    EVENT_EXTRA_13,
    EVENT_EXTRA_14,
    EVENT_EXTRA_15,
    EVENT_EXTRA_16,
    EVENT_EXTRA_17,
    EVENT_EXTRA_18,
    EVENT_EXTRA_19,
    EVENT_EXTRA_20,
    ENUM_MAX UMETA(Hidden),
};

