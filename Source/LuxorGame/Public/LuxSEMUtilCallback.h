#pragma once
#include "CoreMinimal.h"
#include "OnLuxSEMUtilCompletedDelegate.h"
#include "LuxSEMUtilCallback.generated.h"

USTRUCT(BlueprintType)
struct FLuxSEMUtilCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxSEMUtilCompleted OnLuxSEMUtilCompleted;
    
    LUXORGAME_API FLuxSEMUtilCallback();
};

