#include "LuxWindowsVirtualKeyboardObject.h"

void ULuxWindowsVirtualKeyboardObject::OnTextChangedHandler(const FText& Text) {
}

void ULuxWindowsVirtualKeyboardObject::OnCompletionHandler(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

ULuxWindowsVirtualKeyboardObject::ULuxWindowsVirtualKeyboardObject() {
    this->KeyboardWidget = NULL;
    this->InputText = NULL;
}

