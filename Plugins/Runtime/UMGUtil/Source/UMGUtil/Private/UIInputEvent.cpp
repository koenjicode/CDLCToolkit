#include "UIInputEvent.h"

FUIInputEvent::FUIInputEvent() {
    this->InputType = EUIInputType::KeyRepeat;
    this->ControllerId = 0;
    this->Key = EUIInputKey::Up;
}

