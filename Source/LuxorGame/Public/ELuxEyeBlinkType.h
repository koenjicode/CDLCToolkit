#pragma once
#include "CoreMinimal.h"
#include "ELuxEyeBlinkType.generated.h"

UENUM(BlueprintType)
enum class ELuxEyeBlinkType : uint8 {
    EEB_NONE,
    EEB_BLINK,
    EEB_WINK_L,
    EEB_WINK_R,
    EEB_CLOSE,
    EEB_CLOSE_L,
    EEB_CLOSE_R,
    ENUM_MAX UMETA(Hidden),
};

