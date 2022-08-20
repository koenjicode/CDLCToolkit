#pragma once
#include "CoreMinimal.h"
#include "OnLuxUIPadAssignmentCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnLuxUIPadAssignmentCompleted, bool, bSuccess, int32, ControllerId, int32, ErrorType);

