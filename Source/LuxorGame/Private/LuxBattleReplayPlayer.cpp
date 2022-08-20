#include "LuxBattleReplayPlayer.h"

bool ALuxBattleReplayPlayer::IsExistNextRound() const {
    return false;
}

ALuxBattleReplayPlayer::ALuxBattleReplayPlayer() {
    this->bIsPlayingBack = false;
    this->CurrentRound = 0;
    this->CurrentTime = 0;
}

