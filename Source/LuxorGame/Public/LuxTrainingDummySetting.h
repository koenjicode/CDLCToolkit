#pragma once
#include "CoreMinimal.h"
#include "LuxTrainingDummySetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxTrainingDummySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Counter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ukemi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReversalEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AirControl;
    
    FLuxTrainingDummySetting();
};

