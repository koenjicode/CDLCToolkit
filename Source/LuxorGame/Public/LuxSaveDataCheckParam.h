#pragma once
#include "CoreMinimal.h"
#include "OnSaveDataCheckCompletedDelegate.h"
#include "LuxSaveDataCheckParam.generated.h"

USTRUCT(BlueprintType)
struct FLuxSaveDataCheckParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveDataCheckCompleted OnSaveDataCheckCompleted;
    
    LUXORGAME_API FLuxSaveDataCheckParam();
};

