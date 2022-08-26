#include "LuxBattleDramaticVoice.h"

void ALuxBattleDramaticVoice::TriggerSoulCharge(int32 inPlayerIndex) {
}

void ALuxBattleDramaticVoice::TriggerReversalEdgeWin(int32 inPlayerIndex) {
}

void ALuxBattleDramaticVoice::TriggerReversalEdgeStart(int32 inPlayerIndex) {
}

void ALuxBattleDramaticVoice::TriggerReversalEdgeMove(int32 inPlayerIndex, int32 inTimes) {
}

void ALuxBattleDramaticVoice::TriggerReversalEdge(int32 inPlayerIndex) {
}

void ALuxBattleDramaticVoice::TriggerReply(int32 inPrevDataIndex) {
}

void ALuxBattleDramaticVoice::TriggerPlayerWin(int32 inPlayerIndex, bool IsMatchDecided) {
}

void ALuxBattleDramaticVoice::TriggerPlayerLife(int32 inPlayerIndex, float inLife) {
}

void ALuxBattleDramaticVoice::TriggerMissionCriticalEdge(int32 inRightPlayerIndex, int32 inCEPlayerIndex) {
}

void ALuxBattleDramaticVoice::TriggerMissionBattleWin(int32 inRightPlayerIndex, int32 inWinPlayerIndex, bool IsMatchDecided) {
}

void ALuxBattleDramaticVoice::TriggerMissionBattleStart(int32 inRightPlayerIndex) {
}

void ALuxBattleDramaticVoice::TriggerCriticalEdgeHit(int32 inPlayerIndex) {
}

void ALuxBattleDramaticVoice::TriggerCriticalEdge(int32 inPlayerIndex) {
}

void ALuxBattleDramaticVoice::TriggerChangeMotion(int32 inPlayerIndex, int32 inMotionID) {
}

void ALuxBattleDramaticVoice::TriggerChangeMood(int32 inPlayerIndex, int32 inMood) {
}

void ALuxBattleDramaticVoice::TriggerBattleTime(int32 InTime) {
}

void ALuxBattleDramaticVoice::TriggerBattleStart() {
}

void ALuxBattleDramaticVoice::Stop(bool bForcedlyStop) {
}

void ALuxBattleDramaticVoice::RequestToPlay(int32 inDataIndex) {
}

bool ALuxBattleDramaticVoice::IsPlaying() const {
    return false;
}

bool ALuxBattleDramaticVoice::IsPlayerPlaying(int32 inPlayerIndex) const {
    return false;
}

int32 ALuxBattleDramaticVoice::GetDataCount() const {
    return 0;
}

void ALuxBattleDramaticVoice::CancelAllRequests() {
}

ALuxBattleDramaticVoice::ALuxBattleDramaticVoice() {
    this->DramaticVoiceDataAsset = NULL;
    this->DramaticVoiceID = -1;
    this->CurrentDataIndex = -1;
    this->CurrentPlayTime = -1;
    this->RandomValue = 0;
}

