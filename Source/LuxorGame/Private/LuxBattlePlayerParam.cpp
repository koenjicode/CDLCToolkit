#include "LuxBattlePlayerParam.h"

FLuxBattlePlayerParam::FLuxBattlePlayerParam() {
    this->CpuType = 0;
    this->CpuRankLevel = 0;
    this->CpuWazaLevel = 0;
    this->CpuPersonality = 0;
    this->BattlePoint = 0;
    this->LifeMax = 0.00f;
    this->LifeInit = 0.00f;
    this->LifeInit1R = 0.00f;
    this->WeaponGauge = 0;
    this->GuardGauge = 0;
    this->IntroType = 0;
    this->IntroNum = 0;
    this->WinType = 0;
    this->WinNum = 0;
    this->LoseType = 0;
    this->LoseNum = 0;
    this->bHighPartState = false;
    this->bMiddlePartState = false;
    this->bLowPartState = false;
    this->SoulChargeState = 0;
    this->HeaderLimitMode = 0;
    this->TiraSide = 0;
}

