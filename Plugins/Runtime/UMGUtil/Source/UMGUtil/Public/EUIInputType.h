#pragma once
#include "CoreMinimal.h"
#include "EUIInputType.generated.h"

UENUM(BlueprintType)
enum class EUIInputType : uint8 {
    KeyRepeat,
    KeyDown,
    KeyUp,
    INVALID,
};

