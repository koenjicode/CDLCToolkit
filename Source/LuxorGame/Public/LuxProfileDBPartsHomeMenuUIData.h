#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxCreationPartsHomeMenuItem.h"
#include "LuxProfileDBPartsHomeMenuUIData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBPartsHomeMenuUIData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxCreationPartsHomeMenuItem Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locLabelTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locDescriptionTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Disabled;
    
    LUXORGAME_API FLuxProfileDBPartsHomeMenuUIData();
};

