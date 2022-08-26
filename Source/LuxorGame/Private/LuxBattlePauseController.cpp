#include "LuxBattlePauseController.h"

void ALuxBattlePauseController::OnTickWhenPaused() {
}

ALuxBattlePauseController::ALuxBattlePauseController() {
    this->StepMode = ELuxBattleStepMode::Select;
}

