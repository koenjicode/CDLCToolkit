#include "LuxIllustDemoShakeCutEvent.h"

FLuxIllustDemoShakeCutEvent::FLuxIllustDemoShakeCutEvent() {
    this->Type = ELuxIllustDemoShakeCutType::ShakeS;
    this->side = ELuxIllustDemoCutSide::Left;
    this->Speed = 0.00f;
    this->Delay = 0;
    this->DelayJA = 0;
}

