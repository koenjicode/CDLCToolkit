#pragma once
#include "CoreMinimal.h"
#include "ELuxBattleStartDirectionType.h"
#include "LuxBattleCommonActor.h"
#include "ELuxBattleStartSideType.h"
#include "ELuxBattleStartLocationType.h"
#include "ELuxPositionResetSoulChargeType.h"
#include "LuxBattlePositionResetter.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattlePositionResetter : public ALuxBattleCommonActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleStartLocationType StartLocationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleStartSideType StartSideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleStartDirectionType StartDirectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxPositionResetSoulChargeType StartSoulChargeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* StageInfoTable;
    
public:
    ALuxBattlePositionResetter();
    UFUNCTION(BlueprintCallable)
    void SetStartSoulChargeType(ELuxPositionResetSoulChargeType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetStartSideType(ELuxBattleStartSideType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetStartLocationType(ELuxBattleStartLocationType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetStartDirectionType(ELuxBattleStartDirectionType inType);
    
    UFUNCTION(BlueprintCallable)
    void ReapplySetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWallAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRingEdgeAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDirectionAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxPositionResetSoulChargeType GetStartSoulChargeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleStartSideType GetStartSideType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleStartLocationType GetStartLocationType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxBattleStartDirectionType GetStartDirectionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSetStartLocationType(ELuxBattleStartLocationType inType) const;
    
};

