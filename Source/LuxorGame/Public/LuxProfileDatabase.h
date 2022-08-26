#pragma once
#include "CoreMinimal.h"
#include "ELuxRace.h"
#include "ELuxProfileDatabaseTableId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ELuxFightStyle.h"
#include "ELuxWeaponVariation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMGUtil -ObjectName=UIDataObject -FallbackName=UIDataObject
#include "ELuxGender.h"
#include "ELuxModelColorType.h"
#include "UIDataObject.h"
#include "Engine/DataAsset.h"
#include "LuxProfileDatabase.generated.h"

class UDataTable;
class ULuxCreationProfile;

UCLASS(Blueprintable)
class ULuxProfileDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELuxProfileDatabaseTableId, UDataTable*> tableMap;
    
    ULuxProfileDatabase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool unisexRacialType(ELuxRace racialType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool is2PModel(const FString& profilePath) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool has2PModel(ELuxFightStyle STYLE) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIDataObject getWeaponData(ELuxFightStyle STYLE, ELuxWeaponVariation WEAPON) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIDataObject getStyleData(ELuxFightStyle STYLE) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ELuxGender> getRacialGenderTypes(ELuxRace racialType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TAssetPtr<ULuxCreationProfile> findRegularProfileFrom(ELuxFightStyle STYLE, ELuxModelColorType Color) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TAssetPtr<ULuxCreationProfile> findProfileFrom(ELuxRace racialType, ELuxGender genderType) const;
    
};

