#include "LuxCreationTextureSpec.h"

class UTexture;

UTexture* ULuxCreationTextureSpec::PrintTexture(const FLuxTexturePrintParam& InParam) {
    return NULL;
}

ULuxCreationTextureSpec::ULuxCreationTextureSpec() {
    this->TexturePrinters.AddDefaulted(1);
}

