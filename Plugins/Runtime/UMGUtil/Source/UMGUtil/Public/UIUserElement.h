#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Blueprint/UserWidget.h"
#include "EUIAnimationControl.h"
#include "UINode.h"
#include "UIAnimationContainer.h"
#include "UIEventListenerUnit.h"
#include "UIDataObject.h"
#include "UIUserElement.generated.h"

class UUINodeConfigurationScript;
class UUIAnimationEventHandler;
class UUINodeStyle;
class UUIEventListener;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMGUTIL_API UUIUserElement : public UUserWidget, public IUINode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UINodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUINodeConfigurationScript> UINodeConfigurationScriptClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> UINodeInitialProperties;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIEventListenerUnit> EventListenerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIAnimationControl, UUIAnimationEventHandler*> animationEventHandlerMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UUINodeStyle*> StyleMap;
    
    UUIUserElement();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeElement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetUIAnimation(FUIAnimationContainer& animContainer) const;
    
    UFUNCTION(BlueprintCallable)
    void DispatchTypedEvent(const FString& EventType, FUIDataObject EventParam, bool bubbles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIEventListener* AddEventListener(const FString& EventType);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool setPropertyValue(const FString& Path, const FUIDataObject& Value) override PURE_VIRTUAL(setPropertyValue, return false;);
    
    UFUNCTION(BlueprintCallable)
    FUIDataObject getPropertyValue(const FString& Path) override PURE_VIRTUAL(getPropertyValue, return FUIDataObject{};);
    
};

