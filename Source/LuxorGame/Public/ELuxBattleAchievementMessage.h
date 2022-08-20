#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleAchievementMessage.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleAchievementMessage : uint8 {
    LethalHit,
    TorophyBraveEdge,
    ReversalEdgeCrush,
    GuardImpactCrush,
    TorophyCannon,
    TorophyShadow,
    ENUM_MAX UMETA(Hidden),
};

