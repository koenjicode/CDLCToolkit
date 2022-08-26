#include "DMMaterialToTexture.h"

class UMaterialInterface;
class UTexture;
class UTextureRenderTarget2D;
class UCanvas;

UTexture* UDMMaterialToTexture::RequestTexture(UMaterialInterface* inMat, float InWidth, float inHeight, UTexture* inResolveTex) {
    return NULL;
}

UTexture* UDMMaterialToTexture::RequestCapture(UMaterialInterface* inMat, float InWidth, float inHeight, UTextureRenderTarget2D* inRT) {
    return NULL;
}

void UDMMaterialToTexture::OnReceiveUpdate(UCanvas* Canvas, int32 Width, int32 Height) {
}

UDMMaterialToTexture::UDMMaterialToTexture() {
    this->TempRT = NULL;
    this->TempResolved = NULL;
    this->TempMat = NULL;
}

