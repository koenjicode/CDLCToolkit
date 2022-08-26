#include "LuxBattleRuleParam.h"

FLuxBattleRuleParam::FLuxBattleRuleParam() {
    this->LibVersion = 0;
    this->Time = 0;
    this->Type = 0;
    this->ExtraRule = 0;
    this->ExtraRuleParam = 0.00f;
    this->IntroType = 0;
    this->CharacterIntroType = 0;
    this->OutroType = 0;
    this->BattleCameraType = 0;
    this->BattleCameraTargetPlayerIndex = 0;
    this->StartCameraType = 0;
    this->BattleDrawType = 0;
    this->DramaticVoiceID = 0;
    this->DramaticVoiceLanguage = ELuxVoiceLanguage::ELN_JA;
    this->TutorialID = 0;
    this->bUseStageInitialPosition = false;
    this->RandomSeed = 0;
}

