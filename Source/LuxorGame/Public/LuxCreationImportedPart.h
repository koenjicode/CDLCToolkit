#pragma once
#include "CoreMinimal.h"
#include "LuxCreationPartBase.h"
#include "LuxMeshDataVariation.h"
#include "ELuxPartCategory.h"
#include "ELuxPartPriority.h"
#include "LuxSlotMeshData.h"
#include "ELuxColorEditableFlag.h"
#include "LuxVariationRequest.h"
#include "LuxOffsetPart.h"
#include "ELuxPartSlot.h"
#include "LuxCreationImportedPart.generated.h"

UCLASS(Blueprintable)
class LUXORGAME_API ULuxCreationImportedPart : public ULuxCreationPartBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxPartCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxPartPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxSlotMeshData> DefaultMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxMeshDataVariation> MeshVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxVariationRequest VariationRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxPartSlot> DeleteSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxPartCategory> DeleteCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DeletePartNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELuxPartCategory> OnewayDeleteCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableBreastSwing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<ELuxColorEditableFlag> ColorEditFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<bool> UnderwearColorFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuxOffsetPart OffsetPart;
    
    ULuxCreationImportedPart();
};

