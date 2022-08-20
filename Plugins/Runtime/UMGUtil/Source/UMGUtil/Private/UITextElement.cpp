#include "UITextElement.h"

class UUIEventListener;

UUIEventListener* UUITextElement::AddEventListener(const FString& EventType) {
    return NULL;
}

UUITextElement::UUITextElement() {
    this->bUseRawText = false;
    this->bEditedRawText = false;
}

