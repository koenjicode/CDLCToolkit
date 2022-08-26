#pragma once
#include "CoreMinimal.h"
#include "ELuxPartSlot.h"
#include "ELuxPartVariation.h"
#include "LuxVariationRequest.generated.h"

USTRUCT(BlueprintType)
struct FLuxVariationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxPartVariation Variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxPartSlot> slots;
    
    LUXORGAME_API FLuxVariationRequest();
};

