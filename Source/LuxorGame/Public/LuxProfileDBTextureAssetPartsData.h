#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxRace.h"
#include "ELuxGender.h"
#include "LuxProfileDBTextureAssetPartsData.generated.h"

class ULuxCreationTextureAsset;
class UTexture;

USTRUCT(BlueprintType)
struct FLuxProfileDBTextureAssetPartsData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxCreationTextureAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locLabelTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxRace> disallowedRacialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dlcId;
    
    LUXORGAME_API FLuxProfileDBTextureAssetPartsData();
};

