#pragma once
#include "CoreMinimal.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class UMaterialInstanceDynamic;
class ADirectionalLight;
class UCurveLinearColor;
#include "Sky.generated.h"

class ASky : public AActor
{
public:
  GENERATED_BODY()
  UPROPERTY(BlueprintReadWrite, NonTransactional,
            meta = (Category = "BP_Skydome",
                    OverrideNativeName = "SkySphereMesh"))
  UStaticMeshComponent *SkySphereMesh;
  UPROPERTY(BlueprintReadWrite, NonTransactional,
            meta = (Category = "BP_Skydome", OverrideNativeName = "Base"))
  USceneComponent *Base;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Sky Material", Category = "Default",
                    OverrideNativeName = "Sky material"))
  UMaterialInstanceDynamic *SkyxmaterialT;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Refresh Material", Category = "Default",
                    Tooltip = "Use this to update the sky material after "
                              "moving  a directional light",
                    OverrideNativeName = "Refresh material"))
  bool RefreshxmaterialT;
  UPROPERTY(
      EditInstanceOnly, BlueprintReadWrite,
      meta = (DisplayName = "Directional Light Actor", Category = "Default",
              Tooltip = "Assign your level\'s directional light actor to this "
                        "variable to  match the sky\'s sun position and color",
              OverrideNativeName = "Directional light actor"))
  ADirectionalLight *DirectionalxlightxactorTT;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Colors Determined By Sun Position",
                    Category = "Default",
                    Tooltip = "If enabled, sky colors will change according to "
                              "the sun\'s position",
                    OverrideNativeName = "Colors determined by sun position"))
  bool ColorsxdeterminedxbyxsunxpositionTTTT;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Sun Height", Category = "Override settings",
                    UIMin = "-1", UIMax = "1",
                    Tooltip = "If no directional light is assigned, this value "
                              "determines the height of the sun",
                    OverrideNativeName = "Sun height"))
  float SunxheightT;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Sun Brightness", Category = "Default",
                    Tooltip = "Brightness multiplier for the sun disk",
                    OverrideNativeName = "Sun brightness"))
  float SunxbrightnessT;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Horizon Falloff",
                    Category = "Override settings",
                    Tooltip = "Affects the size of the gradient from zenith "
                              "color to horizon color",
                    OverrideNativeName = "Horizon Falloff"))
  float HorizonxFalloffT;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Zenith Color",
                    Category = "Override settings",
                    OverrideNativeName = "Zenith Color"))
  FLinearColor ZenithxColorT;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Horizon Color",
                    Category = "Override settings",
                    OverrideNativeName = "Horizon color"))
  FLinearColor HorizonxcolorT;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Cloud Color", Category = "Override settings",
                    OverrideNativeName = "Cloud color"))
  FLinearColor CloudxcolorT;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Overall Color",
                    Category = "Override settings",
                    OverrideNativeName = "Overall Color"))
  FLinearColor OverallxColorT;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Cloud Speed", Category = "Default",
                    Tooltip = "Panning speed for the clouds",
                    OverrideNativeName = "Cloud speed"))
  float CloudxspeedT;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Cloud Opacity", Category = "Default",
                    Tooltip = "Opacity of the panning clouds",
                    OverrideNativeName = "Cloud opacity"))
  float CloudxopacityT;
  UPROPERTY(EditAnywhere, BlueprintReadWrite,
            meta = (DisplayName = "Stars Brightness", Category = "Default",
                    Tooltip = "Multiplier for the brightness of the stars when "
                              "the sun is below the horizon",
                    OverrideNativeName = "Stars brightness"))
  float StarsxbrightnessT;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Horizon Color Curve", Category = "Default",
                    OverrideNativeName = "Horizon color curve"))
  UCurveLinearColor *HorizonxcolorxcurveTT;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Zenith Color Curve", Category = "Default",
                    OverrideNativeName = "Zenith color curve"))
  UCurveLinearColor *ZenithxcolorxcurveTT;
  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,
            meta = (DisplayName = "Cloud Color Curve", Category = "Default",
                    OverrideNativeName = "Cloud color curve"))
  UCurveLinearColor *CloudxcolorxcurveTT;
  ASky(const FObjectInitializer &ObjectInitializer = FObjectInitializer::Get());
  virtual void
  PostLoadSubobjects(FObjectInstancingGraph *OuterInstanceGraph) override;
  static void CustomDynamicClassInitialization(UDynamicClass *InDynamicClass);
  static void
  StaticDependenciesAssets(TArray<FBlueprintDependencyData> &AssetsToLoad);
  static void StaticDependencies_DirectlyUsedAssets(
      TArray<FBlueprintDependencyData> &AssetsToLoad);
  UFUNCTION(
      BlueprintCallable,
      meta = (BlueprintInternalUseOnly = "true",
              Comment = "/**\t * Construction script, the place to spawn "
                        "components and do other setup.\t * @note Name used in "
                        "CreateBlueprint function\t */",
              DisplayName = "Construction Script",
              ToolTip =
                  "Construction script, the place to spawn components and do "
                  "other setup.@note Name used in CreateBlueprint function",
              Category, CppFromBpEvent,
              OverrideNativeName = "UserConstructionScript"))
  virtual void UserConstructionScript();
  UFUNCTION(BlueprintCallable,
            meta = (Category, OverrideNativeName = "UpdateSunDirection"))
  virtual void UpdateSunDirection();
  UFUNCTION(BlueprintCallable,
            meta = (Category, OverrideNativeName = "RefreshMaterial"))
  virtual void RefreshMaterial();

public:
};
