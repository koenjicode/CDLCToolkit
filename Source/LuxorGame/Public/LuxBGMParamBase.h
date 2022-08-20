#pragma once
#include "CoreMinimal.h"
#include "LuxBGMParamBase.generated.h"

USTRUCT(BlueprintType)
struct FLuxBGMParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeMilliSeconds;
    
    LUXORGAME_API FLuxBGMParamBase();
};

