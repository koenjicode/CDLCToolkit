#pragma once
#include "CoreMinimal.h"
#include "ELuxAntennaCount.generated.h"

UENUM(BlueprintType)
enum class ELuxAntennaCount : uint8 {
    EAC_ANTENNA_NOTHING,
    EAC_ANTENNA_0,
    EAC_ANTENNA_1,
    EAC_ANTENNA_2,
    EAC_ANTENNA_3,
    EAC_ANTENNA_4,
    EAC_ANTENNA_5,
    ENUM_MAX UMETA(Hidden),
};

