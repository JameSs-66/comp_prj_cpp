#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
class UUserWidget;
class UClass;
class UObject;
class UGameInstance_BP_C__pf2132744816;
#include "MiniGameOpenerLib_BP__pf2132744816.generated.h"
UCLASS(config=Engine, meta=(ReplaceConverted="/Game/Blueprints/MiniGameOpenerLib_BP.MiniGameOpenerLib_BP_C", OverrideNativeName="MiniGameOpenerLib_BP_C"))
class UMiniGameOpenerLib_BP_C__pf2132744816 : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()
	UMiniGameOpenerLib_BP_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="CreateMiniGameWidget"))
	static void bpf__CreateMiniGameWidget__pf(/*out*/ TArray<UClass*>& bpp__WidgetClass__pf, UObject* bpp____WorldContext__pf);
	UFUNCTION(BlueprintCallable, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="GetMiniGameWidget"))
	static void bpf__GetMiniGameWidget__pf(const FString& bpp__MiniGameName__pf__const, UObject* bpp____WorldContext__pf, /*out*/ UUserWidget*& bpp__MiniGameWidget__pf);
	UFUNCTION(BlueprintCallable, meta=(WorldContext="__WorldContext", Category, OverrideNativeName="GetMap"))
	static void bpf__GetMap__pf(UObject* bpp____WorldContext__pf, /*out*/ UGameInstance_BP_C__pf2132744816*& bpp__GameInstance__pf);
public:
};
