#pragma once
#include "CoreMinimal.h"
#include "LuxPostProcessParamBase.h"
#include "LuxEnableCameraBokeh.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxEnableCameraBokeh : public FLuxPostProcessParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 fadeInFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float focusZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float focusRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FLuxEnableCameraBokeh();
};

