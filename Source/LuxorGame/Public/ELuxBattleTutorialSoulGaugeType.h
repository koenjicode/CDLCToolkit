#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTutorialSoulGaugeType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleTutorialSoulGaugeType : uint8 {
    Normal,
    Half,
    Maximum,
    Infinity,
    ENUM_MAX UMETA(Hidden),
};

