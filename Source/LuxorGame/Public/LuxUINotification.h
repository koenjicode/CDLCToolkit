#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "LuxUINotification.generated.h"

class UWidgetAnimation;
class UUserWidget;
class UVerticalBox;
class UObject;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUINotification : public UUIObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* UINotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* NotifyItems;
    
public:
    ULuxUINotification();
private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinished_wait(UObject* InObject, UWidgetAnimation* InWidgetAnimation);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinished_fadeout(UObject* InObject, UWidgetAnimation* InWidgetAnimation);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinished_fadein(UObject* InObject, UWidgetAnimation* InWidgetAnimation);
    
};

