#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "CaptureRequest.h"
#include "UObject/NoExportTypes.h"
#include "DMSubScene.generated.h"

class UStaticMesh;
class UStaticMeshComponent;
class USceneCaptureComponent2D;
class AActor;
class UTextureRenderTarget2D;
class UMaterialInterface;

UCLASS(Blueprintable, Config=Game)
class DMUTILITY_API UDMSubScene : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressSubscene;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* Capture2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* PlaneMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCaptureRequest> CaptureRequests;
    
public:
    UDMSubScene();
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnActorSubScene(TSubclassOf<AActor> InClass, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    static void RequestCapture(UTextureRenderTarget2D* inRT, UMaterialInterface* inMat);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBusy();
    
};

