#pragma once
#include "CoreMinimal.h"
#include "ELuxUIArcadeBattleDifficulty.generated.h"

UENUM(BlueprintType)
enum class ELuxUIArcadeBattleDifficulty : uint8 {
    Easy,
    Normal,
    Hard,
    VeryHard,
    Legendry,
    Max,
};

