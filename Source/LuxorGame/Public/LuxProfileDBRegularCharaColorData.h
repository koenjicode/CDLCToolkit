#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "LuxProfileDBRegularCharaColorData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBRegularCharaColorData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharaCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorCount;
    
    LUXORGAME_API FLuxProfileDBRegularCharaColorData();
};

