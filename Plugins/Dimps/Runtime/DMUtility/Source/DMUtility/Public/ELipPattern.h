#pragma once
#include "CoreMinimal.h"
#include "ELipPattern.generated.h"

UENUM(BlueprintType)
enum class ELipPattern : uint8 {
    DEFAULT,
    A,
    E,
    I,
    O,
    U,
    N,
    ENUM_MAX UMETA(Hidden),
};

