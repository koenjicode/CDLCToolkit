#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTutorialEndingType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleTutorialEndingType : uint8 {
    NextPart,
    NextPartWithReset,
    ExitTutorial,
    NextPartwithSoulChargeReset,
};

