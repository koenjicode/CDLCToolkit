#pragma once
#include "CoreMinimal.h"
#include "ELux2DDemoBGMControllType.h"
#include "Lux2DDemoBGMEvent.generated.h"

USTRUCT(BlueprintType)
struct FLux2DDemoBGMEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELux2DDemoBGMControllType CtrlType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 index;
    
    LUXORGAME_API FLux2DDemoBGMEvent();
};

