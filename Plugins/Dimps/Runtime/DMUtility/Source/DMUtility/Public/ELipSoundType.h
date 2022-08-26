#pragma once
#include "CoreMinimal.h"
#include "ELipSoundType.generated.h"

UENUM(BlueprintType)
enum class ELipSoundType : uint8 {
    S,
    C,
    V,
    ENUM_MAX UMETA(Hidden),
};

