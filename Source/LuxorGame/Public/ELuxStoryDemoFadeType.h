#pragma once
#include "CoreMinimal.h"
#include "ELuxStoryDemoFadeType.generated.h"

UENUM(BlueprintType)
enum class ELuxStoryDemoFadeType : uint8 {
    Black,
    White,
    Clear,
    ENUM_MAX UMETA(Hidden),
};

