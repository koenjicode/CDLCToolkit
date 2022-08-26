#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleResetType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleResetType : uint8 {
    Unknown,
    Appearance,
    Position,
    TrainingReplayStop,
    RoundSkip,
    MovePlay,
    StopMovePlay,
};

