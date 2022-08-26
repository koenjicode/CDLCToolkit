#pragma once
#include "CoreMinimal.h"
#include "ELuxFightStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMGUtil -ObjectName=UIDataStructInterface -FallbackName=UIDataStructInterface
#include "ELuxCreationDecorBodyMenuFactorDataKey.h"
#include "ELuxProfileDatabaseTableId.h"
#include "ELuxRace.h"
#include "LuxProfileDBDecorBodyMenuUIData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FLuxProfileDBDecorBodyMenuUIData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCreationDecorBodyMenuFactorDataKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locLabelTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locDescriptionTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxRace> disallowedRacialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxFightStyle> disallowedRegularType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxProfileDatabaseTableId nextDataTableId;
    
    LUXORGAME_API FLuxProfileDBDecorBodyMenuUIData();
};

