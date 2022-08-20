#pragma once
#include "CoreMinimal.h"
#include "ELux2DDemoFlashType.generated.h"

UENUM(BlueprintType)
enum class ELux2DDemoFlashType : uint8 {
    Red,
    Blue,
    White,
    Purple,
    RedPurple,
    Black,
    Yellow,
    Green,
    ENUM_MAX UMETA(Hidden),
};

