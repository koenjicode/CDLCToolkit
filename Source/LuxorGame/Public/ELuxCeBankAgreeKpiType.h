#pragma once
#include "CoreMinimal.h"
#include "ELuxCeBankAgreeKpiType.generated.h"

UENUM(BlueprintType)
enum class ELuxCeBankAgreeKpiType : uint8 {
    ECBAK_DISAGREE,
    ECBAK_AGREE,
    ECBAK_MAX UMETA(Hidden),
};

