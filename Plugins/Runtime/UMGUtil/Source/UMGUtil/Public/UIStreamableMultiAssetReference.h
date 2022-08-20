#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "UIStreamableMultiAssetReferenceDelegate.h"
#include "UIStreamableMultiAssetReference.generated.h"

class UObject;
class UUIStreamableMultiAssetReference;

UCLASS(Blueprintable)
class UMGUTIL_API UUIStreamableMultiAssetReference : public UUIObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> Reference;
    
public:
    UUIStreamableMultiAssetReference();
    UFUNCTION(BlueprintCallable)
    void RequestLoad(const FUIStreamableMultiAssetReferenceDelegate& completeDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* getResourceFrom(const FStringAssetReference& ref) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObject*> getResource() const;
    
    UFUNCTION(BlueprintCallable)
    static UUIStreamableMultiAssetReference* createStreamableMultiAssetReference(const TArray<FStringAssetReference>& References);
    
};

