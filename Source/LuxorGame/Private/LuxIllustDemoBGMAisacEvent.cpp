#include "LuxIllustDemoBGMAisacEvent.h"

FLuxIllustDemoBGMAisacEvent::FLuxIllustDemoBGMAisacEvent() {
    this->Type = ELuxIllustDemoAisacType::Volume;
    this->StartValue = 0.00f;
    this->EndValue = 0.00f;
    this->frame = 0;
    this->index = 0;
    this->AutoStop = false;
}

