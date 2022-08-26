#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleRuleType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleRuleType : uint8 {
    Normal,
    Training,
    Story,
};

