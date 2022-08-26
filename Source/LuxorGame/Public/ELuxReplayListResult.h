#pragma once
#include "CoreMinimal.h"
#include "ELuxReplayListResult.generated.h"

UENUM(BlueprintType)
enum class ELuxReplayListResult : uint8 {
    ERL_SUCCESS,
    ERL_READ_FAILED,
    ERL_READ_VERSION_ERROR,
    ERL_PLAY_VERSION_ERROR,
    ERL_BROKEN_DATA,
    ERL_ONLINE_ID_FAILED,
    ERL_UNKNOWN_ERROR,
    ERL_MAX UMETA(Hidden),
};

