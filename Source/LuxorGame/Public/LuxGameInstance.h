#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "OnLuxBattleUpdateDelegate.h"
#include "OnLuxChunkInstallDelegate.h"
#include "ELuxChunkCategory.h"
#include "ELuxCharacter.h"
#include "LuxGameInstance.generated.h"

class ULuxBattleSetup;
class ULuxPortableBattle;
class ULuxProfileDatabase;
class ULuxProfileFactory;
class ULuxSoundLoader;
class ULuxAsyncLoader;
class ULuxLocalPlayer;
class ULuxBattleReplaySave;

UCLASS(Blueprintable, NonTransient)
class LUXORGAME_API ULuxGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PackageDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EngineRevision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GameRevision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SourceRevision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OnlineRevision;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxBattleUpdate OnLuxBattleUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxChunkInstall OnLuxChunkInstall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxProfileDatabase* ProfileDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxProfileFactory* SharedProfileFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxProfileFactory* NetworkProfileFactory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxBattleSetup* BattleSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxPortableBattle* PortableBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxSoundLoader* SoundLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULuxAsyncLoader*> TempLoaders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxBattleReplaySave* ReplaySave;
    
public:
    ULuxGameInstance();
    UFUNCTION(BlueprintCallable)
    void TerminateBattle();
    
    UFUNCTION(BlueprintCallable)
    static void SetLuxorAnselEnabled(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsInAnselSession(bool bIsInSession);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnselIsInPauseMenu(bool bIsInPauseMenu);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnselEnabled(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void RequestSystemSoundAsync();
    
    UFUNCTION(BlueprintCallable)
    void RequestCommonAssetAsync();
    
    UFUNCTION(BlueprintCallable)
    void RequestBattleAsset();
    
    UFUNCTION(BlueprintCallable)
    void QuickBattleRequest(ELuxCharacter inLeft, ELuxCharacter inRight, int32 inStage);
    
    UFUNCTION(BlueprintCallable)
    void ManualLaunchBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStageChunkAvailable(const FString& StageCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlatformAvailable(const FString& MenuName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadedSystemSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadedCommonAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChunkInstalled(ELuxChunkCategory ctg) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaChunkAvailable(const FString& CharaCode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyBattleRequest() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetRevisionText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULuxPortableBattle* GetPortableBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMinorVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMajorVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMaintenanceVersion() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetLuxorAnselEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULuxLocalPlayer* GetLuxLocalPlayer(int32 inIndex) const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsInAnselSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULuxBattleSetup* GetBattleSetup() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetAnselIsInPauseMenu();
    
    UFUNCTION(BlueprintCallable)
    static bool GetAnselEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLaunchBattleManually() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyReplayToBattleSetup();
    
    UFUNCTION(BlueprintCallable)
    void ActivateKeybd2PArea(bool Activate);
    
};

