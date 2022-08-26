#include "LuxBattleFrameInput.h"

void ALuxBattleFrameInput::OnTickWhenPaused() {
}

ALuxBattleFrameInput::ALuxBattleFrameInput() {
    this->CanUpdateInput = true;
    this->RepeatDelay = 15;
    this->RepeatInterval = 4;
}

