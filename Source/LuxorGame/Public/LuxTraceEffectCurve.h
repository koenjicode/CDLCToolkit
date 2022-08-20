#pragma once
#include "CoreMinimal.h"
#include "ELuxTraceEffectCurveType.h"
#include "Curves/CurveBase.h"
#include "LuxTraceEffectCurveData.h"
#include "LuxTraceEffectCurve.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxTraceEffectCurve : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxTraceEffectCurveData> CurveData;
    
    ULuxTraceEffectCurve();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParamValue(ELuxTraceEffectCurveType CurveType, float InTime) const;
    
};

