#pragma once
#include "CoreMinimal.h"
#include "ELuxLoginErrorType.generated.h"

UENUM(BlueprintType)
enum class ELuxLoginErrorType : uint8 {
    EL_NO_ERROR,
    EL_NOT_LOGIN,
    EL_PATCH_AVAILABLE,
    EL_SYSTEM_UPDATE,
    EL_LIMITED_AGE,
    EL_BROKEN_DATA,
    EL_SERVER_REQUEST_FAILE,
    EL_EMPTY_DATA_DIALOG,
    EL_UNKNOWN_ERROR,
    EL_MAX UMETA(Hidden),
};

