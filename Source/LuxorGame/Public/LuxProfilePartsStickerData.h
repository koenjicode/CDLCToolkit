#pragma once
#include "CoreMinimal.h"
#include "LuxProfileStickerSlotListData.h"
#include "LuxProfileDataSerializable.h"
#include "LuxProfilePartsStickerData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfilePartsStickerData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileStickerSlotListData stickerSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileStickerSlotListData stickerHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileStickerSlotListData stickerMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileStickerSlotListData stickerInner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileStickerSlotListData stickerUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileStickerSlotListData stickerOuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileStickerSlotListData stickerLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileStickerSlotListData stickerWaist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileStickerSlotListData stickerNeck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileStickerSlotListData stickerArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileStickerSlotListData stickerShoulder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileStickerSlotListData stickerSocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileStickerSlotListData stickerFeet;
    
    LUXORGAME_API FLuxProfilePartsStickerData();
};

