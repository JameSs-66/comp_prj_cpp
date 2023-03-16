#include "Clock.h"
#include "StatsTrackerLib.h"

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
AClock::AClock(const FObjectInitializer &ObjectInitializer)
    : Super(ObjectInitializer) {

  Clock = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Clock"));
  MinHand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MinHand"));
  HourHand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HourHand"));
  RootComponent = Clock;
  Clock->CreationMethod = EComponentCreationMethod::Native;
  auto &ClockBase = (*(AccessPrivateProperty<UStaticMesh *>(
      (Clock), UStaticMeshComponent::PPOStaticMesh())));
  ClockBase = CastChecked<UStaticMesh>(
      CastChecked<UDynamicClass>(AClock::StaticClass())->UsedAssets[0],
      ECastCheckedType::NullAllowed);
  MinHand->CreationMethod = EComponentCreationMethod::Native;
  MinHand->AttachToComponent(Clock,
                             FAttachmentTransformRules::KeepRelativeTransform);
  auto &MinHand = (*(AccessPrivateProperty<UStaticMesh *>(
      (MinHand), UStaticMeshComponent::PPOStaticMesh())));
  MinHand = CastChecked<UStaticMesh>(
      CastChecked<UDynamicClass>(AClock::StaticClass())->UsedAssets[1],
      ECastCheckedType::NullAllowed);
  HourHand->CreationMethod = EComponentCreationMethod::Native;
  HourHand->AttachToComponent(Clock,
                              FAttachmentTransformRules::KeepRelativeTransform);
  auto &HourHand = (*(AccessPrivateProperty<UStaticMesh *>(
      (HourHand), UStaticMeshComponent::PPOStaticMesh())));
  HourHand = CastChecked<UStaticMesh>(
      CastChecked<UDynamicClass>(AClock::StaticClass())->UsedAssets[2],
      ECastCheckedType::NullAllowed);
  PrimaryActorTick.bCanEverTick = true;
  auto &Clock = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod>(
      (this), AActor::PPODefaultUpdateOverlapsMethodDuringLevelStreaming())));
  Clock = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void AClock::PostLoadSubobjects(FObjectInstancingGraph *OuterInstanceGraph) {
  Super::PostLoadSubobjects(OuterInstanceGraph);
  if (Clock) {
    Clock->CreationMethod = EComponentCreationMethod::Native;
  }
  if (MinHand) {
    MinHand->CreationMethod = EComponentCreationMethod::Native;
  }
  if (HourHand) {
    HourHand->CreationMethod = EComponentCreationMethod::Native;
  }
}
PRAGMA_DISABLE_OPTIMIZATION
void AClock::CustomDynamicClassInitialization(UDynamicClass *InDynamicClass) {
  ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
  ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
  ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
  ensure(0 == InDynamicClass->ComponentTemplates.Num());
  ensure(0 == InDynamicClass->Timelines.Num());
  ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
  ensure(nullptr == InDynamicClass->AnimClassImplementation);
  InDynamicClass->AssembleReferenceTokenStream();
  InDynamicClass->ReferencedConvertedFields.Add(
      UStatsTrackerLib_BP_C2132744816::StaticClass());
  FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(
      InDynamicClass, &StaticDependencies_DirectlyUsedAssets);
  auto SceneRoot = NewObject<USceneComponent>(
      InDynamicClass, USceneComponent::StaticClass(),
      TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
  InDynamicClass->ComponentTemplates.Add(SceneRoot);
}
PRAGMA_ENABLE_OPTIMIZATION
void AClock::ExecuteUbergraph_Clock_BP_0(int32 EntryPoint) {
  float CallFunc_Divide_FloatFloat_ReturnValue{};
  float CallFunc_Divide_FloatFloat_ReturnValue_1{};
  int32 CallFunc_FTrunc_ReturnValue{};
  int32 CallFunc_FTrunc_ReturnValue_1{};
  float CallFunc_Multiply_IntFloat_ReturnValue{};
  int32 CallFunc_Percent_IntInt_ReturnValue{};
  FRotator CallFunc_MakeRotator_ReturnValue(EForceInit::ForceInit);
  int32 CallFunc_Multiply_IntInt_ReturnValue{};
  float CallFunc_Conv_IntToFloat_ReturnValue{};
  FRotator CallFunc_MakeRotator_ReturnValue_1(EForceInit::ForceInit);
  check(EntryPoint == 1);
  UStatsTrackerLib_BP_C2132744816::ReadStats(FString(TEXT("WORLDTIME")), false,
                                             this, CallFunc_ReadStats_Value);
  CallFunc_Divide_FloatFloat_ReturnValue_1 =
      FCustomThunkTemplates::Divide_FloatFloat(CallFunc_ReadStats_Value, 0.37f);
  CallFunc_FTrunc_ReturnValue_1 =
      UKismetMathLibrary::FTrunc(CallFunc_Divide_FloatFloat_ReturnValue_1);
  CallFunc_Percent_IntInt_ReturnValue =
      UKismetMathLibrary::Percent_IntInt(CallFunc_FTrunc_ReturnValue_1, 60);
  CallFunc_Multiply_IntInt_ReturnValue = UKismetMathLibrary::Multiply_IntInt(
      CallFunc_Percent_IntInt_ReturnValue, -6);
  CallFunc_Conv_IntToFloat_ReturnValue =
      UKismetMathLibrary::Conv_IntToFloat(CallFunc_Multiply_IntInt_ReturnValue);
  CallFunc_MakeRotator_ReturnValue_1 = UKismetMathLibrary::MakeRotator(
      0.0f, CallFunc_Conv_IntToFloat_ReturnValue, 0.0f);
  if (::IsValid(MinHand)) {
    MinHand->USceneComponent::K2_SetWorldRotation(
        CallFunc_MakeRotator_ReturnValue_1, false,
        CallFunc_K2_SetWorldRotation_SweepHitResult_1, false);
  }
  CallFunc_Divide_FloatFloat_ReturnValue =
      FCustomThunkTemplates::Divide_FloatFloat(CallFunc_ReadStats_Value, 22.2f);
  CallFunc_FTrunc_ReturnValue =
      UKismetMathLibrary::FTrunc(CallFunc_Divide_FloatFloat_ReturnValue);
  CallFunc_Multiply_IntFloat_ReturnValue =
      UKismetMathLibrary::Multiply_IntFloat(CallFunc_FTrunc_ReturnValue,
                                            -30.0f);
  CallFunc_MakeRotator_ReturnValue = UKismetMathLibrary::MakeRotator(
      0.0f, CallFunc_Multiply_IntFloat_ReturnValue, 0.0f);
  if (::IsValid(HourHand)) {
    HourHand->USceneComponent::K2_SetWorldRotation(
        CallFunc_MakeRotator_ReturnValue, false,
        CallFunc_K2_SetWorldRotation_SweepHitResult, false);
  }
  return;
}
void AClock::ReceiveTick(float DeltaSeconds) {
  K2Node_Event_DeltaSeconds = DeltaSeconds;
  ExecuteUbergraph_Clock_BP_0(1);
}

// Unreal Engine Generated //
PRAGMA_DISABLE_OPTIMIZATION
void AClock::StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{265, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Assets/Meshes/MainWorld/Clock/clock.clock 
		{266, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Assets/Meshes/MainWorld/Clock/clock_handmin.clock_handmin 
		{267, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Assets/Meshes/MainWorld/Clock/clock_handhour.clock_handhour 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(FNativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AClock::StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
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
		AssetsToLoad.Add(FBlueprintDependencyData(FNativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelperAClock
{
	FRegisterHelperAClock()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Assets/Meshes/MainWorld/Clock/Clock_BP"), &AClock::StaticDependenciesAssets);
	}
	static FRegisterHelperAClock Instance;
};
FRegisterHelperAClock FRegisterHelperAClock::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
