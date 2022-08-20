#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTutorialLifeGaugeType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleTutorialLifeGaugeType : uint8 {
    Normal,
    Immortal,
    ENUM_MAX UMETA(Hidden),
};

