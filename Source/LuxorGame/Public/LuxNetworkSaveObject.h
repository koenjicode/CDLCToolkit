#pragma once
#include "CoreMinimal.h"
#include "LuxGameSaveObject.h"
#include "LuxUIStoreConfig.h"
#include "UObject/NoExportTypes.h"
#include "ELuxGameSaveObjectAccessType.h"
#include "LuxNetworkSaveObject.generated.h"

class ULuxNetworkSaveObject;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxNetworkSaveObject : public ULuxGameSaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FollowList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CreationBanList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> NetworkNotPermitList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useCreationCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 colorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 projectIdOfCreationProfileFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> NetworkBanList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FriendList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ChatRecordList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLuxUIStoreConfig StoreConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FDateTime> ReportList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableNetworkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSuccessParentalControll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLatestPatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLatestSystemUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNetworkBAN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> bAllowTemporaryUserUgc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableTextChat;
    
    ULuxNetworkSaveObject();
    UFUNCTION(BlueprintCallable)
    void ResetNetworkPrivilegeFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOfflineMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableOnlinePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanUseUGC(bool IsTargetMainUser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxNetworkSaveObject* GetSaveObject(ELuxGameSaveObjectAccessType InAccessType);
    
    UFUNCTION(BlueprintCallable)
    void ApplyFightRequestDataToGameData();
    
    UFUNCTION(BlueprintCallable)
    void ApplyFightRequestDataFromGameData();
    
};

