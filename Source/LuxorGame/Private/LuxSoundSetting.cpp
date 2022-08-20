#include "LuxSoundSetting.h"

FLuxSoundSetting::FLuxSoundSetting() {
    this->BGMVolume = 0;
    this->SEVolume = 0;
    this->CharacterVoiceVolume = 0;
    this->NarrationVoiceVolume = 0;
    this->ToneQuality = ELuxToneQualityType::TONE_QUALITY_DEFAULT;
    this->VoiceLanguage = ELuxVoiceLanguage::ELN_JA;
}

