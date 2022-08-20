#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UIDataObject.h"
#include "EUIInputKey.h"
#include "UIGameFlowAutomation.generated.h"

UCLASS(Blueprintable)
class UMGUTIL_API UUIGameFlowAutomation : public UUIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentSceneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PrevScenename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FrameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CounterLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DefaultActionLock;
    
    UUIGameFlowAutomation();
    UFUNCTION(BlueprintCallable)
    void UnLockFrameCounter();
    
    UFUNCTION(BlueprintCallable)
    void UnLockDefaultAction();
    
    UFUNCTION(BlueprintCallable)
    void SetSceneDefaultAction(int32 frame, EUIInputKey Key);
    
    UFUNCTION(BlueprintCallable)
    void SendPerformanceData(const FUIDataObject& Data);
    
    UFUNCTION(BlueprintCallable)
    void ResetCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSceneChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable)
    void LockFrameCounter();
    
    UFUNCTION(BlueprintCallable)
    void LockDefaultAction();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentGPUTime();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentFPS();
    
    UFUNCTION(BlueprintCallable)
    void EmulateInputImmidiately(EUIInputKey Key);
    
    UFUNCTION(BlueprintCallable)
    void EmulateInput(int32 frame, EUIInputKey Key);
    
};

