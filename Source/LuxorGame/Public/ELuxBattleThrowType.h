#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleThrowType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleThrowType : uint8 {
    AThrow,
    BThrow,
    UnbreakableThrow,
    ThrowTypeMax,
};

