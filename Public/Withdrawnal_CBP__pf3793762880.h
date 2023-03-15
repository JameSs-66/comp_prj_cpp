#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "InteractionBox_BP__pf2132744816.h"
class AActor;
class ACharacterBase_BP_C__pf2567911892;
class UUserWidget;
#include "Withdrawnal_CBP__pf3793762880.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/BuildingDoorBP/Withdrawnal_CBP.Withdrawnal_CBP_C", OverrideNativeName="Withdrawnal_CBP_C"))
class AWithdrawnal_CBP_C__pf3793762880 : public AInteractionBox_BP_C__pf2132744816
{
public:
	GENERATED_BODY()
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b1l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ButtonPressed"))
	FKey b1l__K2Node_Event_ButtonPressed__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCharacter_Base_BP"))
	ACharacterBase_BP_C__pf2567911892* b1l__K2Node_DynamicCast_AsCharacter_Base_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UUserWidget* b1l__CallFunc_Array_Get_Item__pf;
	AWithdrawnal_CBP_C__pf3793762880(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Withdrawnal_CBP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Withdrawnal_CBP__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Category="Mouse Input", Comment="/** Event when this actor is clicked by the mouse when using the clickable interface. */", DisplayName="ActorOnClicked", ToolTip="Event when this actor is clicked by the mouse when using the clickable interface.", CppFromBpEvent, OverrideNativeName="ReceiveActorOnClicked"))
	virtual void bpf__ReceiveActorOnClicked__pf(FKey bpp__ButtonPressed__pf);
	UFUNCTION(meta=(Category="Collision", Comment="/** \t *\tEvent when this actor overlaps another actor, for example a player walking into a trigger.\t *\tFor events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.\t *\t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\t */", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	virtual void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
public:
};
