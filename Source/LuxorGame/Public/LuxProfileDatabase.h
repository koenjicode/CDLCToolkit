#pragma once
#include "CoreMinimal.h"
#include "ELuxFightStyle.h"
#include "ELuxProfileDatabaseTableId.h"
#include "Engine/DataAsset.h"
#include "ELuxGender.h"
#include "ELuxRace.h"
#include "UIDataObject.h"
#include "ELuxWeaponVariation.h"
#include "ELuxModelColorType.h"
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
    ULuxCreationProfile* findRegularProfileFrom(ELuxFightStyle STYLE, ELuxModelColorType Color) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULuxCreationProfile* findProfileFrom(ELuxRace racialType, ELuxGender genderType) const;
    
};

