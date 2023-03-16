#include "Sky.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ASky::ASky(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	Base = CreateDefaultSubobject<USceneComponent>(TEXT("Base"));
	SkySphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SkySphereMesh"));
	RootComponent = Base;
	Base->CreationMethod = EComponentCreationMethod::Native;
	Base->Mobility = EComponentMobility::Type::Static;
	SkySphereMesh->CreationMethod = EComponentCreationMethod::Native;
	SkySphereMesh->AttachToComponent(Base, FAttachmentTransformRules::KeepRelativeTransform );
	auto& SkyMesh = (*(AccessPrivateProperty<UStaticMesh* >((SkySphereMesh), UStaticMeshComponent::__PPO__StaticMesh() )));
	SkyMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ASky::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	SkySphereMesh->OverrideMaterials = TArray<UMaterialInterface*> ();
	SkySphereMesh->OverrideMaterials.Reserve(1);
	SkySphereMesh->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ASky::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	SkySphereMesh->bVisibleInRayTracing = false;
	SkySphereMesh->bReceivesDecals = false;
	SkySphereMesh->CastShadow = false;
	SkySphereMesh->bAffectDynamicIndirectLighting = false;
	SkySphereMesh->bCastDynamicShadow = false;
	SkySphereMesh->bCastStaticShadow = false;
	auto& MassKg = (*(AccessPrivateProperty<float >(&(SkySphereMesh->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
	MassKg = 0.0f;
	SkySphereMesh->BodyInstance.bAutoWeld = false;
	SkySphereMesh->SetCollisionProfileName(FName(TEXT("NoCollision")));
	auto& Mesh = (*(AccessPrivateProperty<FVector >((SkySphereMesh), USceneComponent::__PPO__RelativeScale3D() )));
	Mesh = FVector(400.0f, 400.0f, 400.0f);

	SkySphereMesh->Mobility = EComponentMobility::Type::Static;

	SkyxmaterialT = nullptr;
	RefreshxmaterialT = false;
	DirectionalxlightxactorTT = nullptr;
	ColorsxdeterminedxbyxsunxpositionTTTT = true;
	SunxheightT = 0.0f;
	SunxbrightnessT = 50.0f;
	HorizonxFalloffT = 3.0f;
	ZenithxColorT = FLinearColor(0.0f, 0.1f, 0.29f, 0.0f);
	HorizonxcolorT = FLinearColor(2.0f, 2.5f, 3.0f, 1.0f);
	CloudxcolorT = FLinearColor(0.8f, 0.9f, 1.0f, 1.0f);
	OverallxColorT = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
	CloudxspeedT = 1.0f;
	CloudxopacityT = 0.7f;
	StarsxbrightnessT = 0.1f;
	HorizonxcolorxcurveTT = CastChecked<UCurveLinearColor>(CastChecked<UDynamicClass>(ASky::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	ZenithxcolorxcurveTT = CastChecked<UCurveLinearColor>(CastChecked<UDynamicClass>(ASky::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	CloudxcolorxcurveTT = CastChecked<UCurveLinearColor>(CastChecked<UDynamicClass>(ASky::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bEnableAutoLODGeneration = false;
	auto& SkyTransform = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	SkyTransform = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ASky::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(Base)
	{
		Base->CreationMethod = EComponentCreationMethod::Native;
	}
	if(SkySphereMesh)
	{
		SkySphereMesh->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ASky::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto SSceneComp = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(SSceneComp);

PRAGMA_ENABLE_OPTIMIZATION
void ASky::UserConstructionScript()
{
	UMaterialInstanceDynamic* CreateDynamicMaterialInstance{};
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				if(::IsValid(SkySphereMesh))
				{
					CreateDynamicMaterialInstance = SkySphereMesh->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ASky::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed), FName(TEXT("None")));
				}
			}
		case 2:
			{
				SkyxmaterialT = CreateDynamicMaterialInstance;
			}
		case 3:
			{
				if (!RefreshxmaterialT)
				{
					CurrentState = 4;
					break;
				}
			}
		case 4:
			{
				RefreshxmaterialT = false;
			}
		case 5:
			{
				RefreshMaterial();
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ASky::UpdateSunDirection()
{
	bool Less_Float{};
	FRotator GetActorRotation(EForceInit::ForceInit);
	float Abs_0{};
	float BreakRotator{};
	float BreakRotator_Pitch{};
	float BreakRotator_Yaw{};
	float SelectFloat{};
	float MapRangeUnclamped{};
	FRotator GetActorRotation_1(EForceInit::ForceInit);
	FLinearColor ColorToLinearColor(EForceInit::ForceInit);
	FVector RotatorToVector(EForceInit::ForceInit);
	FLinearColor VectorToLinearColor(EForceInit::ForceInit);
	float Abs_1{};
	FLinearColor GetClampedLinearColorValue(EForceInit::ForceInit);
	float Lerp{};
	FLinearColor GetClampedLinearColorValue(EForceInit::ForceInit);
	FLinearColor GetClampedLinearColorValue(EForceInit::ForceInit);
	if(::IsValid(DirectionalxlightxactorTT))
	{
		GetActorRotation_1 = DirectionalxlightxactorTT->AActor::K2_GetActorRotation();
	}
	RotatorToVector = UKismetMathLibrary::Conv_RotatorToVector(GetActorRotation_1);
	VectorToLinearColor = UKismetMathLibrary::Conv_VectorToLinearColor(RotatorToVector);
	if(::IsValid(SkyxmaterialT))
	{
		SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Light direction")), VectorToLinearColor);
	}
	FColor  Color = FColor(0,0,0,255);
	ColorToLinearColor = UKismetMathLibrary::Conv_ColorToLinearColor(((::IsValid(DirectionalxlightxactorTT) && ::IsValid((*(AccessPrivateProperty<ULightComponent* >((DirectionalxlightxactorTT), ALight::__PPO__LightComponent() ))))) ? ((*(AccessPrivateProperty<ULightComponent* >((DirectionalxlightxactorTT), ALight::__PPO__LightComponent() )))->LightColor) : (Color)));
	if(::IsValid(SkyxmaterialT))
	{
		SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Sun color")), ColorToLinearColor);
	}
	if(::IsValid(DirectionalxlightxactorTT))
	{
		GetActorRotation = DirectionalxlightxactorTT->AActor::K2_GetActorRotation();
	}
	UKismetMathLibrary::BreakRotator(GetActorRotation, BreakRotator, BreakRotator_Pitch, BreakRotator_Yaw);
	MapRangeUnclamped = UKismetMathLibrary::MapRangeUnclamped(BreakRotator_Pitch, 0.0f, -90.0f, 0.0f, 1.0f);
	SunxheightT = MapRangeUnclamped;
	if(::IsValid(HorizonxcolorxcurveTT))
	{
		GetClampedLinearColorValue = HorizonxcolorxcurveTT->GetClampedLinearColorValue(SunxheightT);
	}
	if(::IsValid(SkyxmaterialT))
	{
		SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Horizon color")), GetClampedLinearColorValue);
	}
	if(::IsValid(ZenithxcolorxcurveTT))
	{
		GetClampedLinearColorValue = ZenithxcolorxcurveTT->GetClampedLinearColorValue(SunxheightT);
	}
	if(::IsValid(SkyxmaterialT))
	{
		SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Zenith color")), GetClampedLinearColorValue);
	}
	if(::IsValid(CloudxcolorxcurveTT))
	{
		GetClampedLinearColorValue = CloudxcolorxcurveTT->GetClampedLinearColorValue(SunxheightT);
	}
	if(::IsValid(SkyxmaterialT))
	{
		SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Cloud color")), GetClampedLinearColorValue);
	}
	Abs_1 = UKismetMathLibrary::Abs(SunxheightT);
	Lerp = UKismetMathLibrary::Lerp(3.0f, 8.0f, Abs_1);
	if(::IsValid(SkyxmaterialT))
	{
		SkyxmaterialT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Horizon falloff")), Lerp);
	}
	Less_Float = UKismetMathLibrary::Less_FloatFloat(SunxheightT, 0.0f);
	Abs = UKismetMathLibrary::Abs(SunxheightT);
	SelectFloat = UKismetMathLibrary::SelectFloat(Abs, 0.0f, Less_Float);
	if(::IsValid(SkyxmaterialT))
	{
		SkyxmaterialT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun height")), SelectFloat);
	}
}
void ASky::RefreshMaterial()
{
	float Abs{};
	FLinearColor GetClampedLinearColorValue(EForceInit::ForceInit);
	float Lerp{};
	bool Less_Float{};
	float Abs_1{};
	float SelectFloat{};
	float MapRangeUnclamped{};
	FRotator GetActorRotation(EForceInit::ForceInit);
	float BreakRotator{};
	float BreakRotator_Pitch{};
	float BreakRotator_Yaw{};
	FRotator GetActorRotation_1(EForceInit::ForceInit);
	FRotator MakeRotator(EForceInit::ForceInit);
	float BreakRotator_1{};
	float BreakRotator_Pitch_1{};
	float BreakRotator_Yaw_1{};
	FVector RotatorToVector(EForceInit::ForceInit);
	float MapRangeUnclamped_1{};
	FLinearColor VectorToLinearColor(EForceInit::ForceInit);
	FLinearColor GetClampedLinearColorValue(EForceInit::ForceInit);
	FLinearColor GetClampedLinearColorValue(EForceInit::ForceInit);
	float Add_Float{};
	float FClamp{};
	FLinearColor LinearColorLerp(EForceInit::ForceInit);
	FLinearColor ColorToLinearColor(EForceInit::ForceInit);
	bool IsValid{};
	FRotator GetActorRotation_2(EForceInit::ForceInit);
	FVector RotatorToVector_1(EForceInit::ForceInit);
	FLinearColor VectorToLinearColor_1(EForceInit::ForceInit);
	int32 CurrentState = 1;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				IsValid = UKismetSystemLibrary::IsValid(DirectionalxlightxactorTT);
				if (!IsValid)
				{
					CurrentState = 15;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(DirectionalxlightxactorTT))
				{
					GetActorRotation_2 = DirectionalxlightxactorTT->AActor::K2_GetActorRotation();
				}
				RotatorToVector_1 = UKismetMathLibrary::Conv_RotatorToVector(GetActorRotation_2);
				VectorToLinearColor_1 = UKismetMathLibrary::Conv_VectorToLinearColor(RotatorToVector_1);
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Light direction")), VectorToLinearColor_1);
				}
			}
		case 3:
			{
				FColor  Color = FColor(0,0,0,255);
				ColorToLinearColor = UKismetMathLibrary::Conv_ColorToLinearColor(((::IsValid(DirectionalxlightxactorTT) && ::IsValid((*(AccessPrivateProperty<ULightComponent* >((DirectionalxlightxactorTT), ALight::__PPO__LightComponent() ))))) ? ((*(AccessPrivateProperty<ULightComponent* >((DirectionalxlightxactorTT), ALight::__PPO__LightComponent() )))->LightColor) : (Color)));
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Sun color")), ColorToLinearColor);
				}
			}
		case 4:
			{
				if(::IsValid(DirectionalxlightxactorTT))
				{
					GetActorRotation_1 = DirectionalxlightxactorTT->AActor::K2_GetActorRotation();
				}
				UKismetMathLibrary::BreakRotator(GetActorRotation_1, BreakRotator_1, BreakRotator_Pitch_1, BreakRotator_Yaw_1);
				MapRangeUnclamped_1 = UKismetMathLibrary::MapRangeUnclamped(BreakRotator_Pitch_1, 0.0f, -90.0f, 0.0f, 1.0f);
				SunxheightT = MapRangeUnclamped_1;
			}
		case 5:
			{
				if (!ColorsxdeterminedxbyxsunxpositionTTTT)
				{
					CurrentState = 17;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(HorizonxcolorxcurveTT))
				{
					GetClampedLinearColorValue = HorizonxcolorxcurveTT->GetClampedLinearColorValue(SunxheightT);
				}
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Horizon color")), GetClampedLinearColorValue);
				}
			}
		case 7:
			{
				if(::IsValid(ZenithxcolorxcurveTT))
				{
					GetClampedLinearColorValue = ZenithxcolorxcurveTT->GetClampedLinearColorValue(SunxheightT);
				}
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Zenith color")), GetClampedLinearColorValue);
				}
			}
		case 8:
			{
				if(::IsValid(CloudxcolorxcurveTT))
				{
					GetClampedLinearColorValue = CloudxcolorxcurveTT->GetClampedLinearColorValue(SunxheightT);
				}
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Cloud color")), GetClampedLinearColorValue);
				}
			}
		case 9:
			{
				Abs = UKismetMathLibrary::Abs(SunxheightT);
				Lerp = UKismetMathLibrary::Lerp(3.0f, 7.0f, Abs);
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Horizon falloff")), Lerp);
				}
			}
		case 10:
			{
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Cloud speed")), CloudxspeedT);
				}
			}
		case 11:
			{
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun brightness")), SunxbrightnessT);
				}
			}
		case 12:
			{
				Less_Float = UKismetMathLibrary::Less_FloatFloat(SunxheightT, 0.0f);
				Abs_1 = UKismetMathLibrary::Abs(SunxheightT);
				SelectFloat = UKismetMathLibrary::SelectFloat(Abs_1, 0.0f, Less_Float);
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun height")), SelectFloat);
				}
			}
		case 13:
			{
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Cloud opacity")), CloudxopacityT);
				}
			}
		case 14:
			{
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Stars brightness")), StarsxbrightnessT);
				}
				CurrentState = -1;
				break;
			}
		case 15:
			{
				MapRangeUnclamped = UKismetMathLibrary::MapRangeUnclamped(SunxheightT, -1.0f, 1.0f, 90.0f, -90.0f);
				GetActorRotation = AActor::K2_GetActorRotation();
				UKismetMathLibrary::BreakRotator(GetActorRotation, BreakRotator, BreakRotator_Pitch, BreakRotator_Yaw);
				MakeRotator = UKismetMathLibrary::MakeRotator(0.0f, MapRangeUnclamped, BreakRotator_Yaw);
				RotatorToVector = UKismetMathLibrary::Conv_RotatorToVector(MakeRotator);
				VectorToLinearColor = UKismetMathLibrary::Conv_VectorToLinearColor(RotatorToVector);
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Light direction")), VectorToLinearColor);
				}
			}
		case 16:
			{
				Add_Float = UKismetMathLibrary::Add_FloatFloat(SunxheightT, 0.2f);
				FClamp = UKismetMathLibrary::FClamp(Add_Float, 0.0f, 1.0f);
				LinearColorLerp = UKismetMathLibrary::LinearColorLerp(FLinearColor(1.0f,0.22f,0.04f,1.0f), FLinearColor(0.95f,0.9f,0.7f,1.0f), FClamp);
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Sun color")), LinearColorLerp);
				}
				CurrentState = 5;
				break;
			}
		case 17:
			{
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Horizon color")), HorizonxcolorT);
				}
			}
		case 18:
			{
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Zenith color")), ZenithxColorT);
				}
			}
		case 19:
			{
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Overall color")), OverallxColorT);
				}
			}
		case 20:
			{
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Cloud color")), CloudxcolorT);
				}
			}
		case 21:
			{
				if(::IsValid(SkyxmaterialT))
				{
					SkyxmaterialT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Horizon falloff")), HorizonxFalloffT);
				}
				CurrentState = 10;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}

/* Unreal Engine Generated */
PRAGMA_DISABLE_OPTIMIZATION
void ASky::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{233, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/EngineSky/SM_SkySphere.SM_SkySphere 
		{234, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineSky/M_Sky_Panning_Clouds2.M_Sky_Panning_Clouds2 
		{235, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Engine/EngineSky/C_Sky_Horizon_Color.C_Sky_Horizon_Color 
		{236, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Engine/EngineSky/C_Sky_Zenith_Color.C_Sky_Zenith_Color 
		{237, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveLinearColor /Engine/EngineSky/C_Sky_Cloud_Color.C_Sky_Cloud_Color 
		{238, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Assets/Materials/M_Sky_Panning_Clouds_Inst.M_Sky_Panning_Clouds_Inst 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ASky::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{7, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{20, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{239, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DirectionalLight 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{240, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LightComponent 
		{241, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Light 
		{242, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LightComponentBase 
		{243, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CurveLinearColor 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ASky
{
	FRegisterHelper__ASky()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Engine/EngineSky/BP_Sky_Sphere"), &ASky::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ASky Instance;
};
FRegisterHelper__ASky FRegisterHelper__ASky::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
