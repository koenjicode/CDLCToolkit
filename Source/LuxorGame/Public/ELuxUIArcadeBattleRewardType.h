#pragma once
#include "CoreMinimal.h"
#include "ELuxUIArcadeBattleRewardType.generated.h"

UENUM(BlueprintType)
enum class ELuxUIArcadeBattleRewardType : uint8 {
    None,
    Bronze,
    Silver,
    Gold,
    Max,
};

