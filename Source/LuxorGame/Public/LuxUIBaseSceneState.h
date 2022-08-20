#pragma once
#include "CoreMinimal.h"
#include "UIDataObject.h"
#include "UIFsmState.h"
#include "LuxUIBaseSceneState.generated.h"

class UBaseGameFlowScene;
class UBaseUserWidget;

UCLASS(Abstract, Blueprintable)
class LUXORGAME_API ULuxUIBaseSceneState : public UUIFsmState {
    GENERATED_BODY()
public:
    ULuxUIBaseSceneState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestInputCommand(UBaseGameFlowScene* GameFlowScene, const FString& MenuName, UBaseUserWidget* menuWidget, UBaseUserWidget* TargetWidget, const FString& CommandName, const FUIDataObject& Param, int32 ControllerId);
    
};

