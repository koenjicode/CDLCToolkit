#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "LuxProfileDBCommentListData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBCommentListData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 commentCategoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 commentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString locNameTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dlcId;
    
    LUXORGAME_API FLuxProfileDBCommentListData();
};

