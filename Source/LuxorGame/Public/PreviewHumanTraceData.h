#pragma once
#include "CoreMinimal.h"
#include "ELuxTracePartsId.h"
#include "ELuxEffectVertexClutId.h"
#include "ELuxTraceKindId.h"
#include "PreviewHumanTraceData.generated.h"

USTRUCT(BlueprintType)
struct FPreviewHumanTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxTracePartsId PartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxTraceKindId KindId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEffectVertexClutId ClutId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Life;
    
    LUXORGAME_API FPreviewHumanTraceData();
};

