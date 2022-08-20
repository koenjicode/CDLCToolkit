#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleDamage.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleDamage : uint8 {
    EBD_Unknown,
    EBD_Slash,
    EBD_Blow,
    EBD_Throw,
    EBD_RingOut,
    ENUM_MAX UMETA(Hidden),
};

