#pragma once
#include "CoreMinimal.h"
#include "OnGameSaveAsyncCompletedDelegate.h"
#include "LuxGameSaveAsyncParam.generated.h"

USTRUCT(BlueprintType)
struct FLuxGameSaveAsyncParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TargetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameSaveAsyncCompleted OnGameSaveAsyncCompleted;
    
    LUXORGAME_API FLuxGameSaveAsyncParam();
};

