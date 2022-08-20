#include "LuxProfileDBBodySelectMenuUIData.h"

FLuxProfileDBBodySelectMenuUIData::FLuxProfileDBBodySelectMenuUIData() {
    this->Key = ELuxCreationMenuBodyItem::RacialAndGender;
    this->cameraFocusOn = ELuxPartSlot::EPS_Mandatory_Neck;
    this->nextDataTableId = ELuxProfileDatabaseTableId::CreationType;
    this->Disabled = false;
}

