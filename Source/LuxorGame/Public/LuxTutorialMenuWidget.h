#pragma once
#include "CoreMinimal.h"
#include "UIMenuWidget.h"
#include "LuxTutorialMenuWidget.generated.h"

class UUIWindowElement;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULuxTutorialMenuWidget : public UUIMenuWidget {
    GENERATED_BODY()
public:
    ULuxTutorialMenuWidget();
    UFUNCTION(BlueprintCallable)
    UUIWindowElement* openTutorial(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    void closeTutorial();
    
};

