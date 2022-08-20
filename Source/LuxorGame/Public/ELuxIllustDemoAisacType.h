#pragma once
#include "CoreMinimal.h"
#include "ELuxIllustDemoAisacType.generated.h"

UENUM(BlueprintType)
enum class ELuxIllustDemoAisacType : uint8 {
    Volume,
    Komori,
    Pitch,
    ENUM_MAX UMETA(Hidden),
};

