#pragma once
#include "CoreMinimal.h"
#include "FileMediaSource.h"
#include "LuxStoryDemoResourceDataAsset.h"
#include "UObject/Interface.h"
#include "LuxMuseumMovieSterter.generated.h"



UINTERFACE(Blueprintable)
class ULuxMuseumMovieSterter : public UInterface {
    GENERATED_BODY()
};

class ILuxMuseumMovieSterter : public IInterface {
    GENERATED_BODY()
public:
    /*UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMovie(const TAssetPtr<UFileMediaSource>& movieResource, const ULuxStoryDemoResourceDataAsset*& DemoResource);*/
    
};

