#pragma once
#include "CoreMinimal.h"
#include "LuxBattleDNA.h"
#include "LuxLoadableBase.h"
#include "ELuxWeaponVariation.h"
#include "ELuxVoiceLanguage.h"
#include "ELuxFightStyle.h"
#include "ELuxSoulChargeType.h"
#include "LuxBattlePlayerSetup.generated.h"

class ULuxAssetPathsBase;
class ULuxWeaponAssetPaths;
class ULuxProfileBase;
class ULuxBattlePlayerSetup;
class ULuxCharacterAssetPaths;
class ULuxVoiceAssetPaths;
class ULuxAsyncLoader;
class ULuxCreationProfile;

UCLASS(Blueprintable, Config=Game)
class LUXORGAME_API ULuxBattlePlayerSetup : public ULuxLoadableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxProfileBase* CreationProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxVoiceLanguage VoiceLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxWeaponVariation WeaponVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputDeviceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideDNA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxBattleDNA BattleDNA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxCharacterAssetPaths* OverrideCharacterPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxWeaponAssetPaths* OverrideWeaponPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxVoiceAssetPaths* OverrideVoicePaths;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ELuxFightStyle> AllowedEdgeMasterStyles;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULuxAssetPathsBase*> PathBases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELuxFightStyle EdgeMasterStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxAsyncLoader* LastStyleLoader;
    
public:
    ULuxBattlePlayerSetup();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxWeaponVariation GetWeaponVariation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxSoulChargeType GetSoulChargeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHitEffectPresetID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELuxFightStyle GetFightStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    static ULuxBattlePlayerSetup* CreatePlayerSetup(ULuxCreationProfile* inProfile);
    
};

