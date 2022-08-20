#include "UIWidgetAnimationChain.h"

class UObject;
class UWidgetAnimation;

void UUIWidgetAnimationChain::Stop() {
}

void UUIWidgetAnimationChain::OnUIWidgetAnimationFinished(UObject* InObject, UWidgetAnimation* InWidgetAnimation) {
}

UUIWidgetAnimationChain::UUIWidgetAnimationChain() {
    this->AnimationFinishCount = 0;
}

