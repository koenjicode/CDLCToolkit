#pragma once
#include "CoreMinimal.h"
#include "EDMTickType.generated.h"

UENUM(BlueprintType)
enum class EDMTickType : uint8 {
    ENGINE,
    GAME,
    GAME_PAUSABLE,
    CUSTOM,
    ENUM_MAX UMETA(Hidden),
};

