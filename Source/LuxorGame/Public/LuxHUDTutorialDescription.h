#pragma once
#include "CoreMinimal.h"
#include "LuxHUDUserWidget.h"
#include "LuxHUDTutorialDescription.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULuxHUDTutorialDescription : public ULuxHUDUserWidget {
    GENERATED_BODY()
public:
    ULuxHUDTutorialDescription();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTaskUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTaskText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDescriptionText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComplementText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionCompleted(int32 index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistComplementText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTutorialPartId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTitleText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMissionText(int32 index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMissionProgress(int32 index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetExplanationText() const;
    
};

