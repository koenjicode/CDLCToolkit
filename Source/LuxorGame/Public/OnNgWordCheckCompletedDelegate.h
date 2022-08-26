#pragma once
#include "CoreMinimal.h"
#include "OnNgWordCheckCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNgWordCheckCompleted, bool, isSuccess);

