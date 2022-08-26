#include "LuxDemoHumanActor.h"

void ALuxDemoHumanActor::Prepare() {
}

ALuxDemoHumanActor::ALuxDemoHumanActor() {
    this->Profile = NULL;
    this->Manager = NULL;
    this->MotionID = 0.00f;
    this->motionFrame = 0.00f;
    this->bMotionFrameToInt = false;
    this->bDemoCharacterVisible = true;
    this->bDemoWeaponVisible = true;
    this->bDemoBreakUpper = false;
    this->bDemoBreakMiddle = false;
    this->bDemoBreakLower = false;
    this->bDemoEvilForm = false;
    this->facePattern = ELuxFacePattern::EFP_AUTO;
    this->LipSyncMotionId = -1.00f;
    this->LipSyncMotionFrame = -1.00f;
    this->EyeBlink = ELuxEyeBlinkType::ENUM_MAX;
    this->LeftFingerMotionId = 0.00f;
    this->LeftFingerMotionFrame = 0.00f;
    this->RightFingerMotionId = 0.00f;
    this->RightFingerMotionFrame = 0.00f;
    this->RotationOffset = 0.25f;
    this->bWeapon1 = true;
    this->bWeapon2 = true;
    this->bWeapon3 = true;
    this->bWeapon4 = true;
    this->bWeapon5 = true;
    this->bWeapon6 = true;
    this->bWeapon7 = true;
    this->bWeapon8 = true;
    this->bWeapon9 = true;
    this->PlayerSetup = NULL;
    this->CustomProfile = NULL;
}

