#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxUIAssetLoaderHandle.h"
#include "OnUIAssetLoadCompletedDelegate.h"
#include "LuxUIAssetHub.generated.h"

class ULuxUIAssetLoader;
class ULuxUIAssetPaths;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIAssetHub : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FLuxUIAssetLoaderHandle> ChachedUIAssetLoaders;
    
public:
    ULuxUIAssetHub();
    UFUNCTION(BlueprintCallable)
    ULuxUIAssetLoader* RequestLoadByUIAssetPaths(ULuxUIAssetPaths* InUIAssetPaths);
    
    UFUNCTION(BlueprintCallable)
    ULuxUIAssetLoader* RequestLoadByUClassPtrs(FName InIdentifier, TArray<TAssetSubclassOf<UObject>> InUClassPtrs);
    
    UFUNCTION(BlueprintCallable)
    ULuxUIAssetLoader* RequestLoadByUClassPtr(FName InIdentifier, TAssetSubclassOf<UObject> InUClassPtr);
    
    UFUNCTION(BlueprintCallable)
    ULuxUIAssetLoader* RequestLoadByUAssetPtrs(FName InIdentifier, TArray<TAssetPtr<UObject>> InUAssetPtrs);
    
    UFUNCTION(BlueprintCallable)
    ULuxUIAssetLoader* RequestLoadByUAssetPtr(FName InIdentifier, TAssetPtr<UObject> InUAssetPtr);
    
    UFUNCTION(BlueprintCallable)
    ULuxUIAssetLoader* RequestLoadByUAssetPaths(FName InIdentifier, TArray<FString> InUAssetPaths);
    
    UFUNCTION(BlueprintCallable)
    ULuxUIAssetLoader* RequestLoadByUAssetPath(FName InIdentifier, const FString& InUAssetPath);
    
    UFUNCTION(BlueprintCallable)
    void RemoveUIAssetHubReceiver(UObject* InHubReceiver);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnUIAssetLoadCompleted(FOnUIAssetLoadCompleted InOnUIAssetLoadCompleted);
    
    UFUNCTION(BlueprintCallable)
    void OnUIAssetLoadCompleted_Profile(ULuxUIAssetLoader* UIAssetLoader);
    
    UFUNCTION(BlueprintCallable)
    void LoadProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadCompletedForCachedUIAssetLoader(FName InCacheBlockName) const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    TArray<ULuxUIAssetLoader*> GetUIAssetLoaderFromCache(FName InCacheBlockName);
    
    UFUNCTION(BlueprintCallable)
    ULuxUIAssetLoader* GetUIAssetLoaderByIdentifierFromCache(FName InCacheBlockName, FName InIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    void ClearCacheUIAssetLoader(FName InCacheBlockName);
    
    UFUNCTION(BlueprintCallable)
    void CachingUIAssetLoader(ULuxUIAssetLoader* InUIAssetLoader, FName InCacheBlockName);
    
    UFUNCTION(BlueprintCallable)
    void AddUIAssetHubReceiver(UObject* InHubReceiver);
    
    UFUNCTION(BlueprintCallable)
    void AddOnUIAssetLoadCompleted(FOnUIAssetLoadCompleted InOnUIAssetLoadCompleted);
    
};

