#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTutorialPauseState.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleTutorialPauseState : uint8 {
    Null,
    PauseReady,
    InputStart,
    PauseEnd,
    InputEnd,
    ENUM_MAX UMETA(Hidden),
};

