#pragma once
#include "CoreMinimal.h"
#include "ELuxUIWeaponSkillType.generated.h"

UENUM(BlueprintType)
enum class ELuxUIWeaponSkillType : uint8 {
    Empty,
    Oneself,
    Opponent,
    Special,
    Unique,
    ENUM_MAX UMETA(Hidden),
};

