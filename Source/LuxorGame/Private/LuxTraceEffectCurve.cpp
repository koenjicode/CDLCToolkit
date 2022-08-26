#include "LuxTraceEffectCurve.h"

float ULuxTraceEffectCurve::GetParamValue(ELuxTraceEffectCurveType CurveType, float InTime) const {
    return 0.0f;
}

ULuxTraceEffectCurve::ULuxTraceEffectCurve() {
    this->CurveData.AddDefaulted(7);
}

