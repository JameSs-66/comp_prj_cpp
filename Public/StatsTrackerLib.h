#pragma once
#include "CoreMinimal.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
class UObject;
class UGameInstance_BP;
#include "StatsTrackerLib.generated.h"

class UStatsTrackerLib : public UBlueprintFunctionLibrary {
public:
  GENERATED_BODY()
  UStatsTrackerLib(
      const FObjectInitializer &ObjectInitializer = FObjectInitializer::Get());
  virtual void
  PostLoadSubobjects(FObjectInstancingGraph *OuterInstanceGraph) override;
  static void CustomDynamicClassInitialization(UDynamicClass *InDynamicClass);
  static void
  StaticDependenciesAssets(TArray<FBlueprintDependencyData> &AssetsToLoad);
  static void StaticDependencies_DirectlyUsedAssets(
      TArray<FBlueprintDependencyData> &AssetsToLoad);
  UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext", Category,
                                       OverrideNativeName = "GetStats"))
  static void GetStats(UObject *WorldContext,
                       UGameInstance *&GameInstance);
  UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext", Category,
                                       OverrideNativeName = "AddStats"))
  static void AddStats(const FString &StatNameconst, float Value,
                       UObject *WorldContext);
  UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext", Category,
                                       OverrideNativeName = "ReadStats"))
  static void ReadStats(const FString &StatNameconst, bool ReadAsPercent,
                        UObject *WorldContext, float &Value);
  UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext", Category,
                                       OverrideNativeName = "NewStats"))
  static void NewStats(const FString &StatNameconst, float StartValue,
                       bool HaveMaxValue, float MaxValue,
                       UObject *WorldContext);
  UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContext", Category,
                                       OverrideNativeName = "SetStats"))
  static void SetStats(const FString &StatNameconst, float Value,
                       UObject *WorldContext);

public:
};
