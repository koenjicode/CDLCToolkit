#pragma once
#include "CoreMinimal.h"
#include "LuxCurveBase.h"
#include "ELuxDesaturationCurveType.h"
#include "LuxDesaturationCurve.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxDesaturationCurve : public ULuxCurveBase {
    GENERATED_BODY()
public:
    ULuxDesaturationCurve();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetParameterValue(ELuxDesaturationCurveType CurveType, float InTime, float& ParamValue) const;
    
};

