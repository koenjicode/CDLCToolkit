#pragma once
#include "CoreMinimal.h"
#include "LuxCurveBase.h"
#include "ELuxRadialBlurCurveType.h"
#include "LuxRadialBlurCurve.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxRadialBlurCurve : public ULuxCurveBase {
    GENERATED_BODY()
public:
    ULuxRadialBlurCurve();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetParameterValue(ELuxRadialBlurCurveType CurveType, float InTime, float& ParamValue) const;
    
};

