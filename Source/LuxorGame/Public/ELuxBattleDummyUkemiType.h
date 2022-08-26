#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleDummyUkemiType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleDummyUkemiType : uint8 {
    Off,
    Forward,
    Backward,
    Right,
    Left,
    Random,
    ENUM_MAX UMETA(Hidden),
};

