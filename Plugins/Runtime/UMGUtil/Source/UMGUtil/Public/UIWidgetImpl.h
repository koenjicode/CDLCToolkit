#pragma once
#include "CoreMinimal.h"
#include "BaseUserWidgetSubclassPrerequisites.h"
#include "UIObject.h"
#include "EUIInputKey.h"
#include "EUIInputType.h"
#include "UIDataObject.h"
#include "UIWidgetImpl.generated.h"

class UBaseUserWidget;
class UUIProperties;

UCLASS(Abstract, Blueprintable)
class UMGUTIL_API UUIWidgetImpl : public UUIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseUserWidget* OwnerBaseUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrerequisitesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseUserWidgetSubclassPrerequisites Prerequisites;
    
    UUIWidgetImpl();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(UBaseUserWidget* inWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestInputCommand(UBaseUserWidget* TargetWidget, const FString& CommandName, const FUIDataObject& Param, bool& bCancelBubbling, int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreInitialize(UBaseUserWidget* inWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMakeUIInputHandlingTargetChain(UBaseUserWidget* inWidget, const TArray<UBaseUserWidget*>& InChildInputHandlingTargets, TArray<UBaseUserWidget*>& OutChildInputHandlingTargets);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputHandlingEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputHandlingDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize(UBaseUserWidget* inWidget, UBaseUserWidget* ManagementOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHandleInput(EUIInputType InputType, int32 ControllerId, EUIInputKey Key, bool IsDefaultPrevented, bool& bPreventDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishFadeout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishFadein();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestruct(UBaseUserWidget* inWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateProperties(UUIProperties* Properties);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstruct(UBaseUserWidget* inWidget, UBaseUserWidget* ManagementOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeProperty(const FString& PropertyName, const FUIDataObject& Property);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyReadyToOpen(bool bOpen);
    
};

