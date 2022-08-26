#include "LuxBattleFrameInputLog.h"

void ALuxBattleFrameInputLog::OnTickWhenPaused() {
}

ALuxBattleFrameInputLog::ALuxBattleFrameInputLog() {
    this->InputDelay = 0;
    this->LocalInputMask = 0;
    this->PlayerNum = 0;
    this->LocalPlayerFlags = 0;
    this->GameRound = -1;
    this->GameTime = 0;
    this->PauseTime = 0;
    this->UpdateTime = 0;
    this->RecorderTime = -1;
    this->RecorderStopTime = -1;
}

