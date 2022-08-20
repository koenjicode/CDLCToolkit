#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxCreationMenuWeaponAndStyleItem.h"
#include "ELuxProfileDatabaseTableId.h"
#include "ELuxFightStyle.h"
#include "LuxProfileDBWeaponAndStyleSelectMenuUIData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FLuxProfileDBWeaponAndStyleSelectMenuUIData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCreationMenuWeaponAndStyleItem Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locDescriptionTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxFightStyle> disallowedRegularType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxProfileDatabaseTableId nextDataTableId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Disabled;
    
    LUXORGAME_API FLuxProfileDBWeaponAndStyleSelectMenuUIData();
};

