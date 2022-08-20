#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UINamedIconMetaTableData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FUINamedIconMetaTableData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UINamedIconTable;
    
    UMGUTIL_API FUINamedIconMetaTableData();
};

