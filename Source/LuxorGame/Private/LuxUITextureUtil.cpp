#include "LuxUITextureUtil.h"

class UMaterialInstanceDynamic;
class UTexture2D;
class UTextureRenderTarget2D;
class UTexture;
class UObject;

void ULuxUITextureUtil::ResizeImageWithParam(const FLuxUITextureParam& InParam, int32 NewSizeX, int32 NewSizeY, FLuxUITextureParam& outParam) {
}

bool ULuxUITextureUtil::ResizeImage(TArray<FColor>& OutColors, const TArray<FColor>& InColors, int32 OriginalWidth, int32 OriginalHeight, int32 NewWidth, int32 NewHeight) {
    return false;
}

bool ULuxUITextureUtil::IsValidForLuxUITextureParam(const FLuxUITextureParam& InParam) {
    return false;
}

void ULuxUITextureUtil::DownscaleImageFromParam(const FLuxUITextureParam& InParam, int32 DownScaleFactor, FLuxUITextureParam& NewParam) {
}

void ULuxUITextureUtil::DownscaleImage(TArray<FColor>& OutColors, const TArray<FColor>& InColors, int32 OriginalWidth, int32 OriginalHeight, int32 DownScaleFactor) {
}

UMaterialInstanceDynamic* ULuxUITextureUtil::CreateThumbnailByIds(UTexture2D* InThumbnail, int32 InBackGround, int32 InBackFrame, int32 InFrontFrame) {
    return NULL;
}

UMaterialInstanceDynamic* ULuxUITextureUtil::CreateThumbnail(UTexture2D* InThumbnail, UTexture2D* InBackGround, UTexture2D* InBackFrame, UTexture2D* InFrontFrame) {
    return NULL;
}

FLuxUITextureParam ULuxUITextureUtil::CreateTextureParamFromUIDataObject(FUIDataObject InObject) {
    return FLuxUITextureParam{};
}

FLuxUITextureParam ULuxUITextureUtil::CreateTextureParamFromTexture2D(UTexture2D* inTexture) {
    return FLuxUITextureParam{};
}

FLuxUITextureParam ULuxUITextureUtil::CreateTextureParamFromRenderTarget2DApplyUVInfo(UTextureRenderTarget2D* inTexture, const FVector2D& InStartUV, const FVector2D& InEndUV) {
    return FLuxUITextureParam{};
}

FLuxUITextureParam ULuxUITextureUtil::CreateTextureParamFromRenderTarget2D(UTextureRenderTarget2D* inTexture) {
    return FLuxUITextureParam{};
}

UTexture* ULuxUITextureUtil::CreateTextureFromStringAsset(const FStringAssetReference& AssetReference) {
    return NULL;
}

UTexture2D* ULuxUITextureUtil::CreateTexture2DFromRenderTarget2D(UTextureRenderTarget2D* inTexture) {
    return NULL;
}

UTexture2D* ULuxUITextureUtil::CreateTexture2DFromParam(const FLuxUITextureParam& InParam) {
    return NULL;
}

UTexture2D* ULuxUITextureUtil::CreateTexture2DFromCompressedImage(ELuxorCompressedImageFormat ImageFormat, const TArray<uint8>& ImageCompressedData) {
    return NULL;
}

UTextureRenderTarget2D* ULuxUITextureUtil::CreateSizeAdjustedRenderTargetTexture2DWithBaseResolutionFullHD(UObject* WorldContext, int32 Width, int32 Height) {
    return NULL;
}

UMaterialInstanceDynamic* ULuxUITextureUtil::CreateBannedSafeThumbnail() {
    return NULL;
}

ULuxUITextureUtil::ULuxUITextureUtil() {
}

