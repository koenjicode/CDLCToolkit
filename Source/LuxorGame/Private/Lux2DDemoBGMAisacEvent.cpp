#include "Lux2DDemoBGMAisacEvent.h"

FLux2DDemoBGMAisacEvent::FLux2DDemoBGMAisacEvent() {
    this->Type = ELux2DDemoAisacType::Volume;
    this->StartValue = 0.00f;
    this->EndValue = 0.00f;
    this->frame = 0;
    this->index = 0;
    this->AutoStop = false;
}

