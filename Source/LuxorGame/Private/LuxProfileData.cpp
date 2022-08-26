#include "LuxProfileData.h"

FLuxProfileData::FLuxProfileData() {
    this->DataFormatVersion = 0;
    this->creationType = ELuxCreationType::Original;
    this->getFromNetData = false;
    this->ID = 0;
    this->modified = false;
    this->favorite = false;
    this->Shared = false;
    this->MM_MotionID = 0;
    this->MS_MotionID = 0;
    this->fr_motionID = 0;
    this->fl_motionID = 0;
    this->motionPriority = 0;
    this->faceID = 0;
    this->motionFrame = 0.00f;
    this->charaRotateAngle = 0.00f;
    this->bStableViewpoint = false;
    this->backGround = 0;
    this->backFrame = 0;
    this->frontFrame = 0;
    this->bVisibleWeapon = false;
    this->bPartsBreakUpper = false;
    this->bPartsBreakMiddle = false;
    this->bPartsBreakLower = false;
}

