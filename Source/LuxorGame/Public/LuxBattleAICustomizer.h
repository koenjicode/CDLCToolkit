#pragma once
#include "CoreMinimal.h"
#include "LuxBattleCommonActor.h"
#include "ELuxBattleAITendency.h"
#include "ELuxBattleAIDifficulty.h"
#include "LuxBattleAICustomizer.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleAICustomizer : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AIPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleAIDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleAITendency Tendency;
    
public:
    ALuxBattleAICustomizer();
    UFUNCTION(BlueprintCallable)
    void SetTendency(ELuxBattleAITendency inTendency);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(ELuxBattleAIDifficulty inDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetAIPlayerIndex(int32 inPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleAITendency GetTendency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleAIDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplySetting();
    
};

