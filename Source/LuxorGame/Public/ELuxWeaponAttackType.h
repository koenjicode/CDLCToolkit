#pragma once
#include "CoreMinimal.h"
#include "ELuxWeaponAttackType.generated.h"

UENUM(BlueprintType)
enum class ELuxWeaponAttackType : uint8 {
    WAT_SlashSlightlySharp,
    WAT_SlashSharp,
    WAT_SlashHeavy,
    WAT_SlightlySmash,
    WAT_Smash,
    ENUM_MAX UMETA(Hidden),
};

