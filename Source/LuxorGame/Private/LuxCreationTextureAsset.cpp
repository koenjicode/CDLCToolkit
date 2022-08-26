#include "LuxCreationTextureAsset.h"

ULuxCreationTextureAsset::ULuxCreationTextureAsset() {
    this->Color = NULL;
    this->Mask = NULL;
    this->Normal = NULL;
    this->EditableFlags.AddDefaulted(4);
    this->DefaultColor.AddDefaulted(4);
    this->SizeMax = 1.00f;
    this->SizeMin = 1.00f;
    this->AspectRate = 1.00f;
    this->UIDefaultSize = 0;
}

