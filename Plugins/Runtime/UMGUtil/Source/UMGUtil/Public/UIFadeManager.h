#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
#include "UIFadeParam.h"
#include "UIFadeManager.generated.h"

class UBaseUserWidget;

UCLASS(Blueprintable)
class UMGUTIL_API UUIFadeManager : public UUIObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBaseUserWidget* FadeWidget;
    
public:
    UUIFadeManager();
    UFUNCTION(BlueprintCallable)
    void Play();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFadeAnimFinishedDelegate();
    
public:
    UFUNCTION(BlueprintCallable)
    void Delete();
    
    UFUNCTION(BlueprintCallable)
    void Create(const FUIFadeParam& InFadeParam);
    
};

