#pragma once
#include "CoreMinimal.h"
#include "LuxCreationSupplement.h"
#include "LuxFacialPaths.h"
#include "LuxFacialAsset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LUXORGAME_API ULuxFacialAsset : public ULuxCreationSupplement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxFacialPaths FacialPaths;
    
    ULuxFacialAsset();
};

