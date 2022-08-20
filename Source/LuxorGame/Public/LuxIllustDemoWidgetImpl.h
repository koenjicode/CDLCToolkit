#pragma once
#include "CoreMinimal.h"
#include "UIWidgetImpl.h"
#include "LuxIllustDemoWidgetImpl.generated.h"

UCLASS(Blueprintable)
class ULuxIllustDemoWidgetImpl : public UUIWidgetImpl {
    GENERATED_BODY()
public:
    ULuxIllustDemoWidgetImpl();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddToLog(const FText& Speaker, const FText& Message);
    
};

