#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "EUIInputKey.h"
#include "EUIInputType.h"
#include "UIWidgetInputBinder.generated.h"

class UBaseUserWidget;

UCLASS(Abstract, Blueprintable)
class UMGUTIL_API UUIWidgetInputBinder : public UUIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUIInputType> InputTypesToHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ControllerIdsToHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUIInputKey> InputKeysToHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDefaultPrevented;
    
    UUIWidgetInputBinder();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHandleInput(UBaseUserWidget* Widget, EUIInputType InputType, int32 ControllerId, EUIInputKey Key, bool IsDefaultPrevented, bool& bPreventDefault);
    
};

