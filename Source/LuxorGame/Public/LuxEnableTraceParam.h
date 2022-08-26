#pragma once
#include "CoreMinimal.h"
#include "LuxTraceParamBase.h"
#include "ELuxEffectVertexClutId.h"
#include "ELuxTraceKindId.h"
#include "ELuxTraceCurveType.h"
#include "LuxEnableTraceParam.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxEnableTraceParam : public FLuxTraceParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Life;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLifeStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxTraceKindId Kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxEffectVertexClutId Clut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bright;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxTraceCurveType CurveType;
    
    FLuxEnableTraceParam();
};

