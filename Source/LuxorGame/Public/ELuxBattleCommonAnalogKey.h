#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleCommonAnalogKey.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleCommonAnalogKey : uint8 {
    LS_X,
    LS_Y,
    RS_X,
    RS_Y,
    LT,
    RT,
    Num,
};

