#pragma once
#include "CoreMinimal.h"
#include "OnLuxUIShopFlowParamCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLuxUIShopFlowParamCompleted, bool, bSuccess);

