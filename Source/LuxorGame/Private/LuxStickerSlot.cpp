#include "LuxStickerSlot.h"

FLuxStickerSlot::FLuxStickerSlot() {
    this->mode = ELuxStickerMode::ESM_Orthogonal;
    this->guide = ELuxStickerGuide::ESG_Head;
    this->StickerSize = 0;
    this->StickerRot = 0.00f;
    this->camRotZ = 0.00f;
    this->camRotY = 0.00f;
    this->offsetX = 0.00f;
    this->offsetY = 0.00f;
    this->bFlip_H = false;
    this->bFlip_V = false;
}

