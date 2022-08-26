#include "LuxCurveBase.h"

void ULuxCurveBase::GetParameterValueList(float InTime, TArray<FLuxCurveBaseDataValue>& ParamValueList) const {
}

bool ULuxCurveBase::GetParameterValueByName(const FName& ParamName, float InTime, float& ParamValue) const {
    return false;
}

bool ULuxCurveBase::GetParameterValueByIndex(int32 ParamIndex, float InTime, float& ParamValue) const {
    return false;
}

ULuxCurveBase::ULuxCurveBase() {
}

