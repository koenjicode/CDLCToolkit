#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleStartSideType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleStartSideType : uint8 {
    Default,
    Reverse,
    ENUM_MAX UMETA(Hidden),
};

