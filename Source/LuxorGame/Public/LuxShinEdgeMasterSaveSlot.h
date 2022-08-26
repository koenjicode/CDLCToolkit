#pragma once
#include "CoreMinimal.h"
#include "LuxShinEdgeMasterRandomMissionInfo.h"
#include "LuxUITextureParam.h"
#include "LuxGameSaveObjectHelper.h"
#include "LuxUIPlayerProfile.h"
#include "LuxShinEdgeMasterEncountInfo.h"
#include "UObject/NoExportTypes.h"
#include "LuxShinEdgeMasterSaveSlot.generated.h"

USTRUCT(BlueprintType)
struct FLuxShinEdgeMasterSaveSlot : public FLuxGameSaveObjectHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxUIPlayerProfile PlayerProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxUITextureParam PlayerThumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLuxUITextureParam> CaptureImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> Unlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Year;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxShinEdgeMasterEncountInfo EncountInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxShinEdgeMasterRandomMissionInfo RandomMissionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectSpotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaySecondTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime UpdateDateTime;
    
    LUXORGAME_API FLuxShinEdgeMasterSaveSlot();
};

