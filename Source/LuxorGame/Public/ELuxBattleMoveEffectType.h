#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleMoveEffectType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleMoveEffectType : uint8 {
    Throw,
    UnblockableAttack,
    BreakAttack,
    GuardImpact,
    SpecialStance,
    LethalHit,
    SoulCharge,
    SoulGaugeFull,
    SoulGaugeHalf,
    SoulGaugeQuarter,
    ReversalEdge,
    ENUM_MAX UMETA(Hidden),
};

