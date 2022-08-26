#pragma once
#include "CoreMinimal.h"
#include "ELuxCeBankRequestErrorType.generated.h"

UENUM(BlueprintType)
enum class ELuxCeBankRequestErrorType : uint8 {
    ECBR_NO_ERROR,
    ECBR_PLATFORM_ID_ERROR,
    ECBR_GET_ENV_ERROR,
    ECBR_SIGN_IN_ERROR,
    ECBR_SIGN_UP_ERROR,
    ECBR_XB1_GET_TOKEN_ERROR,
    ECBR_ERROR,
    ECBR_MAX UMETA(Hidden),
};

