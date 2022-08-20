#include "UIWidgetAnimation.h"

class UBaseUserWidget;

void UUIWidgetAnimation::Stop(UBaseUserWidget* inWidget) {
}

void UUIWidgetAnimation::Play(UBaseUserWidget* inWidget, const FUIWidgetAnimationPlayParam& InParam) {
}

void UUIWidgetAnimation::OnAnimationFinishedDelegate() {
}

UUIWidgetAnimation::UUIWidgetAnimation() {
    this->WidgetAnimation = NULL;
}

