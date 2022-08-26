#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseUserWidget.h"
#include "UIWindowElementConfigData.h"
#include "UIMenuWidget.generated.h"

class UUINodeConfigurationScript;
class UUIWindowElement;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMGUTIL_API UUIMenuWidget : public UBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FUIWindowElementConfigData> windowConfigMap;
    
    UUIMenuWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIWindowElement* GetWindowByName(const FString& windowNodeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllWindows(TArray<UUIWindowElement*>& outWindows);
    
    UFUNCTION(BlueprintCallable)
    UUIWindowElement* ConstructWindowWithConfigScript(const FString& NodeName, TSubclassOf<UUIWindowElement> windowClass, TSubclassOf<UUINodeConfigurationScript> configScriptClass);
    
    UFUNCTION(BlueprintCallable)
    UUIWindowElement* ConstructWindowByConfigMapKey(const FString& configMapKey, TSubclassOf<UUINodeConfigurationScript> configScriptClass);
    
    UFUNCTION(BlueprintCallable)
    UUIWindowElement* ConstructWindow(const FString& NodeName, TSubclassOf<UUIWindowElement> windowClass);
    
};

