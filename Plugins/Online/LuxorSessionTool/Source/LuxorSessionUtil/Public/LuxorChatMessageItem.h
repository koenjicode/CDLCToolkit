#pragma once
#include "CoreMinimal.h"
#include "LuxorChatMessageItem.generated.h"

USTRUCT(BlueprintType)
struct FLuxorChatMessageItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Arg1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Arg2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MessageId;
    
    LUXORSESSIONUTIL_API FLuxorChatMessageItem();
};

