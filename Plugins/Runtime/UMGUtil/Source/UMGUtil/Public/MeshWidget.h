#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "MeshWidget.generated.h"

class USlateVectorArtData;

UCLASS(Blueprintable)
class UMGUTIL_API UMeshWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateVectorArtData* MeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshId;
    
    UMeshWidget();
};

