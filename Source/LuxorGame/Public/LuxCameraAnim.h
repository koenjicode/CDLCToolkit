#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraAnim.h"
#include "LuxCameraAnim.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxCameraAnim : public UCameraAnim {
    GENERATED_BODY()
public:
    ULuxCameraAnim();


    //~ Begin UObject Interface
    virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
    virtual void PostLoad() override;
    virtual void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) override;
    //~ End UObject Interface
};

