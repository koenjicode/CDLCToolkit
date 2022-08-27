#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnLuxDemoManagerUpdateDelegate.h"
#include "LuxIllustDemoManager.generated.h"

class ULuxIllustDemoWidget;
class ULuxStoryDemoResourceDataAsset;

UCLASS(Blueprintable)
class ULuxIllustDemoManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxDemoManagerUpdate OnDemoManagerUpdate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULuxIllustDemoWidget* IllustDemoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxStoryDemoResourceDataAsset* DemoResource;
    
public:
    ULuxIllustDemoManager();
    UFUNCTION(BlueprintCallable)
    void WaitForEnd();
    
    UFUNCTION(BlueprintCallable)
    bool TogglePause(bool& CurrentPause);
    
    UFUNCTION(BlueprintCallable)
    void StopDemo();
    
    UFUNCTION(BlueprintCallable)
    void StartDemo(ULuxIllustDemoWidget* inWidget, ULuxStoryDemoResourceDataAsset* inDemoResource);
    
    UFUNCTION(BlueprintCallable)
    bool SkipEvent();
    
    UFUNCTION(BlueprintCallable)
    bool SkipDemo(bool Force);
    
    UFUNCTION(BlueprintCallable)
    void SetReadyToFinish(bool inReadyToFinish);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPausing();
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    void FadeoutBGM(int32 FadeFrame);
    
};

