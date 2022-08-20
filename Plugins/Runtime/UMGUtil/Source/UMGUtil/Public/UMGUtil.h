#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UMGUtil.generated.h"

class UUIEventHub;
class UUIGameFlowManager;
class UUIDataStorage;
class UUIWidgetInputHandlingManager;
class UUIGameFlowAutomation;
class UUIInputHandler;

UCLASS(Blueprintable)
class UMGUTIL_API UUMGUtil : public UUIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIDataStorage* UIDataStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIGameFlowManager* UIGameFlowManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIGameFlowAutomation* UIGameFlowAutomation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIEventHub* UIEventHub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIInputHandler* UIInputHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIWidgetInputHandlingManager* UIWidgetInputHandlingManager;
    
    UUMGUtil();
    UFUNCTION(BlueprintCallable)
    void SetDirectInputEnabled(bool Enabled);
    
};

