#pragma once
#include "CoreMinimal.h"
#include "ELuxCommonSoundType.generated.h"

UENUM(BlueprintType)
enum class ELuxCommonSoundType : uint8 {
    ELST_SYSTEM,
    ELST_CMN,
    ELST_VO_CMN,
    ELST_BG_CMN,
    ELST_FOLEY,
    ELST_BGM,
    ENUM_MAX UMETA(Hidden),
};

