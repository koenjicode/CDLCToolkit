#pragma once
#include "CoreMinimal.h"
#include "OnUIAssetLoadCompletedDelegate.generated.h"

class ULuxUIAssetLoader;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUIAssetLoadCompleted, ULuxUIAssetLoader*, UIAssetLoader);

