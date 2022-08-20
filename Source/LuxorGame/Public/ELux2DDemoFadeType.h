#pragma once
#include "CoreMinimal.h"
#include "ELux2DDemoFadeType.generated.h"

UENUM(BlueprintType)
enum class ELux2DDemoFadeType : uint8 {
    BlackIn,
    BlackOut,
    WhiteIn,
    WhiteOut,
    BlackOutAll,
    ENUM_MAX UMETA(Hidden),
};

