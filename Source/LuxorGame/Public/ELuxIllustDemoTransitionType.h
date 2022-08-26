#pragma once
#include "CoreMinimal.h"
#include "ELuxIllustDemoTransitionType.generated.h"

UENUM(BlueprintType)
enum class ELuxIllustDemoTransitionType : uint8 {
    Auto,
    Fixing,
    ENUM_MAX UMETA(Hidden),
};

