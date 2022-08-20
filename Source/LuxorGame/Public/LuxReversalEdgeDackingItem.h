#pragma once
#include "CoreMinimal.h"
#include "ReversalEdgeDacking.h"
#include "LuxReversalEdgeDackingItem.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxReversalEdgeDackingItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TriggerCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReversalEdgeDacking ReversalEdgeDacking;
    
    FLuxReversalEdgeDackingItem();
};

