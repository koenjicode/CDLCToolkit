#include "LuxBGMPlayerUtil.h"

bool ULuxBGMPlayerUtil::StopJingleByPlaybackId(int32 playbackId) {
    return false;
}

bool ULuxBGMPlayerUtil::StopJingle() {
    return false;
}

bool ULuxBGMPlayerUtil::StopBGM() {
    return false;
}

void ULuxBGMPlayerUtil::SetKeepBGM(bool flag) {
}

void ULuxBGMPlayerUtil::SetBGMVolume(float Volume) {
}

void ULuxBGMPlayerUtil::SetAisacValue(ELuxBGMParamID param_id, float Value) {
}

void ULuxBGMPlayerUtil::Reset() {
}

void ULuxBGMPlayerUtil::RequestPlayBattleBGM(int32 bgm_id, int32 start_time_ms, int32 fade_in_frame) {
}

int32 ULuxBGMPlayerUtil::PlayJingle(int32 cue_id) {
    return 0;
}

int32 ULuxBGMPlayerUtil::PlayBGM(int32 cue_id, int32 start_time_ms, int32 fade_in_frame) {
    return 0;
}

void ULuxBGMPlayerUtil::PauseBGM(bool is_pause) {
}

bool ULuxBGMPlayerUtil::IsPlayingBGM() {
    return false;
}

bool ULuxBGMPlayerUtil::IsBGMPaused() {
    return false;
}

FString ULuxBGMPlayerUtil::GetStageBGMName(int32 stage_index) {
    return TEXT("");
}

float ULuxBGMPlayerUtil::GetBGMVolume() {
    return 0.0f;
}

ULuxBGMPlayerUtil::ULuxBGMPlayerUtil() {
}

