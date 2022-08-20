#include "LuxEnableTraceParam.h"

FLuxEnableTraceParam::FLuxEnableTraceParam() {
    this->Life = 0;
    this->bLifeStop = false;
    this->Length = 0;
    this->Kind = ELuxTraceKindId::TRC_KIND_NONE;
    this->Clut = ELuxEffectVertexClutId::LUX_OEF_CL_RED;
    this->Bright = 0.00f;
    this->CurveType = ELuxTraceCurveType::ETC_Spline;
}

