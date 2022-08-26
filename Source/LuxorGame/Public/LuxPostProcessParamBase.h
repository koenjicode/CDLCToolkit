#pragma once
#include "CoreMinimal.h"
#include "LuxPostProcessParamBase.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxPostProcessParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 keepFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeoutFrame;
    
    FLuxPostProcessParamBase();
};

