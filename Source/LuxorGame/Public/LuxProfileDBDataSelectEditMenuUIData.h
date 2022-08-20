#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxCreationMenuDataSelectEditItem.h"
#include "LuxProfileDBDataSelectEditMenuUIData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBDataSelectEditMenuUIData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCreationMenuDataSelectEditItem Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locLabelTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locDescriptionTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Disabled;
    
    LUXORGAME_API FLuxProfileDBDataSelectEditMenuUIData();
};

