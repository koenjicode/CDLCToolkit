#pragma once
#include "CoreMinimal.h"
#include "LuxSkitWidgetBranchInfo.generated.h"

USTRUCT(BlueprintType)
struct FLuxSkitWidgetBranchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DetailID;
    
    LUXORGAME_API FLuxSkitWidgetBranchInfo();
};

