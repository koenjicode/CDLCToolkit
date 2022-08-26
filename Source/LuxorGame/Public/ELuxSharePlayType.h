#pragma once
#include "CoreMinimal.h"
#include "ELuxSharePlayType.generated.h"

UENUM(BlueprintType)
enum class ELuxSharePlayType : uint8 {
    SHARE_PLAY_PROHIBITION_MODE_OFF,
    SHARE_PLAY_PROHIBITION_MODE_CONTROL_ONLY,
    SHARE_PLAY_PROHIBITION_MODE_CONTROL_SCREEN,
    SHARE_PLAY_PROHIBITION_MODE_MAX UMETA(Hidden),
};

