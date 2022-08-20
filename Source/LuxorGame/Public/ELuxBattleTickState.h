#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTickState.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleTickState : uint8 {
    Initializing,
    BattleSetting,
    BattlePlaying,
    Finalizing,
};

