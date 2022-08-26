#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleStartDirectionType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleStartDirectionType : uint8 {
    Forward,
    Backward,
    RightSide,
    LeftSide,
    ENUM_MAX UMETA(Hidden),
};

