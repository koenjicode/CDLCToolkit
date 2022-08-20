#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxStickerGuide.h"
#include "LuxProfileDBStickerGuideInfo.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBStickerGuideInfo : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxStickerGuide guide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locLabelTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locDescriptionTextId;
    
    LUXORGAME_API FLuxProfileDBStickerGuideInfo();
};

