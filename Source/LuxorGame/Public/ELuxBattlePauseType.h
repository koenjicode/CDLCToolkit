#pragma once
#include "CoreMinimal.h"
#include "ELuxBattlePauseType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattlePauseType : uint8 {
    User,
    Sync,
    Tutorial,
    FightRequest,
};

