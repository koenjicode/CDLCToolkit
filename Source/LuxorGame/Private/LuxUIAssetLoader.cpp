#include "LuxUIAssetLoader.h"

class UObject;
class ULuxUIAssetPaths;
class ULuxUIAssetLoader;

bool ULuxUIAssetLoader::IsCompleted() const {
    return false;
}

TArray<UObject*> ULuxUIAssetLoader::GetAssets() {
    return TArray<UObject*>();
}

UObject* ULuxUIAssetLoader::GetAsset(FName InAssetName) {
    return NULL;
}

ULuxUIAssetLoader* ULuxUIAssetLoader::CreateUIAssetLoader(ULuxUIAssetPaths* InUIAssetPaths) {
    return NULL;
}

ULuxUIAssetLoader::ULuxUIAssetLoader() {
    this->UIAssetPaths = NULL;
}

