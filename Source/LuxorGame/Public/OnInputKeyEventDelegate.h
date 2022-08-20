#pragma once
#include "CoreMinimal.h"
#include "LuxInputKeyInfo.h"
#include "OnInputKeyEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputKeyEvent, const TArray<FLuxInputKeyInfo>&, key_list);

