#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleInputType.generated.h"

UENUM(BlueprintType)
enum class ELuxBattleInputType : uint8 {
    TypeA,
    TypeB,
    TypeC,
    TypeCustom,
    ENUM_MAX UMETA(Hidden),
};

