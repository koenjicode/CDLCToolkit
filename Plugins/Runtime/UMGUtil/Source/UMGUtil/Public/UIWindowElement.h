#pragma once
#include "CoreMinimal.h"
#include "UIUserElement.h"
#include "UIDataObject.h"
#include "UIWindowElement.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMGUTIL_API UUIWindowElement : public UUIUserElement {
    GENERATED_BODY()
public:
    UUIWindowElement();
    UFUNCTION(BlueprintCallable)
    void ShowWindowInactively(int32 InputPriority);
    
    UFUNCTION(BlueprintCallable)
    void ShowWindow(int32 InputPriority);
    
    UFUNCTION(BlueprintCallable)
    bool ProvideData(const FUIDataObject& Data);
    
    UFUNCTION(BlueprintCallable)
    void OpenWindowSilently(int32 InputPriority);
    
    UFUNCTION(BlueprintCallable)
    void OpenWindowInactively(int32 InputPriority);
    
    UFUNCTION(BlueprintCallable)
    void OpenWindow(int32 InputPriority);
    
    UFUNCTION(BlueprintCallable)
    void HideWindow();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseWindow();
    
    UFUNCTION(BlueprintCallable)
    void ActivateWindow(int32 InputPriority);
    
};

