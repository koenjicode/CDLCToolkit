#pragma once
#include "CoreMinimal.h"
#include "Lux2DDemoWidgetBase.h"
#include "UObject/NoExportTypes.h"
#include "ELuxIllustDemoShakeCutType.h"
#include "ELuxIllustDemoChangeCutType.h"
#include "ELuxIllustDemoCutSide.h"
#include "LuxIllustDemoWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ULuxIllustDemoWidget : public ULux2DDemoWidgetBase {
    GENERATED_BODY()
public:
    ULuxIllustDemoWidget();
    UFUNCTION(BlueprintCallable)
    void ToggleSubtitleRootAppearance(bool& CurrentAppearance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowText(const FString& Speaker, const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ShakeCut(ELuxIllustDemoShakeCutType Type, ELuxIllustDemoCutSide side, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleRootAppearance(bool Appearance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSubtitleAppearance(bool Appearance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float SetCut(UTexture2D* ImageLeft, UTexture2D* ImageRight, UTexture2D* ImageCenter, float FadeSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float SetBGColor(const FLinearColor& Color, float Speed, bool Front);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSkipEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPause(bool IsPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float FadeOutSubtitle(float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ChangeSubImage(UTexture2D* Image, bool bMatchSize, float FadeSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ChangeCut(ELuxIllustDemoChangeCutType Type, ELuxIllustDemoCutSide side, float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddToLog(const FText& Speaker, const FText& Message);
    
};

