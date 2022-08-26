#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VFxIDConvertTableInfo.generated.h"

USTRUCT(BlueprintType)
struct FVFxIDConvertTableInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VFxID;
    
    LUXORGAME_API FVFxIDConvertTableInfo();
};

