#include "UITextField.h"

void UUITextField::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVAlign) {
}

void UUITextField::SetShadowOffset(FVector2D InShadowOffset) {
}

void UUITextField::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void UUITextField::SetScrollSpeed(FVector2D InScrollSpeed) {
}

void UUITextField::SetOriginalText(const FString& InText) {
}

void UUITextField::SetOpacity(float InOpacity) {
}

void UUITextField::SetMinDesiredWidth(float InMinDesiredWidth) {
}

void UUITextField::SetMargin(FMargin InMargin) {
}

void UUITextField::SetLineHeightPercentage(float InLineHeightPercentage) {
}

void UUITextField::SetJustification(TEnumAsByte<ETextJustify::Type> InJustification) {
}

void UUITextField::SetGlowFontInfo(FUIGlowFontInfo InGlowFontInfo) {
}

void UUITextField::SetFormatText(const FString& InText) {
}

void UUITextField::SetFontSize(float InFontSize) {
}

void UUITextField::SetFont(FSlateFontInfo InFontInfo) {
}

void UUITextField::SetDisplayText(FText InDisplayText) {
}

void UUITextField::SetConvertText(const FString& InText) {
}

void UUITextField::SetColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void UUITextField::SetAutoWrapText(bool InAutoWrapText) {
}

void UUITextField::SetAutoScrollText(bool InAutoScrollText) {
}

FString UUITextField::GetSourceText() const {
    return TEXT("");
}

UUITextField::UUITextField() {
    this->bEnableForceVolatile = false;
    this->bConvertToSourceText = false;
    this->FontSize = 24.00f;
    this->Justification = ETextJustify::Left;
    this->VAlign = VAlign_Top;
    this->MinDesiredWidth = 0.00f;
    this->LineHeightPercentage = 1.00f;
    this->AutoWrapText = false;
    this->AutoScrollText = false;
    this->bWrapWithInvalidationPanel = false;
}

