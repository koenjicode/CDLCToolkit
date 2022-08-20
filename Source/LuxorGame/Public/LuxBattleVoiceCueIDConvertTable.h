#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LuxBattleVoiceCueIDConvertTable.generated.h"

USTRUCT(BlueprintType)
struct FLuxBattleVoiceCueIDConvertTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoiceCueID;
    
    LUXORGAME_API FLuxBattleVoiceCueIDConvertTable();
};

