#pragma once
#include "CoreMinimal.h"
#include "ELuxFightStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMGUtil -ObjectName=UIDataStructInterface -FallbackName=UIDataStructInterface
#include "ELuxCreationMenuWeaponAndStyleItem.h"
#include "ELuxProfileDatabaseTableId.h"
#include "LuxProfileDBWeaponAndStyleSelectMenuUIData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FLuxProfileDBWeaponAndStyleSelectMenuUIData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCreationMenuWeaponAndStyleItem Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> thumbnail;
    
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

