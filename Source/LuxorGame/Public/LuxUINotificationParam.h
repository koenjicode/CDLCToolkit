#pragma once
#include "CoreMinimal.h"
#include "ELuxUINotificationIconType.h"
#include "LuxUINotificationParam.generated.h"

USTRUCT(BlueprintType)
struct FLuxUINotificationParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(EditAnywhere)
    ELuxUINotificationIconType IconType;
    
    LUXORGAME_API FLuxUINotificationParam();
};

