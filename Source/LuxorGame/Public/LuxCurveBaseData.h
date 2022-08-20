#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "LuxCurveBaseData.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxCurveBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRichCurve FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    FLuxCurveBaseData();
};

