#pragma once
#include "CoreMinimal.h"
#include "UIStreamableAssetReferenceCompletedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FUIStreamableAssetReferenceCompleted, UObject*, resource);

