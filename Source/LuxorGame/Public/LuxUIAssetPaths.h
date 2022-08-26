#pragma once
#include "CoreMinimal.h"
#include "LuxAssetPathsBase.h"
#include "LuxUINamedPackageReference.h"
#include "LuxUIAssetPaths.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIAssetPaths : public ULuxAssetPathsBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxUINamedPackageReference> NamedPackages;
    
    ULuxUIAssetPaths();
};

