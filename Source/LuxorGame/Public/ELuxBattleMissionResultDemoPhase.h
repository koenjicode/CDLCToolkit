#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleMissionResultDemoPhase.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleMissionResultDemoPhase : uint8 {
    ConditionCheck,
    DemoTypeCheck,
    DemoStart,
    DemoUpdate,
    DemoEnd,
    BattleEnd,
};

