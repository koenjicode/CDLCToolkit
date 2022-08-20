#include "LuxBattleTrainingReplayPlayer.h"

void ALuxBattleTrainingReplayPlayer::RequestToStop() {
}

void ALuxBattleTrainingReplayPlayer::RequestToPlay(bool bLoop) {
}

bool ALuxBattleTrainingReplayPlayer::IsPlaying() const {
    return false;
}

bool ALuxBattleTrainingReplayPlayer::IsExisting() const {
    return false;
}

void ALuxBattleTrainingReplayPlayer::ClearShortReplay() {
}

ALuxBattleTrainingReplayPlayer::ALuxBattleTrainingReplayPlayer() {
    this->bIsPlaying = false;
}

