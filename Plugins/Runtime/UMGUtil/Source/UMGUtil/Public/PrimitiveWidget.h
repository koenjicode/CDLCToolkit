#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "PrimitiveVerts.h"
#include "Components/Widget.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "PrimitiveWidget.generated.h"

class UTexture2D;
class UMaterialInterface;
class USlateBrushAsset;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class UMGUTIL_API UPrimitiveWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetSlateBrush BrushDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor ColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimitiveVerts> Verts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FOnPointerEvent OnMouseButtonDownEvent;
    
    UPrimitiveWidget();
    UFUNCTION(BlueprintCallable)
    void SetScale(float InScale);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromAsset(USlateBrushAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SetBrush(const FSlateBrush& InBrush);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterial();
    
};

