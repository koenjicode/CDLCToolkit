#include "LuxCreationImportedPart.h"

ULuxCreationImportedPart::ULuxCreationImportedPart() {
    this->Category = ELuxPartCategory::EEC_Nude;
    this->Priority = ELuxPartPriority::ENUM_MAX;
    this->bIsUnique = false;
    this->bDisableBreastSwing = false;
    this->ColorEditFlags.AddDefaulted(4);
    this->UnderwearColorFlags.AddDefaulted(4);
}

