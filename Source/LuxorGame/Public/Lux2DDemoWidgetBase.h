#pragma once
#include "CoreMinimal.h"
#include "BaseUserWidget.h"
#include "ELux2DDemoShakeType.h"
#include "ELux2DDemoFlashType.h"
#include "ELux2DDemoFadeType.h"
#include "Lux2DDemoWidgetBase.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ULux2DDemoWidgetBase : public UBaseUserWidget {
    GENERATED_BODY()
public:
    ULux2DDemoWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopDemoAnimation(const FString& AnimationName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float StartShake(ELux2DDemoShakeType Type, float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float StartFlash(ELux2DDemoFlashType Type, int32 Num, float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float StartFade(ELux2DDemoFadeType Type, float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float StartDemoAnimation(const FString& AnimationName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseUserWidget* GetSubBaseUserWidget(const FString& WidgetName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ChangeBG(UTexture2D* bg, bool bMatchSize, float FadeSpeed);
    
};

