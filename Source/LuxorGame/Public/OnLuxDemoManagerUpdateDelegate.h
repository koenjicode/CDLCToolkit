#pragma once
#include "CoreMinimal.h"
#include "OnLuxDemoManagerUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLuxDemoManagerUpdate, const FString&, Message);

