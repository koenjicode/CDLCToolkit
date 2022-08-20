#pragma once
#include "CoreMinimal.h"
#include "DSPBusDacking.h"
#include "LuxBusDackingItem.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBusDackingItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TriggerCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDSPBusDacking DSPBusDacking;
    
    FLuxBusDackingItem();
};

