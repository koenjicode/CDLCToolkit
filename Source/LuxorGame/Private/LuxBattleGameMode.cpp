#include "LuxBattleGameMode.h"

void ALuxBattleGameMode::TerminateBattle() {
}

void ALuxBattleGameMode::RequestTrainingModeBattleReset(ELuxUIBattlePlayerSide side) {
}

void ALuxBattleGameMode::ManualLaunchBattle() {
}

bool ALuxBattleGameMode::HasFinishedLoadingAssets() const {
    return false;
}

bool ALuxBattleGameMode::CanLaunchBattleManually() const {
    return false;
}

ALuxBattleGameMode::ALuxBattleGameMode() {
    this->BattleManagerClass = NULL;
    this->BattleManager = NULL;
    this->BattleGameModeState = ELuxBattleGameModeState::ManualLaunch;
    this->bEndless = false;
}

