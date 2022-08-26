#include "LuxCreationPartBase.h"

ULuxCreationPartBase::ULuxCreationPartBase() {
    this->Gender = ELuxGender::ELG_MALE;
    this->BreakType = ELuxPartsBreak::EPB_HIGH;
    this->bIsUnbreakable = false;
    this->SEMaterial = ELuxPartsSE::ESE_None;
}

