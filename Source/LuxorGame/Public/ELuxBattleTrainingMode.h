#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTrainingMode.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleTrainingMode : uint8 {
    Free,
    CPU,
    Record,
    Controller,
    ENUM_MAX UMETA(Hidden),
};

