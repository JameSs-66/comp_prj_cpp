#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "InteractionBox_BP__pf2132744816.h"
class ACharacterBase_BP_C__pf2567911892;
class UUserWidget;
class UDialogUI_C__pf1489439355;
#include "CoffeMachine_CBP__pf3793762880.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/BuildingDoorBP/CoffeMachine_CBP.CoffeMachine_CBP_C", OverrideNativeName="CoffeMachine_CBP_C"))
class ACoffeMachine_CBP_C__pf3793762880 : public AInteractionBox_BP_C__pf2132744816
{
public:
	GENERATED_BODY()
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b1l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b1l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ButtonPressed"))
	FKey b1l__K2Node_Event_ButtonPressed__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value"))
	float b1l__CallFunc_ReadStats_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCharacter_Base_BP"))
	ACharacterBase_BP_C__pf2567911892* b1l__K2Node_DynamicCast_AsCharacter_Base_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UUserWidget* b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_1"))
	float b1l__CallFunc_ReadStats_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCharacter_Base_BP_1"))
	ACharacterBase_BP_C__pf2567911892* b1l__K2Node_DynamicCast_AsCharacter_Base_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_2"))
	float b1l__CallFunc_ReadStats_Value_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	UUserWidget* b1l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDialog_UI"))
	UDialogUI_C__pf1489439355* b1l__K2Node_DynamicCast_AsDialog_UI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	ACoffeMachine_CBP_C__pf3793762880(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_CoffeMachine_CBP__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_CoffeMachine_CBP_1"))
	void bpf__ExecuteUbergraph_CoffeMachine_CBP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CoffeMachine_CBP__pf_2(int32 bpp__EntryPoint__pf);
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf) override;
	virtual void bpf__ReceiveBeginPlay__pf() override;
	UFUNCTION(meta=(Category="Mouse Input", Comment="/** Event when this actor is clicked by the mouse when using the clickable interface. */", DisplayName="ActorOnClicked", ToolTip="Event when this actor is clicked by the mouse when using the clickable interface.", CppFromBpEvent, OverrideNativeName="ReceiveActorOnClicked"))
	virtual void bpf__ReceiveActorOnClicked__pf(FKey bpp__ButtonPressed__pf);
public:
};
