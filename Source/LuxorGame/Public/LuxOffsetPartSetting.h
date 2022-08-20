#pragma once
#include "CoreMinimal.h"
#include "ELuxPartCategory.h"
#include "ELuxOffsetParentBone.h"
#include "UObject/NoExportTypes.h"
#include "LuxOffsetPartSetting.generated.h"

USTRUCT(BlueprintType)
struct FLuxOffsetPartSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxPartCategory Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxOffsetParentBone parentBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector offsetTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector offsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetScale;
    
    LUXORGAME_API FLuxOffsetPartSetting();
};

