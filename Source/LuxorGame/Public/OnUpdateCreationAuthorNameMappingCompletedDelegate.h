#pragma once
#include "CoreMinimal.h"
#include "OnUpdateCreationAuthorNameMappingCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnUpdateCreationAuthorNameMappingCompleted, const TArray<int32>&, succeededIds, const TArray<int32>&, failedIds);

