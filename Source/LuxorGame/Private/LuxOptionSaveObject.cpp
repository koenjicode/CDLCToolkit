#include "LuxOptionSaveObject.h"

class ULuxOptionSaveObject;

void ULuxOptionSaveObject::ValidateStageBgmSettingsData() {
}

void ULuxOptionSaveObject::RefreshCurrentDiplayQualitySetting() {
}

ULuxOptionSaveObject* ULuxOptionSaveObject::GetSaveObject(ELuxGameSaveObjectAccessType InAccessType) {
    return NULL;
}

void ULuxOptionSaveObject::ApplyToGameData() {
}

void ULuxOptionSaveObject::ApplyFromGameData() {
}

ULuxOptionSaveObject::ULuxOptionSaveObject() {
    this->KeyConfigType1P = ELuxBattleInputType::TypeA;
    this->KeyConfigType2P = ELuxBattleInputType::TypeA;
}

