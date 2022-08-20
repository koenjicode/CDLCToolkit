#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "LuxorBlueprintUserProfileData.h"
#include "LuxorBlueprintPeerInfo.h"
#include "LuxorMatchData.generated.h"

UCLASS(Blueprintable)
class LUXORSESSIONUTIL_API ULuxorMatchData : public UObject {
    GENERATED_BODY()
public:
    ULuxorMatchData();
    UFUNCTION(BlueprintCallable)
    void StampCurrentTime();
    
    UFUNCTION(BlueprintCallable)
    void SetStyleId(int32 PlayerIndex, int32 StyleId);
    
    UFUNCTION(BlueprintCallable)
    void SetStageCode(const FString& StageCode);
    
    UFUNCTION(BlueprintCallable)
    void SetRematchType(int32 rematchType);
    
    UFUNCTION(BlueprintCallable)
    void SetRankPoint(int32 PlayerIndex, int32 rankPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetRankId(int32 PlayerIndex, int32 RankId);
    
    UFUNCTION(BlueprintCallable)
    void SetProfileData(int32 PlayerIndex, const FLuxorBlueprintUserProfileData& profData);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchWinningStreak(int32 PlayerIndex, int32 MatchWinningStreak);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUniqueCharacter(bool isUniqueCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetIsActiveUserCached(bool IsActiveUser);
    
    UFUNCTION(BlueprintCallable)
    void SetColorIndex(int32 PlayerIndex, int32 colorIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleType(int32 BattleFormat);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleFormat(int32 BattleFormat);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleCountMax(int32 battleCountMax);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleCount(int32 PlayerIndex, int32 BattleCount);
    
    UFUNCTION(BlueprintCallable)
    void ResetRecentBattleResult(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEqualUser(const FLuxorBlueprintPeerInfo& inInfo, int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWinningAverage(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStyleId(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetStampTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStageCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRematchType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankPoint(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankId(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLuxorBlueprintUserProfileData GetProfileData(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMostRankId(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchWonCountSum(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchWinningStreak(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchWinnerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUniqueCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsActiveUserCached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColorIndex(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleFormat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleCountMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleCount(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void DecideMatchWinnerIndex(int32 matchWinnerIndex);
    
};

