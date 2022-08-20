#pragma once
#include "CoreMinimal.h"
#include "ELuxShinEdgeMasterMissionSkillType.generated.h"

UENUM(BlueprintType)
enum class ELuxShinEdgeMasterMissionSkillType : uint8 {
    MISSION_SKILL_TYPE_NONE,
    MISSION_SKILL_TYPE_GREEADY,
    MISSION_SKILL_TYPE_ATTRACT,
    MISSION_SKILL_TYPE_REPEL,
    MISSION_SKILL_TYPE_MONEY,
    MISSION_SKILL_TYPE_EXPERIENCE,
    MISSION_SKILL_TYPE_LIFE_RECOVERY_BATTLE_CONTINUE,
    MISSION_SKILL_TYPE_LIFE_PLUS,
    Max,
};

