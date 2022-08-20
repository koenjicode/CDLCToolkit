#pragma once
#include "CoreMinimal.h"
#include "ELuxCeBankMatchingResultType.generated.h"

UENUM(BlueprintType)
enum class ELuxCeBankMatchingResultType : uint8 {
    ECBMRT_SUCCESS = 0x1,
    ECBMRT_ERROR,
    ECBMRT_UNKNOWN,
    ECBMRT_MAX UMETA(Hidden),
};

