#pragma once
#include "CoreMinimal.h"
#include "PreviewHumanWeaponPartVisibilityData.generated.h"

USTRUCT(BlueprintType)
struct FPreviewHumanWeaponPartVisibilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frame;
    
    LUXORGAME_API FPreviewHumanWeaponPartVisibilityData();
};

