#include "LuxBattleCamera.h"

ALuxBattleCamera::ALuxBattleCamera() {
    this->MID_Blackout = NULL;
    this->MID_ColorCorrection = NULL;
    this->MID_RadialBlur = NULL;
    this->MID_Solarisation = NULL;
    this->MID_Desaturation = NULL;
    this->MID_BackgroundSpecialSpace = NULL;
    this->RadialBlurSettingList = NULL;
    this->SolarisationSettingList = NULL;
    this->DesaturationSettingList = NULL;
    this->BackgroundSpecialSpaceParamCurve = NULL;
    this->FootShadowParam = NULL;
}

