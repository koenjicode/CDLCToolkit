#pragma once
#include "CoreMinimal.h"
#include "ELuxFloorBreakType.generated.h"

UENUM(BlueprintType)
enum class ELuxFloorBreakType : uint8 {
    EFB_Normal,
    EFB_FragmentOnly,
    EFB_None,
    ENUM_MAX UMETA(Hidden),
};

