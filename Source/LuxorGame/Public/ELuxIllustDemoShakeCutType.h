#pragma once
#include "CoreMinimal.h"
#include "ELuxIllustDemoShakeCutType.generated.h"

UENUM(BlueprintType)
enum class ELuxIllustDemoShakeCutType : uint8 {
    ShakeS,
    ShakeL,
    None,
    ENUM_MAX UMETA(Hidden),
};

