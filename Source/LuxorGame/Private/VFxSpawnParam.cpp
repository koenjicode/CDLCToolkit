#include "VFxSpawnParam.h"

FVFxSpawnParam::FVFxSpawnParam() {
    this->ID = 0;
    this->Category = ELuxEffectCategory::EEC_Common;
    this->SubCategory = 0;
    this->Group = 0;
    this->SubGroup = 0;
    this->TimeGroup = 0;
    this->FollowPlayerNo = 0;
    this->FollowComponent = NULL;
    this->bFollowLocation = false;
    this->bFollowRotation = false;
    this->bFollowScale = false;
    this->bFollowAimCamera = false;
    this->bFacingCamera = false;
    this->bFollowProjectionGround = false;
    this->bPartial = false;
    this->bIgnoreCancel = false;
}

