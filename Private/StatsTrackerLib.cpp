#include "StatsTrackerLib.h"
#include "GameInstance.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif

PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_ENABLE_OPTIMIZATION

void UStatsTrackerLib::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UStatsTrackerLib::CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	InDynamicClass->ReferencedConvertedFields.Add(UGameInstance::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void UStatsTrackerLib::GetStats(UObject* WorldContext, NameUGameInstance*& GameInstance)
{
	UGameInstance* GetGameInstance_ReturnValue{};
	UGameInstance* DynamicCast_AsGame_Instance{};
	bool DynamicCast_bSuccess{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				GetGameInstance_ReturnValue = UGameplayStatics::GetGameInstance(WorldContext);
				DynamicCast_AsGame_Instance = Cast<UGameInstance>(GetGameInstance_ReturnValue);
				DynamicCast_bSuccess = (DynamicCast_AsGame_Instance != nullptr);;
				if (!DynamicCast_bSuccess)
				{
					CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				GameInstance = DynamicCast_AsGame_Instance;
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UStatsTrackerLib::AddStats(const FString& StatName_const, float Value, UObject* WorldContext)
{
	typedef FString  Name;
	Name& StatName = *const_cast<Name *>(&StatName_const);
	UGameInstance* GetStats_GameInstance{};
	float Map_Find_0{};
	bool Map_Find_ReturnValue{};
	float Map_Find_1{};
	bool Map_Find_ReturnValue_1{};
	float Add_FloatFloat_ReturnValue{};
	float FClamp_ReturnValue{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				UStatsTrackerLib::GetStats(WorldContext, NameGetStats_GameInstance);
			}
		case 2:
			{
				TMap<FString,float>  Name_1 = {};
				Map_Find_ReturnValue = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->Stats) : (Name_1)), StatName, NameMap_Find_0);
				if (!Map_Find_ReturnValue)
				{
					CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				TMap<FString,float>  Name_2 = {};
				Map_Find_ReturnValue_1 = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->StatsMax) : (Name_2)), StatName, NameMap_Find_1);
				if (!Map_Find_ReturnValue_1)
				{
					CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				TMap<FString,float>  Name_3 = {};
				Map_Find_ReturnValue = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->Stats) : (Name_3)), StatName, NameMap_Find_0);
				TMap<FString,float>  Name_4 = {};
				Map_Find_ReturnValue_1 = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->StatsMax) : (Name_4)), StatName, NameMap_Find_1);
				Add_FloatFloat_ReturnValue = UKismetMathLibrary::Add_FloatFloat(Value, Map_Find_0);
				FClamp_ReturnValue = UKismetMathLibrary::FClamp(Add_FloatFloat_ReturnValue, 0.000000, Map_Find_1);
				TMap<FString,float>  Name_5 = {};
				FCustomThunkTemplates::Map_Add(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->Stats) : (Name_5)), StatName, FClamp_ReturnValue);
				CurrentState = -1;
				break;
			}
		case 5:
			{
				TMap<FString,float>  Name_6 = {};
				Map_Find_ReturnValue = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->Stats) : (Name_6)), StatName, NameMap_Find_0);
				Add_FloatFloat_ReturnValue = UKismetMathLibrary::Add_FloatFloat(Value, Map_Find_0);
				TMap<FString,float>  Name_7 = {};
				FCustomThunkTemplates::Map_Add(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->Stats) : (Name_7)), StatName, Add_FloatFloat_ReturnValue);
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UStatsTrackerLib::ReadStats(const FString& StatName_const, bool ReadAsPercent, UObject* WorldContext, Namefloat& Value)
{
	typedef FString  Name;
	Name& StatName = *const_cast<Name *>(&StatName_const);
	UGameInstance* GetStats_GameInstance{};
	float Map_Find_0{};
	bool Map_Find_ReturnValue{};
	float Map_Find_1{};
	bool Map_Find_ReturnValue_1{};
	float Divide_FloatFloat_ReturnValue{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				UStatsTrackerLib::GetStats(WorldContext, NameGetStats_GameInstance);
			}
		case 2:
			{
				TMap<FString,float>  Name_9 = {};
				Map_Find_ReturnValue = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->Stats) : (Name_9)), StatName, NameMap_Find_0);
				if (!Map_Find_ReturnValue)
				{
					CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if (!ReadAsPercent)
				{
					CurrentState = 6;
					break;
				}
			}
		case 4:
			{
				TMap<FString,float>  Name_10 = {};
				Map_Find_ReturnValue_1 = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->StatsMax) : (Name_10)), StatName, NameMap_Find_1);
				if (!Map_Find_ReturnValue_1)
				{
					CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				TMap<FString,float>  Name_11 = {};
				Map_Find_ReturnValue = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->Stats) : (Name_11)), StatName, NameMap_Find_0);
				TMap<FString,float>  Name_12 = {};
				Map_Find_ReturnValue_1 = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->StatsMax) : (Name_12)), StatName, NameMap_Find_1);
				Divide_FloatFloat_ReturnValue = FCustomThunkTemplates::Divide_FloatFloat(Map_Find_0, Map_Find_1);
				Value = Divide_FloatFloat_ReturnValue;
				CurrentState = -1;
				break;
			}
		case 6:
			{
				TMap<FString,float>  Name_13 = {};
				Map_Find_ReturnValue = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->Stats) : (Name_13)), StatName, NameMap_Find_0);
				Value = Map_Find_0;
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UStatsTrackerLib::NewStats(const FString& StatName_const, float StartValue, bool HaveMaxValue, float MaxValue, UObject* WorldContext)
{
	typedef FString  TName_14;
	TName_14& StatName = *const_cast<TName_14 *>(&StatName_const);
	UGameInstance* GetStats_GameInstance{};
	float Map_Find_0{};
	bool Map_Find_ReturnValue{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				UStatsTrackerLib::GetStats(WorldContext, NameGetStats_GameInstance);
			}
		case 2:
			{
				TMap<FString,float>  Name_15 = {};
				Map_Find_ReturnValue = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->Stats) : (Name_15)), StatName, NameMap_Find_0);
				if (!Map_Find_ReturnValue)
				{
					CurrentState = 3;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 3:
			{
				if (!HaveMaxValue)
				{
					CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				TMap<FString,float>  Name_16 = {};
				FCustomThunkTemplates::Map_Add(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->StatsMax) : (Name_16)), StatName, MaxValue);
			}
		case 5:
			{
				TMap<FString,float>  Name_17 = {};
				FCustomThunkTemplates::Map_Add(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->Stats) : (Name_17)), StatName, StartValue);
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UStatsTrackerLib::SetStats(const FString& StatName_const, float Value, UObject* WorldContext)
{
	typedef FString  TName_18;
	TName_18& StatName = *const_cast<TName_18 *>(&StatName_const);
	UGameInstance* GetStats_GameInstance{};
	float Map_Find_0{};
	bool Map_Find_ReturnValue{};
	float Map_Find_1{};
	bool Map_Find_ReturnValue_1{};
	float FClamp_ReturnValue{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				UStatsTrackerLib::GetStats(WorldContext, NameGetStats_GameInstance);
			}
		case 2:
			{
				TMap<FString,float>  Name_19 = {};
				Map_Find_ReturnValue_1 = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->Stats) : (Name_19)), StatName, NameMap_Find_1);
				if (!Map_Find_ReturnValue_1)
				{
					CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				TMap<FString,float>  Name_20 = {};
				Map_Find_ReturnValue = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->StatsMax) : (Name_20)), StatName, NameMap_Find_0);
				if (!Map_Find_ReturnValue)
				{
					CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				TMap<FString,float>  Name_21 = {};
				Map_Find_ReturnValue = FCustomThunkTemplates::Map_Find(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->StatsMax) : (Name_21)), StatName, NameMap_Find_0);
				FClamp_ReturnValue = UKismetMathLibrary::FClamp(Value, 0.000000, Map_Find_0);
				TMap<FString,float>  Name_22 = {};
				FCustomThunkTemplates::Map_Add(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->Stats) : (Name_22)), StatName, FClamp_ReturnValue);
				CurrentState = -1;
				break;
			}
		case 5:
			{
				TMap<FString,float>  Name_23 = {};
				FCustomThunkTemplates::Map_Add(((::IsValid(GetStats_GameInstance)) ? (GetStats_GameInstance->Stats) : (Name_23)), StatName, Value);
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}


// Unreal Engine Generated //
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UStatsTrackerLib::StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{25, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/GameInstance_BP.GameInstance_BP_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(FNativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelperUStatsTrackerLib
{
	FRegisterHelperUStatsTrackerLib()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/StatsTrackerLib_BP"), &UStatsTrackerLib::StaticDependenciesAssets);
	}
	static FRegisterHelperUStatsTrackerLib Instance;
};
FRegisterHelperUStatsTrackerLib FRegisterHelperUStatsTrackerLib::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
