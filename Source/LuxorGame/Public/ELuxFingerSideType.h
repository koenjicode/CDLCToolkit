#pragma once
#include "CoreMinimal.h"
#include "ELuxFingerSideType.generated.h"

UENUM(BlueprintType)
enum class ELuxFingerSideType : uint8 {
    EFS_SIDE_LEFT,
    EFS_SIDE_RIGHT,
    ENUM_MAX UMETA(Hidden),
};

