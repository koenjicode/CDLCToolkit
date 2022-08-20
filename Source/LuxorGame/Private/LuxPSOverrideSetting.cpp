#include "LuxPSOverrideSetting.h"

FLuxPSOverrideSetting::FLuxPSOverrideSetting() {
    this->TimeGroup = ELuxPSTimeGroup::EPT_AUTO;
    this->ApplyNodeTransformType = ELuxPSApplyNodeTransformType::ENT_AUTO;
    this->EnableMirroring = false;
    this->ApplyOwnerCharaDirection = false;
    this->ApplyTargetCharaNodePosition = false;
    this->ApplyFixDirection = false;
    this->FacingCamera = false;
    this->IgnoreCancel = false;
    this->NumberRestriction = false;
}

