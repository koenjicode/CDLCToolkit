#include "BaseGameFlowScene.h"
#include "Templates/SubclassOf.h"

class UBaseUserWidget;

void UBaseGameFlowScene::SendMessageEvent(const FString& InEventName, FUIDataObject InEventParam) {
}

void UBaseGameFlowScene::ReceiveMessageEvent(const FString& InEventName, const FUIDataObject& InEventParam) {
}

void UBaseGameFlowScene::ReadyToStop() {
}

void UBaseGameFlowScene::ReadyToStart() {
}

void UBaseGameFlowScene::OnStop_Implementation() {
}

void UBaseGameFlowScene::OnStart_Implementation() {
}

void UBaseGameFlowScene::OnRequestToStop_Implementation() {
}

void UBaseGameFlowScene::OnRequestToStart_Implementation() {
}

void UBaseGameFlowScene::OnRequestInputCommandNative(UBaseUserWidget* menuWidget, UBaseUserWidget* TargetWidget, const FString& CommandName, const FUIDataObject& Param, int32 ControllerId) {
}

void UBaseGameFlowScene::OnRequestInputCommand_Implementation(const FString& MenuName, UBaseUserWidget* menuWidget, UBaseUserWidget* TargetWidget, const FString& CommandName, const FUIDataObject& Param, int32 ControllerId) {
}

void UBaseGameFlowScene::OnReceiveMessageEvent_Implementation(const FString& InEventName, const FUIDataObject& InEventParam) {
}

void UBaseGameFlowScene::OnPostLoadMap_Implementation() {
}

void UBaseGameFlowScene::OnMenuOpenedNative(UBaseUserWidget* menuWidget) {
}

void UBaseGameFlowScene::OnMenuOpened_Implementation(const FString& Name, UBaseUserWidget* menuWidget) {
}

void UBaseGameFlowScene::OnMenuClosedNative(UBaseUserWidget* menuWidget) {
}

void UBaseGameFlowScene::OnMenuClosed_Implementation(const FString& Name, UBaseUserWidget* menuWidget) {
}

void UBaseGameFlowScene::OnLoadMap_Implementation(const FString& CurrentMapName) {
}

void UBaseGameFlowScene::OnChangeNextTransition_Implementation() {
}

void UBaseGameFlowScene::OnAllMenuClosed_Implementation() {
}

bool UBaseGameFlowScene::IsMenuActivated(const FString& Name) const {
    return false;
}

bool UBaseGameFlowScene::InvokeNativeScript(const FString& Name, const FUIDataObject& Param, FUIDataObject& RetVal) {
    return false;
}

void UBaseGameFlowScene::GetSceneData(FUIDataObject& SceneData) const {
}

void UBaseGameFlowScene::GetOpenedMenuNameArray(TArray<FString>& Names, int32& Num) const {
}

void UBaseGameFlowScene::GetOpenedMenuArray(TArray<UBaseUserWidget*>& MenuWidgets, int32& Num) const {
}

void UBaseGameFlowScene::GetInheritedData(FUIDataObject& InheritedData) const {
}

bool UBaseGameFlowScene::GetActiveMenu(FString& Name, UBaseUserWidget*& menuWidget) const {
    return false;
}

void UBaseGameFlowScene::CreateMenu(UBaseUserWidget*& OutMenuWidget, const FString& Name, TSubclassOf<UBaseUserWidget> menuWidgetClass, int32 ZOrder, bool bActivate, int32 filterPlayerControllerId) {
}

void UBaseGameFlowScene::CloseMenuFocibly(const FString& Name, bool bEnableFadeAnimation) {
}

void UBaseGameFlowScene::CloseMenuAllFocibly(bool bEnableFadeAnimation) {
}

void UBaseGameFlowScene::ChangeScene(const FString& TransitionTag, FUIDataObject InInheritedData, FUIChangeSceneParam InChangeSceneParam) {
}

void UBaseGameFlowScene::ActivateMenu(const FString& Name, bool bActivate) {
}

UBaseGameFlowScene::UBaseGameFlowScene() {
    this->NativeScriptClass = NULL;
}

