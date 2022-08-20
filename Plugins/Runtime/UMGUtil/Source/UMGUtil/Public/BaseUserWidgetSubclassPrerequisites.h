#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseUserWidgetSubclassPrerequisites.generated.h"

class UUIProperties;
class UUIWidgetPropertyBinder;
class UUIWidgetInputBinder;

USTRUCT(BlueprintType)
struct FBaseUserWidgetSubclassPrerequisites {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInheritUIProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIProperties> UIPropertiesClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUIWidgetPropertyBinder>> UIPropertyBinderClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIWidgetInputBinder> UIInputBinderClass;
    
    UMGUTIL_API FBaseUserWidgetSubclassPrerequisites();
};

