#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxBattleTutorialPart.h"
#include "LuxTutorialDataAsset.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxTutorialDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleTutorialPart> PartList;
    
    ULuxTutorialDataAsset();
};

