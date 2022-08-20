#pragma once
#include "CoreMinimal.h"
#include "ELuxPlayLocate.generated.h"

UENUM(BlueprintType)
enum class ELuxPlayLocate : uint8 {
    EPL_LEFT,
    EPL_CENTER,
    EPL_RIGHT,
    ENUM_MAX UMETA(Hidden),
};

