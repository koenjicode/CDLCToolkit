#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleDummyLethalHitType.h"
#include "LuxBattleCommonActor.h"
#include "ELuxBattleDummyUkemiType.h"
#include "LuxBattleDummySlot.h"
#include "ELuxBattleDummyReversalEdgeType.h"
#include "ELuxBattleDummyMoveType.h"
#include "ELuxBattleMoveCategory.h"
#include "ELuxBattleDummyCounterType.h"
#include "ELuxBattleDummyAerialControlType.h"
#include "LuxBattleDummyCustomizer.generated.h"

class ULuxBattleMovePlayData;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleDummyCustomizer : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxBattleDummySlot> DummySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DummyPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxBattleMovePlayData* MovePlayData;
    
public:
    ALuxBattleDummyCustomizer();
    UFUNCTION(BlueprintCallable)
    void SetUkemiType(int32 inSlot, ELuxBattleDummyUkemiType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetReversalEdgeType(int32 inSlot, ELuxBattleDummyReversalEdgeType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveType(int32 inSlot, int32 inMoveIndex, ELuxBattleDummyMoveType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetMovePlayParam(int32 inSlot, int32 inMoveIndex, ELuxBattleMoveCategory inCategory, int32 inCategoryItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetMovePlayCategoryItemIndex(int32 inSlot, int32 inMoveIndex, int32 inCategoryItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetMovePlayCategory(int32 inSlot, int32 inMoveIndex, ELuxBattleMoveCategory inCategory);
    
    UFUNCTION(BlueprintCallable)
    void SetLethalHitType(int32 inSlot, ELuxBattleDummyLethalHitType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetDummyPlayerIndex(int32 inPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCounterType(int32 inSlot, ELuxBattleDummyCounterType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetAerialControlType(int32 inSlot, ELuxBattleDummyAerialControlType inType);
    
    UFUNCTION(BlueprintCallable)
    void ResetSlot(int32 inSlot);
    
    UFUNCTION(BlueprintCallable)
    void ResetMoveType(int32 inSlot, int32 inMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleDummyUkemiType GetUkemiType(int32 inSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleDummyReversalEdgeType GetReversalEdgeType(int32 inSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleDummyMoveType GetMoveType(int32 inSlot, int32 inMoveIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMovePlayCategoryItemIndex(int32 inSlot, int32 inMoveIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleMoveCategory GetMovePlayCategory(int32 inSlot, int32 inMoveIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMoveNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleDummyLethalHitType GetLethalHitType(int32 inSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleDummyCounterType GetCounterType(int32 inSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleDummyAerialControlType GetAerialControlType(int32 inSlot) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplySlotToDummy(int32 inSlot);
    
    UFUNCTION(BlueprintCallable)
    void ApplySetting(const FLuxBattleDummySlot& inSetting);
    
};

