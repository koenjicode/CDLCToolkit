#pragma once
#include "CoreMinimal.h"
#include "OnLuxBattleUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLuxBattleUpdate, FName, Msg);

