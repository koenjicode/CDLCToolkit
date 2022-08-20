#include "LuxUINotification.h"

class UObject;
class UWidgetAnimation;

void ULuxUINotification::OnAnimationFinished_wait(UObject* InObject, UWidgetAnimation* InWidgetAnimation) {
}

void ULuxUINotification::OnAnimationFinished_fadeout(UObject* InObject, UWidgetAnimation* InWidgetAnimation) {
}

void ULuxUINotification::OnAnimationFinished_fadein(UObject* InObject, UWidgetAnimation* InWidgetAnimation) {
}

ULuxUINotification::ULuxUINotification() {
    this->UINotify = NULL;
    this->NotifyItems = NULL;
}

