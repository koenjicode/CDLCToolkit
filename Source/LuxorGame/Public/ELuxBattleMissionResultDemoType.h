#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleMissionResultDemoType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleMissionResultDemoType : uint8 {
    Undecided,
    CriticalEdgeKO,
    PlayerWin,
    PlayerLose,
    TimeStop,
};

