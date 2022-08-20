#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LuxBattleMoveCategoryTableRow.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxBattleMoveCategoryTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveListID;
    
    FLuxBattleMoveCategoryTableRow();
};

