#pragma once
#include "CoreMinimal.h"
#include "LuxCurveBaseDataValue.h"
#include "Curves/CurveBase.h"
#include "LuxCurveBaseData.h"
#include "LuxCurveBase.generated.h"

UCLASS(Abstract, Blueprintable)
class LUXORGAME_API ULuxCurveBase : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxCurveBaseData> CurveDataList;
    
    ULuxCurveBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetParameterValueList(float InTime, TArray<FLuxCurveBaseDataValue>& ParamValueList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetParameterValueByName(const FName& ParamName, float InTime, float& ParamValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetParameterValueByIndex(int32 ParamIndex, float InTime, float& ParamValue) const;
    
};

