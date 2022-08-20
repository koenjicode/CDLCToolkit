#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxDevBattleSubtitleSetting.generated.h"

UCLASS(Blueprintable, Config=DevOnly)
class ULuxDevBattleSubtitleSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SubtitleVisible;
    
    ULuxDevBattleSubtitleSetting();
};

