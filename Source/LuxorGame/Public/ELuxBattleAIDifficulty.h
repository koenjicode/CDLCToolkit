#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleAIDifficulty.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleAIDifficulty : uint8 {
    Tutorial,
    Easy,
    Normal,
    Hard,
    VeryHard,
    Legendary,
    ENUM_MAX UMETA(Hidden),
};

