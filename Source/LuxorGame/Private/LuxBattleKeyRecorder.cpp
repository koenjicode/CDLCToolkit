#include "LuxBattleKeyRecorder.h"

void ALuxBattleKeyRecorder::StopRecordAndPlayback() {
}

void ALuxBattleKeyRecorder::StopRecord() {
}

void ALuxBattleKeyRecorder::StopPlayback() {
}

void ALuxBattleKeyRecorder::StartRecord() {
}

void ALuxBattleKeyRecorder::StartPlayback() {
}

void ALuxBattleKeyRecorder::SetSlot(int32 inSlot) {
}

void ALuxBattleKeyRecorder::SetPlayerIndex(int32 inPlayerIndex) {
}

void ALuxBattleKeyRecorder::SetPlaybackType(int32 inPlaybackType) {
}

void ALuxBattleKeyRecorder::SetPlaybackLoopFlag(int32 inSlot, bool bLoop) {
}

void ALuxBattleKeyRecorder::ResetSlotInfo(int32 inSlot) {
}

void ALuxBattleKeyRecorder::ReadyToRecord() {
}

void ALuxBattleKeyRecorder::ReadyToPlayback() {
}

bool ALuxBattleKeyRecorder::IsRecording() const {
    return false;
}

bool ALuxBattleKeyRecorder::IsPlayingback() const {
    return false;
}

bool ALuxBattleKeyRecorder::IsActive() const {
    return false;
}

int32 ALuxBattleKeyRecorder::GetSlotMax() const {
    return 0;
}

FLuxBattleKeyRecordSlotInfo ALuxBattleKeyRecorder::GetSlotInfo(int32 inSlot) const {
    return FLuxBattleKeyRecordSlotInfo{};
}

int32 ALuxBattleKeyRecorder::GetSlot() const {
    return 0;
}

int32 ALuxBattleKeyRecorder::GetPlaybackType() const {
    return 0;
}

bool ALuxBattleKeyRecorder::GetPlaybackLoopFlag(int32 inSlot) const {
    return false;
}

ELuxBattleKeyRecordState ALuxBattleKeyRecorder::GetCurrentState() const {
    return ELuxBattleKeyRecordState::Inactive;
}

void ALuxBattleKeyRecorder::Deactivate() {
}

void ALuxBattleKeyRecorder::ConstructRecordSlotInfos() {
}

void ALuxBattleKeyRecorder::Activate() {
}

ALuxBattleKeyRecorder::ALuxBattleKeyRecorder() {
    this->RecordState = ELuxBattleKeyRecordState::Inactive;
    this->RecordPlayerIndex = 0;
    this->RecordSlot = 0;
    this->RecordSlotInfos.AddDefaulted(3);
    this->PlaybackType = 0;
}

