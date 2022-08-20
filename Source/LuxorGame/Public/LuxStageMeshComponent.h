#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "LuxStageMeshComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LUXORGAME_API ULuxStageMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DefaultMaterialList;
    
public:
    ULuxStageMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetScalarParameter(FName Name, float Value);
    
};

