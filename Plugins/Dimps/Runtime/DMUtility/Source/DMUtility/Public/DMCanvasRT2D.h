#pragma once
#include "CoreMinimal.h"
#include "Engine/CanvasRenderTarget2D.h"
#include "DMCanvasRT2D.generated.h"

UCLASS(Blueprintable)
class DMUTILITY_API UDMCanvasRT2D : public UCanvasRenderTarget2D {
    GENERATED_BODY()
public:
    UDMCanvasRT2D();
};

