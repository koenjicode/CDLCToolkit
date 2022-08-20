#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LuxStringTableItem.generated.h"

USTRUCT(BlueprintType)
struct FLuxStringTableItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    LUXORGAME_API FLuxStringTableItem();
};

