#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleMoveCategory.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleMoveCategory : uint8 {
    MainMoves,
    ReversalEdgeMoves,
    SoulGaugeMoves,
    HorizontalAttacks,
    VerticalAttacks,
    Kicks,
    SimultaneousPressMoves,
    EightWayRunMoves,
    Throws,
    SpecialStance,
    LethalHitMoves,
    ENUM_MAX UMETA(Hidden),
};

