#pragma once
#include "CoreMinimal.h"
#include "UIDataStructInterface.h"
#include "ELuxGender.h"
#include "LuxProfileDBRandomNameListData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileDBRandomNameListData : public FUIDataStructInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    LUXORGAME_API FLuxProfileDBRandomNameListData();
};

