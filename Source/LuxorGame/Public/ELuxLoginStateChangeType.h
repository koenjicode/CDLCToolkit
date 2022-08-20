#pragma once
#include "CoreMinimal.h"
#include "ELuxLoginStateChangeType.generated.h"

UENUM(BlueprintType)
enum class ELuxLoginStateChangeType : uint8 {
    EL_SIGN_OUT,
    EL_SIGN_IN,
    EL_LOGGED_OUT,
    EL_LOGGED_IN,
    EL_MAX UMETA(Hidden),
};

