#pragma once
#include "CoreMinimal.h"
#include "LuxSkeletalMeshComponent.h"
#include "LuxStageSkeletalMeshComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LUXORGAME_API ULuxStageSkeletalMeshComponent : public ULuxSkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DefaultMaterialList;
    
public:
    ULuxStageSkeletalMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetScalarParameter(FName Name, float Value);
    
};

