#include "LuxTraceInfinitySetting.h"

FLuxTraceInfinitySetting::FLuxTraceInfinitySetting() {
    this->Life = 0;
    this->Length = 0;
    this->PartsId = ELuxTracePartsId::TRC_PT_NONE;
    this->KindId = ELuxTraceKindId::TRC_KIND_NONE;
    this->ClutId = ELuxEffectVertexClutId::LUX_OEF_CL_RED;
}

