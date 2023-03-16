#pragma once
#include "CoreMinimal.h"
#include "Gameover.generated.h"

class UTextBlock;
class UGameInstance;

class UGameover : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Return", Category="Gameover", OverrideNativeName="Return"))
	UTextBlock* Return;
	UPROPERTY(Export, meta=(DisplayName="WhyOver", OverrideNativeName="WhyOver"))
	UTextBlock* WhyOver;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Delay Time", Category="Default", MultiLine="true", OverrideNativeName="DelayTime"))
	int DelayTime;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game Over Bys", Category="Default", MultiLine="true", OverrideNativeName="GameOverBys"))
	FString GameOverBys;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Event_MyGeometry"))
	FGeometry geometry;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Event_InDeltaTime"))
	float deltaTime;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int tempintVariable;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="DynamicCast_AsGame_Instance_BP"))
	UGameInstance* dynamicCastAsGameInstance;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="DynamicCast_bSuccess"))
	bool dynamicCastSuccess;
	UGameover(const FObject& Object = FObject::Get());
	virtual void loadsubobjects(FobjectGraph* OuterInstanceGraph) override;
	static void DClass(UDynamicClass* IClass);
	static void StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void Gameover0(int EntryPoint);
	UFUNCTION(meta=(OverrideNativeName="Gameover1"))
	void Gameover1(int EntryPoint);
	UFUNCTION(Cosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void Tick(FGeometry MyGeometry, float InDeltaTime);
	UFUNCTION(Cosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void Construct();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};