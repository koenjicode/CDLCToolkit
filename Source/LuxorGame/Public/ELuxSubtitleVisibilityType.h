#pragma once
#include "CoreMinimal.h"
#include "ELuxSubtitleVisibilityType.generated.h"

UENUM(BlueprintType)
enum class ELuxSubtitleVisibilityType : uint8 {
    SUBTITLE_ON,
    SUBTITLE_OFF,
    ENUM_MAX UMETA(Hidden),
};

