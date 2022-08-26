#pragma once
#include "CoreMinimal.h"
#include "ELuxStageVisibilityLevel.generated.h"

UENUM(BlueprintType)
enum class ELuxStageVisibilityLevel : uint8 {
    Visible,
    InvisibleLv1,
    InvisibleLv2,
    ENUM_MAX UMETA(Hidden),
    None,
};

