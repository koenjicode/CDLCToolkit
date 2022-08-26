#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleStartLocationType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleStartLocationType : uint8 {
    Center,
    RingEdge,
    Wall,
    ENUM_MAX UMETA(Hidden),
};

