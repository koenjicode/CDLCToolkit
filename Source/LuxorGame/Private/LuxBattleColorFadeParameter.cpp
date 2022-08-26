#include "LuxBattleColorFadeParameter.h"

FLuxBattleColorFadeParameter::FLuxBattleColorFadeParameter() {
    this->FadeType = ELuxBattleColorFadeType::ADDITION;
    this->FadeMidPoint = 0.00f;
    this->FadeMidValue = 0.00f;
    this->FadeOuterExp = 0.00f;
    this->FadeEmission = NULL;
    this->InnerFadeColor = NULL;
    this->OuterFadeColor = NULL;
    this->FadePatternTex = NULL;
}

