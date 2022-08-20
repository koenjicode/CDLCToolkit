#pragma once
#include "CoreMinimal.h"
#include "OnLuxSEMUtilCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLuxSEMUtilCompleted, const TArray<int32>&, Ids);

