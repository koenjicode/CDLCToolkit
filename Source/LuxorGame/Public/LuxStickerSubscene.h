#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuxStickerRequest.h"
#include "LuxStickerSubscene.generated.h"

class UStaticMesh;
class UStaticMeshComponent;
class USceneCaptureComponent2D;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ULuxStickerSubscene : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* Capture2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* PlaneMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkelComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLuxStickerRequest> CaptureRequests;
    
public:
    ULuxStickerSubscene();
};

