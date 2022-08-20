#include "LuxBattleMissionManager.h"

void ALuxBattleMissionManager::SetWeaponEnabled(bool bEnabled) {
}

bool ALuxBattleMissionManager::IsWeaponEnabled() const {
    return false;
}

bool ALuxBattleMissionManager::IsSlipEnabled(int32 inPlayerIndex) const {
    return false;
}

ALuxBattleMissionManager::ALuxBattleMissionManager() {
    this->bWeaponEnabled = true;
}

