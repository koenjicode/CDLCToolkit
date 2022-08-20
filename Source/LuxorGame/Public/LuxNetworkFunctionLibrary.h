#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuxUpdateCreationAuthorNameMappingParam.h"
#include "ELuxSharePlayType.h"
#include "LuxNetworkFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxNetworkFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuxNetworkFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool WriteVersusProgress(int32 PlayNum);
    
    UFUNCTION(BlueprintCallable)
    static bool WriteTrainingProgress(float PlayTime);
    
    UFUNCTION(BlueprintCallable)
    static bool WriteMissionProgress(int32 EarnedGold, float PlayTime);
    
    UFUNCTION(BlueprintCallable)
    static bool WriteCreationProgress(float PlayTime);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateCreationAuthorNames(const FLuxUpdateCreationAuthorNameMappingParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSharing(ELuxSharePlayType inSetType);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyLoggedOutMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRankedMatchWinningInBattle(int32 inPlayerIndex, bool inCurrentMatchWin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRankedMatchWinning(int32 inCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugOnlineMatchUnlimitedBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRoomPolicyText(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRegionNameByRegionId(int32 RegionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRankCodeByRankId(int32 RankId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMatchTypeText(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMainPlayerNickname();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLocalUniqueNetIdStr();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLanguageCodeByLanguageId(int32 LangId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBattleTypeText(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBattleTimeText(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBattleFormatText(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBattleCountText(int32 index);
    
};

