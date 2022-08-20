#pragma once
#include "CoreMinimal.h"
#include "OnAppActivationChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAppActivationChanged, bool, bCurrentActivation);

