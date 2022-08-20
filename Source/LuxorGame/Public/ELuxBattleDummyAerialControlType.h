#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleDummyAerialControlType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleDummyAerialControlType : uint8 {
    Off,
    Forward,
    RightForward,
    Right,
    RightBack,
    Back,
    LeftBack,
    Left,
    LeftForward,
    Random,
    ENUM_MAX UMETA(Hidden),
};

