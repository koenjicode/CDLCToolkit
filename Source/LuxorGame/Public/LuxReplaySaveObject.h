#pragma once
#include "CoreMinimal.h"
#include "LuxGameSaveObject.h"
#include "ReplayBinaryData.h"
#include "LuxBattleReplayData.h"
#include "LuxReplayListItemData.h"
#include "ELuxGameSaveObjectAccessType.h"
#include "LuxReplaySaveObject.generated.h"

class ULuxReplaySaveObject;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxReplaySaveObject : public ULuxGameSaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLuxBattleReplayData CurrentTargetReplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayBinaryData> BattleLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayBinaryData> MyReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString TemporaryReplayListType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TemporaryReplayListIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLuxReplayListItemData TemporaryReplayListItem;
    
    ULuxReplaySaveObject();
    UFUNCTION(BlueprintCallable)
    bool SaveToMyReplay(const FLuxReplayListItemData& ListItemData);
    
    UFUNCTION(BlueprintCallable)
    bool SaveToBattleLog(const FLuxReplayListItemData& ListItemData);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveNotUsableMyReplayData();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveNotUsableBattleLogData();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveFromMyReplay(const FLuxReplayListItemData& ListItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimitNumMyReplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistMyReplay(const FLuxReplayListItemData& ReplayListItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxReplaySaveObject* GetSaveObject(ELuxGameSaveObjectAccessType InAccessType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMyReplayData(int32 index, FLuxReplayListItemData& OutItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBattleLogData(int32 index, FLuxReplayListItemData& OutItemData);
    
};

