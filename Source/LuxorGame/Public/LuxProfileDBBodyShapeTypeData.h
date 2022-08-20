#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxGender.h"
#include "ELuxBodyFrameType.h"
#include "LuxProfileDBBodyShapeTypeData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FLuxProfileDBBodyShapeTypeData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxBodyFrameType bodyFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGender genderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locLabelTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locDescriptionTextId;
    
    LUXORGAME_API FLuxProfileDBBodyShapeTypeData();
};

