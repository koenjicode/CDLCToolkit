#pragma once
#include "CoreMinimal.h"
#include "ELux2DDemoShakeType.generated.h"

UENUM(BlueprintType)
enum class ELux2DDemoShakeType : uint8 {
    ShakeS,
    ShakeL,
    QuakeS,
    QuakeL,
    ENUM_MAX UMETA(Hidden),
};

