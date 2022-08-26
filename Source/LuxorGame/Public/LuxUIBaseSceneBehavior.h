#pragma once
#include "CoreMinimal.h"
#include "UIFsmBehavior.h"
#include "UIDataObject.h"
#include "LuxUIBaseSceneBehavior.generated.h"

class UBaseGameFlowScene;
class UBaseUserWidget;

UCLASS(Abstract, Blueprintable)
class LUXORGAME_API ULuxUIBaseSceneBehavior : public UUIFsmBehavior {
    GENERATED_BODY()
public:
    ULuxUIBaseSceneBehavior();
    UFUNCTION(BlueprintCallable)
    void OnRequestInputCommand(UBaseGameFlowScene* GameFlowScene, const FString& MenuName, UBaseUserWidget* menuWidget, UBaseUserWidget* TargetWidget, const FString& CommandName, const FUIDataObject& Param, int32 ControllerId);
    
};

