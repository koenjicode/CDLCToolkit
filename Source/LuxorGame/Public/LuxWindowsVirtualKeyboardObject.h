#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Types/SlateEnums.h"
#include "LuxWindowsVirtualKeyboardObject.generated.h"

class UEditableText;
class UUserWidget;

UCLASS(Blueprintable)
class ULuxWindowsVirtualKeyboardObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* KeyboardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* InputText;
    
public:
    ULuxWindowsVirtualKeyboardObject();
private:
    UFUNCTION(BlueprintCallable)
    void OnTextChangedHandler(const FText& Text);
    
    UFUNCTION()
    void OnCompletionHandler(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
};

