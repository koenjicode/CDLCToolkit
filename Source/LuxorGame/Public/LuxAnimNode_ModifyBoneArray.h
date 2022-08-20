#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimTypes.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "BoneModifyTransformArray.h"
#include "LuxAnimNode_ModifyBoneArray.generated.h"

USTRUCT(BlueprintType)
struct LUXORGAME_API FLuxAnimNode_ModifyBoneArray : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneModificationMode> TranslationMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneModificationMode> RotationMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneModificationMode> ScaleMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> TranslationSpace;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> RotationSpace;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> ScaleSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneModifyTransformArray BoneModifyTransformArray;
    
    FLuxAnimNode_ModifyBoneArray();
};

