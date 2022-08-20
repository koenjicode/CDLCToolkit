#pragma once
#include "CoreMinimal.h"
#include "ELuxSkitCaptureFaceType.generated.h"

UENUM(BlueprintType)
enum class ELuxSkitCaptureFaceType : uint8 {
    Disable,
    Pattern1,
    Pattern2,
    Pattern3,
    Pattern4,
    ENUM_MAX UMETA(Hidden),
};

