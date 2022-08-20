#pragma once
#include "CoreMinimal.h"
#include "UIStreamableMultiAssetReferenceCompletedDelegate.h"
#include "UIStreamableMultiAssetReferenceDelegate.generated.h"

USTRUCT(BlueprintType)
struct FUIStreamableMultiAssetReferenceDelegate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIStreamableMultiAssetReferenceCompleted OnStreamableMultiAssetReferenceCompleted;
    
    UMGUTIL_API FUIStreamableMultiAssetReferenceDelegate();
};

