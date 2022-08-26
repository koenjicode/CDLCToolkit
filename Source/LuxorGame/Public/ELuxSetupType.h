#pragma once
#include "CoreMinimal.h"
#include "ELuxSetupType.generated.h"

UENUM(BlueprintType)
enum class ELuxSetupType : uint8 {
    EST_BATTLE,
    EST_PLEFT,
    EST_PRIGHT,
    EST_PDUMMY,
    EST_SOUND,
    EST_STAGE,
    EST_ALL,
    ENUM_MAX UMETA(Hidden),
};

