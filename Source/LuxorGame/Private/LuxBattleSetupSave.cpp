#include "LuxBattleSetupSave.h"

class ULuxBattleSetup;
class ULuxBattlePlayerSetup;
class ULuxBattleSetupSave;

bool ULuxBattleSetupSave::SaveBattleSetupToSlot(const ULuxBattleSetup* inBattleSetup, const TArray<ULuxBattlePlayerSetup*> inPlayerSetups, const FString& inSuffix) {
    return false;
}

ULuxBattleSetupSave* ULuxBattleSetupSave::LoadBattleSetupSave(const FString& inSuffix) {
    return NULL;
}

void ULuxBattleSetupSave::GetBattleRules(FLuxBattleRuleParam& outParam) {
}

void ULuxBattleSetupSave::GetBattleReplay(FLuxBattleReplayParam& outParam) {
}

void ULuxBattleSetupSave::GetBattleDNAs(TArray<FLuxNamedDNA>& outDNAs) {
}

bool ULuxBattleSetupSave::DoesBattleSetupSaveExist(const FString& inSuffix) {
    return false;
}

ULuxBattleSetupSave::ULuxBattleSetupSave() {
    this->bAutoStart = true;
    this->bEndless = true;
}

