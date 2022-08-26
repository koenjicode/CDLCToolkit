#pragma once
#include "CoreMinimal.h"
#include "ELuxMatchSettingSyncState.h"
#include "OnRecvBattleSyncStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecvBattleSyncState, ELuxMatchSettingSyncState, State);

