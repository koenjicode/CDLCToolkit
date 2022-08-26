#pragma once
#include "CoreMinimal.h"
#include "ELux2DDemoAisacType.generated.h"

UENUM(BlueprintType)
enum class ELux2DDemoAisacType : uint8 {
    Volume,
    Komori,
    Pitch,
    ENUM_MAX UMETA(Hidden),
};

