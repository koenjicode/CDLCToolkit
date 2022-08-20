#pragma once
#include "CoreMinimal.h"
#include "ELuxCreationDecorMenuFactorDataKey.h"
#include "UIDataStructInterface.h"
#include "ELuxRace.h"
#include "ELuxProfileDatabaseTableId.h"
#include "ELuxFightStyle.h"
#include "LuxProfileDBDecorMenuUIData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FLuxProfileDBDecorMenuUIData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCreationDecorMenuFactorDataKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* icon;
    
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
    
    LUXORGAME_API FLuxProfileDBDecorMenuUIData();
};

