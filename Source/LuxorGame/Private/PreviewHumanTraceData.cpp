#include "PreviewHumanTraceData.h"

FPreviewHumanTraceData::FPreviewHumanTraceData() {
    this->ActiveFrame = 0;
    this->PartsId = ELuxTracePartsId::TRC_PT_NONE;
    this->KindId = ELuxTraceKindId::TRC_KIND_NONE;
    this->ClutId = ELuxEffectVertexClutId::LUX_OEF_CL_RED;
    this->Life = 0;
}

