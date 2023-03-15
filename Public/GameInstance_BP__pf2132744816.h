#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "GameInstance_BP__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/GameInstance_BP.GameInstance_BP_C", OverrideNativeName="GameInstance_BP_C"))
class UGameInstance_BP_C__pf2132744816 : public UGameInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Stats", Category="Default", MultiLine="true", OverrideNativeName="Stats"))
	TMap<FString,float> bpv__Stats__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Stats Max", Category="Default", MultiLine="true", OverrideNativeName="StatsMax"))
	TMap<FString,float> bpv__StatsMax__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Minigame", Category="Default", MultiLine="true", OverrideNativeName="Minigame"))
	TMap<FString,UUserWidget*> bpv__Minigame__pf;
	UGameInstance_BP_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
