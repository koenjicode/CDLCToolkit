#pragma once
#include "CoreMinimal.h"
#include "ELux2DDemoSEControllType.generated.h"

UENUM(BlueprintType)
enum class ELux2DDemoSEControllType : uint8 {
    Play,
    Stop,
    ENUM_MAX UMETA(Hidden),
};

