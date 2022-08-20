#pragma once
#include "CoreMinimal.h"
#include "ELuxStageVisibilityCheckType.generated.h"

UENUM(BlueprintType)
enum class ELuxStageVisibilityCheckType : uint8 {
    SVC_NONE,
    SVC_POSITION,
    SVC_DIRECTION,
    ENUM_MAX UMETA(Hidden),
};

