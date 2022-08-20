#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTutorialCpuType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleTutorialCpuType : uint8 {
    Stand,
    AllGuard,
    Battle,
    Approach_BB,
    Approach_1A,
    Approach_AG,
    Approach_BG,
    Approach_BB_Guard,
    Approach_2AG_3B,
    Approach_B,
    Approach_AB,
    Approach_Stun,
    Approach_StunCombo,
    Approach_ReversalEdgeMax,
    Approach_66AB,
    Approach_4AorAG,
    Approach_4KB,
    Approach_3B,
    Approach_AirControl,
    Approach_GuardImpact_3B,
    Approach_3B_ReverseImpact,
    ReversalEdge_Lose_Attack,
    ReversalEdge_Lose_Move,
    ReversalEdge_Draw,
    ENUM_MAX UMETA(Hidden),
};

