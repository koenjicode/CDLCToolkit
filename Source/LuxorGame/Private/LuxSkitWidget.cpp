#include "LuxSkitWidget.h"

class UTexture2D;

void ULuxSkitWidget::SetupBranch_Implementation(const TArray<FLuxSkitWidgetBranchInfo>& Branches) {
}

void ULuxSkitWidget::SetFace_Implementation(UTexture2D* face, ELuxSkitSpeakerSide side) {
}

void ULuxSkitWidget::SetBranchCursorPosition_Implementation(int32 Position) {
}

float ULuxSkitWidget::FadeOutMessage_Implementation() {
    return 0.0f;
}

float ULuxSkitWidget::FadeOutDialog_Implementation() {
    return 0.0f;
}

float ULuxSkitWidget::FadeOutBranch_Implementation() {
    return 0.0f;
}

float ULuxSkitWidget::FadeInMessage_Implementation(const FString& Message, ELuxSkitSpeakerSide side, UTexture2D* FaceTex) {
    return 0.0f;
}

float ULuxSkitWidget::FadeInDialog_Implementation(const FString& Message) {
    return 0.0f;
}

float ULuxSkitWidget::FadeInBranch_Implementation(const TArray<FLuxSkitWidgetBranchInfo>& Branches) {
    return 0.0f;
}

float ULuxSkitWidget::CutOutMessage_Implementation(ELuxSkitSpeakerSide side) {
    return 0.0f;
}

float ULuxSkitWidget::CutOutBranch_Implementation(ELuxSkitSpeakerSide side) {
    return 0.0f;
}

float ULuxSkitWidget::CutInMessage_Implementation(const FString& Speaker, const FString& Message, ELuxSkitSpeakerSide side, UTexture2D* FaceTex) {
    return 0.0f;
}

float ULuxSkitWidget::CutInBranch_Implementation(const FString& Speaker, const TArray<FLuxSkitWidgetBranchInfo>& Branches, ELuxSkitSpeakerSide side, UTexture2D* FaceTex) {
    return 0.0f;
}

void ULuxSkitWidget::AddToLog_Implementation(const FText& Speaker, const FText& Message, bool bChangeColor) {
}

ULuxSkitWidget::ULuxSkitWidget() {
}

