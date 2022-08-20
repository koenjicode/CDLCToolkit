#include "PreviewHumanMotionData.h"

FPreviewHumanMotionData::FPreviewHumanMotionData() {
    this->MM_MotionID = 0;
    this->MS_MotionID = 0;
    this->R_Finger_ID = 0;
    this->L_Finger_ID = 0;
    this->facePattern = ELuxFacePattern::EFP_AUTO;
    this->motionPriorityType = ELuxMotionPriorityType::MOTION_PRIORITY_TYPE_DEFAULT;
}

