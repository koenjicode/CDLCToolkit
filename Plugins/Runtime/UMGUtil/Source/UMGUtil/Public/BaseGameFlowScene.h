#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIObject.h"
#include "UIDataObject.h"
#include "UIChangeSceneParam.h"
#include "BaseGameFlowScene.generated.h"

class UUIGameFlowSceneNativeScript;
class UBaseUserWidget;

UCLASS(Blueprintable)
class UMGUTIL_API UBaseGameFlowScene : public UUIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIGameFlowSceneNativeScript> NativeScriptClass;
    
    UBaseGameFlowScene();
    UFUNCTION(BlueprintCallable)
    void SendMessageEvent(const FString& InEventName, FUIDataObject InEventParam);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveMessageEvent(const FString& InEventName, const FUIDataObject& InEventParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReadyToStop();
    
    UFUNCTION(BlueprintCallable)
    void ReadyToStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRequestToStop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRequestToStart();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRequestInputCommandNative(UBaseUserWidget* menuWidget, UBaseUserWidget* TargetWidget, const FString& CommandName, const FUIDataObject& Param, int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRequestInputCommand(const FString& MenuName, UBaseUserWidget* menuWidget, UBaseUserWidget* TargetWidget, const FString& CommandName, const FUIDataObject& Param, int32 ControllerId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReceiveMessageEvent(const FString& InEventName, const FUIDataObject& InEventParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostLoadMap();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMenuOpenedNative(UBaseUserWidget* menuWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMenuOpened(const FString& Name, UBaseUserWidget* menuWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnMenuClosedNative(UBaseUserWidget* menuWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMenuClosed(const FString& Name, UBaseUserWidget* menuWidget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoadMap(const FString& CurrentMapName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeNextTransition();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAllMenuClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuActivated(const FString& Name) const;
    
    UFUNCTION(BlueprintCallable)
    bool InvokeNativeScript(const FString& Name, const FUIDataObject& Param, FUIDataObject& RetVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSceneData(FUIDataObject& SceneData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOpenedMenuNameArray(TArray<FString>& Names, int32& Num) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOpenedMenuArray(TArray<UBaseUserWidget*>& MenuWidgets, int32& Num) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInheritedData(FUIDataObject& InheritedData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActiveMenu(FString& Name, UBaseUserWidget*& menuWidget) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateMenu(UBaseUserWidget*& OutMenuWidget, const FString& Name, TSubclassOf<UBaseUserWidget> menuWidgetClass, int32 ZOrder, bool bActivate, int32 filterPlayerControllerId);
    
    UFUNCTION(BlueprintCallable)
    void CloseMenuFocibly(const FString& Name, bool bEnableFadeAnimation);
    
    UFUNCTION(BlueprintCallable)
    void CloseMenuAllFocibly(bool bEnableFadeAnimation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeScene(const FString& TransitionTag, FUIDataObject InInheritedData, FUIChangeSceneParam InChangeSceneParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateMenu(const FString& Name, bool bActivate);
    
};

