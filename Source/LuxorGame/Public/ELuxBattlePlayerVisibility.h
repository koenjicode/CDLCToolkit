#pragma once
#include "CoreMinimal.h"
#include "ELuxBattlePlayerVisibility.generated.h"

UENUM(BlueprintType)
enum class ELuxBattlePlayerVisibility : uint8 {
    VisibleAll,
    CharaOnly,
    WeaponOnly,
    HiddenAll,
    ENUM_MAX UMETA(Hidden),
};

