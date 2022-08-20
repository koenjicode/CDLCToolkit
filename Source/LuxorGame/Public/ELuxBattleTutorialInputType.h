#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTutorialInputType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleTutorialInputType : uint8 {
    All,
    LRUD,
    ABKG,
    None,
    ENUM_MAX UMETA(Hidden),
};

