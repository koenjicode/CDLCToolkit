#include "LuxBattleTutorialManager.h"

void ALuxBattleTutorialManager::StartScene(int32 inSceneIndex) {
}

void ALuxBattleTutorialManager::StartPart(int32 inPartIndex, bool bResetPosition) {
}

void ALuxBattleTutorialManager::StartNextScene() {
}

void ALuxBattleTutorialManager::StartNextPart() {
}

void ALuxBattleTutorialManager::OnTickWhenPaused() {
}

TArray<FLuxBattleTutorialTaskProgress> ALuxBattleTutorialManager::GetTaskProgressList() const {
    return TArray<FLuxBattleTutorialTaskProgress>();
}

int32 ALuxBattleTutorialManager::GetTaskCount() const {
    return 0;
}

int32 ALuxBattleTutorialManager::GetStateTime() const {
    return 0;
}

ELuxBattleTutorialState ALuxBattleTutorialManager::GetState() const {
    return ELuxBattleTutorialState::TutorialStart;
}

int32 ALuxBattleTutorialManager::GetSceneCount() const {
    return 0;
}

int32 ALuxBattleTutorialManager::GetPartCount() const {
    return 0;
}

int32 ALuxBattleTutorialManager::GetCurrentSceneIndex() const {
    return 0;
}

FLuxBattleTutorialScene ALuxBattleTutorialManager::GetCurrentScene() const {
    return FLuxBattleTutorialScene{};
}

int32 ALuxBattleTutorialManager::GetCurrentPartIndex() const {
    return 0;
}

FLuxBattleTutorialPart ALuxBattleTutorialManager::GetCurrentPart() const {
    return FLuxBattleTutorialPart{};
}

bool ALuxBattleTutorialManager::CanUserPause() const {
    return false;
}

ALuxBattleTutorialManager::ALuxBattleTutorialManager() {
    this->TutorialDataAsset = NULL;
    this->CurrentPartIndex = -1;
    this->CurrentSceneIndex = -1;
    this->TutorialState = ELuxBattleTutorialState::TutorialStart;
    this->TutorialStateTime = 0;
    this->PauseState = ELuxBattleTutorialPauseState::Null;
    this->PauseTimer = 0;
    this->PauseInputKey = 0;
    this->CompleteTimer = 0;
    this->ReversalEdgeCount = 0;
    this->ReversalEdgeInputTime = 0;
}

