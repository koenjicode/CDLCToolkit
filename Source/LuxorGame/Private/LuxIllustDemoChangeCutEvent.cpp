#include "LuxIllustDemoChangeCutEvent.h"

FLuxIllustDemoChangeCutEvent::FLuxIllustDemoChangeCutEvent() {
    this->Type = ELuxIllustDemoChangeCutType::CutIn;
    this->side = ELuxIllustDemoCutSide::Left;
    this->Speed = 0.00f;
    this->Delay = 0;
    this->DelayJA = 0;
}

