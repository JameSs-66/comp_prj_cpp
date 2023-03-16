#pragma once
#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
#include "Clock.generated.h"

class AClock : public AActor {
public:
  GENERATED_BODY()
  UPROPERTY(BlueprintReadWrite, NonTransactional,
            meta = (Category = "Default", OverrideNativeName = "Clock"))
  UStaticMeshComponent *Clock;
  UPROPERTY(BlueprintReadWrite, NonTransactional,
            meta = (Category = "Default", OverrideNativeName = "HourHand"))
  UStaticMeshComponent *HourHand;
  UPROPERTY(BlueprintReadWrite, NonTransactional,
            meta = (Category = "Default", OverrideNativeName = "MinHand"))
  UStaticMeshComponent *MinHand;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "K2Node_Event_DeltaSeconds"))
  float AClockK2Node_Event_DeltaSeconds;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName = "CallFunc_ReadStats_Value"))
  float AClockCallFunc_ReadStats_Value;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName =
                        "CallFunc_K2_SetWorldRotation_SweepHitResult"))
  FHitResult AClockCallFunc_K2_SetWorldRotation_SweepHitResult;
  UPROPERTY(Transient, DuplicateTransient,
            meta = (OverrideNativeName =
                        "CallFunc_K2_SetWorldRotation_SweepHitResult_1"))
  FHitResult AClockCallFunc_K2_SetWorldRotation_SweepHitResult_1;
  AClock(
      const FObjectInitializer &ObjectInitializer = FObjectInitializer::Get());
  virtual void
  PostLoadSubobjects(FObjectInstancingGraph *OuterInstanceGraph) override;
  static void
  AClockCustomDynamicClassInitialization(UDynamicClass *InDynamicClass);
  static void AClockStaticDependenciesAssets(
      TArray<FBlueprintDependencyData> &AssetsToLoad);
  static void AClockStaticDependencies_DirectlyUsedAssets(
      TArray<FBlueprintDependencyData> &AssetsToLoad);
  void AClockExecuteUbergraph_Clock_BP_0(int32 bppAClockEntryPoint);
  UFUNCTION(
      meta =
          (Comment = "/** Event called every frame, if ticking is enabled */",
           DisplayName = "Tick",
           ToolTip = "Event called every frame, if ticking is enabled",
           CppFromBpEvent, OverrideNativeName = "ReceiveTick"))
  virtual void AClockReceiveTick(float bppAClockDeltaSeconds);

public:
};
