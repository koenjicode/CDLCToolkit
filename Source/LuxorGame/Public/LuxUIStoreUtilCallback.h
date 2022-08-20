#pragma once
#include "CoreMinimal.h"
#include "OnLuxUIStoreUtilCompletedDelegate.h"
#include "LuxUIStoreUtilCallback.generated.h"

USTRUCT(BlueprintType)
struct FLuxUIStoreUtilCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxUIStoreUtilCompleted OnLuxUIStoreUtilCompleted;
    
    LUXORGAME_API FLuxUIStoreUtilCallback();
};

