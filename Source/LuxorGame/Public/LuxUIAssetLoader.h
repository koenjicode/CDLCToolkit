#pragma once
#include "CoreMinimal.h"
#include "LuxLoadableBase.h"
#include "LuxUIAssetLoader.generated.h"

class ULuxUIAssetPaths;
class UObject;
class ULuxUIAssetLoader;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIAssetLoader : public ULuxLoadableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxUIAssetPaths* UIAssetPaths;
    
    ULuxUIAssetLoader();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> GetAssets();
    
    UFUNCTION(BlueprintCallable)
    UObject* GetAsset(FName InAssetName);
    
    UFUNCTION(BlueprintCallable)
    static ULuxUIAssetLoader* CreateUIAssetLoader(ULuxUIAssetPaths* InUIAssetPaths);
    
};

