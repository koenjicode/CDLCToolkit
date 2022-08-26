#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "LuxTraceEffectCurveData.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxTraceEffectCurveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRichCurve FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    FLuxTraceEffectCurveData();
};

