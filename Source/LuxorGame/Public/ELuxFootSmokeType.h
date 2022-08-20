#pragma once
#include "CoreMinimal.h"
#include "ELuxFootSmokeType.generated.h"

UENUM(BlueprintType)
enum class ELuxFootSmokeType : uint8 {
    EFS_Normal,
    EFS_Direct,
    EFS_More,
    EFS_Auto,
    ENUM_MAX UMETA(Hidden),
};

