#pragma once
#include "CoreMinimal.h"
#include "DackingCategory.h"
#include "ReversalEdgeDacking.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FReversalEdgeDacking {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDackingCategory> target_category_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 fade_in_frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 fade_out_frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 valid_frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 elapsed_frame;
    
    FReversalEdgeDacking();
};

