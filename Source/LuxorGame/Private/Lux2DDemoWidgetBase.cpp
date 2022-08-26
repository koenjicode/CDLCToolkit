#include "Lux2DDemoWidgetBase.h"

class UTexture2D;
class UBaseUserWidget;

void ULux2DDemoWidgetBase::StopDemoAnimation_Implementation(const FString& AnimationName) {
}

float ULux2DDemoWidgetBase::StartShake_Implementation(ELux2DDemoShakeType Type, float Speed) {
    return 0.0f;
}

float ULux2DDemoWidgetBase::StartFlash_Implementation(ELux2DDemoFlashType Type, int32 Num, float Speed) {
    return 0.0f;
}

float ULux2DDemoWidgetBase::StartFade_Implementation(ELux2DDemoFadeType Type, float Speed) {
    return 0.0f;
}

float ULux2DDemoWidgetBase::StartDemoAnimation_Implementation(const FString& AnimationName) {
    return 0.0f;
}

UBaseUserWidget* ULux2DDemoWidgetBase::GetSubBaseUserWidget(const FString& WidgetName) {
    return NULL;
}

float ULux2DDemoWidgetBase::ChangeBG_Implementation(UTexture2D* bg, bool bMatchSize, float FadeSpeed) {
    return 0.0f;
}

ULux2DDemoWidgetBase::ULux2DDemoWidgetBase() {
}

