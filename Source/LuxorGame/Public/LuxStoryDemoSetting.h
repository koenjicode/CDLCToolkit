#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ELuxStoryDemoFadeType.h"
#include "ELuxStoryDemoType.h"
#include "LuxBattleMoveCategoryTableRow.h"
#include "LuxStoryDemoSetting.generated.h"

class UBaseUserWidget;
class ULuxUIAssetPaths;
class ULuxStoryDemoResourceDataAsset;

USTRUCT(BlueprintType)
struct FLuxStoryDemoSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxStoryDemoType DemoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetSubclassOf<UBaseUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<ULuxStoryDemoResourceDataAsset> DemoResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxUIAssetPaths* DataAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxUIAssetPaths* AdditionalDataAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxStoryDemoFadeType FadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBGM;
    
    LUXORGAME_API FLuxStoryDemoSetting();
};

