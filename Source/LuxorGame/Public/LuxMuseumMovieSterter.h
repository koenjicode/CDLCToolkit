#pragma once
#include "CoreMinimal.h"
#include "Interface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LuxMuseumMovieSterter.generated.h"

class UFileMediaSource;
class ULuxStoryDemoResourceDataAsset;

UINTERFACE(Blueprintable)
class ULuxMuseumMovieSterter : public UInterface {
    GENERATED_BODY()
};

class ILuxMuseumMovieSterter : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMovie(const TAssetPtr<UFileMediaSource>& movieResource, const TAssetPtr<ULuxStoryDemoResourceDataAsset>& DemoResource);
    
};

