#pragma once
#include "CoreMinimal.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UVerticalBox;
class UImage;
class UButton;
#include "WithdrawnalShop3373900542.generated.h"
class UWithdrawnalShop_C3373900542 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="All_Box", Category="WithdrawnalShop", OverrideNativeName="All_Box"))
	UVerticalBox* All_Box;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background_work", Category="WithdrawnalShop", OverrideNativeName="Background_work"))
	UImage* Background_work;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_BG", Category="WithdrawnalShop", OverrideNativeName="Box_BG"))
	UImage* Box_BG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_L", Category="WithdrawnalShop", OverrideNativeName="Box_L"))
	UVerticalBox* Box_L;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_L_Button_2", Category="WithdrawnalShop", OverrideNativeName="Box_L_Button_2"))
	UButton* Box_L_Button_2;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_M", Category="WithdrawnalShop", OverrideNativeName="Box_M"))
	UVerticalBox* Box_M;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_M_Button_2", Category="WithdrawnalShop", OverrideNativeName="Box_M_Button_2"))
	UButton* Box_M_Button_2;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_S", Category="WithdrawnalShop", OverrideNativeName="Box_S"))
	UVerticalBox* Box_S;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_S_Button_2", Category="WithdrawnalShop", OverrideNativeName="Box_S_Button_2"))
	UButton* Box_S_Button_2;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_XL", Category="WithdrawnalShop", OverrideNativeName="Box_Xl"))
	UVerticalBox* Box_Xl;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_XL_Button_2", Category="WithdrawnalShop", OverrideNativeName="Box_XL_Button_2"))
	UButton* Box_XL_Button_2;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Box", Category="WithdrawnalShop", OverrideNativeName="Exit_Box"))
	UVerticalBox* Exit_Box;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Button_2", Category="WithdrawnalShop", OverrideNativeName="Exit_Button_2"))
	UButton* Exit_Button_2;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_87", Category="WithdrawnalShop", OverrideNativeName="Image_87"))
	UImage* Image_87;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_239", Category="WithdrawnalShop", OverrideNativeName="Image_239"))
	UImage* Image_239;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_352", Category="WithdrawnalShop", OverrideNativeName="Image_352"))
	UImage* Image_352;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_461", Category="WithdrawnalShop", OverrideNativeName="Image_461"))
	UImage* Image_461;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Run", Category="WithdrawnalShop", OverrideNativeName="Run"))
	UImage* Run;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Work_box", Category="WithdrawnalShop", OverrideNativeName="Work_box"))
	UVerticalBox* Work_box;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Get Energy Value", Category="Default", MultiLine="true", OverrideNativeName="Get Energy Value"))
	TArray<float> GetxEnergyxValueTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pervius Day", Category="Default", MultiLine="true", OverrideNativeName="PerviusDay"))
	float PerviusDay;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value"))
	float CallFunc_ReadStats_Value;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 Temp_int_Array_Index_Variable;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 Temp_int_Loop_Counter_Variable;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="ReadStats"))
	float ReadStats;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="MakeArray"))
	TArray<float> MakeArray;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Get_Item"))
	float Get_Item;
	UWithdrawnalShop_C3373900542(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void Reset_day(int32 EntryPoint);
	void Set_Defult(int32 EntryPoint);
	void Exit_Shop(int32 EntryPoint);
	void Buy_Food(int32 EntryPoint);
	UFUNCTION(BlueprintCosmetic, meta=(OverrideNativeName="Construct"))
	virtual void Construct();
	UFUNCTION(BlueprintCosmetic, meta=(OverrideNativeName="OnInitialized"))
	virtual void OnInitialized();
	UFUNCTION(meta=(OverrideNativeName="Exit_Button_2"))
	virtual void Exit_Button_2();
	UFUNCTION(meta=(OverrideNativeName="Box_XL_Button_2"))
	virtual void Box_XL_Button_2();
	UFUNCTION(meta=(OverrideNativeName="Box_M_Button_2"))
	virtual void Box_M_Button_2();
	UFUNCTION(meta=(OverrideNativeName="Box_L_Button_2"))
	virtual void Box_L_Button_2();
	UFUNCTION(meta=(OverrideNativeName="Box_S_Button_2"))
	virtual void Box_S_Button_2();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};