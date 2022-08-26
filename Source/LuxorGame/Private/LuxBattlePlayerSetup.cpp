#include "LuxBattlePlayerSetup.h"

class ULuxCreationProfile;
class ULuxBattlePlayerSetup;

ELuxWeaponVariation ULuxBattlePlayerSetup::GetWeaponVariation() const {
    return ELuxWeaponVariation::EWV_00;
}

int32 ULuxBattlePlayerSetup::GetStyle() const {
    return 0;
}

ELuxSoulChargeType ULuxBattlePlayerSetup::GetSoulChargeType() const {
    return ELuxSoulChargeType::ESC_NORMAL;
}

int32 ULuxBattlePlayerSetup::GetHitEffectPresetID() const {
    return 0;
}

ELuxFightStyle ULuxBattlePlayerSetup::GetFightStyle() const {
    return ELuxFightStyle::EFS_MITSURUGI;
}

int32 ULuxBattlePlayerSetup::GetCharacter() const {
    return 0;
}

ULuxBattlePlayerSetup* ULuxBattlePlayerSetup::CreatePlayerSetup(ULuxCreationProfile* inProfile) {
    return NULL;
}

ULuxBattlePlayerSetup::ULuxBattlePlayerSetup() {
    this->CreationProfile = NULL;
    this->VoiceLanguage = ELuxVoiceLanguage::ELN_JA;
    this->WeaponVariation = ELuxWeaponVariation::EWV_00;
    this->InputDeviceID = -1;
    this->OverrideDNA = false;
    this->MissionPlayerIndex = 0;
    this->AllowedEdgeMasterStyles.AddDefaulted(28);
    this->EdgeMasterStyle = ELuxFightStyle::EFS_MITSURUGI;
    this->LastStyleLoader = NULL;
}

