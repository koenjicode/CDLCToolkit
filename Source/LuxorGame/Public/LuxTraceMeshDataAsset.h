#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxTraceMeshDataAsset.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxTraceMeshDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AnimBlurprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BoneNamePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneNum;
    
    ULuxTraceMeshDataAsset();
};

