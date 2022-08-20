#include "LuxEnableVFxParam.h"

FLuxEnableVFxParam::FLuxEnableVFxParam() {
    this->BankType = ELuxEffectBankType::EFB_Common;
    this->FollowPlayerNo = 0;
    this->FollowObject = 0;
    this->bFollowPosition = false;
    this->bFollowRotation = false;
    this->bFollowScale = false;
    this->bFollowAimCamera = false;
    this->bFollowProjectionGround = false;
}

