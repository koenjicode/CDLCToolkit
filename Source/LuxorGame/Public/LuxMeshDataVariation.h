#pragma once
#include "CoreMinimal.h"
#include "ELuxPartVariation.h"
#include "LuxSlotMeshData.h"
#include "LuxMeshDataVariation.generated.h"

USTRUCT(BlueprintType)
struct FLuxMeshDataVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxPartVariation Variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxSlotMeshData> SlotMeshData;
    
    LUXORGAME_API FLuxMeshDataVariation();
};

