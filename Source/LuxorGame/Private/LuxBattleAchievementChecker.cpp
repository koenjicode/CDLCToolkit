#include "LuxBattleAchievementChecker.h"

ALuxBattleAchievementChecker::ALuxBattleAchievementChecker() {
    this->BattleMode = ELuxBattleMode::EBM_DUMMY;
    this->MessageFlags.AddDefaulted(2);
}

