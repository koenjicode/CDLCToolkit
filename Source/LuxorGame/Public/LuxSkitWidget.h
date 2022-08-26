#pragma once
#include "CoreMinimal.h"
#include "Lux2DDemoWidgetBase.h"
#include "LuxSkitWidgetBranchInfo.h"
#include "ELuxSkitSpeakerSide.h"
#include "LuxSkitWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ULuxSkitWidget : public ULux2DDemoWidgetBase {
    GENERATED_BODY()
public:
    ULuxSkitWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupBranch(const TArray<FLuxSkitWidgetBranchInfo>& Branches);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFace(UTexture2D* face, ELuxSkitSpeakerSide side);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBranchCursorPosition(int32 Position);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float FadeOutMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float FadeOutDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float FadeOutBranch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float FadeInMessage(const FString& Message, ELuxSkitSpeakerSide side, UTexture2D* FaceTex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float FadeInDialog(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float FadeInBranch(const TArray<FLuxSkitWidgetBranchInfo>& Branches);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CutOutMessage(ELuxSkitSpeakerSide side);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CutOutBranch(ELuxSkitSpeakerSide side);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CutInMessage(const FString& Speaker, const FString& Message, ELuxSkitSpeakerSide side, UTexture2D* FaceTex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CutInBranch(const FString& Speaker, const TArray<FLuxSkitWidgetBranchInfo>& Branches, ELuxSkitSpeakerSide side, UTexture2D* FaceTex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddToLog(const FText& Speaker, const FText& Message, bool bChangeColor);
    
};

