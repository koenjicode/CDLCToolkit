#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleGameModeState.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleGameModeState : uint8 {
    ManualLaunch,
    WaitingMatchStart,
    Preparing,
    Initializing,
    WaitingToPlay,
    Playing,
    Finished,
    WaitingMatchEnd,
};

