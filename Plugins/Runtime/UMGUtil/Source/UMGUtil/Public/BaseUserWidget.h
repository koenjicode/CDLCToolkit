#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIBaseUserElement.h"
#include "UIDataObject.h"
#include "UIWidgetAnimationPlayParam.h"
#include "Blueprint/UserWidget.h"
#include "EUIInputType.h"
#include "EUIInputKey.h"
#include "BaseUserWidget.generated.h"

class UUIWidgetInputBinder;
class UUIProperties;
class UUIWidgetAnimationChain;
class UUIWidgetPropertyBinder;
class UPanelWidget;
class UUIWidgetImpl;
class UBaseUserWidget;
class UWidgetAnimation;
class UUIEventListener;

UCLASS(Blueprintable, EditInlineNew)
class UMGUTIL_API UBaseUserWidget : public UUIBaseUserElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeAsBaseUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadyToOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReserveToOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClosing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestructOnFadeoutAnimationFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputHandlingActivated;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowReadyToOpenInOnPostInitializeFunctionIfItIsNotOverridden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPrerequisitesOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInheritUIProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIProperties> UIPropertiesClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIProperties* UIProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUIWidgetPropertyBinder>> UIPropertyBinderClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUIWidgetPropertyBinder*> UIPropertyBinders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIWidgetInputBinder> UIInputBinderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIWidgetInputBinder* UIInputBinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIWidgetImpl> UIWidgetImplClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIWidgetImpl* UIWidgetImpl;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UUIWidgetAnimationChain*> UIWidgetAnimationChainMap;
    
    UPROPERTY(EditAnywhere, Export)
    TMap<FName, TWeakObjectPtr<UBaseUserWidget>> SubMenus;
    
public:
    UBaseUserWidget();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopUIWidgetAnimation(const FString& InStopAnimationName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopAnimation_ByAnimName(const FString& InAnimationName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetPlaybackSpeed_ByAnimName(const FString& InAnimationName, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetNumLoopsToPlay_ByAnimName(const FString& InAnimationName, int32 NumLoopsToPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ReverseAnimation_ByAnimName(const FString& InAnimationName);
    
    UFUNCTION(BlueprintCallable)
    void RequestInputCommand(const FString& CommandName, const FUIDataObject& Param, int32 ControllerId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReadyToOpen(bool bOpen);
    
    UFUNCTION(BlueprintCallable)
    void ReadyToDestruct();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayUIWidgetAnimation(FUIWidgetAnimationPlayParam InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayAnimationTo_ByAnimName(const FString& InAnimationName, float InStartAtTime, float InEndAtTime, int32 InNumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> InPlayMode, float InPlaybackSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayAnimation_ByAnimName(const FString& InAnimationName, float InStartAtTime, int32 InNumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> InPlayMode, float InPlaybackSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    float PauseAnimation_ByAnimName(const FString& InAnimationName);
    
    UFUNCTION(BlueprintCallable)
    void Open(bool bReserveToOpenOnReady);
    
    UFUNCTION(BlueprintCallable)
    void OnUIWidgetAnimationPlayFinished(const FString& InPlayAnimationName);
    
    UFUNCTION(BlueprintCallable)
    void OnSubMenuOpenedNative(UBaseUserWidget* SubMenuWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubMenuOpened(UBaseUserWidget* SubMenuWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnSubMenuClosedNative(UBaseUserWidget* SubMenuWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubMenuClosed(UBaseUserWidget* SubMenuWidget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRequestInputCommand(UBaseUserWidget* TargetWidget, const FString& CommandName, const FUIDataObject& Param, bool& bCancelBubbling, int32 ControllerId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostInitialize(UBaseUserWidget* ManagementOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpened();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMakeUIInputHandlingTargetChain(TArray<UBaseUserWidget*>& ChildInputHandlingTargets);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputHandlingEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputHandlingDisabled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize(UBaseUserWidget* ManagementOwner);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHandleInput(EUIInputType InputType, int32 ControllerId, EUIInputKey Key, bool IsDefaultPrevented, bool& bPreventDefault);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishFadeoutNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishFadeout();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishFadeinNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishFadein();
    
    UFUNCTION(BlueprintCallable)
    void OnCreatePropertiesNative(UUIProperties* Properties);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateProperties(UUIProperties* Properties);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChildWidgetOpenedNative(UBaseUserWidget* Child);
    
    UFUNCTION(BlueprintCallable)
    void OnChildWidgetClosedNative(UBaseUserWidget* Child);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangePropertyNative(const FString& PropertyName, const FUIDataObject& Property);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeProperty(const FString& PropertyName, const FUIDataObject& Property);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayUIWidgetAnimation(const FString& InPlayAnimationName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool IsAnimationPlaying_ByAnimName(const FString& InAnimationName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSubMenuOf(UBaseUserWidget* SubMenuWidget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSubMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetAnimation* GetWidgetAnimation(const FString& InAnimationName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseUserWidget* GetOwnerMenuWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFilterControllerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    float GetAnimationCurrentTime_ByAnimName(const FString& InAnimationName) const;
    
    UFUNCTION(BlueprintCallable)
    void DispatchTypedEvent(const FString& EventType, FUIDataObject EventParam, bool bubbles);
    
    UFUNCTION(BlueprintCallable)
    void DispatchEvent(const FUIDataObject& EventData);
    
    UFUNCTION(BlueprintCallable)
    void CreateSubMenu(UBaseUserWidget*& OutSubMenuWidget, TSubclassOf<UBaseUserWidget> SubMenuWidgetClass, int32 ZOrder, bool bActivate, int32 filterPlayerControllerId);
    
    UFUNCTION(BlueprintCallable)
    void CreateChildWidget(UBaseUserWidget*& NewChildWidget, UPanelWidget* ParentToAdd, TSubclassOf<UBaseUserWidget> WidgetClass, int32 insertIndex);
    
    UFUNCTION(BlueprintCallable)
    void CloseSubMenu(UBaseUserWidget* SubMenuWidget);
    
    UFUNCTION(BlueprintCallable)
    void Close(bool bDestructOnCloseAnimationFinished, bool bEnableFadeAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIEventListener* AddEventListener(const FString& EventType);
    
    UFUNCTION(BlueprintCallable)
    void ActivateInputHandling(bool bActivate);
    
};

