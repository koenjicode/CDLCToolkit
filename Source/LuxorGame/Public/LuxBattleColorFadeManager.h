#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "LuxBattleColorFadeManager.generated.h"

class ULuxBattleColorFadeSettingListDataAsset;
class UTexture;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleColorFadeManager : public ALuxActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxBattleColorFadeSettingListDataAsset* ColorFadeSettingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* DefaultFadePatternTex;
    
public:
    ALuxBattleColorFadeManager();
};

