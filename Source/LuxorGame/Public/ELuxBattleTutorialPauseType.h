#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTutorialPauseType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleTutorialPauseType : uint8 {
    None,
    ReversalEdge_1st_A,
    ReversalEdge_1st_B,
    ReversalEdge_1st_K,
    ReversalEdge_1st_ABK,
    ReversalEdge_2nd_A,
    ReversalEdge_2nd_B,
    ReversalEdge_2nd_K,
    ReversalEdge_2nd_ABK,
    ENUM_MAX UMETA(Hidden),
};

