#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ImageTagInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UMGUTIL_API FImageTagInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ImageTexturePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Flipbook_Row;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Flipbook_Col;
    
    FImageTagInfo();
};

