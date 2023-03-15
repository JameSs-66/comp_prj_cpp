#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "NPC_ShopE__pf3765379532.h"
class UPaperSprite;
#include "NPC_ShopWB_Child__pf3765379532.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/NPC/Employee/NPC_ShopWB_Child.NPC_ShopWB_Child_C", OverrideNativeName="NPC_ShopWB_Child_C"))
class ANPC_ShopWB_Child_C__pf3765379532 : public ANPC_ShopE_C__pf3765379532
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="NPC3Sprite", Category="Default", MultiLine="true", OverrideNativeName="NPC3Sprite"))
	TArray<UPaperSprite*> bpv__NPC3Sprite__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Random_OutItem"))
	UPaperSprite* b1l__CallFunc_Array_Random_OutItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Random_OutIndex"))
	int32 b1l__CallFunc_Array_Random_OutIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value"))
	float b1l__CallFunc_ReadStats_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_1"))
	float b1l__CallFunc_ReadStats_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Random_OutItem_1"))
	UPaperSprite* b1l__CallFunc_Array_Random_OutItem_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Random_OutIndex_1"))
	int32 b1l__CallFunc_Array_Random_OutIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UPaperSprite*> b1l__K2Node_MakeArray_Array__pf;
	ANPC_ShopWB_Child_C__pf3765379532(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_NPC_ShopWB_Child__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_NPC_ShopWB_Child__pf_1(int32 bpp__EntryPoint__pf);
	virtual void bpf__ReceiveBeginPlay__pf() override;
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf) override;
public:
};
