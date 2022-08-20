#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleMode.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleMode : uint8 {
    EBM_DUMMY,
    EBM_START,
    EBM_NORMAL,
    EBM_GAMESET,
    EBM_REPLAY,
    EBM_WIN,
    EBM_STAGE_INTRO,
    EBM_PLAYER_INTRO,
    EBM_STAGE_TRANSITION,
    EBM_MOTION_CHANGE,
    EBM_END,
    EBM_CONTINUE,
    EBM_GAMEOVER,
    EBM_FREE_EVENT,
    EBM_RELOAD,
    EBM_EXHIBITION,
    EBM_PROFILE,
    EBM_EVENT,
    EBM_ENDING,
    EBM_ENDEVENT,
    EBM_SHORT_REPLAY,
    ENUM_MAX UMETA(Hidden),
};

