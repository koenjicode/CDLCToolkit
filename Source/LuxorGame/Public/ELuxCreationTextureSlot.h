#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationTextureSlot.generated.h"

UENUM(BlueprintType)
enum class ELuxCreationTextureSlot : uint8 {
    ETS_00,
    ETS_01,
    ETS_02,
    ETS_03,
    ETS_04,
    ETS_05,
    ENUM_MAX UMETA(Hidden),
};

