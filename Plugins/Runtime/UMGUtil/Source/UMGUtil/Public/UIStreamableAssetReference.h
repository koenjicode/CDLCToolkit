#pragma once
#include "CoreMinimal.h"
#include "UIObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "UIStreamableAssetReferenceDelegate.h"
#include "UIStreamableAssetReference.generated.h"

class UUIStreamableAssetReference;
class UObject;

UCLASS(Blueprintable)
class UMGUTIL_API UUIStreamableAssetReference : public UUIObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference Reference;
    
public:
    UUIStreamableAssetReference();
    UFUNCTION(BlueprintCallable)
    void RequestLoad(const FUIStreamableAssetReferenceDelegate& completeDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* getResource() const;
    
    UFUNCTION(BlueprintCallable)
    static UUIStreamableAssetReference* createStreamableAssetReference(const FStringAssetReference& ref);
    
};

