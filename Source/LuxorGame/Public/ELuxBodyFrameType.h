#pragma once
#include "CoreMinimal.h"
#include "ELuxBodyFrameType.generated.h"

UENUM(BlueprintType)
enum class ELuxBodyFrameType : uint8 {
    Slender,
    Normal,
    Stout,
    Num,
};

