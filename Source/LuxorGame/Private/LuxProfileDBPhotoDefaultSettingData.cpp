#include "LuxProfileDBPhotoDefaultSettingData.h"

FLuxProfileDBPhotoDefaultSettingData::FLuxProfileDBPhotoDefaultSettingData() {
    this->STYLE = ELuxFightStyle::EFS_MITSURUGI;
    this->MotionID = 0;
    this->leftFingerId = 0;
    this->rightFingerId = 0;
    this->Priority = ELuxMotionPriorityType::MOTION_PRIORITY_TYPE_DEFAULT;
}

