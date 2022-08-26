#pragma once
#include "CoreMinimal.h"
#include "ELuxIllustDemoCutSide.generated.h"

UENUM(BlueprintType)
enum class ELuxIllustDemoCutSide : uint8 {
    Left,
    Right,
    Both,
    Center,
    ENUM_MAX UMETA(Hidden),
};

