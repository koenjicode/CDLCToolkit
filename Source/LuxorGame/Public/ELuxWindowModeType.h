#pragma once
#include "CoreMinimal.h"
#include "ELuxWindowModeType.generated.h"

UENUM(BlueprintType)
enum class ELuxWindowModeType : uint8 {
    WINDOW_MODE_FULL_SCREEN,
    WINDOW_MODE_BORDER_LESS,
    WINDOW_MODE_WINDOW,
    ENUM_MAX UMETA(Hidden),
};

