#pragma once
#include "CoreMinimal.h"
#include "ELuxOffsetParentBone.h"
#include "LuxProfileDataSerializable.h"
#include "UObject/NoExportTypes.h"
#include "LuxProfileSinglePartData.h"
#include "LuxProfileOffsetPartData.generated.h"

USTRUCT(BlueprintType)
struct FLuxProfileOffsetPartData : public FLuxProfileDataSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxProfileSinglePartData part;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxOffsetParentBone parentBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector offsetTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector offsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector offsetThickness;
    
    LUXORGAME_API FLuxProfileOffsetPartData();
};

