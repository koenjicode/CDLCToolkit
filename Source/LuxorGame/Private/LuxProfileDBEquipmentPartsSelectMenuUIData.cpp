#include "LuxProfileDBEquipmentPartsSelectMenuUIData.h"

FLuxProfileDBEquipmentPartsSelectMenuUIData::FLuxProfileDBEquipmentPartsSelectMenuUIData() {
    this->Category = ELuxPartCategory::EEC_Nude;
    this->nextDataTableId = ELuxProfileDatabaseTableId::CreationType;
    this->cameraFocusOn = ELuxPartSlot::EPS_Mandatory_Neck;
    this->canPositioning = false;
}

