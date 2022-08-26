#include "LuxBattleManager.h"

class UObject;
class ALuxBattleManager;
class ULuxBattleSetup;

void ALuxBattleManager::TrainingModePositionReset() {
}

void ALuxBattleManager::SetLocalInputEnabled(bool bInputEnabled) {
}

void ALuxBattleManager::SetIgnoringKeyTime(int32 InTime, bool bKeyPressOnly) {
}

void ALuxBattleManager::RestartBattleImmediately(ELuxBattleResetType inType) {
}

void ALuxBattleManager::RestartBattle(ELuxBattleResetType inType) {
}

void ALuxBattleManager::RequestStopShortReplay() {
}

void ALuxBattleManager::RequestStartShortReplay() {
}

void ALuxBattleManager::RequestStartAnselSession() {
}

void ALuxBattleManager::RequestEndAnselSession() {
}

bool ALuxBattleManager::IsTriadReplayRecording() const {
    return false;
}

bool ALuxBattleManager::IsOnline() const {
    return false;
}

bool ALuxBattleManager::IsMatchDecided() const {
    return false;
}

bool ALuxBattleManager::IsKeyPressIgnoringTime() const {
    return false;
}

bool ALuxBattleManager::IsKeyDownIgnoringTime() const {
    return false;
}

bool ALuxBattleManager::IsExistShortReplay() {
    return false;
}

bool ALuxBattleManager::IsBattlePlaying() const {
    return false;
}

bool ALuxBattleManager::IsBattleCompleted() const {
    return false;
}

FLuxBattleTickInfo ALuxBattleManager::GetTickInfo() const {
    return FLuxBattleTickInfo{};
}

ELuxBattleSystemType ALuxBattleManager::GetBattleSystemType() const {
    return ELuxBattleSystemType::Normal;
}

ULuxBattleSetup* ALuxBattleManager::GetBattleSetup() const {
    return NULL;
}

ELuxBattleRuleType ALuxBattleManager::GetBattleRuleType() const {
    return ELuxBattleRuleType::Normal;
}

ELuxBattleMode ALuxBattleManager::GetBattleMode() const {
    return ELuxBattleMode::EBM_DUMMY;
}

ALuxBattleManager* ALuxBattleManager::GetBattleManagerFromContext(const UObject* inContext) {
    return NULL;
}

void ALuxBattleManager::FinishSublevelChange() {
}

ALuxBattleManager::ALuxBattleManager() {
    this->BattleCharaClass = NULL;
    this->BattleCameraClass = NULL;
    this->BattleCamera = NULL;
    this->EventListenerClass = NULL;
    this->EventListener = NULL;
    this->BattleVFxEventHandlerClass = NULL;
    this->BattleVFxEventHandler = NULL;
    this->BattleSoundEventHandlerClass = NULL;
    this->BattleSoundEventHandler = NULL;
    this->BattleStageEventHandlerClass = NULL;
    this->BattleStageEventHandler = NULL;
    this->BattleTraceEventHandlerClass = NULL;
    this->BattleTraceEventHandler = NULL;
    this->BattleWeaponEventHandlerClass = NULL;
    this->BattleWeaponEventHandler = NULL;
    this->BattlePauseTicker = NULL;
    this->BattlePauseControllerClass = NULL;
    this->BattlePauseController = NULL;
    this->BattleShortcutControllerClass = NULL;
    this->BattleShortcutController = NULL;
    this->BattleCommonInputClass = NULL;
    this->BattleCommonInput = NULL;
    this->BattleFrameInputClass = NULL;
    this->BattleFrameInput = NULL;
    this->BattleFrameStreamClass = NULL;
    this->BattleFrameStream = NULL;
    this->BattleFrameInputLogClass = NULL;
    this->BattleFrameInputSyncClass = NULL;
    this->BattleFrameInputLog = NULL;
    this->BattleReplayRecorder = NULL;
    this->BattleReplayPlayer = NULL;
    this->BattleTrainingManager = NULL;
    this->BattleGaugeTypeChanger = NULL;
    this->BattlePositionResetter = NULL;
    this->BattleDummyCustomizer = NULL;
    this->BattleAICustomizer = NULL;
    this->BattleKeyRecorder = NULL;
    this->BattleMoveCommandPlayer = NULL;
    this->BattleTrainingReplayPlayer = NULL;
    this->BattleDramaticVoice = NULL;
    this->BattleMissionManager = NULL;
    this->BattleMissionResultDemo = NULL;
    this->BattleTutorialManager = NULL;
    this->BattleVariableAI = NULL;
    this->BattleTimeManager = NULL;
    this->BattleStageActorManager = NULL;
    this->VFxInstanceManager = NULL;
    this->StageInfinityManager = NULL;
    this->BattleColorFadeManager = NULL;
    this->BattleSound = NULL;
    this->PlayerDataWatcher = NULL;
    this->BattleHUDManager = NULL;
    this->BattleSpecialtyVFxManager = NULL;
    this->BattleSpecialtySEManager = NULL;
    this->BattleSubtitleManager = NULL;
    this->BattleAchievementChecker = NULL;
    this->BattleRealtimeMultiplayManager = NULL;
    this->bCanSkipBattleMode = true;
    this->bCanCompleteBattle = true;
    this->bAutomaticallyEndBattle = true;
    this->bForciblyStopBattleTime = false;
    this->bForciblyCompleteBattle = false;
    this->BattleKeyMask = 0;
    this->BattleParamCollection = NULL;
    this->CharaWetParamCollection = NULL;
    this->BattleCameraParamCollection = NULL;
    this->BattleSetupOverride = NULL;
    this->KurokoActor = NULL;
    this->bBattleSetup = false;
    this->BattleTickState = ELuxBattleTickState::Initializing;
    this->bBattleUpdateOnceMore = false;
    this->BattleResetType = ELuxBattleResetType::Unknown;
    this->bBattleResetPostProcess = false;
    this->bBattleRoundSkipped = false;
    this->IgnoringKeyPressTime = 0;
    this->IgnoringKeyDownTime = 0;
    this->BattleMode = ELuxBattleMode::EBM_DUMMY;
    this->TriadReplayRecordingCount = 0;
}

