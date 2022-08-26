#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UIDataObject.h"
#include "UIWidgetPropertyBinder.generated.h"

class UBaseUserWidget;

UCLASS(Abstract, Blueprintable)
class UMGUTIL_API UUIWidgetPropertyBinder : public UUIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PropertyNamesToListen;
    
    UUIWidgetPropertyBinder();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeProperty(UBaseUserWidget* Widget, const FString& PropertyName, const FUIDataObject& Property);
    
};

