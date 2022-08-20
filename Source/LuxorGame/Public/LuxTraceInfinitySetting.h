#pragma once
#include "CoreMinimal.h"
#include "ELuxTracePartsId.h"
#include "ELuxEffectVertexClutId.h"
#include "ELuxTraceKindId.h"
#include "LuxTraceInfinitySetting.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxTraceInfinitySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Life;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxTracePartsId PartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxTraceKindId KindId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEffectVertexClutId ClutId;
    
    FLuxTraceInfinitySetting();
};

