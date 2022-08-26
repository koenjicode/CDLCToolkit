#pragma once
#include "CoreMinimal.h"
#include "LuxTexturePrintParam.h"
#include "UObject/Object.h"
#include "LuxTexturePrinter.h"
#include "LuxCreationTextureSpec.generated.h"

class UTexture;

UCLASS(Blueprintable, Config=Game)
class LUXORGAME_API ULuxCreationTextureSpec : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLuxTexturePrinter> TexturePrinters;
    
public:
    ULuxCreationTextureSpec();
    UFUNCTION(BlueprintCallable)
    static UTexture* PrintTexture(const FLuxTexturePrintParam& InParam);
    
};

