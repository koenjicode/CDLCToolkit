#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LuxBattleDramaticVoiceMatchData.h"
#include "LuxDramaticVoiceDataAsset.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxDramaticVoiceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleDramaticVoiceMatchData> MatchDataArray;
    
    ULuxDramaticVoiceDataAsset();
};

