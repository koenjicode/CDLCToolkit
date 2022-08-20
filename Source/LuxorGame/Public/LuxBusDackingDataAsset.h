#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxBusDackingItem.h"
#include "LuxReversalEdgeDackingItem.h"
#include "LuxBusDackingDataAsset.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBusDackingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBusDackingItem> BusDackingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxReversalEdgeDackingItem> ReversalEdgeDackingList;
    
    ULuxBusDackingDataAsset();
};

