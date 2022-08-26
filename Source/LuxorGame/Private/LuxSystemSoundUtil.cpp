#include "LuxSystemSoundUtil.h"

class UObject;

void ULuxSystemSoundUtil::ToggleSoundVolume() {
}

void ULuxSystemSoundUtil::StopVoiceByPlaybackId(int32 playback_id) {
}

void ULuxSystemSoundUtil::StopVoice() {
}

void ULuxSystemSoundUtil::StopSEByPlaybackId(int32 playback_id) {
}

void ULuxSystemSoundUtil::StopSE() {
}

int32 ULuxSystemSoundUtil::PlayVoiceWorld(UObject* WorldContextObject, ELuxSystemVoiceID voice_id) {
    return 0;
}

int32 ULuxSystemSoundUtil::PlayVoice(ELuxSystemVoiceID voice_id) {
    return 0;
}

int32 ULuxSystemSoundUtil::PlayStageNarrationVoice(const FString& stage_code) {
    return 0;
}

int32 ULuxSystemSoundUtil::PlaySEWorld(UObject* WorldContextObject, int32 cue_id, float StartTime) {
    return 0;
}

int32 ULuxSystemSoundUtil::PlaySE(int32 cue_id, float StartTime) {
    return 0;
}

int32 ULuxSystemSoundUtil::PlayNumberNarrationVoiceWorld(UObject* WorldContextObject, int32 Number) {
    return 0;
}

int32 ULuxSystemSoundUtil::PlayNumberNarrationVoice(int32 Number) {
    return 0;
}

int32 ULuxSystemSoundUtil::PlayCreationCharacterNarrationVoice(const FString& chara_code) {
    return 0;
}

int32 ULuxSystemSoundUtil::PlayCharacterNarrationVoice(const FString& chara_code) {
    return 0;
}

bool ULuxSystemSoundUtil::IsPlayingVoiceByPlaybackId(int32 playback_id) {
    return false;
}

bool ULuxSystemSoundUtil::IsPlayingVoice() {
    return false;
}

int32 ULuxSystemSoundUtil::GetSystemCueId(ELuxSystemSEID se_id) {
    return 0;
}

ULuxSystemSoundUtil::ULuxSystemSoundUtil() {
}

