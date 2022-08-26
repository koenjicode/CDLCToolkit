#pragma once
#include "CoreMinimal.h"
#include "ELuxPrivilegeErrorType.generated.h"

UENUM(BlueprintType)
enum class ELuxPrivilegeErrorType : uint8 {
    EP_NO_ERROR,
    EP_REQUIRED_PATCH,
    EP_REQUIRED_SYSTEM_UPDATE,
    EP_AGE_RESTRICTION_FAILURE,
    EP_ACCOUNT_TYPE_FAILURE,
    EP_ONLINE_PLAY_RESTRICTED,
    EP_UGC_RESTRICTION,
    EP_CHAT_RESTRICTION,
    EP_UGC_AND_CHAT_RESTRICTION,
    EP_USER_NOT_LOGGEDIN,
    EP_GENERIC_FAILURE,
    EP_MAX UMETA(Hidden),
};

