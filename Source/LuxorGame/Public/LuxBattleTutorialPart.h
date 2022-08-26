#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleTutorialEndingType.h"
#include "LuxBattleTutorialScene.h"
#include "LuxBattleTutorialPart.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleTutorialPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleTutorialScene> SceneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleTutorialEndingType EndingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PartText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ComplementTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ComplementTextList;
    
    FLuxBattleTutorialPart();
};

