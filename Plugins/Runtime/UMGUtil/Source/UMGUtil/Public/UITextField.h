#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Styling/SlateColor.h"
#include "Components/Widget.h"
#include "Components/Widget.h"
#include "Fonts/SlateFontInfo.h"
#include "Components/Widget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UIGlowFontInfo.h"
#include "Framework/Text/TextLayout.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "UITextField.generated.h"

UCLASS(Blueprintable)
class UMGUTIL_API UUITextField : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableForceVolatile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConvertToSourceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetText DisplayTextDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetSlateColor ColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor ShadowColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIGlowFontInfo GlowFontInfo;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VAlign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineHeightPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoWrapText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoScrollText;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrapWithInvalidationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScrollSpeed;
    
    UUITextField();
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVAlign);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowOffset(FVector2D InShadowOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollSpeed(FVector2D InScrollSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetOriginalText(const FString& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetOpacity(float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredWidth(float InMinDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetMargin(FMargin InMargin);
    
    UFUNCTION(BlueprintCallable)
    void SetLineHeightPercentage(float InLineHeightPercentage);
    
    UFUNCTION(BlueprintCallable)
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    
    UFUNCTION(BlueprintCallable)
    void SetGlowFontInfo(FUIGlowFontInfo InGlowFontInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetFormatText(const FString& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSize(float InFontSize);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(FSlateFontInfo InFontInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayText(FText InDisplayText);
    
    UFUNCTION(BlueprintCallable)
    void SetConvertText(const FString& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FSlateColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoWrapText(bool InAutoWrapText);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoScrollText(bool InAutoScrollText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSourceText() const;
    
};

