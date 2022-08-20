#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleDramaticVoiceTriggerType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleDramaticVoiceTriggerType : uint8 {
    Reply,
    BattleStart,
    BattleTime,
    PlayerLife,
    PlayerWin,
    ReversalEdge,
    ReversalEdgeStart,
    ReversalEdgeMove,
    ReversalEdgeWin,
    CriticalEdge,
    SoulCharge,
    ChangeMood,
    ChangeMotion,
    CriticalEdgeHit,
    MissionBattleStartCount,
    MissionPlayerWin,
    MissionCriticalEdge,
    ENUM_MAX UMETA(Hidden),
};

