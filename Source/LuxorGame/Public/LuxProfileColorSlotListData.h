#pragma once
#include "CoreMinimal.h"
#include "LuxProfileDataSerializable.h"
#include "LuxProfileColorSlotData.h"
#include "LuxProfileColorSlotListData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileColorSlotListData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxProfileColorSlotData> slots;
    
    LUXORGAME_API FLuxProfileColorSlotListData();
};

