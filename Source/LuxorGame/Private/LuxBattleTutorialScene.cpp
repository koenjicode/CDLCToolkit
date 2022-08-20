#include "LuxBattleTutorialScene.h"

FLuxBattleTutorialScene::FLuxBattleTutorialScene() {
    this->CpuType = ELuxBattleTutorialCpuType::Stand;
    this->InputType = ELuxBattleTutorialInputType::All;
    this->SoulGaugeType1P = ELuxBattleTutorialSoulGaugeType::Normal;
    this->LifeGaugeType2P = ELuxBattleTutorialLifeGaugeType::Normal;
    this->ReversalEdgeType = ELuxBattleTutorialReversalEdgeType::None;
    this->bDiscardReversalEdgeInput = false;
    this->bWaitForSoulChargeToEnd = false;
    this->PauseType = ELuxBattleTutorialPauseType::None;
    this->PauseParam = 0;
    this->CompleteDelay = 0;
}

