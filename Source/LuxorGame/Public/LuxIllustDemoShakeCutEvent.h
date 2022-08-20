#pragma once
#include "CoreMinimal.h"
#include "ELuxIllustDemoShakeCutType.h"
#include "ELuxIllustDemoCutSide.h"
#include "LuxIllustDemoShakeCutEvent.generated.h"

USTRUCT(BlueprintType)
struct FLuxIllustDemoShakeCutEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxIllustDemoShakeCutType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxIllustDemoCutSide side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayJA;
    
    LUXORGAME_API FLuxIllustDemoShakeCutEvent();
};

