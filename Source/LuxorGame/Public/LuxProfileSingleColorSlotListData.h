#pragma once
#include "CoreMinimal.h"
#include "LuxProfileDataSerializable.h"
#include "LuxProfileSingleColorSlotData.h"
#include "LuxProfileSingleColorSlotListData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileSingleColorSlotListData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxProfileSingleColorSlotData> slots;
    
    LUXORGAME_API FLuxProfileSingleColorSlotListData();
};

