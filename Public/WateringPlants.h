#pragma once
#include "CoreMinimal.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UImage;
class UButton;
class UTexture2D;
#include "WateringPlants.generated.h"

class UWateringPlants : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="watercanlana1", Category="Animations", OverrideNativeName="watercanlana1"))
	UWidgetAnimation* watercanlana1;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="background", Category="WateringPlants_WG", OverrideNativeName="background"))
	UImage* background;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Plant", Category="WateringPlants_WG", OverrideNativeName="Plant"))
	UImage* Plant;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="WaterDrip", Category="WateringPlants_WG", OverrideNativeName="WaterDrip"))
	UImage* WaterDrip;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="WateringCan", Category="WateringPlants_WG", OverrideNativeName="WateringCan"))
	UButton* WateringCan;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Watering Timer", Category="Default", MultiLine="true", OverrideNativeName="WateringTimer"))
	float WateringTimer;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Drip Sprites Texture", Category="Default", MultiLine="true", OverrideNativeName="DripSpritesTexture"))
	TArray<UTexture2D*> DripSpritesTexture;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Plants Texture", Category="Default", MultiLine="true", OverrideNativeName="PlantsTexture"))
	TArray<UTexture2D*> PlantsTexture;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Drip Animate Index", Category="Default", MultiLine="true", OverrideNativeName="DripAnimateIndex"))
	int32 DripAnimateIndex;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Done", Category="Default", MultiLine="true", OverrideNativeName="Done"))
	bool Done;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="gate_open_or_close"))
	bool gate_open_or_close;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Has_Been_Initd"))
	bool Has_Been_Initd;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="WidgetTransform_0"))
	FWidgetTransform WidgetTransform_0;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="IsClosed"))
	bool IsClosed;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="MyGeometry"))
	FGeometry MyGeometry;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="InDeltaTime"))
	float InDeltaTime;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="WidgetTransform_1"))
	FWidgetTransform WidgetTransform_1;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="MakeArray_0"))
	TArray<UTexture2D*> MakeArray_0;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="MakeArray_1"))
	TArray<UTexture2D*> MakeArray_1;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Random_OutItem"))
	UTexture2D* Random_OutItem;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Random_OutIndex"))
	int32 Random_OutIndex;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Get_Item"))
	UTexture2D* Get_Item;
	UWateringPlants(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="SetDefault"))
	void bpf__SetDefault(int32 bpp__EntryPoint);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick(FGeometry bpp__MyGeometry, float bpp__InDeltaTime);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__poop_water_watercan_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__poop_water_watercan_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__poop_water_watercan_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__poop_water_watercan_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
