#include "LuxCreationPartsColor.h"

FLuxCreationPartsColor::FLuxCreationPartsColor() {
    this->Type = ELuxPartCategory::EEC_Nude;
	this->EditableFlags.AddDefaulted(4);
	this->PatternFlags.AddDefaulted(4);
	this->slots.AddDefaulted(4);
}

