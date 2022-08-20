#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LuxIdListItem.generated.h"

USTRUCT(BlueprintType)
struct FLuxIdListItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IdList;
    
    LUXORGAME_API FLuxIdListItem();
};

