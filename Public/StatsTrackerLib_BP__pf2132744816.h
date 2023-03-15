#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
class UObject;
class UGameInstance_BP_C__pf2132744816;
#include "StatsTrackerLib_BP__pf2132744816.generated.h"
UCLASS(config=Engine, meta=(ReplaceConverted="/Game/Blueprints/StatsTrackerLib_BP.StatsTrackerLib_BP_C", OverrideNativeName="StatsTrackerLib_BP_C"))
class UStatsTrackerLib_BP_C__pf2132744816 : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()
	UStatsTrackerLib_BP_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="GetStats"))
	static void bpf__GetStats__pf(UObject* bpp____WorldContext__pf, /*out*/ UGameInstance_BP_C__pf2132744816*& bpp__GameInstance__pf);
	UFUNCTION(BlueprintCallable, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="AddStats"))
	static void bpf__AddStats__pf(const FString& bpp__StatName__pf__const, float bpp__Value__pf, UObject* bpp____WorldContext__pf);
	UFUNCTION(BlueprintCallable, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="ReadStats"))
	static void bpf__ReadStats__pf(const FString& bpp__StatName__pf__const, bool bpp__ReadAsPercent__pf, UObject* bpp____WorldContext__pf, /*out*/ float& bpp__Value__pf);
	UFUNCTION(BlueprintCallable, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="NewStats"))
	static void bpf__NewStats__pf(const FString& bpp__StatName__pf__const, float bpp__StartValue__pf, bool bpp__HaveMaxValue__pf, float bpp__MaxValue__pf, UObject* bpp____WorldContext__pf);
	UFUNCTION(BlueprintCallable, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="SetStats"))
	static void bpf__SetStats__pf(const FString& bpp__StatName__pf__const, float bpp__Value__pf, UObject* bpp____WorldContext__pf);
public:
};
