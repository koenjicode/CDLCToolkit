#pragma once
#include "CoreMinimal.h"
#include "LuxUIStoreContent.h"
#include "LuxUIStoreConfig.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLuxUIStoreConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> BannerTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BannerTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLuxUIStoreContent> StoreContents;
    
    LUXORGAME_API FLuxUIStoreConfig();
};

