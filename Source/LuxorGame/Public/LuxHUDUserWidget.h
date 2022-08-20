#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "LuxHUDUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULuxHUDUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    ULuxHUDUserWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeVisibility(ESlateVisibility InVisibility);
    
};

