#pragma once
#include "CoreMinimal.h"
#include "LuxCharaActor.h"
#include "ELuxPartsSE.h"
#include "ELuxPartCategory.h"
#include "LuxPermanentEffectRuntime.h"
#include "UObject/NoExportTypes.h"
#include "ELuxSoulChargeType.h"
#include "ELuxCreationMaterialType.h"
#include "UObject/NoExportTypes.h"
#include "LuxBattleChara.generated.h"

class ULuxCharaAppxAnimInstance;
class USkeletalMeshComponent;
class ALuxCharaAppxActor;
class ULuxBattlePlayerSetup;
class UBoxComponent;
class ALuxTraceManager;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxBattleChara : public ALuxCharaActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaegamiL_Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaegamiR_Pos;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> CreationComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MaegamiL_SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MaegamiR_SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALuxCharaAppxActor*> AppxActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, ULuxCharaAppxAnimInstance*> AppxAnimInstanceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionComponent;
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 BreakFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxTraceManager* TraceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxBattlePlayerSetup* PlayerSetupOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDummyPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ELuxPartsSE> SEMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLuxPermanentEffectRuntime> PermanentEffects;
    
public:
    ALuxBattleChara();
    UFUNCTION(BlueprintCallable)
    void SetWeaponVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponNodeAlpha(const FName& inSlotName, float inAlpha);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponMaterialVectorValue(const FName& inName, const FLinearColor& inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponMaterialScalarValue(const FName& inName, float inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponHighlight(const FLinearColor& slotMask);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityForMission(bool bCharaVis, bool bWeaponVis);
    
    UFUNCTION(BlueprintCallable)
    void SetupPlayerChara(int32 inPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetupExtraParts();
    
    UFUNCTION(BlueprintCallable)
    void SetPartsHighlight(ELuxCreationMaterialType matType, ELuxPartCategory ctg, const FLinearColor& slotMask, bool bEmissionHighlight);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialChargeRate(float inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEvilFlag(bool inFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaMaterialVectorValue(const FName& inName, const FLinearColor& inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaMaterialScalarValue(const FName& inName, float inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakFlag(int32 flag);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseTimeDilation(float inTimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void SetAllWeaponNodeAlpha(float inAlpha);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceWeapon(int32 inWeaponID);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceDummyChara(bool bReplace);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceChara(int32 inCharaID);
    
    UFUNCTION(BlueprintCallable)
    void RemovePartsSticker(ELuxPartCategory inCategory);
    
    UFUNCTION(BlueprintCallable)
    void RefreshAppearance();
    
    UFUNCTION(BlueprintCallable)
    void PrepareCustomizedTexture();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAppxActorSpawned();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSetupCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWeaponVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxSoulChargeType GetSoulChargeType() const;
    
    UFUNCTION(BlueprintCallable)
    void GetSocketTransform(const FName& socket_name, FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetModelErase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEvilFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCombinedCharacterVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharaID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBreakFlag() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyCreationColor();
    
};

