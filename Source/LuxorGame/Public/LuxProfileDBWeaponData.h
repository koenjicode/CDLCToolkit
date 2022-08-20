#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxFightStyle.h"
#include "ELuxWeaponVariation.h"
#include "LuxProfileDBWeaponData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FLuxProfileDBWeaponData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxFightStyle STYLE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxWeaponVariation WEAPON;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locNameTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* thumbnail;
    
    LUXORGAME_API FLuxProfileDBWeaponData();
};

