#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperCharacter.h"
class UStaticMeshComponent;
class UCameraComponent;
class USpringArmComponent;
class UObject;
class UUserWidget;
class UClass;
class AActor;
#include "CharacterBase_BP__pf2567911892.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/CharacterBP/CharacterBase_BP.CharacterBase_BP_C", OverrideNativeName="CharacterBase_BP_C"))
class ACharacterBase_BP_C__pf2567911892 : public APaperCharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="InteractionHitBox"))
	UStaticMeshComponent* bpv__InteractionHitBox__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpringArm"))
	USpringArmComponent* bpv__SpringArm__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Mouse Input", Category="Default", MultiLine="true", OverrideNativeName="IsMouseInput"))
	bool bpv__IsMouseInput__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", MultiLine="true", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time Speed", Category="Default", MultiLine="true", OverrideNativeName="TimeSpeed"))
	float bpv__TimeSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Clicked on Door", Category="Default", MultiLine="true", OverrideNativeName="IsClickedOnDoor"))
	bool bpv__IsClickedOnDoor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is in Front Of Door", Category="Default", MultiLine="true", OverrideNativeName="IsInFrontOfDoor"))
	bool bpv__IsInFrontOfDoor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Teleport", Category="Default", MultiLine="true", OverrideNativeName="CanTeleport"))
	bool bpv__CanTeleport__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Elevator Up", Category="Default", MultiLine="true", OverrideNativeName="ElevatorUp"))
	bool bpv__ElevatorUp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is in Front Of Quest", Category="Default", MultiLine="true", OverrideNativeName="IsInFrontOfQuest"))
	bool bpv__IsInFrontOfQuest__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="ZOrder", Category="Default", MultiLine="true", OverrideNativeName="ZOrder"))
	int32 bpv__ZOrder__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mini Game Widget", Category="Default", MultiLine="true", OverrideNativeName="MiniGameWidget"))
	TArray<UObject*> bpv__MiniGameWidget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Move", Category="Default", MultiLine="true", OverrideNativeName="CanMove"))
	bool bpv__CanMove__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="UIArray", Category="Default", MultiLine="true", OverrideNativeName="UIArray"))
	TArray<UClass*> bpv__UIArray__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="UIWidget Created", Category="Default", MultiLine="true", OverrideNativeName="UIWidgetCreated"))
	TArray<UUserWidget*> bpv__UIWidgetCreated__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Teleport to Location", Category="Default", MultiLine="true", OverrideNativeName="TeleportToLocation"))
	FVector bpv__TeleportToLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_1"))
	FKey b0l__K2Node_InputKeyEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b0l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_1"))
	bool b0l__Temp_bool_IsClosed_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_3"))
	FKey b0l__K2Node_InputActionEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_2"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_1"))
	FKey b0l__Temp_struct_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetClickedLocation_Destination"))
	FVector b0l__CallFunc_GetClickedLocation_Destination__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetClickedLocation_ClickedActor"))
	AActor* b0l__CallFunc_GetClickedLocation_ClickedActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetClickedLocation_IsCleckedOnDoor"))
	bool b0l__CallFunc_GetClickedLocation_IsCleckedOnDoor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_2"))
	FKey b0l__K2Node_InputKeyEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetDestionationToMove_Destionation"))
	FVector b0l__CallFunc_GetDestionationToMove_Destionation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b0l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_2"))
	bool b0l__Temp_bool_IsClosed_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value"))
	float b0l__CallFunc_ReadStats_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_1"))
	float b0l__CallFunc_ReadStats_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_2"))
	float b0l__CallFunc_ReadStats_Value_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_3"))
	FKey b0l__K2Node_InputKeyEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UClass*> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UClass* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue_2"))
	UUserWidget* b0l__CallFunc_Create_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_2"))
	FKey b0l__Temp_struct_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_4"))
	FKey b0l__K2Node_InputKeyEvent_Key_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_5"))
	FKey b0l__K2Node_InputKeyEvent_Key_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_3"))
	float b0l__CallFunc_ReadStats_Value_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_4"))
	float b0l__CallFunc_ReadStats_Value_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_5"))
	float b0l__CallFunc_ReadStats_Value_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_6"))
	float b0l__CallFunc_ReadStats_Value_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_7"))
	float b0l__CallFunc_ReadStats_Value_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_8"))
	float b0l__CallFunc_ReadStats_Value_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_9"))
	float b0l__CallFunc_ReadStats_Value_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_10"))
	float b0l__CallFunc_ReadStats_Value_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_11"))
	float b0l__CallFunc_ReadStats_Value_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_12"))
	float b0l__CallFunc_ReadStats_Value_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_13"))
	float b0l__CallFunc_ReadStats_Value_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_14"))
	float b0l__CallFunc_ReadStats_Value_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_15"))
	float b0l__CallFunc_ReadStats_Value_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_16"))
	float b0l__CallFunc_ReadStats_Value_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_17"))
	float b0l__CallFunc_ReadStats_Value_17__pf;
	ACharacterBase_BP_C__pf2567911892(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_CharacterBase_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterBase_BP__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_CharacterBase_BP_2"))
	void bpf__ExecuteUbergraph_CharacterBase_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterBase_BP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterBase_BP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterBase_BP__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_CharacterBase_BP_6"))
	void bpf__ExecuteUbergraph_CharacterBase_BP__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CharacterBase_BP__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_KeyboardMovement_K2Node_InputAxisEvent_1"))
	virtual void bpf__InpAxisEvt_KeyboardMovement_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_J_K2Node_InputKeyEvent_0"))
	virtual void bpf__InpActEvt_J_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_DebugKey2_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_DebugKey2_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_DebugKey1_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_DebugKey1_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Tab_K2Node_InputKeyEvent_1"))
	virtual void bpf__InpActEvt_Tab_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_CancelPath_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_CancelPath_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_CancelPath_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_CancelPath_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2"))
	virtual void bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3"))
	virtual void bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4"))
	virtual void bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5"))
	virtual void bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetDestionationToMove"))
	virtual void bpf__GetDestionationToMove__pf(/*out*/ FVector& bpp__Destionation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveToLocatedPoint"))
	virtual void bpf__MoveToLocatedPoint__pf(FVector bpp__Destionation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetClickedLocation"))
	virtual void bpf__GetClickedLocation__pf(/*out*/ FVector& bpp__Destination__pf, /*out*/ AActor*& bpp__ClickedActor__pf, /*out*/ bool& bpp__IsCleckedOnDoor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveToActor"))
	virtual void bpf__MoveToActor__pf(AActor* bpp__Actor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateFlipbook"))
	virtual void bpf__UpdateFlipbook__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateRotation"))
	virtual void bpf__UpdateRotation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetDoorTeleportLocation"))
	virtual void bpf__GetDoorTeleportLocation__pf(const FString& bpp__Name__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="IsInfrontOfObjectChecker"))
	virtual void bpf__IsInfrontOfObjectChecker__pf();
public:
};
