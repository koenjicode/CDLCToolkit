#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FlipbookRequest.h"
#include "DMDirectCaptureComponent.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DMUTILITY_API UDMDirectCaptureComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFlipbookRequest> Requests;
    
public:
    UDMDirectCaptureComponent();
    UFUNCTION(BlueprintCallable)
    void RequestCaptureToFlipbook(UTextureRenderTarget2D* inRT, const int32& inHCount, const int32& inVCount, const float& inOrthoSize);
    
};

