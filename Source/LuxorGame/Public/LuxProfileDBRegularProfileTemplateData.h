#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxFightStyle.h"
#include "ELuxModelColorType.h"
#include "LuxProfileDBRegularProfileTemplateData.generated.h"

class ULuxCreationProfile;

USTRUCT(BlueprintType)
struct FLuxProfileDBRegularProfileTemplateData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxCreationProfile* Profile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxModelColorType Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxFightStyle STYLE;
    
    LUXORGAME_API FLuxProfileDBRegularProfileTemplateData();
};

