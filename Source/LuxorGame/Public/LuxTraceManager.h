#pragma once
#include "CoreMinimal.h"
#include "LuxActor.h"
#include "ELuxTracePartsId.h"
#include "TraceInactiveParam.h"
#include "UObject/NoExportTypes.h"
#include "TraceActiveParam.h"
#include "LuxTraceManager.generated.h"

class ULuxTraceDataAsset;
class USceneComponent;
class ULuxCreationProfile;
class ULuxTraceComponent;
class AActor;

UCLASS(Blueprintable)
class LUXORGAME_API ALuxTraceManager : public ALuxActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxTraceDataAsset* TraceDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULuxCreationProfile* CreationProfile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* CharaAttachComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* WeaponAttachComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULuxTraceComponent* TraceComponent;
    
public:
    ALuxTraceManager();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(int32 InAttachIndex, bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void Setup(int32 InAttachIndex, AActor* InAttachActor, USceneComponent* InAttachComponent, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetElapsedTime(float InElapsedTime, float InElapsedTimeWithStop);
    
    UFUNCTION(BlueprintCallable)
    void Inactive(const FTraceInactiveParam& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTracePosition(ELuxTracePartsId InTracePartsId, int32 inPlayerIndex, FVector& TipPosition, FVector& HiltPosition) const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyTraceComponent();
    
    UFUNCTION(BlueprintCallable)
    void Active(const FTraceActiveParam& Param);
    
};

