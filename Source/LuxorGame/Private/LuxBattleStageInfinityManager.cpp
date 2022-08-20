#include "LuxBattleStageInfinityManager.h"

void ALuxBattleStageInfinityManager::OnFadeOutAnimFinished() {
}

void ALuxBattleStageInfinityManager::OnFadeInAnimFinished() {
}

ALuxBattleStageInfinityManager::ALuxBattleStageInfinityManager() {
    this->MapChipSize = 0;
    this->MapChiptilingCount = 0;
    this->MaxDistanecFromOrigin = 0;
    this->IsInfinityStage = false;
    this->bNowOnPositionReset = false;
    this->WaitOneFrameForFadeIn = 0;
    this->FadeManager = NULL;
    this->StageTileUpdateIntervalCounter = 0.00f;
    this->PlayerOrginActor = NULL;
}

