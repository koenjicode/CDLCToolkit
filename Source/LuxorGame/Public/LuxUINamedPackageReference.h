#pragma once
#include "CoreMinimal.h"
#include "LuxUIStringAssetReference.h"
#include "LuxUIDirectoryReference.h"
#include "LuxUIStringClassReference.h"
#include "LuxUINamedPackageReference.generated.h"

USTRUCT(BlueprintType)
struct FLuxUINamedPackageReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxUIDirectoryReference> DirectoryPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxUIStringAssetReference> AssetPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxUIStringClassReference> ClassPaths;
    
    LUXORGAME_API FLuxUINamedPackageReference();
};

