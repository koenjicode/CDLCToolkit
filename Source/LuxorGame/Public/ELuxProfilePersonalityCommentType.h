#pragma once
#include "CoreMinimal.h"
#include "ELuxProfilePersonalityCommentType.generated.h"

UENUM(BlueprintType)
enum class ELuxProfilePersonalityCommentType : uint8 {
    ConfrontingComment,
    BattleStartComment,
    FollowLosingComment,
    AdrenalinRushComment,
    SoulChargeComment,
    LethalHitComment,
    ReversalEdgeComment,
    GuardImpactComment,
    CriticalEdgeComment,
    ProvocationComment,
    GuardBurstComment,
    WinningComment,
    Num,
};

