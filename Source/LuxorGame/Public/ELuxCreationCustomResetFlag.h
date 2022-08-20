#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationCustomResetFlag.generated.h"

UENUM(BlueprintType)
enum class ELuxCreationCustomResetFlag : uint8 {
    None,
    IgnoreResetColor,
    CheckDeleteCategory,
    IgnoreResetWeapon = 0x4,
};

