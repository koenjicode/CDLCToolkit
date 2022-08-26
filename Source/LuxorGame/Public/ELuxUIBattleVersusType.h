#pragma once
#include "CoreMinimal.h"
#include "ELuxUIBattleVersusType.generated.h"

UENUM(BlueprintType)
enum class ELuxUIBattleVersusType : uint8 {
    PvP,
    PvC,
    CvP,
    CvC,
    PvN,
    NvP,
    NvN,
};

