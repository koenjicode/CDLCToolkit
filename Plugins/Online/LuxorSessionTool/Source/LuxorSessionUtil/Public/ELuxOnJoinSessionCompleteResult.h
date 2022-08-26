#pragma once
#include "CoreMinimal.h"
#include "ELuxOnJoinSessionCompleteResult.generated.h"

UENUM(BlueprintType)
enum class ELuxOnJoinSessionCompleteResult : uint8 {
    EJS_SUCCESS,
    EJS_SESSION_IS_FULL,
    EJS_SESSION_DOES_NOT_EXIST,
    EJS_COULD_NOT_RETRIEVE_ADDRESS,
    EJS_ALREADY_IN_SESSION,
    EJS_UNKNOWN_ERROR,
    EJS_MAX UMETA(Hidden),
};

