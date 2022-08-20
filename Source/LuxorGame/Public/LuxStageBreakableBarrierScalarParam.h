#pragma once
#include "CoreMinimal.h"
#include "LuxStageBreakableBarrierScalarParam.generated.h"

USTRUCT(BlueprintType)
struct FLuxStageBreakableBarrierScalarParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scalar;
    
    LUXORGAME_API FLuxStageBreakableBarrierScalarParam();
};

