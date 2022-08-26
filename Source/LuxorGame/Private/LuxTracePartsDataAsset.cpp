#include "LuxTracePartsDataAsset.h"

ULuxTracePartsDataAsset::ULuxTracePartsDataAsset() {
    this->TracePartsId = ELuxTracePartsId::TRC_PT_ARMS1;
    this->FirstEffectPartsId = ELuxEffectPartsId::OEF_PT_WEAPON1;
    this->SecondEffectPartsId = ELuxEffectPartsId::OEF_PT_WEAPON1;
    this->bOverrideEvent = false;
    this->LifeTime = 1.00f;
    this->bLifeStop = false;
    this->MaxKeyFrameNum = 2;
    this->Brightness = 1.00f;
    this->KeyFrameStopFrame = 0.00f;
    this->BrightnessFrame = 12.00f;
    this->RefractionFrame = 12.00f;
}

