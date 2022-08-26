#pragma once
#include "CoreMinimal.h"
#include "OnLuxSkitManagerUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLuxSkitManagerUpdate, const FString&, Message);

