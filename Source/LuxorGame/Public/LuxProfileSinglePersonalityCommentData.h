#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LuxProfileDataSerializable.h"
#include "UObject/NoExportTypes.h"
#include "LuxProfileSinglePersonalityCommentData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileSinglePersonalityCommentData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 commentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector indices;
    
    LUXORGAME_API FLuxProfileSinglePersonalityCommentData();
};

