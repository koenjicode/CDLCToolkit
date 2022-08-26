#include "LuxProfileDBColorPaletteParameter.h"

FLuxProfileDBColorPaletteParameter::FLuxProfileDBColorPaletteParameter() {
    this->Type = ELuxCreationColorPaletteType::General;
    this->brightnessNum = 0;
    this->deltaS = 0.00f;
    this->deltaV = 0.00f;
    this->minV = 0.00f;
}

