#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UImage;
class UButton;
class UTexture2D;
#include "WateringPlants_WG__pf4273311956.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/MiniGame/WateringPlant/WateringPlants_WG.WateringPlants_WG_C,/Game/UI/Ingame/WateringPlant/WateringPlants_WG.WateringPlants_WG_C,/Game/UI/Ingame/WateringPlant/poop_water.poop_water_C", OverrideNativeName="WateringPlants_WG_C"))
class UWateringPlants_WG_C__pf4273311956 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="watercanlana1", Category="Animations", OverrideNativeName="watercanlana1"))
	UWidgetAnimation* bpv__watercanlana1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="background", Category="WateringPlants_WG", OverrideNativeName="background"))
	UImage* bpv__background__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Plant", Category="WateringPlants_WG", OverrideNativeName="Plant"))
	UImage* bpv__Plant__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="WaterDrip", Category="WateringPlants_WG", OverrideNativeName="WaterDrip"))
	UImage* bpv__WaterDrip__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="WateringCan", Category="WateringPlants_WG", OverrideNativeName="WateringCan"))
	UButton* bpv__WateringCan__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Watering Timer", Category="Default", MultiLine="true", OverrideNativeName="WateringTimer"))
	float bpv__WateringTimer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Drip Sprites Texture", Category="Default", MultiLine="true", OverrideNativeName="DripSpritesTexture"))
	TArray<UTexture2D*> bpv__DripSpritesTexture__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Plants Texture", Category="Default", MultiLine="true", OverrideNativeName="PlantsTexture"))
	TArray<UTexture2D*> bpv__PlantsTexture__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Drip Animate Index", Category="Default", MultiLine="true", OverrideNativeName="DripAnimateIndex"))
	int32 bpv__DripAnimateIndex__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Done", Category="Default", MultiLine="true", OverrideNativeName="Done"))
	bool bpv__Done__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_1"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UTexture2D*> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_1"))
	TArray<UTexture2D*> b0l__K2Node_MakeArray_Array_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Random_OutItem"))
	UTexture2D* b0l__CallFunc_Array_Random_OutItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Random_OutIndex"))
	int32 b0l__CallFunc_Array_Random_OutIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UTexture2D* b0l__CallFunc_Array_Get_Item__pf;
	UWateringPlants_WG_C__pf4273311956(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_WateringPlants_WG_0"))
	void bpf__ExecuteUbergraph_WateringPlants_WG__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__poop_water_watercan_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__poop_water_watercan_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__poop_water_watercan_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__poop_water_watercan_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
