#pragma once
#include "CoreMinimal.h"
#include "LuxSaveDataCheckParam.h"
#include "UIGameFlowManager.h"
#include "LuxUIGameFlowManager.generated.h"

class ULuxorSessionHub;
class ULuxSigninManager;
class ULuxUIAssetHub;
class ULuxGameSave;
class ULuxUIGameStatusManager;
class ULuxUIGameContent;
class ULuxUserPrivilegeManager;
class ULuxUIBattleLauncher;
class ULuxUINotification;
class ULuxTournamentManager;
class ULuxUIShopFlow;
class ULuxCeBankManager;
class ULuxUIAssetLoader;
class ULuxUIGameStatusIconHandle;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxUIGameFlowManager : public UUIGameFlowManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxGameSave* GameSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUIAssetHub* UIAssetHub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUIGameStatusManager* UIGameStatusManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUIGameContent* UIGameContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxorSessionHub* SessionHub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxSigninManager* SigninManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUserPrivilegeManager* UserPrivilegeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUIBattleLauncher* BattleLauncher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUINotification* UINotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUIShopFlow* UIShopFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxTournamentManager* TournamentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxCeBankManager* CeBankManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULuxUIAssetLoader*> CachedUIAssetLoaders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxUIGameStatusIconHandle* LoadIconHandle;
    
public:
    ULuxUIGameFlowManager();
    UFUNCTION(BlueprintCallable)
    void StartSaveDataCheckFlow(FLuxSaveDataCheckParam InParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLuxGameUserSettingsResolutionChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStoryBattleMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShinEdgeMasterBattleMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableTitleMovie() const;
    
    UFUNCTION(BlueprintCallable)
    void GameInitialize();
    
};

