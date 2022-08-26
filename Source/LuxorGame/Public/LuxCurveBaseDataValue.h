#pragma once
#include "CoreMinimal.h"
#include "LuxCurveBaseDataValue.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxCurveBaseDataValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveTime;
    
    FLuxCurveBaseDataValue();
};

