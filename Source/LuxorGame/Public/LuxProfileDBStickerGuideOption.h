#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationDecorMenuFactorDataKey.h"
#include "UIDataStructInterface.h"
#include "ELuxStickerGuide.h"
#include "LuxProfileDBStickerGuideOption.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBStickerGuideOption : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCreationDecorMenuFactorDataKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxStickerGuide> guideList;
    
    LUXORGAME_API FLuxProfileDBStickerGuideOption();
};

