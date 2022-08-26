#pragma once
#include "CoreMinimal.h"
#include "ELuxPSTimeGroup.generated.h"

UENUM(BlueprintType)
enum class ELuxPSTimeGroup : uint8 {
    EPT_AUTO,
    EPT_SYSTEM,
    EPT_GAME,
    ENUM_MAX UMETA(Hidden),
};

