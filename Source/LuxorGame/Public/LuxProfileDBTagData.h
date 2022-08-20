#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "LuxProfileDBTagData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBTagData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tagId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> categories;
    
    LUXORGAME_API FLuxProfileDBTagData();
};

