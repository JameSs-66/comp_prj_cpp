#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UVerticalBox;
class UImage;
class UButton;
class UTextBlock;
class UTexture2D;
#include "School__pf4136444318.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Ingame/WorldBuilding/School/School.School_C", OverrideNativeName="School_C"))
class USchool_C__pf4136444318 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="All_Box", Category="School", OverrideNativeName="All_Box"))
	UVerticalBox* bpv__All_Box__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background_work", Category="School", OverrideNativeName="Background_work"))
	UImage* bpv__Background_work__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Book", Category="School", OverrideNativeName="Book"))
	UImage* bpv__Book__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_BG", Category="School", OverrideNativeName="Box_BG"))
	UImage* bpv__Box_BG__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_S", Category="School", OverrideNativeName="Box_S"))
	UVerticalBox* bpv__Box_S__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_S_Button_2", Category="School", OverrideNativeName="Box_S_Button_2"))
	UButton* bpv__Box_S_Button_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ConText", Category="School", OverrideNativeName="ConText"))
	UTextBlock* bpv__ConText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Box", Category="School", OverrideNativeName="Exit_Box"))
	UVerticalBox* bpv__Exit_Box__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Button_2", Category="School", OverrideNativeName="Exit_Button_2"))
	UButton* bpv__Exit_Button_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="GdText", Category="School", OverrideNativeName="GdText"))
	UTextBlock* bpv__GdText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Graduated", Category="School", OverrideNativeName="Graduated"))
	UImage* bpv__Graduated__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Number", Category="School", OverrideNativeName="Number"))
	UImage* bpv__Number__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Price", Category="School", OverrideNativeName="Price"))
	UTextBlock* bpv__Price__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Run", Category="School", OverrideNativeName="Run"))
	UImage* bpv__Run__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Work_box", Category="School", OverrideNativeName="Work_box"))
	UVerticalBox* bpv__Work_box__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Book Price", Category="Default", MultiLine="true", OverrideNativeName="BookPrice"))
	TArray<float> bpv__BookPrice__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Book Rank", Category="Default", MultiLine="true", OverrideNativeName="BookRank"))
	int32 bpv__BookRank__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chapter Rank", Category="Default", MultiLine="true", OverrideNativeName="ChapterRank"))
	int32 bpv__ChapterRank__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Learn Per Rank", Category="Default", MultiLine="true", OverrideNativeName="LearnPerRank"))
	TArray<int32> bpv__LearnPerRank__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Book Texture", Category="Default", MultiLine="true", OverrideNativeName="BookTexture"))
	TArray<UTexture2D*> bpv__BookTexture__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Numbertexture", Category="Default", MultiLine="true", OverrideNativeName="Numbertexture"))
	TArray<UTexture2D*> bpv__Numbertexture__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Learn Count", Category="Default", MultiLine="true", OverrideNativeName="LearnCount"))
	int32 bpv__LearnCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="School Rank", Category="Default", MultiLine="true", OverrideNativeName="SchoolRank"))
	int32 bpv__SchoolRank__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Company Per Rank", Category="Default", MultiLine="true", OverrideNativeName="CompanyPerRank"))
	TArray<int32> bpv__CompanyPerRank__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Company Rank", Category="Default", MultiLine="true", OverrideNativeName="CompanyRank"))
	int32 bpv__CompanyRank__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Graduated", Category="Default", MultiLine="true", OverrideNativeName="IsGraduated"))
	bool bpv__IsGraduated__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value"))
	float b0l__CallFunc_ReadStats_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<float> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_1"))
	TArray<int32> b0l__K2Node_MakeArray_Array_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_2"))
	TArray<UTexture2D*> b0l__K2Node_MakeArray_Array_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_3"))
	TArray<UTexture2D*> b0l__K2Node_MakeArray_Array_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UTexture2D* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b0l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_2"))
	int32 b0l__Temp_int_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	int32 b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	float b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_4"))
	TArray<int32> b0l__K2Node_MakeArray_Array_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_3"))
	int32 b0l__Temp_int_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	int32 b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_5"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_6"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_7"))
	UTexture2D* b0l__CallFunc_Array_Get_Item_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_8"))
	float b0l__CallFunc_Array_Get_Item_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_1"))
	float b0l__CallFunc_ReadStats_Value_1__pf;
	USchool_C__pf4136444318(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_School__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_School__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_School__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_School__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/** \t * Called once only at game time on non-template instances.\t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.\t */", ToolTip="Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.", CppFromBpEvent, OverrideNativeName="OnInitialized"))
	virtual void bpf__OnInitialized__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Professer_1_Box_S_Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Professer_1_Box_S_Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Shop_2_Exit_Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Shop_2_Exit_Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
