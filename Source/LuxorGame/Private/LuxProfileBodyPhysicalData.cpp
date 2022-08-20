#include "LuxProfileBodyPhysicalData.h"

FLuxProfileBodyPhysicalData::FLuxProfileBodyPhysicalData() {
    this->bodyHeightType = ELuxBodyHeightType::Low;
    this->bodyFrameType = ELuxBodyFrameType::Slender;
    this->scaleTypeMuscleMass = ELuxMuscleType::EMT_Default;
}

