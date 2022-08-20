#pragma once
#include "CoreMinimal.h"
#include "ELuxIllustDemoCutSide.h"
#include "ELuxIllustDemoChangeCutType.h"
#include "LuxIllustDemoChangeCutEvent.generated.h"

USTRUCT(BlueprintType)
struct FLuxIllustDemoChangeCutEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxIllustDemoChangeCutType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxIllustDemoCutSide side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayJA;
    
    LUXORGAME_API FLuxIllustDemoChangeCutEvent();
};

