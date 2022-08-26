#include "LuxProfileBase.h"

FText ULuxProfileBase::GetCharacterName(bool inEnglish) const {
    return FText::GetEmpty();
}

ULuxProfileBase::ULuxProfileBase() {
    this->WeaponVariation = ELuxWeaponVariation::EWV_00;
    this->Gender = ELuxGender::ELG_MALE;
    this->bodyHeight = ELuxBodyHeightType::Low;
    this->bodyFrameType = ELuxBodyFrameType::Slender;
    this->bIgnoreBodySetting = false;
    this->soulChargeType = ELuxSoulChargeType::ESC_NORMAL;
    this->hitEffectPresetId = 0;
    this->BodyWeight = 0.00f;
    this->VoiceBankId = 0;
    this->VoicePitch = 0;
    this->VoicePitchShifter = 0;
    this->VoiceFormant = 0;
    this->VoiceEvilDepth = 0;
}

