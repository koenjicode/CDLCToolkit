#pragma once
#include "CoreMinimal.h"
#include "LuxGameSaveObject.h"
#include "UObject/NoExportTypes.h"
#include "UIDataObject.h"
#include "ELuxUIArcadeBattleDifficulty.h"
#include "ELuxUIArcadeBattleStageId.h"
#include "ELuxGameSaveObjectAccessType.h"
#include "ELuxUIArcadeBattleRewardType.h"
#include "LuxArcadeSaveObject.generated.h"

class ULuxArcadeSaveObject;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxArcadeSaveObject : public ULuxGameSaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataObject ArcadeBattleRegulationData;
    
    ULuxArcadeSaveObject();
    UFUNCTION(BlueprintCallable)
    void SetLoseTimespan(const FTimespan& InTimespan);
    
    UFUNCTION(BlueprintCallable)
    void SetLapTime(ELuxUIArcadeBattleStageId InStageId, const FTimespan& InTimespan);
    
    UFUNCTION(BlueprintCallable)
    int32 SetBestSecond(ELuxUIArcadeBattleDifficulty inDifficulty, const FTimespan& InTimespan);
    
    UFUNCTION(BlueprintCallable)
    void ResetTemporary();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTotalTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxArcadeSaveObject* GetSaveObject(ELuxGameSaveObjectAccessType InAccessType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxUIArcadeBattleRewardType GetRewardType(ELuxUIArcadeBattleDifficulty inDifficulty, const FTimespan& InTimespan) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetRewardTime(ELuxUIArcadeBattleDifficulty inDifficulty, ELuxUIArcadeBattleRewardType InRewardType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetLoseTimespan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetLapTime(ELuxUIArcadeBattleStageId InStageId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxUIArcadeBattleStageId GetCurrentStageId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetBestSecond(ELuxUIArcadeBattleDifficulty inDifficulty, int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ConvertTimespanToText(const FTimespan& InTimespan, bool bAllowZero) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ConvertArcadeBattleStageIdToText(ELuxUIArcadeBattleStageId InStageId) const;
    
};

