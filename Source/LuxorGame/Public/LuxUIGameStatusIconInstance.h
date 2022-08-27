#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "LuxUIGameStatusIconInstance.generated.h"

class UBaseUserWidget;
class UWorld;
class UObject;
class UWidgetAnimation;

UCLASS(Blueprintable)
class ULuxUIGameStatusIconInstance : public UUIObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBaseUserWidget* IconWidget;
    
public:
    ULuxUIGameStatusIconInstance();
private:
    UFUNCTION(BlueprintCallable)
    void OnPreLoadMap(const FString& InLoadMapName);
    
    UFUNCTION(BlueprintCallable)
    void OnPostLoadMap(UWorld* inWorld);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinished_fadeout(UObject* InObject, UWidgetAnimation* InWidgetAnimation);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinished_fadein(UObject* InObject, UWidgetAnimation* InWidgetAnimation);
    
};

