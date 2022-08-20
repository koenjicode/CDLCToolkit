#pragma once
#include "CoreMinimal.h"
#include "UIStreamableAssetReferenceCompletedDelegate.h"
#include "UIStreamableAssetReferenceDelegate.generated.h"

USTRUCT(BlueprintType)
struct FUIStreamableAssetReferenceDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIStreamableAssetReferenceCompleted OnStreamableAssetReferenceCompleted;
    
    UMGUTIL_API FUIStreamableAssetReferenceDelegate();
};

