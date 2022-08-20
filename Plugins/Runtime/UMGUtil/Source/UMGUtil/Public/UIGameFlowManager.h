#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UIDataObject.h"
#include "UIChangeSceneParam.h"
#include "UIGameFlowManager.generated.h"

class UUITransitionManager;
class UBaseGameFlowScene;

UCLASS(Blueprintable)
class UMGUTIL_API UUIGameFlowManager : public UUIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameFlowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InitialSceneName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUITransitionManager* TransitionManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBaseGameFlowScene* CurrentScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBaseGameFlowScene* NextScene;
    
public:
    UUIGameFlowManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterInterruptScene(const FString& InTransitionTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartChangeSceneInternal();
    
public:
    UFUNCTION(BlueprintCallable)
    void Start(bool ReserveToStartOnReady);
    
    UFUNCTION(BlueprintCallable)
    void SendMessageEvent(const FString& InEventName, FUIDataObject InEventParam);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInterruptScene(const FString& InTransitionTag, const FString& InNextSceneName);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveMessageEvent(const FString& InEventName, const FUIDataObject& InEventParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReadyToStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReceiveMessageEvent(const FString& InEventName, const FUIDataObject& InEventParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyToStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreChangeScene(const FUIDataObject& NextSceneData, const FUIDataObject& CurrentSceneData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostChangeScene();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishChangeSceneInternal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinalize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplicationWillEnterBackground();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplicationHasEnteredForeground();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyToStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableChangeScene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentSceneData(FUIDataObject& CurrentSceneData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseGameFlowScene* GetCurrentScene() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CompleteToGetInitialGameSceneDataOnInitialize(const FUIDataObject& Event);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeScene(const FString& InTransitionTag, const FUIDataObject& InInheritedData, const FUIChangeSceneParam& InChangeSceneParam);
    
};

