#include "LuxProfileDBPhotoPoseData.h"

FLuxProfileDBPhotoPoseData::FLuxProfileDBPhotoPoseData() {
    this->STYLE = ELuxFightStyle::EFS_MITSURUGI;
    this->Gender = ELuxGender::ELG_MALE;
    this->MotionID = 0;
    this->leftFingerId = 0;
    this->rightFingerId = 0;
    this->Priority = ELuxMotionPriorityType::MOTION_PRIORITY_TYPE_DEFAULT;
}

