#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTutorialReversalEdgeType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleTutorialReversalEdgeType : uint8 {
    None,
    A,
    B,
    K,
    G,
    FrontStep,
    BackStep,
    RightStep,
    LeftStep,
    Random,
    RandomABK,
    Underdog,
    Chicken,
    Mimic,
    ENUM_MAX UMETA(Hidden),
};

