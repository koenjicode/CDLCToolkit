#pragma once
#include "CoreMinimal.h"
#include "ELuxSaveDataFlowResult.h"
#include "OnSaveDataCheckCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSaveDataCheckCompleted, ELuxSaveDataFlowResult, Result);

