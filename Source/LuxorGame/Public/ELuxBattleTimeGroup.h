#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTimeGroup.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleTimeGroup : uint8 {
    ETG_SYSTEM,
    ETG_GAME,
    ETG_CHARA1P,
    ETG_CHARA2P,
    ETG_STAGE,
    ENUM_MAX UMETA(Hidden),
};

