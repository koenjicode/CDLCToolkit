#pragma once
#include "CoreMinimal.h"
#include "LuxUIGameContentCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FLuxUIGameContentCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RefContentIDs;
    
    LUXORGAME_API FLuxUIGameContentCategoryData();
};

