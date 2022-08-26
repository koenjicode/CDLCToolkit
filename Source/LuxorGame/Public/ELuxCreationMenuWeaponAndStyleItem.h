#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationMenuWeaponAndStyleItem.generated.h"

UENUM(BlueprintType)
enum class ELuxCreationMenuWeaponAndStyleItem : uint8 {
    Style,
    Weapon,
    HitEffect,
    SoulChargeEffect,
    Num,
};

