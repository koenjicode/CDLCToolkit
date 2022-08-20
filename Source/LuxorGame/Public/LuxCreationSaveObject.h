#pragma once
#include "CoreMinimal.h"
#include "LuxGameSaveObject.h"
#include "LuxProfileData.h"
#include "ELuxGameSaveObjectAccessType.h"
#include "LuxCreationSaveObject.generated.h"

class ULuxCreationSaveObject;

UCLASS(Blueprintable)
class LUXORGAME_API ULuxCreationSaveObject : public ULuxGameSaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FLuxProfileData> TemporaryProfileDataContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> Unlocks;
    
    ULuxCreationSaveObject();
    UFUNCTION(BlueprintCallable)
    void SetTemporaryProfileForCharaSelect(int32 InSide, const FLuxProfileData& InProfileData);
    
    UFUNCTION(BlueprintCallable)
    void SetTemporaryProfile(FName inTag, const FLuxProfileData& InProfileData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTemporaryProfileForCharaSelect(int32 InSide, FLuxProfileData& ProfileData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTemporaryProfile(FName inTag, FLuxProfileData& ProfileData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULuxCreationSaveObject* GetSaveObject(ELuxGameSaveObjectAccessType InAccessType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseProfilesSafetyNotToWearDLCContents() const;
    
};

