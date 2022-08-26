#pragma once
#include "CoreMinimal.h"
#include "ELuxSolarisationCurveType.h"
#include "LuxCurveBase.h"
#include "LuxSolarisationCurve.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxSolarisationCurve : public ULuxCurveBase {
    GENERATED_BODY()
public:
    ULuxSolarisationCurve();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetParameterValue(ELuxSolarisationCurveType CurveType, float InTime, float& ParamValue) const;
    
};

