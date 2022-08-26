#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LocalPlayer.h"
#include "LuxLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class LUXORGAME_API ULuxLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OriginOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SizeOverride;
    
public:
    ULuxLocalPlayer();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOverrideViewportScaling() const;
    
    UFUNCTION(BlueprintCallable)
    void SetViewportScaling(const FVector2D& inOrigin, const FVector2D& InSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetViewportScaling(FVector2D& inOrigin, FVector2D& InSize) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelViewportScaling();
    
};

