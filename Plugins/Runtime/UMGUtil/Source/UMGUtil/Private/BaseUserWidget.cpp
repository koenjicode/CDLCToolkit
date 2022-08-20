#include "BaseUserWidget.h"
#include "Templates/SubclassOf.h"

class UPanelWidget;
class UBaseUserWidget;
class UWidgetAnimation;
class UUIProperties;
class UUIEventListener;

void UBaseUserWidget::StopUIWidgetAnimation(const FString& InStopAnimationName) {
}

void UBaseUserWidget::StopAnimation_ByAnimName(const FString& InAnimationName) {
}

void UBaseUserWidget::SetPlaybackSpeed_ByAnimName(const FString& InAnimationName, float PlaybackSpeed) {
}

void UBaseUserWidget::SetNumLoopsToPlay_ByAnimName(const FString& InAnimationName, int32 NumLoopsToPlay) {
}

void UBaseUserWidget::ReverseAnimation_ByAnimName(const FString& InAnimationName) {
}

void UBaseUserWidget::RequestInputCommand(const FString& CommandName, const FUIDataObject& Param, int32 ControllerId) {
}

void UBaseUserWidget::ReadyToOpen(bool bOpen) {
}

void UBaseUserWidget::ReadyToDestruct() {
}

void UBaseUserWidget::PlayUIWidgetAnimation(FUIWidgetAnimationPlayParam InParam) {
}

void UBaseUserWidget::PlayAnimationTo_ByAnimName(const FString& InAnimationName, float InStartAtTime, float InEndAtTime, int32 InNumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> InPlayMode, float InPlaybackSpeed) {
}

void UBaseUserWidget::PlayAnimation_ByAnimName(const FString& InAnimationName, float InStartAtTime, int32 InNumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> InPlayMode, float InPlaybackSpeed) {
}

float UBaseUserWidget::PauseAnimation_ByAnimName(const FString& InAnimationName) {
    return 0.0f;
}

void UBaseUserWidget::Open(bool bReserveToOpenOnReady) {
}

void UBaseUserWidget::OnUIWidgetAnimationPlayFinished(const FString& InPlayAnimationName) {
}

void UBaseUserWidget::OnSubMenuOpenedNative(UBaseUserWidget* SubMenuWidget) {
}


void UBaseUserWidget::OnSubMenuClosedNative(UBaseUserWidget* SubMenuWidget) {
}


void UBaseUserWidget::OnRequestInputCommand_Implementation(UBaseUserWidget* TargetWidget, const FString& CommandName, const FUIDataObject& Param, bool& bCancelBubbling, int32 ControllerId) {
}


void UBaseUserWidget::OnPostInitialize_Implementation(UBaseUserWidget* ManagementOwner) {
}







void UBaseUserWidget::OnFinishFadeoutNative() {
}


void UBaseUserWidget::OnFinishFadeinNative() {
}


void UBaseUserWidget::OnCreatePropertiesNative(UUIProperties* Properties) {
}


void UBaseUserWidget::OnChildWidgetOpenedNative(UBaseUserWidget* Child) {
}

void UBaseUserWidget::OnChildWidgetClosedNative(UBaseUserWidget* Child) {
}

void UBaseUserWidget::OnChangePropertyNative(const FString& PropertyName, const FUIDataObject& Property) {
}


bool UBaseUserWidget::IsPlayUIWidgetAnimation_Implementation(const FString& InPlayAnimationName) {
    return false;
}

bool UBaseUserWidget::IsMenuWidget() const {
    return false;
}

bool UBaseUserWidget::IsAnimationPlaying_ByAnimName(const FString& InAnimationName) const {
    return false;
}

bool UBaseUserWidget::HasSubMenuOf(UBaseUserWidget* SubMenuWidget) const {
    return false;
}

bool UBaseUserWidget::HasSubMenu() const {
    return false;
}

UWidgetAnimation* UBaseUserWidget::GetWidgetAnimation(const FString& InAnimationName) const {
    return NULL;
}

UBaseUserWidget* UBaseUserWidget::GetOwnerMenuWidget() {
    return NULL;
}

int32 UBaseUserWidget::GetFilterControllerId() const {
    return 0;
}

float UBaseUserWidget::GetAnimationCurrentTime_ByAnimName(const FString& InAnimationName) const {
    return 0.0f;
}

void UBaseUserWidget::DispatchTypedEvent(const FString& EventType, FUIDataObject EventParam, bool bubbles) {
}

void UBaseUserWidget::DispatchEvent(const FUIDataObject& EventData) {
}

void UBaseUserWidget::CreateSubMenu(UBaseUserWidget*& OutSubMenuWidget, TSubclassOf<UBaseUserWidget> SubMenuWidgetClass, int32 ZOrder, bool bActivate, int32 filterPlayerControllerId) {
}

void UBaseUserWidget::CreateChildWidget(UBaseUserWidget*& NewChildWidget, UPanelWidget* ParentToAdd, TSubclassOf<UBaseUserWidget> WidgetClass, int32 insertIndex) {
}

void UBaseUserWidget::CloseSubMenu(UBaseUserWidget* SubMenuWidget) {
}

void UBaseUserWidget::Close(bool bDestructOnCloseAnimationFinished, bool bEnableFadeAnimation) {
}

UUIEventListener* UBaseUserWidget::AddEventListener(const FString& EventType) {
    return NULL;
}

void UBaseUserWidget::ActivateInputHandling(bool bActivate) {
}

UBaseUserWidget::UBaseUserWidget() {
    this->bInitializeAsBaseUserWidget = false;
    this->bReadyToOpen = false;
    this->bReserveToOpen = false;
    this->bOpened = false;
    this->bClosing = false;
    this->bDestructOnFadeoutAnimationFinished = true;
    this->bInputHandlingActivated = false;
    this->bAllowReadyToOpenInOnPostInitializeFunctionIfItIsNotOverridden = false;
    this->bAllowPrerequisitesOverride = false;
    this->bInheritUIProperties = false;
    this->UIPropertiesClass = NULL;
    this->UIProperties = NULL;
    this->UIInputBinderClass = NULL;
    this->UIInputBinder = NULL;
    this->UIWidgetImplClass = NULL;
    this->UIWidgetImpl = NULL;
}

