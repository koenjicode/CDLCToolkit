#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxProfileDatabaseTableId.h"
#include "ELuxProfilePersonalityCommentMenuFactorDataKey.h"
#include "LuxProfileDBPersonalityCommentMenuUIData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBPersonalityCommentMenuUIData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxProfilePersonalityCommentMenuFactorDataKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locLabelTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locDescriptionTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxProfileDatabaseTableId nextDataTableId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Disabled;
    
    LUXORGAME_API FLuxProfileDBPersonalityCommentMenuUIData();
};

