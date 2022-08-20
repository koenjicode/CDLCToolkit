#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimationAsset.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "LuxRootMotionComponent.generated.h"

class ALuxStageSkeletalMeshActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LUXORGAME_API ULuxRootMotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALuxStageSkeletalMeshActor* Owner;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRootMotionMovementParams RootMotionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CachedRootMotionTransform;
    
    ULuxRootMotionComponent();
};

