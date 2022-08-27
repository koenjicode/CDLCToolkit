#pragma once
#include "CoreMinimal.h"
#include "OnSkitBranchDecidedDelegate.h"
#include "UObject/Object.h"
#include "OnLuxSkitManagerUpdateDelegate.h"
#include "LuxSkitManager.generated.h"

class ULuxStoryDemoResourceDataAsset;
class ULuxSkitWidget;

UCLASS(Blueprintable)
class ULuxSkitManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxSkitManagerUpdate OnSkitManagerUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkitBranchDecided OnSkitBranchDecided;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULuxSkitWidget* SkitWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxStoryDemoResourceDataAsset* DemoResource;
    
public:
    ULuxSkitManager();
    UFUNCTION(BlueprintCallable)
    bool TogglePause();
    
    UFUNCTION(BlueprintCallable)
    void StopSkit();
    
    UFUNCTION(BlueprintCallable)
    void StartSkit(ULuxSkitWidget* inWidget, ULuxStoryDemoResourceDataAsset* inDemoResource);
    
    UFUNCTION(BlueprintCallable)
    void Skip();
    
    UFUNCTION(BlueprintCallable)
    void SetReadyToFinish(bool inReadyToFinish);
    
    UFUNCTION(BlueprintCallable)
    void SetDecidedBranchIndex(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSkipFrame(int32 inFrame);
    
    UFUNCTION(BlueprintCallable)
    void NextMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPausing();
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSkip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowLog() const;
    
};

