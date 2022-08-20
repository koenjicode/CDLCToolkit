#include "LuxIllustDemoWidget.h"

class UTexture2D;

void ULuxIllustDemoWidget::ToggleSubtitleRootAppearance(bool& CurrentAppearance) {
}

void ULuxIllustDemoWidget::ShowText_Implementation(const FString& Speaker, const FString& Message) {
}

float ULuxIllustDemoWidget::ShakeCut_Implementation(ELuxIllustDemoShakeCutType Type, ELuxIllustDemoCutSide side, float Speed) {
    return 0.0f;
}

void ULuxIllustDemoWidget::SetSubtitleRootAppearance(bool Appearance) {
}

void ULuxIllustDemoWidget::SetSubtitleAppearance_Implementation(bool Appearance) {
}

float ULuxIllustDemoWidget::SetCut_Implementation(UTexture2D* ImageLeft, UTexture2D* ImageRight, UTexture2D* ImageCenter, float FadeSpeed) {
    return 0.0f;
}

float ULuxIllustDemoWidget::SetBGColor_Implementation(const FLinearColor& Color, float Speed, bool Front) {
    return 0.0f;
}

void ULuxIllustDemoWidget::OnSkipEvent_Implementation() {
}

void ULuxIllustDemoWidget::OnPause_Implementation(bool IsPaused) {
}

void ULuxIllustDemoWidget::HideText_Implementation() {
}

float ULuxIllustDemoWidget::FadeOutSubtitle_Implementation(float Speed) {
    return 0.0f;
}

float ULuxIllustDemoWidget::ChangeSubImage_Implementation(UTexture2D* Image, bool bMatchSize, float FadeSpeed) {
    return 0.0f;
}

float ULuxIllustDemoWidget::ChangeCut_Implementation(ELuxIllustDemoChangeCutType Type, ELuxIllustDemoCutSide side, float Speed) {
    return 0.0f;
}

void ULuxIllustDemoWidget::AddToLog_Implementation(const FText& Speaker, const FText& Message) {
}

ULuxIllustDemoWidget::ULuxIllustDemoWidget() {
}

