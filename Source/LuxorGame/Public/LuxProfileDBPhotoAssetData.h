#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "LuxProfileDBPhotoAssetData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FLuxProfileDBPhotoAssetData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locNameTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Asset;
    
    LUXORGAME_API FLuxProfileDBPhotoAssetData();
};

