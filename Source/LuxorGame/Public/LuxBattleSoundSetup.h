#pragma once
#include "CoreMinimal.h"
#include "LuxLoadableBase.h"
#include "LuxBattleSoundSetup.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxBattleSoundSetup : public ULuxLoadableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_stage_bgm_id;
    
    ULuxBattleSoundSetup();
    UFUNCTION(BlueprintCallable)
    void SetStageBGMIdByRandom();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStageBGMId() const;
    
};

