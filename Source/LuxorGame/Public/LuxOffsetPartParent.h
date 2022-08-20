#pragma once
#include "CoreMinimal.h"
#include "ELuxOffsetParentBone.h"
#include "UObject/NoExportTypes.h"
#include "LuxOffsetPartParent.generated.h"

USTRUCT(BlueprintType)
struct FLuxOffsetPartParent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxOffsetParentBone Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultRotation;
    
    LUXORGAME_API FLuxOffsetPartParent();
};

