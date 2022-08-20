#pragma once
#include "CoreMinimal.h"
#include "LuxGameSaveObject.h"
#include "ELuxFightStyle.h"
#include "ELuxGameSaveObjectAccessType.h"
#include "LuxGeneralSaveObject.generated.h"

class ULuxGeneralSaveObject;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxGeneralSaveObject : public ULuxGameSaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWatchedIntroMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstSEMDataCreation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoulMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> Unlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TutorialWatchedList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWatchedEula;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWatchedPrivacyPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWatchedAgreeKpi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELuxFightStyle, int32> StylePlayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> InstalledDLCIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstGraphicSetting;
    
    ULuxGeneralSaveObject();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxGeneralSaveObject* GetSaveObject(ELuxGameSaveObjectAccessType InAccessType);
    
    UFUNCTION(BlueprintCallable)
    void AddSoulPoint(int32 InAddPoint);
    
};

