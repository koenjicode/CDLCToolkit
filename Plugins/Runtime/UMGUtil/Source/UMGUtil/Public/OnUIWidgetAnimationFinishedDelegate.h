#pragma once
#include "CoreMinimal.h"
#include "OnUIWidgetAnimationFinishedDelegate.generated.h"

class UObject;
class UWidgetAnimation;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnUIWidgetAnimationFinished, UObject*, Object, UWidgetAnimation*, WidgetAnimation);

