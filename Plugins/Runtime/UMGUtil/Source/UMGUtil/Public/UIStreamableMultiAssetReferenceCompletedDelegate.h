#pragma once
#include "CoreMinimal.h"
#include "UIStreamableMultiAssetReferenceCompletedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FUIStreamableMultiAssetReferenceCompleted, TArray<UObject*>, resource);

