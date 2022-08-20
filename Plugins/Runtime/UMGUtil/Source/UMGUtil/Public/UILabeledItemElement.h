#pragma once
#include "CoreMinimal.h"
#include "UIUserElement.h"
#include "UILabeledItemElement.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMGUTIL_API UUILabeledItemElement : public UUIUserElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocTextId;
    
    UUILabeledItemElement();
};

