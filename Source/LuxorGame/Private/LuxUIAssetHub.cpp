#include "LuxUIAssetHub.h"

class ULuxUIAssetPaths;
class ULuxUIAssetLoader;
class UObject;

ULuxUIAssetLoader* ULuxUIAssetHub::RequestLoadByUIAssetPaths(ULuxUIAssetPaths* InUIAssetPaths) {
    return NULL;
}

ULuxUIAssetLoader* ULuxUIAssetHub::RequestLoadByUClassPtrs(FName InIdentifier, TArray<UClass*> InUClassPtrs) {
    return NULL;
}

ULuxUIAssetLoader* ULuxUIAssetHub::RequestLoadByUClassPtr(FName InIdentifier, UClass* InUClassPtr) {
    return NULL;
}

ULuxUIAssetLoader* ULuxUIAssetHub::RequestLoadByUAssetPtrs(FName InIdentifier, TArray<UObject*> InUAssetPtrs) {
    return NULL;
}

ULuxUIAssetLoader* ULuxUIAssetHub::RequestLoadByUAssetPtr(FName InIdentifier, UObject* InUAssetPtr) {
    return NULL;
}

ULuxUIAssetLoader* ULuxUIAssetHub::RequestLoadByUAssetPaths(FName InIdentifier, TArray<FString> InUAssetPaths) {
    return NULL;
}

ULuxUIAssetLoader* ULuxUIAssetHub::RequestLoadByUAssetPath(FName InIdentifier, const FString& InUAssetPath) {
    return NULL;
}

void ULuxUIAssetHub::RemoveUIAssetHubReceiver(UObject* InHubReceiver) {
}

void ULuxUIAssetHub::RemoveOnUIAssetLoadCompleted(FOnUIAssetLoadCompleted InOnUIAssetLoadCompleted) {
}

void ULuxUIAssetHub::OnUIAssetLoadCompleted_Profile(ULuxUIAssetLoader* UIAssetLoader) {
}

void ULuxUIAssetHub::LoadProfile() {
}

bool ULuxUIAssetHub::IsLoadCompletedForCachedUIAssetLoader(FName InCacheBlockName) const {
    return false;
}

void ULuxUIAssetHub::Initialize() {
}

TArray<ULuxUIAssetLoader*> ULuxUIAssetHub::GetUIAssetLoaderFromCache(FName InCacheBlockName) {
    return TArray<ULuxUIAssetLoader*>();
}

ULuxUIAssetLoader* ULuxUIAssetHub::GetUIAssetLoaderByIdentifierFromCache(FName InCacheBlockName, FName InIdentifier) {
    return NULL;
}

void ULuxUIAssetHub::Finalize() {
}

void ULuxUIAssetHub::ClearCacheUIAssetLoader(FName InCacheBlockName) {
}

void ULuxUIAssetHub::CachingUIAssetLoader(ULuxUIAssetLoader* InUIAssetLoader, FName InCacheBlockName) {
}

void ULuxUIAssetHub::AddUIAssetHubReceiver(UObject* InHubReceiver) {
}

void ULuxUIAssetHub::AddOnUIAssetLoadCompleted(FOnUIAssetLoadCompleted InOnUIAssetLoadCompleted) {
}

ULuxUIAssetHub::ULuxUIAssetHub() {
}

