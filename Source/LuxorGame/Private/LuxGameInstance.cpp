#include "LuxGameInstance.h"

class ULuxBattleSetup;
class ULuxLocalPlayer;
class ULuxPortableBattle;

void ULuxGameInstance::TerminateBattle() {
}

void ULuxGameInstance::SetLuxorAnselEnabled(bool bIsEnable) {
}

void ULuxGameInstance::SetIsInAnselSession(bool bIsInSession) {
}

void ULuxGameInstance::SetAnselIsInPauseMenu(bool bIsInPauseMenu) {
}

void ULuxGameInstance::SetAnselEnabled(bool bIsEnable) {
}

void ULuxGameInstance::RequestSystemSoundAsync() {
}

void ULuxGameInstance::RequestCommonAssetAsync() {
}

void ULuxGameInstance::RequestBattleAsset() {
}

void ULuxGameInstance::QuickBattleRequest(ELuxCharacter inLeft, ELuxCharacter inRight, int32 inStage) {
}

void ULuxGameInstance::ManualLaunchBattle() {
}

bool ULuxGameInstance::IsStageChunkAvailable(const FString& StageCode) const {
    return false;
}

bool ULuxGameInstance::IsPlatformAvailable(const FString& MenuName) const {
    return false;
}

bool ULuxGameInstance::IsLoadedSystemSound() const {
    return false;
}

bool ULuxGameInstance::IsLoadedCommonAsset() const {
    return false;
}

bool ULuxGameInstance::IsChunkInstalled(ELuxChunkCategory ctg) const {
    return false;
}

bool ULuxGameInstance::IsCharaChunkAvailable(const FString& CharaCode) const {
    return false;
}

bool ULuxGameInstance::HasAnyBattleRequest() const {
    return false;
}

FString ULuxGameInstance::GetRevisionText() {
    return TEXT("");
}

ULuxPortableBattle* ULuxGameInstance::GetPortableBattle() const {
    return NULL;
}

FString ULuxGameInstance::GetMinorVersion() const {
    return TEXT("");
}

FString ULuxGameInstance::GetMajorVersion() const {
    return TEXT("");
}

FString ULuxGameInstance::GetMaintenanceVersion() const {
    return TEXT("");
}

bool ULuxGameInstance::GetLuxorAnselEnabled() {
    return false;
}

ULuxLocalPlayer* ULuxGameInstance::GetLuxLocalPlayer(int32 inIndex) const {
    return NULL;
}

bool ULuxGameInstance::GetIsInAnselSession() {
    return false;
}

ULuxBattleSetup* ULuxGameInstance::GetBattleSetup() const {
    return NULL;
}

bool ULuxGameInstance::GetAnselIsInPauseMenu() {
    return false;
}

bool ULuxGameInstance::GetAnselEnabled() {
    return false;
}

bool ULuxGameInstance::CanLaunchBattleManually() const {
    return false;
}

void ULuxGameInstance::ApplyReplayToBattleSetup() {
}

void ULuxGameInstance::ActivateKeybd2PArea(bool Activate) {
}

ULuxGameInstance::ULuxGameInstance() {
    this->EngineRevision = 0;
    this->GameRevision = 0;
    this->SourceRevision = 0;
    this->OnlineRevision = 0;
    this->ProfileDatabase = NULL;
    this->SharedProfileFactory = NULL;
    this->NetworkProfileFactory = NULL;
    this->BattleSetup = NULL;
    this->PortableBattle = NULL;
    this->SoundLoader = NULL;
    this->ReplaySave = NULL;
}

