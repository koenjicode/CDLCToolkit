#pragma once
#include "CoreMinimal.h"
#include "ELuxMuscleType.generated.h"

UENUM(BlueprintType)
enum class ELuxMuscleType : uint8 {
    EMT_Default,
    EMT_Least,
    EMT_Less,
    EMT_Normal,
    EMT_More,
    EMT_Most,
    EMT_Unique,
    ENUM_MAX UMETA(Hidden),
};

