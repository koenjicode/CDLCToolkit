#pragma once
#include "CoreMinimal.h"
#include "ELuxRankScope.generated.h"

UENUM(BlueprintType)
enum class ELuxRankScope : uint8 {
    ERS_NORMAL,
    ERS_STRONG,
    ERS_NEAR,
    ENUM_MAX UMETA(Hidden),
};

