#pragma once
#include "CoreMinimal.h"
#include "LuxGraphicSetting.h"
#include "LuxStageBGMSetting.h"
#include "ELuxBattleInputType.h"
#include "LuxGameSaveObject.h"
#include "LuxDisplaySetting.h"
#include "LuxEBVModeSetting.h"
#include "LuxSoundSetting.h"
#include "LuxBattleInputPairs.h"
#include "LuxNetworkSetting.h"
#include "LuxTrainingSetting.h"
#include "LuxSemDisplaySetting.h"
#include "ELuxGameSaveObjectAccessType.h"
#include "LuxOptionSaveObject.generated.h"

class ULuxOptionSaveObject;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxOptionSaveObject : public ULuxGameSaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxDisplaySetting DisplaySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxEBVModeSetting EBVModeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxSoundSetting SoundSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleInputType KeyConfigType1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBattleInputType KeyConfigType2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FLuxBattleInputPairs> KeyConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxStageBGMSetting StageBGMSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxGraphicSetting GraphicSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxNetworkSetting NetworkSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxTrainingSetting TrainingSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxSemDisplaySetting SemDisplaySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FavoriteBGMContentIds;
    
    ULuxOptionSaveObject();
    UFUNCTION(BlueprintCallable)
    void ValidateStageBgmSettingsData();
    
    UFUNCTION(BlueprintCallable)
    void RefreshCurrentDiplayQualitySetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxOptionSaveObject* GetSaveObject(ELuxGameSaveObjectAccessType InAccessType);
    
    UFUNCTION(BlueprintCallable)
    void ApplyToGameData();
    
    UFUNCTION(BlueprintCallable)
    void ApplyFromGameData();
    
};

