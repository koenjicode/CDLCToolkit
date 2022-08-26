#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleDummyCounterType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleDummyCounterType : uint8 {
    Off,
    Attack,
    SideStep,
    BackStep,
    Random,
    ENUM_MAX UMETA(Hidden),
};

