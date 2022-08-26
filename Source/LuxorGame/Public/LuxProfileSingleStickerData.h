#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationStickerParamType.h"
#include "ELuxStickerGuide.h"
#include "LuxProfileDataSerializable.h"
#include "LuxProfileSingleColorSlotData.h"
#include "ELuxStickerMode.h"
#include "LuxProfileSingleStickerData.generated.h"

class ULuxCreationTextureAsset;

USTRUCT(BlueprintType)
struct FLuxProfileSingleStickerData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<ULuxCreationTextureAsset> sticker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxProfileSingleColorSlotData> colors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxStickerMode mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxStickerGuide guide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float camRotZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float camRotY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float offsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float offsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool flipHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool flipVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCreationStickerParamType paramType;
    
    LUXORGAME_API FLuxProfileSingleStickerData();
};

