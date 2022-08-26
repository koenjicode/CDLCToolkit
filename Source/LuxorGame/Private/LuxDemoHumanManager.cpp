#include "LuxDemoHumanManager.h"

class ALuxBattleChara;
class UObject;
class ULuxBattlePlayerSetup;
class ULuxCreationProfile;
class ALuxDemoHumanManager;

void ALuxDemoHumanManager::StopLipSync(FName inTag, int32 inIndex) {
}

void ALuxDemoHumanManager::StartLipSync(FName inTag, int32 inIndex, int32 ID) {
}

void ALuxDemoHumanManager::SetRotationY(FName inTag, int32 inIndex, float ry) {
}

void ALuxDemoHumanManager::SetPosition(FName inTag, int32 inIndex, FVector pos) {
}

void ALuxDemoHumanManager::SetMotionNo(FName inTag, int32 inIndex, ELuxMotionPhase motionPhase, int32 motionNo, float motionFrame, ELuxMotionPriorityType motionPriorityType) {
}

void ALuxDemoHumanManager::SetMotionHokanFrame(FName inTag, int32 inIndex, int32 frame) {
}

void ALuxDemoHumanManager::SetMotionFrame(FName inTag, int32 inIndex, ELuxMotionPhase motionPhase, float motionFrame) {
}

void ALuxDemoHumanManager::SetMotionBlendRate(FName inTag, int32 inIndex, ELuxMotionPhase motionPhase, float rate) {
}

void ALuxDemoHumanManager::SetLipSyncFrame(FName inTag, int32 inIndex, float inFrame) {
}

void ALuxDemoHumanManager::SetFingerMotionFrame(FName inTag, int32 index, ELuxFingerSideType side, float frame) {
}

void ALuxDemoHumanManager::SetFingerMotion(FName inTag, int32 index, ELuxFingerSideType side, int32 motionNo, float frame) {
}

void ALuxDemoHumanManager::SetFacePattern(FName inTag, int32 inIndex, ELuxFacePattern facePattern) {
}

void ALuxDemoHumanManager::SetEyeWatchType(FName inTag, int32 inIndex, ELuxEyeWatch inType) {
}

void ALuxDemoHumanManager::SetEyeTargetPosition(FName inTag, int32 inIndex, FVector pos) {
}

void ALuxDemoHumanManager::SetEyeBlink(FName inTag, int32 index, ELuxEyeBlinkType eyeBlinkType) {
}

void ALuxDemoHumanManager::SetDemoSpeedRate(float speedRate) {
}

bool ALuxDemoHumanManager::ResetDemoHumanFromTagged(FName inTag, ULuxBattlePlayerSetup* inSetup) {
    return false;
}

bool ALuxDemoHumanManager::ResetDemoHumanFromProfileTagged(FName inTag, ULuxCreationProfile* inProfile) {
    return false;
}

void ALuxDemoHumanManager::ResetDemoHumanFromProfile(int32 index, ULuxCreationProfile* inProfile) {
}

void ALuxDemoHumanManager::ResetDemoHuman(int32 index, ULuxBattlePlayerSetup* inSetup) {
}

bool ALuxDemoHumanManager::IsStartedDemo() const {
    return false;
}

FName ALuxDemoHumanManager::GetTag(int32 inIndex) const {
    return NAME_None;
}

int32 ALuxDemoHumanManager::GetSwayBoneMaxCount(FName inTag, int32 index) const {
    return 0;
}

bool ALuxDemoHumanManager::GetMotionPhaseInfo(int32& outMotionNo, int32& outNowFrame, int32& outMaxFrame, FName inTag, int32 inIndex, ELuxMotionPhase motionPhase) const {
    return false;
}

ELuxFacePattern ALuxDemoHumanManager::GetFacePattern(FName inTag, int32 inIndex) {
    return ELuxFacePattern::EFP_AUTO;
}

ELuxEyeWatch ALuxDemoHumanManager::GetEyeWatchType(FName inTag, int32 inIndex) const {
    return ELuxEyeWatch::EYE_WATCH_NOTHING;
}

FVector ALuxDemoHumanManager::GetEyeTargetPosition(FName inTag, int32 inIndex) {
    return FVector{};
}

bool ALuxDemoHumanManager::GetDetailedMotionPhaseInfo(int32& outMotionNo, float& outNowFrame, float& outMaxFrame, FName inTag, int32 inIndex, ELuxMotionPhase motionPhase) const {
    return false;
}

float ALuxDemoHumanManager::GetDemoSpeedRate() const {
    return 0.0f;
}

ALuxBattleChara* ALuxDemoHumanManager::GetDemoHumanTagged(FName inTag) const {
    return NULL;
}

ALuxDemoHumanManager* ALuxDemoHumanManager::GetDemoHumanManager(UObject* inContext) {
    return NULL;
}

ALuxBattleChara* ALuxDemoHumanManager::GetDemoHuman(int32 inIndex) const {
    return NULL;
}

void ALuxDemoHumanManager::Genocide() {
}

void ALuxDemoHumanManager::DestroyDemoHumanTagged(FName inTag) {
}

void ALuxDemoHumanManager::DestroyDemoHuman(int32 inIndex) {
}

bool ALuxDemoHumanManager::CreateDemoHumanTagged(FName inTag, ULuxBattlePlayerSetup* inSetup, ALuxBattleChara* inCustomChara) {
    return false;
}

bool ALuxDemoHumanManager::CreateDemoHumanFromProfileTagged(FName inTag, ULuxCreationProfile* inProfile, ALuxBattleChara* inCustomChara) {
    return false;
}

int32 ALuxDemoHumanManager::CreateDemoHumanFromProfile(ULuxCreationProfile* inProfile, ALuxBattleChara* inCustomChara) {
    return 0;
}

int32 ALuxDemoHumanManager::CreateDemoHuman(ULuxBattlePlayerSetup* inSetup, ALuxBattleChara* inCustomChara) {
    return 0;
}

ALuxDemoHumanManager::ALuxDemoHumanManager() {
    this->BattleCharaClass = NULL;
}

