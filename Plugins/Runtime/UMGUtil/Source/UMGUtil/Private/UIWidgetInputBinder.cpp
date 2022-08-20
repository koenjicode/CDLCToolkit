#include "UIWidgetInputBinder.h"

class UBaseUserWidget;

void UUIWidgetInputBinder::OnHandleInput_Implementation(UBaseUserWidget* Widget, EUIInputType InputType, int32 ControllerId, EUIInputKey Key, bool IsDefaultPrevented, bool& bPreventDefault) {
}

UUIWidgetInputBinder::UUIWidgetInputBinder() {
    this->bIgnoreDefaultPrevented = true;
}

