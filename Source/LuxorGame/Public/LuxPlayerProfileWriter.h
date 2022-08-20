#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxPlayerProfileWriter.generated.h"

UCLASS(Blueprintable)
class ULuxPlayerProfileWriter : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFlushComplete, bool, bResult);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFlushComplete OnFlushComplete;
    
    ULuxPlayerProfileWriter();
    UFUNCTION(BlueprintCallable)
    void WriteServerDirtyFlg(bool inFlag);
    
    UFUNCTION(BlueprintCallable)
    void WritePlayerPoint(int32 inStyleId, int32 inPlayerPoint, int32 inPlayerClass);
    
    UFUNCTION(BlueprintCallable)
    void WritePlayerMatchBattleResult(int32 inStyleId, bool inIsWon);
    
    UFUNCTION(BlueprintCallable)
    void WritePlayerCard(const TArray<uint8>& dataArray);
    
    UFUNCTION(BlueprintCallable)
    void WriteMatchResult(int32 inStyleId, bool inResult);
    
    UFUNCTION(BlueprintCallable)
    void WriteMatchIncrement(int32 inStyleId);
    
    UFUNCTION(BlueprintCallable)
    void ResetWinLossRecords(int32 inStyleId);
    
    UFUNCTION(BlueprintCallable)
    void PushData(int32 inStyleId);
    
    UFUNCTION(BlueprintCallable)
    void PopData(int32 inStyleId);
    
    UFUNCTION(BlueprintCallable)
    void Flush();
    
    UFUNCTION(BlueprintCallable)
    void BoostPlayerPoint(int32 battleChara, int32 afterRank);
    
};

