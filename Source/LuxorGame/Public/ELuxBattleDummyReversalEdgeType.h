#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleDummyReversalEdgeType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleDummyReversalEdgeType : uint8 {
    Off,
    A,
    B,
    K,
    G,
    FrontStep,
    BackStep,
    RightStep,
    LeftStep,
    Random,
    ENUM_MAX UMETA(Hidden),
};

