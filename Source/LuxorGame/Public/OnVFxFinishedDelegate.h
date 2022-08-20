#pragma once
#include "CoreMinimal.h"
#include "OnVFxFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVFxFinished, int32, InstanceID);

