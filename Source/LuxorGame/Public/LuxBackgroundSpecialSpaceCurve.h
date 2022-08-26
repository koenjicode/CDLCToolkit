#pragma once
#include "CoreMinimal.h"
#include "ELuxBackgroundSpecialSpaceCurveType.h"
#include "LuxCurveBase.h"
#include "LuxBackgroundSpecialSpaceCurve.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBackgroundSpecialSpaceCurve : public ULuxCurveBase {
    GENERATED_BODY()
public:
    ULuxBackgroundSpecialSpaceCurve();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetParameterValue(ELuxBackgroundSpecialSpaceCurveType CurveType, float InTime, float& ParamValue) const;
    
};

