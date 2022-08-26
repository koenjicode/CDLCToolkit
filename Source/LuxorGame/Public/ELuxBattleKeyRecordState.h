#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleKeyRecordState.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleKeyRecordState : uint8 {
    Inactive,
    Active,
    ReadyToRecord,
    Record,
    ReadyToPlayback,
    Playback,
};

