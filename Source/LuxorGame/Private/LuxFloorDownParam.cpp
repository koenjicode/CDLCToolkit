#include "LuxFloorDownParam.h"

FLuxFloorDownParam::FLuxFloorDownParam() {
    this->PlayerNo = 0;
    this->SmokeParts = 0;
    this->SmokeSize = 0.00f;
    this->FloorBreakPower = 0;
    this->Material = ELuxGroundMaterialType::EGM_STONE;
    this->FloorBreakType = ELuxFloorBreakType::EFB_Normal;
}

