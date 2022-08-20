#pragma once
#include "CoreMinimal.h"
#include "OnUIWidgetAnimationPlayFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUIWidgetAnimationPlayFinished, const FString&, PlayAnimationName);

