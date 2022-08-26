#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleDummyLethalHitType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleDummyLethalHitType : uint8 {
    Off,
    On,
    Random,
    ENUM_MAX UMETA(Hidden),
};

