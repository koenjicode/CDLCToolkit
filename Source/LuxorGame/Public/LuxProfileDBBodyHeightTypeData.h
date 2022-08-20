#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxBodyHeightType.h"
#include "ELuxGender.h"
#include "LuxProfileDBBodyHeightTypeData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FLuxProfileDBBodyHeightTypeData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBodyHeightType bodyHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGender genderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locLabelTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locDescriptionTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locHeightCorrectTextId;
    
    LUXORGAME_API FLuxProfileDBBodyHeightTypeData();
};

