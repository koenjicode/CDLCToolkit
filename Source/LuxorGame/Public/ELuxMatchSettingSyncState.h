#pragma once
#include "CoreMinimal.h"
#include "ELuxMatchSettingSyncState.generated.h"

UENUM(BlueprintType)
enum class ELuxMatchSettingSyncState : uint8 {
    MSS_INIT,
    MSS_CONNECT,
    MSS_CONNECTED,
    MSS_PROFILE_SYNC,
    MSS_PROFILE_SYNCED,
    MSS_CHATACTER_SYNC,
    MSS_CHATACTER_SYNCED,
    MSS_CHATACTER_COMPLETE,
    MSS_STAGE_SYNC,
    MSS_STAGE_SYNCED,
    MSS_ALL_SYNC,
    MSS_ALL_SYNCED,
    MSS_ALL_COMPLETE,
    MSS_MAX UMETA(Hidden),
};

