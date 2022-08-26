#pragma once
#include "CoreMinimal.h"
#include "ELuxMatchSetting.generated.h"

UENUM(BlueprintType)
enum class ELuxMatchSetting : uint8 {
    EMS_EQUAL,
    EMS_WORLD,
    ENUM_MAX UMETA(Hidden),
};

