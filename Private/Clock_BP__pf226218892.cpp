#include "Clock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AClock::AClock(const Fobject& object) : Super(object)
{
	
	Clock = CreateDefaultSubobject<component>(TEXT("Clock"));
	MinHand = CreateDefaultSubobject<component>(TEXT("MinHand"));
	HourHand = CreateDefaultSubobject<component>(TEXT("HourHand"));
	RootComponent = Clock;
	Clock->CreationMethod = EComponent::Native;
	auto& objectLocalobject0 = (*(AccessPri<UStaticMesh* >((Clock), component::ObjectStatic() )));
	objectLocalobject0 = CastChecked<UStaticMesh>(CastChecked<TClass>(AClock::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	static TWeakFieldPtr<FProperty> objectLocalobject2{};
	const FProperty* Object1 = objectLocalobject2.Get();
	if (nullptr == Object1)
	{
		Object1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(Object1);
		Object2 = Object1;
	}
	(((FBoolProperty*)Object1)->SetPropertyValue_InContainer((Clock), true, 0));
	MinHand->CreationMethod = EComponent::Native;
	MinHand->AttachToComponent(Clock, FAttachmentTransformRules::KeepRelativeTransform );
	auto& Object3 = (*(AccessPri<UStaticMesh* >((MinHand), component::ObjectStatic() )));
	Object3 = CastChecked<UStaticMesh>(CastChecked<TClass>(AClock::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)Object1)->SetPropertyValue_InContainer((MinHand), true, 0));
	HourHand->CreationMethod = EComponent::Native;
	HourHand->AttachToComponent(Clock, FAttachmentTransformRules::KeepRelativeTransform );
	auto& Object4 = (*(AccessPri<UStaticMesh* >((HourHand), component::ObjectStatic() )));
	Object4 = CastChecked<UStaticMesh>(CastChecked<TClass>(AClock::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	(((FBoolProperty*)Object1)->SetPropertyValue_InContainer((HourHand), true, 0));
	PrimaryActorTick.bCanEverTick = true;
	auto& Object5 = (*(AccessPri<EActorUpdateOverlapsMethod >((this), AActor::objectPPOobjectDefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	Object5 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AClock::loadsubobjects(ObjectGraph* OutGraph)
{
	Super::loadsubobjects(OutGraph);
	if(Clock)
	{
		Clock->CreationMethod = EComponent::Native;
	}
	if(MinHand)
	{
		MinHand->CreationMethod = EComponent::Native;
	}
	if(HourHand)
	{
		HourHand->CreationMethod = EComponent::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AClock::objectcustomdynamicclass(TClass* IClass)
{
	ensure(0 == IClass->ReferencedConvertedFields.Num());
	ensure(0 == IClass->MiscConvertedSubobjects.Num());
	ensure(0 == IClass->DynamicBindingObjects.Num());
	ensure(0 == IClass->ComponentTemplates.Num());
	ensure(0 == IClass->Timelines.Num());
	ensure(0 == IClass->ComponentClassOverrides.Num());
	ensure(nullptr == IClass->AnimClassImplementation);
	IClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	IClass->ReferencedConvertedFields.Add(UStatsTrackerLib::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsIClass(IClass, &OSDDirectlyUsedAssets);
	auto Object6 = NewObject<USceneComponent>(IClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	IClass->ComponentTemplates.Add(Object6);
	static TWeakFieldPtr<FProperty> Object8{};
	const FProperty* Object7 = Object8.Get();
	if (nullptr == Object7)
	{
		Object7 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(Object7);
		Object8 = Object7;
	}
	(((FBoolProperty*)Object7)->SetPropertyValue_InContainer((Object6), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void AClock::Managegraph(int32 EntryPoint_)
{
	float FuncDivideReturnValue{};
	float FuncDivideReturnValue1{};
	int32 FuncFTruncValue{};
	int32 FuncFTruncValue1{};
	float FuncMultiplyReturnValuefloattoint{};
	int32 FuncPercentReturnValue{};
	FRotator FuncMakeRotatorReturnValue(EForceInit::ForceInit);
	int32 FuncMultiplyReturnValueinttoint{};
	float FuncConvinttofloatReturnValue{};
	FRotator FuncMakeRotatorReturnValue1(EForceInit::ForceInit);
	check(EntryPoint_ == 1);
	// optimized KCST_UnconditionalGoto
	UStatsTrackerLib::objectReadStats(FString(TEXT("WORLDTIME")), false, this, /*out*/ ReadStats);
	FuncDivideReturnValue1_ = FCustomThunkTemplates::Divide_FloatFloat(ReadStats, 0.370000);
	FuncFTruncValue1 = UKismetMathLibrary::FTrunc(FuncDivideReturnValue1_);
	FuncPercentReturnValue = UKismetMathLibrary::Percent_IntInt(FuncFTruncValue1, 60);
	FuncMultiplyReturnValueinttoint = UKismetMathLibrary::Multiply_IntInt(FuncPercentReturnValue, -6);
	FuncConvinttofloatReturnValue = UKismetMathLibrary::Conv_IntToFloat(FuncMultiplyReturnValueinttoint);
	FuncMakeRotatorReturnValue1 = UKismetMathLibrary::MakeRotator(0.000000, FuncConvinttofloatReturnValue, 0.000000);
	if(::IsValid(MinHand))
	{
		MinHand->USceneComponent::SetWorldRotation2(FuncMakeRotatorReturnValue1, false, /*out*/ WorldRotation1, false);
	}
	FuncDivideReturnValue = FCustomThunkTemplates::Divide_FloatFloat(ReadStats, 22.200001);
	FuncFTruncValue = UKismetMathLibrary::FTrunc(FuncDivideReturnValue);
	FuncMultiplyReturnValuefloattoint = UKismetMathLibrary::Multiply_IntFloat(FuncFTruncValue, -30.000000);
	FuncMakeRotatorReturnValue = UKismetMathLibrary::MakeRotator(0.000000, FuncMultiplyReturnValuefloattoint, 0.000000);
	if(::IsValid(HourHand))
	{
		HourHand->USceneComponent::SetWorldRotation2(FuncMakeRotatorReturnValue, false, /*out*/ WorldRotation, false);
	}
	return; // KCST_GotoReturn
}
void AClock::Receive_(float DeltaSeconds)
{
	DeltaSeconds = DeltaSeconds;
	Managegraph(1);
}
// Unreal Engine Generated //
PRAGMA_DISABLE_OPTIMIZATION
void AClock::OSDDirectlyUsedAssets(TArray<Data>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{265, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Assets/Meshes/MainWorld/Clock/clock.clock 
		{266, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Assets/Meshes/MainWorld/Clock/clock_handmin.clock_handmin 
		{267, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Assets/Meshes/MainWorld/Clock/clock_handhour.clock_handhour 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(Data(FobjectNativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
// Unreal Engine Generated //
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AClock::OSDAssets(TArray<Data>& AssetsToLoad)
{
	OSDDirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{11, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{20, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/StatsTrackerLib_BP.StatsTrackerLib_BP_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(Data(FobjectNativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelperobjectAClock
{
	FRegisterHelperobjectAClock()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Assets/Meshes/MainWorld/Clock/ClockBP"), &AClock::OSDAssets);
	}
	static FRegisterHelperobjectAClock Instance;
};
FRegisterHelperobjectAClock FRegisterHelperobjectAClock::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
