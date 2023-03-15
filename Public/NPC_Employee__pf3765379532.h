#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UPaperSpriteComponent;
class USceneComponent;
#include "NPC_Employee__pf3765379532.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/NPC/Employee/NPC_Employee.NPC_Employee_C", OverrideNativeName="NPC_Employee_C"))
class ANPC_Employee_C__pf3765379532 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PaperSprite"))
	UPaperSpriteComponent* bpv__PaperSprite__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pervius Day", Category="Default", MultiLine="true", OverrideNativeName="PerviusDay"))
	float bpv__PerviusDay__pf;
	ANPC_Employee_C__pf3765379532(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RandomPosition"))
	virtual void bpf__RandomPosition__pf(/*out*/ TArray<FTransform>& bpp__Transform__pf);
public:
};
