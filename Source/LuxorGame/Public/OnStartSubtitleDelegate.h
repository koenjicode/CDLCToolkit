#pragma once
#include "CoreMinimal.h"
#include "OnStartSubtitleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartSubtitle, const FString&, Text);

