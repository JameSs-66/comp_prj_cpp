#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class AActor;
#include "InteractionBox_BP__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/InteractionBox_BP.InteractionBox_BP_C,/Game/Blueprints/BuildingDoorBP/InteractionBox_BP.InteractionBox_BP_C,/Game/Blueprints/BuildingDoorBP/AnyDoor_BP.AnyDoor_BP_C,/Game/Blueprints/BuildingDoorBP/CustomDoor_BP.CustomDoor_BP_C,/Game/Blueprints/CharacterBP/CustomDoor_BP.CustomDoor_BP_C", OverrideNativeName="InteractionBox_BP_C"))
class AInteractionBox_BP_C__pf2132744816 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MouseClick"))
	UStaticMeshComponent* bpv__MouseClick__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Highlight"))
	UStaticMeshComponent* bpv__Highlight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="InFrontOfDoorCheck"))
	UStaticMeshComponent* bpv__InFrontOfDoorCheck__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Charactor in Front Of Object", Category="Default", MultiLine="true", OverrideNativeName="IsCharactorInFrontOfObject"))
	bool bpv__IsCharactorInFrontOfObject__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Reset Next Day", Category="Default", MultiLine="true", OverrideNativeName="ResetNextDay"))
	bool bpv__ResetNextDay__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enable Rank", Category="Default", MultiLine="true", OverrideNativeName="EnableRank"))
	int32 bpv__EnableRank__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Have Priority", Category="Default", MultiLine="true", OverrideNativeName="HavePriority"))
	bool bpv__HavePriority__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="UIReset", Category="Default", MultiLine="true", OverrideNativeName="UIReset"))
	bool bpv__UIReset__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enable Company Priority", Category="Default", MultiLine="true", OverrideNativeName="EnableCompanyPriority"))
	bool bpv__EnableCompanyPriority__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Interact", Category="Default", MultiLine="true", OverrideNativeName="CanInteract"))
	bool bpv__CanInteract__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Door", Category="Default", MultiLine="true", OverrideNativeName="IsDoor"))
	bool bpv__IsDoor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Day", Category="Default", MultiLine="true", BlueprintPrivate="true", OverrideNativeName="Day"))
	float bpv__Day__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Do Quest", Category="Default", MultiLine="true", OverrideNativeName="CanDoQuest"))
	bool bpv__CanDoQuest__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="All Done", Category="Default", MultiLine="true", OverrideNativeName="AllDone"))
	bool bpv__AllDone__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value"))
	float b0l__CallFunc_ReadStats_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOverlappingActors_OverlappingActors"))
	TArray<AActor*> b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AActor* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_1"))
	float b0l__CallFunc_ReadStats_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_2"))
	float b0l__CallFunc_ReadStats_Value_2__pf;
	AInteractionBox_BP_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_InteractionBox_BP_0"))
	void bpf__ExecuteUbergraph_InteractionBox_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InteractionBox_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InteractionBox_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InteractionBox_BP__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Category="Mouse Input", Comment="/** Event when this actor has the mouse moved off of it with the clickable interface. */", DisplayName="ActorEndCursorOver", ToolTip="Event when this actor has the mouse moved off of it with the clickable interface.", CppFromBpEvent, OverrideNativeName="ReceiveActorEndCursorOver"))
	virtual void bpf__ReceiveActorEndCursorOver__pf();
	UFUNCTION(meta=(Category="Mouse Input", Comment="/** Event when this actor has the mouse moved over it with the clickable interface. */", DisplayName="ActorBeginCursorOver", ToolTip="Event when this actor has the mouse moved over it with the clickable interface.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginCursorOver"))
	virtual void bpf__ReceiveActorBeginCursorOver__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EnableAndReset"))
	virtual void bpf__EnableAndReset__pf(int32 bpp__EnableOnRank__pf, bool bpp__EnableDayReset__pf);
public:
};
