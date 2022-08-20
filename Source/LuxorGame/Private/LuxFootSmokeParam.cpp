#include "LuxFootSmokeParam.h"

FLuxFootSmokeParam::FLuxFootSmokeParam() {
    this->SmokeType = ELuxFootSmokeType::EFS_Normal;
    this->PlayerNo = 0;
    this->SmokeParts = 0;
    this->SmokeSize = 0.00f;
    this->CountMax = 0.00f;
    this->CreateCount = 0.00f;
    this->SpreadRadius = 0.00f;
    this->SmokeNum = 0;
    this->Material = ELuxGroundMaterialType::EGM_STONE;
}

