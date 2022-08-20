#include "LuxStorySoundPlayer.h"

class USoundAtomCueSheet;

void ULuxStorySoundPlayer::StopVoice() {
}

void ULuxStorySoundPlayer::StopSE() {
}

void ULuxStorySoundPlayer::StopBGM() {
}

void ULuxStorySoundPlayer::StopAll() {
}

void ULuxStorySoundPlayer::SetVoiceAisacValue(const FString& Name, float Value) {
}

void ULuxStorySoundPlayer::Setup(USoundAtomCueSheet* BGMCueSheet, USoundAtomCueSheet* SECueSheet, USoundAtomCueSheet* VoiceCueSheet) {
}

void ULuxStorySoundPlayer::SetSEAisacValue(const FString& Name, float Value) {
}

void ULuxStorySoundPlayer::SetPause(bool Pause, bool All) {
}

void ULuxStorySoundPlayer::SetBGMAisacValue(const FString& Name, float Value) {
}

void ULuxStorySoundPlayer::Reset() {
}

void ULuxStorySoundPlayer::PlayVoice(int32 CueId, float StartTime) {
}

void ULuxStorySoundPlayer::PlaySE(int32 CueId, float StartTime) {
}

void ULuxStorySoundPlayer::PlayBGM(int32 CueId, float StartTime) {
}

void ULuxStorySoundPlayer::PlayAll(int32 CueId, float StartTime) {
}

bool ULuxStorySoundPlayer::IsValid() const {
    return false;
}

bool ULuxStorySoundPlayer::IsReady() const {
    return false;
}

bool ULuxStorySoundPlayer::IsPlayingVoice() const {
    return false;
}

bool ULuxStorySoundPlayer::IsPlayingSE() const {
    return false;
}

bool ULuxStorySoundPlayer::IsPlayingBGM() const {
    return false;
}

bool ULuxStorySoundPlayer::IsPlaying() const {
    return false;
}

float ULuxStorySoundPlayer::GetVoiceAisacValue(const FString& Name) const {
    return 0.0f;
}

float ULuxStorySoundPlayer::GetSEAisacValue(const FString& Name) const {
    return 0.0f;
}

float ULuxStorySoundPlayer::GetPlayPositionVoice() const {
    return 0.0f;
}

float ULuxStorySoundPlayer::GetPlayPositionSE() const {
    return 0.0f;
}

float ULuxStorySoundPlayer::GetPlayPositionBGM() const {
    return 0.0f;
}

float ULuxStorySoundPlayer::GetPlayPosition() const {
    return 0.0f;
}

float ULuxStorySoundPlayer::GetBGMAisacValue(const FString& Name) const {
    return 0.0f;
}

ULuxStorySoundPlayer::ULuxStorySoundPlayer() {
}

