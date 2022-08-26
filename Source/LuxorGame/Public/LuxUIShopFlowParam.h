#pragma once
#include "CoreMinimal.h"
#include "ELuxMenuCategoryType.h"
#include "OnLuxUIShopFlowParamCompletedDelegate.h"
#include "LuxUIShopFlowParam.generated.h"

USTRUCT(BlueprintType)
struct FLuxUIShopFlowParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxMenuCategoryType CategoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLuxUIShopFlowParamCompleted OnLuxUIShopFlowParamCompleted;
    
    LUXORGAME_API FLuxUIShopFlowParam();
};

