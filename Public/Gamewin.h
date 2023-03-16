#pragma once
#include "CoreMinimal.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UButton;
class UOverlay;
class UTextBlock;
class UGameInstance;
#include "Gamewin.generated.h"

UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Gamewin.Gamewin_C", OverrideNativeName="Gamewin_C"))
class UGamewin : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(Code, Export, meta=(DisplayName="Image_260", Category="Gamewin", OverrideNativeName="Image_260"))
	UImage* Image;
	UPROPERTY(Code, Export, meta=(DisplayName="No", Category="Gamewin", OverrideNativeName="No"))
	UButton* No;
	UPROPERTY(Code, Export, meta=(DisplayName="Overlay_0", Category="Gamewin", OverrideNativeName="Overlay_0"))
	UOverlay* Overlay;
	UPROPERTY(Code, Export, meta=(DisplayName="Return", Category="Gamewin", OverrideNativeName="Return"))
	UTextBlock* Return;
	UPROPERTY(Code, Export, meta=(DisplayName="TextBlock", Category="Gamewin", OverrideNativeName="TextBlock"))
	UTextBlock* TextBlock;
	UPROPERTY(Code, Export, meta=(DisplayName="TextBlock_1", Category="Gamewin", OverrideNativeName="TextBlock_1"))
	UTextBlock* TextBlock_1;
	UPROPERTY(Code, Export, meta=(DisplayName="TextBlock_45", Category="Gamewin", OverrideNativeName="TextBlock_45"))
	UTextBlock* TextBlock_45;
	UPROPERTY(Code, Export, meta=(DisplayName="Yes", Category="Gamewin", OverrideNativeName="Yes"))
	UButton* Yes;
	UPROPERTY(EditDefaultsOnly, Code, meta=(DisplayName="Delay Time", Category="Default", MultiLine="true", OverrideNativeName="DelayTime"))
	int DelayTime;
	UPROPERTY(EditDefaultsOnly, Code, meta=(DisplayName="Is End", Category="Default", MultiLine="true", OverrideNativeName="IsEnd"))
	bool IsEnd;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int TempintVariable;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="MSSC"))
	MakeStructSlateColor;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="MSSC1"))
	MakeStructSlateColor1;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="MSSC2"))
	MakeStructSlateColor2;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Geometry"))
	FGeometry Geometry;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="DeltaTime"))
	float DeltaTime;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="MSSC3"))
	MakeStructSlateColor3;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="DynamicCastAsGameInstance"))
	UGameInstance* DynamicCastAsGameInstance;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="DynamicCastbSuccess"))
	bool K2Node_DynamicCast_bSuccess;
	UGamewin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Gamewin_0"))
	void ExecuteUbergraph_Gamewin_0(int32 EntryPoint);
	void ExecuteUbergraph_Gamewin_1(int32 EntryPoint);
	void ExecuteUbergraph_Gamewin_2(int32 EntryPoint);
	void ExecuteUbergraph_Gamewin_3(int32 EntryPoint);
	void ExecuteUbergraph_Gamewin_4(int32 EntryPoint);
	void ExecuteUbergraph_Gamewin_5(int32 EntryPoint);
	void ExecuteUbergraph_Gamewin_6(int32 EntryPoint);
	void ExecuteUbergraph_Gamewin_7(int32 EntryPoint);
	UFUNCTION(meta=(OverrideNativeName="Yes_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent"))
	virtual void Yes_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent();
	UFUNCTION(meta=(OverrideNativeName="No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent"))
	virtual void No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent();
	UFUNCTION(meta=(OverrideNativeName="No_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent"))
	virtual void No_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent();
	UFUNCTION(meta=(OverrideNativeName="Yes_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent"))
	virtual void Yes_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent();
	UFUNCTION(meta=(OverrideNativeName="No_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent"))
	virtual void No_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent();
	UFUNCTION(meta=(OverrideNativeName="Yes_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent"))
	virtual void Yes_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void Tick(FGeometry MyGeometry, float InDeltaTime);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void Construct();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
