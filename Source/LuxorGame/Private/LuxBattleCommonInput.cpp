#include "LuxBattleCommonInput.h"

void ALuxBattleCommonInput::OnTickWhenPaused() {
}

ALuxBattleCommonInput::ALuxBattleCommonInput() {
    this->CanUpdateInput = true;
    this->RepeatDelay = 15;
    this->RepeatInterval = 4;
}

