#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UIDataObject.h"
#include "UIWidgetInputHandlingManager.generated.h"

UCLASS(Blueprintable)
class UUIWidgetInputHandlingManager : public UUIObject {
    GENERATED_BODY()
public:
    UUIWidgetInputHandlingManager();
private:
    UFUNCTION(BlueprintCallable)
    void HandleInputEvent(const FUIDataObject& EventData);
    
};

