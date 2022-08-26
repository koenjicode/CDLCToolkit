#pragma once
#include "CoreMinimal.h"
#include "ELux2DDemoAppearanceType.generated.h"

UENUM(BlueprintType)
enum class ELux2DDemoAppearanceType : uint8 {
    Show,
    Hide,
    None,
    ENUM_MAX UMETA(Hidden),
};

