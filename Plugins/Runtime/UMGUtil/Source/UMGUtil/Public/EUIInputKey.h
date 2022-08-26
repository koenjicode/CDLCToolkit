#pragma once
#include "CoreMinimal.h"
#include "EUIInputKey.generated.h"

UENUM(BlueprintType)
enum class EUIInputKey : uint8 {
    Up,
    Down,
    Left,
    Right,
    X,
    Y,
    A,
    B,
    L1,
    R1,
    L2,
    R2,
    L3,
    R3,
    Start,
    Select,
    Decide,
    Cancel,
    INVALID,
};

