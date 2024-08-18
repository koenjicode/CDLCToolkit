#include "LuxOffsetPartParent.h"

FLuxOffsetPartParent::FLuxOffsetPartParent() {
    this->Bone = ELuxOffsetParentBone::EPB_HEAD;
	this->DefaultTranslation = FVector(0, 0, 0);
	this->DefaultRotation = FVector(0, 0, 0);
}

