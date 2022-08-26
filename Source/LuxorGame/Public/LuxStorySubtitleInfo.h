#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LuxStorySubtitleInfo.generated.h"

USTRUCT(BlueprintType)
struct FLuxStorySubtitleInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    LUXORGAME_API FLuxStorySubtitleInfo();
};

