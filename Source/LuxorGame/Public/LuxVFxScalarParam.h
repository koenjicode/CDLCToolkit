#pragma once
#include "CoreMinimal.h"
#include "LuxVFxScalarParam.generated.h"

USTRUCT(BlueprintType)
struct FLuxVFxScalarParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scalar;
    
    LUXORGAME_API FLuxVFxScalarParam();
};

