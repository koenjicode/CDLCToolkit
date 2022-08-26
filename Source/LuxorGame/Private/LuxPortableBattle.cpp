#include "LuxPortableBattle.h"
#include "Templates/SubclassOf.h"

class ULuxBattleSetup;
class ALuxBattleManager;
class UObject;
class ULuxBattlePlayerSetup;
class ULuxBattleStageSetup;
class ULuxBattleSoundSetup;
class ULuxPortableBattle;

bool ULuxPortableBattle::SpawnBattleManager(TSubclassOf<ALuxBattleManager> InClass) {
    return false;
}

void ULuxPortableBattle::SetTargetWorld(const UObject* inContext) {
}

void ULuxPortableBattle::ResetBattle() {
}

void ULuxPortableBattle::RequestLoad(ELuxSetupType inType) {
}

void ULuxPortableBattle::OverrideStageSetup(ULuxBattleStageSetup* inSetup) {
}

void ULuxPortableBattle::OverrideSoundSetup(ULuxBattleSoundSetup* inSetup) {
}

void ULuxPortableBattle::OverridePlayerSetupRight(ULuxBattlePlayerSetup* inSetup) {
}

void ULuxPortableBattle::OverridePlayerSetupLeft(ULuxBattlePlayerSetup* inSetup) {
}

void ULuxPortableBattle::OverridePlayerSetupDummy(ULuxBattlePlayerSetup* inSetup) {
}

void ULuxPortableBattle::OverrideBattleSetup(ULuxBattleSetup* inSetup) {
}

bool ULuxPortableBattle::HasLoaded(ELuxSetupType inType) const {
    return false;
}

bool ULuxPortableBattle::HasBattle() const {
    return false;
}

ALuxBattleManager* ULuxPortableBattle::GetBattleManager() {
    return NULL;
}

void ULuxPortableBattle::DiscardLoader(ELuxSetupType inType) {
}

ULuxPortableBattle* ULuxPortableBattle::CreatePortableBattle(ULuxBattleSetup* inSetup) {
    return NULL;
}

ELuxBattleGameModeState ULuxPortableBattle::AutoProgress() {
    return ELuxBattleGameModeState::ManualLaunch;
}

ULuxPortableBattle::ULuxPortableBattle() {
    this->BattleSetup = NULL;
}

