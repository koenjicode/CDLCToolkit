#include "LuxSkitMessageEvent.h"

FLuxSkitMessageEvent::FLuxSkitMessageEvent() {
    this->side = ELuxSkitSpeakerSide::Left;
    this->face = NULL;
    this->CaptureFaceType = ELuxSkitCaptureFaceType::Disable;
}

