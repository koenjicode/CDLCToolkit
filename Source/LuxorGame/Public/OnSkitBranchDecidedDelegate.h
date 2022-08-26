#pragma once
#include "CoreMinimal.h"
#include "OnSkitBranchDecidedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSkitBranchDecided, const FString&, SkitEventID);

