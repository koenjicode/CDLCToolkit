#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMGUtil -ObjectName=UIDataObject -FallbackName=UIDataObject
//CROSS-MODULE INCLUDE V2: -ModuleName=UMGUtil -ObjectName=UIObject -FallbackName=UIObject
#include "ELuxProfileFactoryProjectSearchMenu.h"
#include "ELuxProfileDataContainerType.h"
#include "LuxPersonalityCommentInfo.h"
#include "LuxProfileData.h"
#include "ELuxFightStyle.h"
#include "ELuxProfilePersonalityCommentType.h"
#include "ELuxModelColorType.h"
#include "UIDataObject.h"
#include "UIObject.h"
#include "LuxProfileFactory.generated.h"

class ULuxCreationProfile;

UCLASS(Blueprintable)
class ULuxProfileFactory : public UUIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool working;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELuxProfileDataContainerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULuxCreationProfile* product;
    
    ULuxProfileFactory();
    UFUNCTION(BlueprintCallable)
    ULuxCreationProfile* shipOut(int32 customResetFlags, bool ignoreRefresh);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentProjectData(const FLuxProfileData& ProfileData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void searchProjectIdsByWithExcludeFightStyles(ELuxProfileDataContainerType _type, ELuxProfileFactoryProjectSearchMenu menu, TArray<int32>& Ids, TArray<ELuxFightStyle> excludeFightStyles, bool excludeParentaledChara, bool excludeBannedChara, bool includeUnknownAuthor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void searchProjectIdsBy(ELuxProfileDataContainerType _type, ELuxProfileFactoryProjectSearchMenu menu, TArray<int32>& Ids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIDataObject searchFavoriteProjectIdsWithExcludeFightStyles(TArray<ELuxFightStyle> excludeFightStyles, bool uniqueOnly, bool excludeParentaledChara) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIDataObject searchFavoriteProjectIds(bool uniqueOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void searchAuthorIdsBy(ELuxProfileDataContainerType _type, ELuxProfileFactoryProjectSearchMenu menu, TArray<FString>& Ids) const;
    
    UFUNCTION(BlueprintCallable)
    void Save();
    
    UFUNCTION(BlueprintCallable)
    bool kickStartWithPreviousData();
    
    UFUNCTION(BlueprintCallable)
    void kickStartByProject(const FLuxProfileData& ProfileData);
    
    UFUNCTION(BlueprintCallable)
    void kickStartByProfileData(ELuxProfileDataContainerType _type, int32 _id, const FLuxProfileData& ProfileData);
    
    UFUNCTION(BlueprintCallable)
    void kickStartByProduct(ULuxCreationProfile* baseProduct);
    
    UFUNCTION(BlueprintCallable)
    void kickStart(ELuxProfileDataContainerType _type, int32 _id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isWorking() const;
    
    UFUNCTION(BlueprintCallable)
    void importFromProfileAsset(TAssetPtr<ULuxCreationProfile> baseProductAsset);
    
    UFUNCTION(BlueprintCallable)
    void importFromProfile(ULuxCreationProfile* baseProduct);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProjectDataById(ELuxProfileDataContainerType _type, int32 _id, FLuxProfileData& ProfileData, bool& success) const;
    
    UFUNCTION(BlueprintCallable)
    FLuxPersonalityCommentInfo getPersonalCommentInfo(const FLuxProfileData& ProfileData, ELuxProfilePersonalityCommentType commentType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentProjectData(FLuxProfileData& ProfileData, bool& success) const;
    
    UFUNCTION(BlueprintCallable)
    FLuxPersonalityCommentInfo getCurrentPersonalCommentInfo(ELuxProfilePersonalityCommentType commentType);
    
    UFUNCTION(BlueprintCallable)
    void exportToProfile(ULuxCreationProfile* Profile, const FString& Category);
    
    UFUNCTION(BlueprintCallable)
    void deleteProjectDataById(ELuxProfileDataContainerType _type, int32 _id);
    
    UFUNCTION(BlueprintCallable)
    void createRegularProfile(ELuxFightStyle STYLE, ELuxModelColorType Color);
    
    UFUNCTION(BlueprintCallable)
    void createProfileFromCurrentRacialAndGender();
    
    UFUNCTION(BlueprintCallable)
    void closeDown();
    
};

