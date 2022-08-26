#pragma once
#include "CoreMinimal.h"
#include "ELuxOffsetParentBone.h"
#include "ELuxOffsetPartsSymmetryFlag.h"
#include "LuxOffsetPartParent.h"
#include "LuxOffsetPart.generated.h"

USTRUCT(BlueprintType)
struct FLuxOffsetPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxOffsetParentBone DefaultParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxOffsetPartsSymmetryFlag> SymmetryFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxOffsetPartParent> CandidateParents;
    
    LUXORGAME_API FLuxOffsetPart();
};

