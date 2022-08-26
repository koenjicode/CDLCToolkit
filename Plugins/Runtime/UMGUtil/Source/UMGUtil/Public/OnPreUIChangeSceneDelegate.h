#pragma once
#include "CoreMinimal.h"
#include "UIDataObject.h"
#include "OnPreUIChangeSceneDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnPreUIChangeScene, const FString&, NextTag, const FString&, NextSceneName, FUIDataObject, InTransitionData);

