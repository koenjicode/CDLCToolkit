#include "LuxUIGameFlowManager.h"

void ULuxUIGameFlowManager::StartSaveDataCheckFlow(FLuxSaveDataCheckParam InParam) {
}

void ULuxUIGameFlowManager::OnLuxGameUserSettingsResolutionChanged() {
}

bool ULuxUIGameFlowManager::IsStoryBattleMode() const {
    return false;
}

bool ULuxUIGameFlowManager::IsShinEdgeMasterBattleMode() const {
    return false;
}

bool ULuxUIGameFlowManager::IsEnableTitleMovie() const {
    return false;
}

void ULuxUIGameFlowManager::GameInitialize() {
}

ULuxUIGameFlowManager::ULuxUIGameFlowManager() {
    this->GameSave = NULL;
    this->UIAssetHub = NULL;
    this->UIGameStatusManager = NULL;
    this->UIGameContent = NULL;
    this->SessionHub = NULL;
    this->SigninManager = NULL;
    this->UserPrivilegeManager = NULL;
    this->BattleLauncher = NULL;
    this->UINotification = NULL;
    this->UIShopFlow = NULL;
    this->TournamentManager = NULL;
    this->CeBankManager = NULL;
    this->LoadIconHandle = NULL;
}

