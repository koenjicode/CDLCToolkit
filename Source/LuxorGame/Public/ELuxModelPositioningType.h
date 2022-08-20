#pragma once
#include "CoreMinimal.h"
#include "ELuxModelPositioningType.generated.h"

UENUM(BlueprintType)
enum class ELuxModelPositioningType : uint8 {
    ModelCenter,
    ModelRight,
    ModelLeft,
    Num,
};

