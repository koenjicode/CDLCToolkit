#pragma once
#include "CoreMinimal.h"
#include "OnGameSaveAsyncCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGameSaveAsyncCompleted, bool, bSuccess);

