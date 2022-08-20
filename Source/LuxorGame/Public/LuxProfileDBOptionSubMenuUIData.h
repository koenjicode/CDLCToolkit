#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxCreationMenuOptionSelectEditItem.h"
#include "LuxProfileDBOptionSubMenuUIData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBOptionSubMenuUIData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCreationMenuOptionSelectEditItem Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locLabelTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locDescriptionTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Disabled;
    
    LUXORGAME_API FLuxProfileDBOptionSubMenuUIData();
};

