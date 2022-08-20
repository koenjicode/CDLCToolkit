#include "UIGameFlowManager.h"

class UBaseGameFlowScene;

void UUIGameFlowManager::UnregisterInterruptScene(const FString& InTransitionTag) {
}

void UUIGameFlowManager::StartChangeSceneInternal() {
}

void UUIGameFlowManager::Start(bool ReserveToStartOnReady) {
}

void UUIGameFlowManager::SendMessageEvent(const FString& InEventName, FUIDataObject InEventParam) {
}

void UUIGameFlowManager::RegisterInterruptScene(const FString& InTransitionTag, const FString& InNextSceneName) {
}

void UUIGameFlowManager::ReceiveMessageEvent(const FString& InEventName, const FUIDataObject& InEventParam) {
}

void UUIGameFlowManager::ReadyToStart() {
}

void UUIGameFlowManager::OnReceiveMessageEvent_Implementation(const FString& InEventName, const FUIDataObject& InEventParam) {
}




void UUIGameFlowManager::OnInitialize_Implementation() {
}

void UUIGameFlowManager::OnFinishChangeSceneInternal() {
}

void UUIGameFlowManager::OnFinalize_Implementation() {
}

void UUIGameFlowManager::OnApplicationWillEnterBackground_Implementation() {
}

void UUIGameFlowManager::OnApplicationHasEnteredForeground_Implementation() {
}

bool UUIGameFlowManager::IsReadyToStart() const {
    return false;
}

bool UUIGameFlowManager::IsEnableChangeScene() const {
    return false;
}

bool UUIGameFlowManager::GetCurrentSceneData(FUIDataObject& CurrentSceneData) const {
    return false;
}

UBaseGameFlowScene* UUIGameFlowManager::GetCurrentScene() const {
    return NULL;
}

void UUIGameFlowManager::CompleteToGetInitialGameSceneDataOnInitialize(const FUIDataObject& Event) {
}

void UUIGameFlowManager::ChangeScene(const FString& InTransitionTag, const FUIDataObject& InInheritedData, const FUIChangeSceneParam& InChangeSceneParam) {
}

UUIGameFlowManager::UUIGameFlowManager() {
    this->TransitionManager = NULL;
    this->CurrentScene = NULL;
    this->NextScene = NULL;
}

