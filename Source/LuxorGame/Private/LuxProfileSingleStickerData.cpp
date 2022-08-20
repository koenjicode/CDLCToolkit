#include "LuxProfileSingleStickerData.h"

FLuxProfileSingleStickerData::FLuxProfileSingleStickerData() {
    this->mode = ELuxStickerMode::ESM_Orthogonal;
    this->guide = ELuxStickerGuide::ESG_Head;
    this->Size = 0;
    this->angle = 0;
    this->camRotZ = 0.00f;
    this->camRotY = 0.00f;
    this->offsetX = 0.00f;
    this->offsetY = 0.00f;
    this->flipHorizontal = false;
    this->flipVertical = false;
    this->paramType = ELuxCreationStickerParamType::Sticker1;
}

