#include "NativizedAssets.h"
#include "Coffee_widget__pf575078304.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/BackgroundBlur.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "StatsTrackerLib_BP__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#include "Runtime/UMG/Public/Components/WrapBoxSlot.h"
#include "Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScrollBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SafeZoneSlot.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/GridSlot.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UCoffee_widget_C__pf575078304::UCoffee_widget_C__pf575078304(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Accept_button__pf = nullptr;
	bpv__Coffe_cup_text__pf = nullptr;
	bpv__Coffe_powder_text__pf = nullptr;
	bpv__Coffee_cup__pf = nullptr;
	bpv__Coffee_powder__pf = nullptr;
	bpv__Cp_animation__pf = nullptr;
	bpv__M_animation__pf = nullptr;
	bpv__Milk__pf = nullptr;
	bpv__Milk_Text__pf = nullptr;
	bpv__S_animation__pf = nullptr;
	bpv__Sugar__pf = nullptr;
	bpv__Sugar_Text__pf = nullptr;
	bpv__Cuxvalue__pfT = 0;
	bpv__Cuxmax__pfT = 0;
	bpv__Cpxvalue__pfT = 0;
	bpv__Cpxmax__pfT = 0;
	bpv__Mxvalue__pfT = 0;
	bpv__Mxmax__pfT = 0;
	bpv__Sxvalue__pfT = 0;
	bpv__Sxmax__pfT = 0;
	bpv__cu__pf = false;
	bpv__Cp_texture__pf = TArray<UTexture2D*> ();
	bpv__M_texture__pf = TArray<UTexture2D*> ();
	bpv__S_textrue__pf = TArray<UTexture2D*> ();
	bpv__cpxanimation__pfT = false;
	bpv__M__pf = false;
	bpv__S__pf = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UCoffee_widget_C__pf575078304::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UCoffee_widget_C__pf575078304::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UStatsTrackerLib_BP_C__pf2132744816::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(6);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 6);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Coffee_powder"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Coffee_widget_Coffee_powder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Sugar"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Coffee_widget_Sugar_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Milk"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Coffee_widget_Milk_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Accept_button"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Coffee_widget_Accept_button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Coffee_cup"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnReleased"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Coffee_widget_Coffee_cup_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Coffee_cup"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Coffee_widget_Coffee_cup_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"));
	auto __Local__8 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__8), UPanelWidget::__PPO__Slots() )));
	__Local__9 = TArray<UPanelSlot*> ();
	__Local__9.Reserve(10);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__10->LayoutData.Offsets.Left = -1500.000000f;
	__Local__10->LayoutData.Offsets.Top = -1000.000000f;
	__Local__10->LayoutData.Offsets.Right = 3000.000000f;
	__Local__10->LayoutData.Offsets.Bottom = 2000.000000f;
	__Local__10->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__10->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__10->Parent = __Local__8;
	auto __Local__11 = NewObject<UBackgroundBlur>(__Local__1, TEXT("BackgroundBlur_48"), (EObjectFlags)0x00280008);
	__Local__11->BlurStrength = 5.000000f;
	__Local__11->Slot = __Local__10;
	__Local__10->Content = __Local__11;
	__Local__9.Add(__Local__10);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__12->LayoutData.Offsets.Left = -700.000000f;
	__Local__12->LayoutData.Offsets.Top = -450.000000f;
	__Local__12->LayoutData.Offsets.Right = 1400.000000f;
	__Local__12->LayoutData.Offsets.Bottom = 900.000000f;
	__Local__12->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__12->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__12->Parent = __Local__8;
	auto __Local__13 = NewObject<UVerticalBox>(__Local__1, TEXT("background"), (EObjectFlags)0x00280008);
	auto& __Local__14 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__13), UPanelWidget::__PPO__Slots() )));
	__Local__14 = TArray<UPanelSlot*> ();
	__Local__14.Reserve(2);
	auto __Local__15 = NewObject<UVerticalBoxSlot>(__Local__13, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__15->Size.Value = 4.000000f;
	__Local__15->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__15->Padding.Left = 50.000000f;
	__Local__15->Padding.Right = 50.000000f;
	__Local__15->Parent = __Local__13;
	auto __Local__16 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_62"), (EObjectFlags)0x00280008);
	auto& __Local__17 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__16), UPanelWidget::__PPO__Slots() )));
	__Local__17 = TArray<UPanelSlot*> ();
	__Local__17.Reserve(1);
	auto __Local__18 = NewObject<UVerticalBoxSlot>(__Local__16, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__18->Size.Value = 3.000000f;
	__Local__18->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__18->Parent = __Local__16;
	auto __Local__19 = NewObject<UImage>(__Local__1, TEXT("Image_81"), (EObjectFlags)0x00280008);
	__Local__19->Brush.ImageSize = FVector2D(1436.000000, 940.000000);
	auto& __Local__20 = (*(AccessPrivateProperty<UObject* >(&(__Local__19->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__20 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__19->Slot = __Local__18;
	__Local__19->bIsVariable = false;
	__Local__18->Content = __Local__19;
	__Local__17.Add(__Local__18);
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__14.Add(__Local__15);
	auto __Local__21 = NewObject<UVerticalBoxSlot>(__Local__13, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__21->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__21->Parent = __Local__13;
	auto __Local__22 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_92"), (EObjectFlags)0x00280008);
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__22), UPanelWidget::__PPO__Slots() )));
	__Local__23 = TArray<UPanelSlot*> ();
	__Local__23.Reserve(2);
	auto __Local__24 = NewObject<UHorizontalBoxSlot>(__Local__22, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__24->Padding.Left = 100.000000f;
	__Local__24->Padding.Top = 20.000000f;
	__Local__24->Padding.Right = 50.000000f;
	__Local__24->Size.Value = 3.000000f;
	__Local__24->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__24->Parent = __Local__22;
	auto __Local__25 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_126"), (EObjectFlags)0x00280008);
	auto& __Local__26 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__25), UPanelWidget::__PPO__Slots() )));
	__Local__26 = TArray<UPanelSlot*> ();
	__Local__26.Reserve(1);
	auto __Local__27 = NewObject<UVerticalBoxSlot>(__Local__25, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__27->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__27->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__27->Parent = __Local__25;
	auto __Local__28 = NewObject<UImage>(__Local__1, TEXT("Image_44"), (EObjectFlags)0x00280008);
	__Local__28->Brush.ImageSize = FVector2D(835.000000, 283.000000);
	auto& __Local__29 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__29 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__28->Slot = __Local__27;
	__Local__28->bIsVariable = false;
	__Local__27->Content = __Local__28;
	__Local__26.Add(__Local__27);
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__23.Add(__Local__24);
	auto __Local__30 = NewObject<UHorizontalBoxSlot>(__Local__22, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__30->Padding.Left = 50.000000f;
	__Local__30->Padding.Top = 20.000000f;
	__Local__30->Padding.Right = 150.000000f;
	__Local__30->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__30->Parent = __Local__22;
	auto __Local__31 = NewObject<UButton>(__Local__1, TEXT("Accept_button"), (EObjectFlags)0x00280008);
	__Local__31->WidgetStyle.Normal.ImageSize = FVector2D(534.000000, 321.000000);
	__Local__31->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__31->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__31->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__31->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Hovered.ImageSize = FVector2D(534.000000, 321.000000);
	__Local__31->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__31->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__31->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__31->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__33 = (*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(__Local__31->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__ColorUseRule() )));
	__Local__33 = ESlateColorStylingMode::Type::UseColor_Foreground;
	auto& __Local__34 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__34 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Pressed.ImageSize = FVector2D(534.000000, 321.000000);
	__Local__31->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__31->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__31->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__31->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__35 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__35 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__23.Add(__Local__30);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__14.Add(__Local__21);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__9.Add(__Local__12);
	auto __Local__36 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_82"), (EObjectFlags)0x00280008);
	__Local__36->LayoutData.Offsets.Right = 230.000000f;
	__Local__36->LayoutData.Offsets.Bottom = 230.000000f;
	__Local__36->Parent = __Local__8;
	auto __Local__37 = NewObject<UButton>(__Local__1, TEXT("Coffee_powder"), (EObjectFlags)0x00280008);
	__Local__37->WidgetStyle.Normal.ImageSize = FVector2D(710.000000, 624.000000);
	__Local__37->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__37->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__37->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__37->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__38 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__38 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__37->WidgetStyle.Hovered.ImageSize = FVector2D(710.000000, 624.000000);
	__Local__37->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__37->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__37->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__37->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__39 = (*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(__Local__37->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__ColorUseRule() )));
	__Local__39 = ESlateColorStylingMode::Type::UseColor_Foreground;
	auto& __Local__40 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__40 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__37->WidgetStyle.Pressed.ImageSize = FVector2D(710.000000, 624.000000);
	__Local__37->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__37->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__37->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__37->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__41 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__41 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__37->Slot = __Local__36;
	__Local__37->RenderTransform.Translation = FVector2D(970.000000, 310.000000);
	__Local__36->Content = __Local__37;
	__Local__9.Add(__Local__36);
	auto __Local__42 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_71"), (EObjectFlags)0x00280008);
	__Local__42->LayoutData.Offsets.Right = 220.000000f;
	__Local__42->LayoutData.Offsets.Bottom = 220.000000f;
	__Local__42->Parent = __Local__8;
	auto __Local__43 = NewObject<UButton>(__Local__1, TEXT("Sugar"), (EObjectFlags)0x00280008);
	__Local__43->WidgetStyle.Normal.ImageSize = FVector2D(812.000000, 760.000000);
	__Local__43->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__43->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__43->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__43->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__44 = (*(AccessPrivateProperty<UObject* >(&(__Local__43->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__44 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__43->WidgetStyle.Hovered.ImageSize = FVector2D(812.000000, 760.000000);
	__Local__43->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__43->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__43->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__43->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__45 = (*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(__Local__43->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__ColorUseRule() )));
	__Local__45 = ESlateColorStylingMode::Type::UseColor_Foreground;
	auto& __Local__46 = (*(AccessPrivateProperty<UObject* >(&(__Local__43->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__46 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__43->WidgetStyle.Pressed.ImageSize = FVector2D(812.000000, 760.000000);
	__Local__43->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__43->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__43->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__43->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__47 = (*(AccessPrivateProperty<UObject* >(&(__Local__43->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__47 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__43->Slot = __Local__42;
	__Local__43->RenderTransform.Translation = FVector2D(1260.000000, 330.000000);
	__Local__42->Content = __Local__43;
	__Local__9.Add(__Local__42);
	auto __Local__48 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_76"), (EObjectFlags)0x00280008);
	__Local__48->LayoutData.Offsets.Right = 170.000000f;
	__Local__48->LayoutData.Offsets.Bottom = 170.000000f;
	__Local__48->Parent = __Local__8;
	auto __Local__49 = NewObject<UButton>(__Local__1, TEXT("Milk"), (EObjectFlags)0x00280008);
	__Local__49->WidgetStyle.Normal.ImageSize = FVector2D(652.000000, 590.000000);
	__Local__49->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__49->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__49->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__49->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__50 = (*(AccessPrivateProperty<UObject* >(&(__Local__49->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__50 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__49->WidgetStyle.Hovered.ImageSize = FVector2D(652.000000, 590.000000);
	__Local__49->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__49->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__49->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__49->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__51 = (*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(__Local__49->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__ColorUseRule() )));
	__Local__51 = ESlateColorStylingMode::Type::UseColor_Foreground;
	auto& __Local__52 = (*(AccessPrivateProperty<UObject* >(&(__Local__49->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__52 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__49->WidgetStyle.Pressed.ImageSize = FVector2D(652.000000, 590.000000);
	__Local__49->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__49->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__49->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__49->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__53 = (*(AccessPrivateProperty<UObject* >(&(__Local__49->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__53 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__49->Slot = __Local__48;
	__Local__49->RenderTransform.Translation = FVector2D(1150.000000, 468.000000);
	__Local__48->Content = __Local__49;
	__Local__9.Add(__Local__48);
	auto __Local__54 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_74"), (EObjectFlags)0x00280008);
	__Local__54->LayoutData.Offsets.Right = 200.000000f;
	__Local__54->LayoutData.Offsets.Bottom = 200.000000f;
	__Local__54->Parent = __Local__8;
	auto __Local__55 = NewObject<UButton>(__Local__1, TEXT("Coffee_cup"), (EObjectFlags)0x00280008);
	__Local__55->WidgetStyle.Normal.ImageSize = FVector2D(448.000000, 418.000000);
	__Local__55->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__55->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__55->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__55->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__56 = (*(AccessPrivateProperty<UObject* >(&(__Local__55->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__56 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__55->WidgetStyle.Hovered.ImageSize = FVector2D(448.000000, 418.000000);
	__Local__55->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__55->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__55->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__55->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__57 = (*(AccessPrivateProperty<UObject* >(&(__Local__55->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__57 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__55->WidgetStyle.Pressed.ImageSize = FVector2D(448.000000, 418.000000);
	__Local__55->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__55->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__55->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__55->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__58 = (*(AccessPrivateProperty<UObject* >(&(__Local__55->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__58 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__55->Slot = __Local__54;
	__Local__55->RenderTransform.Translation = FVector2D(680.000000, 345.000000);
	__Local__54->Content = __Local__55;
	__Local__9.Add(__Local__54);
	auto __Local__59 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_59"), (EObjectFlags)0x00280008);
	__Local__59->LayoutData.Offsets.Left = -585.000000f;
	__Local__59->LayoutData.Offsets.Top = 300.000000f;
	__Local__59->LayoutData.Offsets.Right = 770.000000f;
	__Local__59->LayoutData.Offsets.Bottom = 140.000000f;
	__Local__59->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__59->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__59->Parent = __Local__8;
	auto __Local__60 = NewObject<UVerticalBox>(__Local__1, TEXT("MINI_box"), (EObjectFlags)0x00280008);
	auto& __Local__61 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__60), UPanelWidget::__PPO__Slots() )));
	__Local__61 = TArray<UPanelSlot*> ();
	__Local__61.Reserve(1);
	auto __Local__62 = NewObject<UVerticalBoxSlot>(__Local__60, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__62->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__62->Parent = __Local__60;
	auto __Local__63 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_197"), (EObjectFlags)0x00280008);
	auto& __Local__64 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__63), UPanelWidget::__PPO__Slots() )));
	__Local__64 = TArray<UPanelSlot*> ();
	__Local__64.Reserve(8);
	auto __Local__65 = NewObject<UHorizontalBoxSlot>(__Local__63, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__65->Padding.Left = 20.000000f;
	__Local__65->Padding.Top = 40.000000f;
	__Local__65->Padding.Right = 10.000000f;
	__Local__65->Padding.Bottom = 40.000000f;
	__Local__65->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__65->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__65->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__65->Parent = __Local__63;
	auto __Local__66 = NewObject<UVerticalBox>(__Local__1, TEXT("Coffe_cup_mini"), (EObjectFlags)0x00280008);
	auto& __Local__67 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__66), UPanelWidget::__PPO__Slots() )));
	__Local__67 = TArray<UPanelSlot*> ();
	__Local__67.Reserve(1);
	auto __Local__68 = NewObject<UVerticalBoxSlot>(__Local__66, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__68->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__68->Parent = __Local__66;
	auto __Local__69 = NewObject<UImage>(__Local__1, TEXT("Image"), (EObjectFlags)0x00280008);
	__Local__69->Brush.ImageSize = FVector2D(448.000000, 418.000000);
	auto& __Local__70 = (*(AccessPrivateProperty<UObject* >(&(__Local__69->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__70 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__69->Slot = __Local__68;
	__Local__69->bIsVariable = false;
	__Local__68->Content = __Local__69;
	__Local__67.Add(__Local__68);
	__Local__66->Slot = __Local__65;
	__Local__65->Content = __Local__66;
	__Local__64.Add(__Local__65);
	auto __Local__71 = NewObject<UHorizontalBoxSlot>(__Local__63, TEXT("HorizontalBoxSlot_8"), (EObjectFlags)0x00280008);
	__Local__71->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__71->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__71->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__71->Parent = __Local__63;
	auto __Local__72 = NewObject<UTextBlock>(__Local__1, TEXT("Coffe_cup_text"), (EObjectFlags)0x00280008);
	__Local__72->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[97CDD7BF40BB855C42F329AF9498E4E3]\", \"7D73A0514038C5833C44B792F37CFC47\", \"0/1\")")	);
	auto& __Local__73 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__72->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__73 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__72->Slot = __Local__71;
	__Local__72->bIsVariable = true;
	__Local__71->Content = __Local__72;
	__Local__64.Add(__Local__71);
	auto __Local__74 = NewObject<UHorizontalBoxSlot>(__Local__63, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__74->Padding.Left = 10.000000f;
	__Local__74->Padding.Top = 40.000000f;
	__Local__74->Padding.Right = 10.000000f;
	__Local__74->Padding.Bottom = 40.000000f;
	__Local__74->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__74->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__74->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__74->Parent = __Local__63;
	auto __Local__75 = NewObject<UVerticalBox>(__Local__1, TEXT("Coffe_powder_mini"), (EObjectFlags)0x00280008);
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__75), UPanelWidget::__PPO__Slots() )));
	__Local__76 = TArray<UPanelSlot*> ();
	__Local__76.Reserve(1);
	auto __Local__77 = NewObject<UVerticalBoxSlot>(__Local__75, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__77->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__77->Parent = __Local__75;
	auto __Local__78 = NewObject<UImage>(__Local__1, TEXT("Image_4"), (EObjectFlags)0x00280008);
	__Local__78->Brush.ImageSize = FVector2D(710.000000, 624.000000);
	auto& __Local__79 = (*(AccessPrivateProperty<UObject* >(&(__Local__78->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__79 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__78->Slot = __Local__77;
	__Local__78->bIsVariable = false;
	__Local__77->Content = __Local__78;
	__Local__76.Add(__Local__77);
	__Local__75->Slot = __Local__74;
	__Local__74->Content = __Local__75;
	__Local__64.Add(__Local__74);
	auto __Local__80 = NewObject<UHorizontalBoxSlot>(__Local__63, TEXT("HorizontalBoxSlot_9"), (EObjectFlags)0x00280008);
	__Local__80->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__80->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__80->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__80->Parent = __Local__63;
	auto __Local__81 = NewObject<UTextBlock>(__Local__1, TEXT("Coffe_powder_text"), (EObjectFlags)0x00280008);
	__Local__81->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[97CDD7BF40BB855C42F329AF9498E4E3]\", \"42588C2F4C8BBA57642C31AD8830F82D\", \"0/4\")")	);
	auto& __Local__82 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__81->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__82 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__81->Slot = __Local__80;
	__Local__81->bIsVariable = true;
	__Local__80->Content = __Local__81;
	__Local__64.Add(__Local__80);
	auto __Local__83 = NewObject<UHorizontalBoxSlot>(__Local__63, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__83->Padding.Left = 10.000000f;
	__Local__83->Padding.Top = 40.000000f;
	__Local__83->Padding.Right = 10.000000f;
	__Local__83->Padding.Bottom = 40.000000f;
	__Local__83->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__83->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__83->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__83->Parent = __Local__63;
	auto __Local__84 = NewObject<UVerticalBox>(__Local__1, TEXT("Milk_mini"), (EObjectFlags)0x00280008);
	auto& __Local__85 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__84), UPanelWidget::__PPO__Slots() )));
	__Local__85 = TArray<UPanelSlot*> ();
	__Local__85.Reserve(1);
	auto __Local__86 = NewObject<UVerticalBoxSlot>(__Local__84, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__86->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__86->Parent = __Local__84;
	auto __Local__87 = NewObject<UImage>(__Local__1, TEXT("Image_5"), (EObjectFlags)0x00280008);
	__Local__87->Brush.ImageSize = FVector2D(652.000000, 590.000000);
	auto& __Local__88 = (*(AccessPrivateProperty<UObject* >(&(__Local__87->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__88 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__87->Slot = __Local__86;
	__Local__87->bIsVariable = false;
	__Local__86->Content = __Local__87;
	__Local__85.Add(__Local__86);
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__64.Add(__Local__83);
	auto __Local__89 = NewObject<UHorizontalBoxSlot>(__Local__63, TEXT("HorizontalBoxSlot_10"), (EObjectFlags)0x00280008);
	__Local__89->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__89->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__89->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__89->Parent = __Local__63;
	auto __Local__90 = NewObject<UTextBlock>(__Local__1, TEXT("Milk_Text"), (EObjectFlags)0x00280008);
	__Local__90->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[97CDD7BF40BB855C42F329AF9498E4E3]\", \"5E1EA2C24B0F526B76455AA6EBC78B23\", \"0/3\")")	);
	auto& __Local__91 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__90->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__91 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__90->Slot = __Local__89;
	__Local__90->bIsVariable = true;
	__Local__89->Content = __Local__90;
	__Local__64.Add(__Local__89);
	auto __Local__92 = NewObject<UHorizontalBoxSlot>(__Local__63, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__92->Padding.Left = 10.000000f;
	__Local__92->Padding.Top = 40.000000f;
	__Local__92->Padding.Right = 10.000000f;
	__Local__92->Padding.Bottom = 40.000000f;
	__Local__92->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__92->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__92->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__92->Parent = __Local__63;
	auto __Local__93 = NewObject<UVerticalBox>(__Local__1, TEXT("Sugar_mini"), (EObjectFlags)0x00280008);
	auto& __Local__94 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__93), UPanelWidget::__PPO__Slots() )));
	__Local__94 = TArray<UPanelSlot*> ();
	__Local__94.Reserve(1);
	auto __Local__95 = NewObject<UVerticalBoxSlot>(__Local__93, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__95->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__95->Parent = __Local__93;
	auto __Local__96 = NewObject<UImage>(__Local__1, TEXT("Image_6"), (EObjectFlags)0x00280008);
	__Local__96->Brush.ImageSize = FVector2D(812.000000, 760.000000);
	auto& __Local__97 = (*(AccessPrivateProperty<UObject* >(&(__Local__96->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__97 = CastChecked<UObject>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__96->Slot = __Local__95;
	__Local__96->bIsVariable = false;
	__Local__95->Content = __Local__96;
	__Local__94.Add(__Local__95);
	__Local__93->Slot = __Local__92;
	__Local__92->Content = __Local__93;
	__Local__64.Add(__Local__92);
	auto __Local__98 = NewObject<UHorizontalBoxSlot>(__Local__63, TEXT("HorizontalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__98->Padding.Right = 20.000000f;
	__Local__98->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__98->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__98->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__98->Parent = __Local__63;
	auto __Local__99 = NewObject<UTextBlock>(__Local__1, TEXT("Sugar_Text"), (EObjectFlags)0x00280008);
	__Local__99->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[97CDD7BF40BB855C42F329AF9498E4E3]\", \"582F599C4547EE47E4704C908381A9DF\", \"0/2\")")	);
	auto& __Local__100 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__99->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__100 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__99->Slot = __Local__98;
	__Local__99->bIsVariable = true;
	__Local__98->Content = __Local__99;
	__Local__64.Add(__Local__98);
	__Local__63->Slot = __Local__62;
	__Local__62->Content = __Local__63;
	__Local__61.Add(__Local__62);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__9.Add(__Local__59);
	auto __Local__101 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_95"), (EObjectFlags)0x00280008);
	__Local__101->LayoutData.Offsets.Left = -250.000000f;
	__Local__101->LayoutData.Offsets.Top = -360.000000f;
	__Local__101->LayoutData.Offsets.Right = 180.000000f;
	__Local__101->LayoutData.Offsets.Bottom = 200.000000f;
	__Local__101->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__101->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__101->Parent = __Local__8;
	auto __Local__102 = NewObject<UImage>(__Local__1, TEXT("Cp_animation"), (EObjectFlags)0x00280008);
	__Local__102->Slot = __Local__101;
	__Local__101->Content = __Local__102;
	__Local__9.Add(__Local__101);
	auto __Local__103 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_99"), (EObjectFlags)0x00280008);
	__Local__103->LayoutData.Offsets.Left = -250.000000f;
	__Local__103->LayoutData.Offsets.Top = -360.000000f;
	__Local__103->LayoutData.Offsets.Right = 135.000000f;
	__Local__103->LayoutData.Offsets.Bottom = 200.000000f;
	__Local__103->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__103->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__103->Parent = __Local__8;
	auto __Local__104 = NewObject<UImage>(__Local__1, TEXT("M_animation"), (EObjectFlags)0x00280008);
	__Local__104->Slot = __Local__103;
	__Local__103->Content = __Local__104;
	__Local__9.Add(__Local__103);
	auto __Local__105 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_104"), (EObjectFlags)0x00280008);
	__Local__105->LayoutData.Offsets.Left = -300.960938f;
	__Local__105->LayoutData.Offsets.Top = -270.000000f;
	__Local__105->LayoutData.Offsets.Right = 200.000000f;
	__Local__105->LayoutData.Offsets.Bottom = 110.000000f;
	__Local__105->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__105->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__105->Parent = __Local__8;
	auto __Local__106 = NewObject<UImage>(__Local__1, TEXT("S_animation"), (EObjectFlags)0x00280008);
	__Local__106->Slot = __Local__105;
	__Local__105->Content = __Local__106;
	__Local__9.Add(__Local__105);
	__Local__1->RootWidget = __Local__8;
}
PRAGMA_ENABLE_OPTIMIZATION
void UCoffee_widget_C__pf575078304::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__107;
	SlotNames.Append(__Local__107);
}
void UCoffee_widget_C__pf575078304::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__108;
	TArray<FDelegateRuntimeBinding>  __Local__109;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->MiscConvertedSubobjects[0]), __Local__108, __Local__109);
}
void UCoffee_widget_C__pf575078304::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UCoffee_widget_C__pf575078304::bpf__ExecuteUbergraph_Coffee_widget__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), -8.000000, this);
			}
		case 2:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), 24.000000, this);
			}
		case 3:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("ISUIOPENED")), 0.000000, this);
				__CurrentState = -1;
				break;
			}
		case 54:
			{
				__CurrentState = 55;
				break;
			}
		case 55:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
				b0l__K2Node_MakeArray_Array__pf[1] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
				b0l__K2Node_MakeArray_Array__pf[2] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
				bpv__Cp_texture__pf = b0l__K2Node_MakeArray_Array__pf;
			}
		case 56:
			{
				b0l__K2Node_MakeArray_Array_1__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array_1__pf[0] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
				b0l__K2Node_MakeArray_Array_1__pf[1] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
				b0l__K2Node_MakeArray_Array_1__pf[2] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
				bpv__M_texture__pf = b0l__K2Node_MakeArray_Array_1__pf;
			}
		case 57:
			{
				b0l__K2Node_MakeArray_Array_2__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array_2__pf[0] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
				b0l__K2Node_MakeArray_Array_2__pf[1] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
				b0l__K2Node_MakeArray_Array_2__pf[2] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UCoffee_widget_C__pf575078304::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
				bpv__S_textrue__pf = b0l__K2Node_MakeArray_Array_2__pf;
			}
		case 58:
			{
				if(::IsValid(bpv__Coffee_cup__pf))
				{
					bpv__Coffee_cup__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 59:
			{
				b0l__K2Node_MakeStruct_WidgetTransform_7__pf.Translation = FVector2D(1160.000000,400.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_7__pf.Scale = FVector2D(1.000000,1.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_7__pf.Shear = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_7__pf.Angle = 0.000000;
				if(::IsValid(bpv__Coffee_cup__pf))
				{
					bpv__Coffee_cup__pf->UWidget::SetRenderTransform(b0l__K2Node_MakeStruct_WidgetTransform_7__pf);
				}
			}
		case 60:
			{
				if(::IsValid(bpv__Coffee_powder__pf))
				{
					bpv__Coffee_powder__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Milk__pf))
				{
					bpv__Milk__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Sugar__pf))
				{
					bpv__Sugar__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Cp_animation__pf))
				{
					bpv__Cp_animation__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__M_animation__pf))
				{
					bpv__M_animation__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__S_animation__pf))
				{
					bpv__S_animation__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 61:
			{
				b0l__K2Node_MakeStruct_WidgetTransform_5__pf.Translation = FVector2D(970.000000,310.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_5__pf.Scale = FVector2D(1.000000,1.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_5__pf.Shear = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_5__pf.Angle = 0.000000;
				if(::IsValid(bpv__Coffee_powder__pf))
				{
					bpv__Coffee_powder__pf->UWidget::SetRenderTransform(b0l__K2Node_MakeStruct_WidgetTransform_5__pf);
				}
			}
		case 62:
			{
				b0l__K2Node_MakeStruct_WidgetTransform_4__pf.Translation = FVector2D(1150.000000,468.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_4__pf.Scale = FVector2D(1.000000,1.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_4__pf.Shear = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_4__pf.Angle = 0.000000;
				if(::IsValid(bpv__Milk__pf))
				{
					bpv__Milk__pf->UWidget::SetRenderTransform(b0l__K2Node_MakeStruct_WidgetTransform_4__pf);
				}
			}
		case 63:
			{
				b0l__K2Node_MakeStruct_WidgetTransform_3__pf.Translation = FVector2D(1260.000000,330.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_3__pf.Scale = FVector2D(1.000000,1.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_3__pf.Shear = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_3__pf.Angle = 0.000000;
				if(::IsValid(bpv__Sugar__pf))
				{
					bpv__Sugar__pf->UWidget::SetRenderTransform(b0l__K2Node_MakeStruct_WidgetTransform_3__pf);
				}
			}
		case 64:
			{
				bpv__Cuxvalue__pfT = 0;
			}
		case 65:
			{
				bpv__Cpxvalue__pfT = 0;
			}
		case 66:
			{
				bpv__Mxvalue__pfT = 0;
			}
		case 67:
			{
				bpv__Sxvalue__pfT = 0;
			}
		case 68:
			{
				bpv__Cuxmax__pfT = 1;
			}
		case 69:
			{
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(1, 3);
				bpv__Cpxmax__pfT = bpfv__CallFunc_RandomIntegerInRange_ReturnValue__pf;
			}
		case 70:
			{
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf = UKismetMathLibrary::RandomIntegerInRange(0, 4);
				bpv__Mxmax__pfT = bpfv__CallFunc_RandomIntegerInRange_ReturnValue_1__pf;
			}
		case 71:
			{
				bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf = UKismetMathLibrary::RandomIntegerInRange(0, 5);
				bpv__Sxmax__pfT = bpfv__CallFunc_RandomIntegerInRange_ReturnValue_2__pf;
			}
		case 72:
			{
				bpv__cpxanimation__pfT = false;
			}
		case 73:
			{
				bpv__M__pf = false;
			}
		case 74:
			{
				bpv__S__pf = false;
				__CurrentState = -1;
				break;
			}
		case 107:
			{
				__CurrentState = 108;
				break;
			}
		case 108:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), -8.000000, this);
			}
		case 109:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__Cuxvalue__pfT, bpv__Cuxmax__pfT);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 58;
					break;
				}
			}
		case 110:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__Cpxvalue__pfT, bpv__Cpxmax__pfT);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = 58;
					break;
				}
			}
		case 111:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__Mxvalue__pfT, bpv__Mxmax__pfT);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 58;
					break;
				}
			}
		case 112:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_3__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__Sxvalue__pfT, bpv__Sxmax__pfT);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_3__pf)
				{
					__CurrentState = 58;
					break;
				}
			}
		case 113:
			{
				RemoveFromParent();
				__CurrentState = 1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UCoffee_widget_C__pf575078304::bpf__ExecuteUbergraph_Coffee_widget__pf_1(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_4__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_5__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_6__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_7__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue_3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 4:
			{
				__CurrentState = 5;
				break;
			}
		case 5:
			{
				FCustomThunkTemplates::Array_Get(bpv__Cp_texture__pf, 1, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpv__Cp_animation__pf))
				{
					bpv__Cp_animation__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_1__pf, false);
				}
			}
		case 6:
			{
				UKismetSystemLibrary::Delay(this, 0.250000, FLatentActionInfo(7, 1769580989, TEXT("ExecuteUbergraph_Coffee_widget_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				__CurrentState = 8;
				break;
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__Cp_texture__pf, 2, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				if(::IsValid(bpv__Cp_animation__pf))
				{
					bpv__Cp_animation__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_2__pf, false);
				}
			}
		case 9:
			{
				UKismetSystemLibrary::Delay(this, 0.500000, FLatentActionInfo(10, 113221975, TEXT("ExecuteUbergraph_Coffee_widget_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				__CurrentState = 11;
				break;
			}
		case 11:
			{
				if(::IsValid(bpv__Coffee_powder__pf))
				{
					bpv__Coffee_powder__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Milk__pf))
				{
					bpv__Milk__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Sugar__pf))
				{
					bpv__Sugar__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 12:
			{
				if(::IsValid(bpv__Cp_animation__pf))
				{
					bpv__Cp_animation__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				__CurrentState = 14;
				break;
			}
		case 14:
			{
				FCustomThunkTemplates::Array_Get(bpv__M_texture__pf, 1, /*out*/ b0l__CallFunc_Array_Get_Item_4__pf);
				if(::IsValid(bpv__M_animation__pf))
				{
					bpv__M_animation__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_4__pf, false);
				}
			}
		case 15:
			{
				UKismetSystemLibrary::Delay(this, 0.250000, FLatentActionInfo(16, 1679258774, TEXT("ExecuteUbergraph_Coffee_widget_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				__CurrentState = 17;
				break;
			}
		case 17:
			{
				FCustomThunkTemplates::Array_Get(bpv__M_texture__pf, 2, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
				if(::IsValid(bpv__M_animation__pf))
				{
					bpv__M_animation__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_5__pf, false);
				}
			}
		case 18:
			{
				UKismetSystemLibrary::Delay(this, 0.250000, FLatentActionInfo(19, -1866362493, TEXT("ExecuteUbergraph_Coffee_widget_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				__CurrentState = 20;
				break;
			}
		case 20:
			{
				if(::IsValid(bpv__Coffee_powder__pf))
				{
					bpv__Coffee_powder__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Milk__pf))
				{
					bpv__Milk__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Sugar__pf))
				{
					bpv__Sugar__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 21:
			{
				if(::IsValid(bpv__M_animation__pf))
				{
					bpv__M_animation__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				__CurrentState = 23;
				break;
			}
		case 23:
			{
				FCustomThunkTemplates::Array_Get(bpv__S_textrue__pf, 1, /*out*/ b0l__CallFunc_Array_Get_Item_7__pf);
				if(::IsValid(bpv__S_animation__pf))
				{
					bpv__S_animation__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_7__pf, false);
				}
			}
		case 24:
			{
				UKismetSystemLibrary::Delay(this, 0.250000, FLatentActionInfo(25, 2039549175, TEXT("ExecuteUbergraph_Coffee_widget_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				__CurrentState = 26;
				break;
			}
		case 26:
			{
				FCustomThunkTemplates::Array_Get(bpv__S_textrue__pf, 2, /*out*/ b0l__CallFunc_Array_Get_Item_8__pf);
				if(::IsValid(bpv__S_animation__pf))
				{
					bpv__S_animation__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_8__pf, false);
				}
			}
		case 27:
			{
				UKismetSystemLibrary::Delay(this, 0.250000, FLatentActionInfo(28, 1053563921, TEXT("ExecuteUbergraph_Coffee_widget_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				__CurrentState = 29;
				break;
			}
		case 29:
			{
				if(::IsValid(bpv__Coffee_powder__pf))
				{
					bpv__Coffee_powder__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Milk__pf))
				{
					bpv__Milk__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Sugar__pf))
				{
					bpv__Sugar__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 30:
			{
				if(::IsValid(bpv__S_animation__pf))
				{
					bpv__S_animation__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				__StateStack.Push(33);
			}
		case 32:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 38;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 34;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 35:
			{
				if (!true)
				{
					__CurrentState = 37;
					break;
				}
			}
		case 36:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 37:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 39:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 40:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				__StateStack.Push(42);
				__CurrentState = 31;
				break;
			}
		case 42:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 43:
			{
				bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue__pf = UWidgetLayoutLibrary::GetMousePositionOnViewport(this);
			}
		case 44:
			{
				b0l__K2Node_MakeStruct_WidgetTransform_1__pf.Translation = bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue__pf;
				b0l__K2Node_MakeStruct_WidgetTransform_1__pf.Scale = FVector2D(1.000000,1.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_1__pf.Shear = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_1__pf.Angle = 0.000000;
				if(::IsValid(bpv__Coffee_cup__pf))
				{
					bpv__Coffee_cup__pf->UWidget::SetRenderTransform(b0l__K2Node_MakeStruct_WidgetTransform_1__pf);
				}
			}
		case 45:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(800.000000, 450.000000, 0.000000);
				bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue__pf = UKismetMathLibrary::Conv_Vector2DToVector(bpfv__CallFunc_GetMousePositionOnViewport_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CallFunc_Conv_Vector2DToVector_ReturnValue__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 200.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 48;
					break;
				}
			}
		case 46:
			{
				b0l__K2Node_MakeStruct_WidgetTransform_6__pf.Translation = FVector2D(680.000000,345.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_6__pf.Scale = FVector2D(1.000000,1.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_6__pf.Shear = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_6__pf.Angle = 0.000000;
				if(::IsValid(bpv__Coffee_cup__pf))
				{
					bpv__Coffee_cup__pf->UWidget::SetRenderTransform(b0l__K2Node_MakeStruct_WidgetTransform_6__pf);
				}
			}
		case 47:
			{
				bpv__cu__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 48:
			{
				if(::IsValid(bpv__Coffee_cup__pf))
				{
					bpv__Coffee_cup__pf->UWidget::SetRenderTransformAngle(0.000000);
				}
			}
		case 49:
			{
				bpv__cu__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 50:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 52:
			{
				__StateStack.Push(51);
				__CurrentState = 31;
				break;
			}
		case 53:
			{
				__StateStack.Push(50);
				__CurrentState = 31;
				break;
			}
		case 75:
			{
				__CurrentState = 76;
				break;
			}
		case 76:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpv__Cuxvalue__pfT);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(bpv__Cuxmax__pfT);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue__pf, FString(TEXT("/")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf);
				if(::IsValid(bpv__Coffe_cup_text__pf))
				{
					bpv__Coffe_cup_text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 77:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf = UKismetStringLibrary::Conv_IntToString(bpv__Cpxvalue__pfT);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf = UKismetStringLibrary::Conv_IntToString(bpv__Cpxmax__pfT);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf, FString(TEXT("/")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_3__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf);
				if(::IsValid(bpv__Coffe_powder_text__pf))
				{
					bpv__Coffe_powder_text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue_1__pf);
				}
			}
		case 78:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue_4__pf = UKismetStringLibrary::Conv_IntToString(bpv__Mxvalue__pfT);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue_4__pf, FString(TEXT("/")));
				bpfv__CallFunc_Conv_IntToString_ReturnValue_5__pf = UKismetStringLibrary::Conv_IntToString(bpv__Mxmax__pfT);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_5__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf);
				if(::IsValid(bpv__Milk_Text__pf))
				{
					bpv__Milk_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue_2__pf);
				}
			}
		case 79:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue_6__pf = UKismetStringLibrary::Conv_IntToString(bpv__Sxvalue__pfT);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue_6__pf, FString(TEXT("/")));
				bpfv__CallFunc_Conv_IntToString_ReturnValue_7__pf = UKismetStringLibrary::Conv_IntToString(bpv__Sxmax__pfT);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_7__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue_3__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf);
				if(::IsValid(bpv__Sugar_Text__pf))
				{
					bpv__Sugar_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue_3__pf);
				}
			}
		case 80:
			{
				if (!bpv__cpxanimation__pfT)
				{
					__CurrentState = 86;
					break;
				}
			}
		case 81:
			{
				bpv__cpxanimation__pfT = false;
			}
		case 82:
			{
				if(::IsValid(bpv__Coffee_powder__pf))
				{
					bpv__Coffee_powder__pf->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
				}
				if(::IsValid(bpv__Milk__pf))
				{
					bpv__Milk__pf->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
				}
				if(::IsValid(bpv__Sugar__pf))
				{
					bpv__Sugar__pf->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
				}
			}
		case 83:
			{
				FCustomThunkTemplates::Array_Get(bpv__Cp_texture__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpv__Cp_animation__pf))
				{
					bpv__Cp_animation__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item__pf, false);
				}
			}
		case 84:
			{
				if(::IsValid(bpv__Cp_animation__pf))
				{
					bpv__Cp_animation__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 85:
			{
				UKismetSystemLibrary::Delay(this, 0.250000, FLatentActionInfo(4, -351671984, TEXT("ExecuteUbergraph_Coffee_widget_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 86:
			{
				if (!bpv__M__pf)
				{
					__CurrentState = 92;
					break;
				}
			}
		case 87:
			{
				bpv__M__pf = false;
			}
		case 88:
			{
				if(::IsValid(bpv__Coffee_powder__pf))
				{
					bpv__Coffee_powder__pf->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
				}
				if(::IsValid(bpv__Milk__pf))
				{
					bpv__Milk__pf->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
				}
				if(::IsValid(bpv__Sugar__pf))
				{
					bpv__Sugar__pf->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
				}
			}
		case 89:
			{
				FCustomThunkTemplates::Array_Get(bpv__M_texture__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
				if(::IsValid(bpv__M_animation__pf))
				{
					bpv__M_animation__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_3__pf, false);
				}
			}
		case 90:
			{
				if(::IsValid(bpv__M_animation__pf))
				{
					bpv__M_animation__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 91:
			{
				UKismetSystemLibrary::Delay(this, 0.250000, FLatentActionInfo(13, -2038737525, TEXT("ExecuteUbergraph_Coffee_widget_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 92:
			{
				if (!bpv__S__pf)
				{
					__CurrentState = 41;
					break;
				}
			}
		case 93:
			{
				bpv__S__pf = false;
			}
		case 94:
			{
				if(::IsValid(bpv__Coffee_powder__pf))
				{
					bpv__Coffee_powder__pf->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
				}
				if(::IsValid(bpv__Milk__pf))
				{
					bpv__Milk__pf->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
				}
				if(::IsValid(bpv__Sugar__pf))
				{
					bpv__Sugar__pf->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
				}
			}
		case 95:
			{
				FCustomThunkTemplates::Array_Get(bpv__S_textrue__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_6__pf);
				if(::IsValid(bpv__S_animation__pf))
				{
					bpv__S_animation__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_6__pf, false);
				}
			}
		case 96:
			{
				if(::IsValid(bpv__S_animation__pf))
				{
					bpv__S_animation__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 97:
			{
				UKismetSystemLibrary::Delay(this, 0.250000, FLatentActionInfo(22, -1833938205, TEXT("ExecuteUbergraph_Coffee_widget_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 98:
			{
				__CurrentState = 52;
				break;
			}
		case 99:
			{
				__CurrentState = 100;
				break;
			}
		case 100:
			{
				__StateStack.Push(101);
				__CurrentState = 53;
				break;
			}
		case 101:
			{
				if (!bpv__cu__pf)
				{
					__CurrentState = 106;
					break;
				}
			}
		case 102:
			{
				if(::IsValid(bpv__Coffee_cup__pf))
				{
					bpv__Coffee_cup__pf->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
				}
			}
		case 103:
			{
				b0l__K2Node_MakeStruct_WidgetTransform__pf.Translation = FVector2D(680.000000,345.000000);
				b0l__K2Node_MakeStruct_WidgetTransform__pf.Scale = FVector2D(1.000000,1.000000);
				b0l__K2Node_MakeStruct_WidgetTransform__pf.Shear = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_WidgetTransform__pf.Angle = 0.000000;
				if(::IsValid(bpv__Coffee_cup__pf))
				{
					bpv__Coffee_cup__pf->UWidget::SetRenderTransform(b0l__K2Node_MakeStruct_WidgetTransform__pf);
				}
			}
		case 104:
			{
				bpv__Cuxvalue__pfT = 1;
			}
		case 105:
			{
				if(::IsValid(bpv__Coffee_powder__pf))
				{
					bpv__Coffee_powder__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Milk__pf))
				{
					bpv__Milk__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Sugar__pf))
				{
					bpv__Sugar__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 106:
			{
				b0l__K2Node_MakeStruct_WidgetTransform_2__pf.Translation = FVector2D(1160.000000,400.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_2__pf.Scale = FVector2D(1.000000,1.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_2__pf.Shear = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_2__pf.Angle = 0.000000;
				if(::IsValid(bpv__Coffee_cup__pf))
				{
					bpv__Coffee_cup__pf->UWidget::SetRenderTransform(b0l__K2Node_MakeStruct_WidgetTransform_2__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UCoffee_widget_C__pf575078304::bpf__ExecuteUbergraph_Coffee_widget__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 117);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__Sxvalue__pfT, 1);
	bpv__Sxvalue__pfT = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
	bpv__S__pf = true;
	return; //KCST_EndOfThread
}
void UCoffee_widget_C__pf575078304::bpf__ExecuteUbergraph_Coffee_widget__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 114);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__Mxvalue__pfT, 1);
	bpv__Mxvalue__pfT = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
	bpv__M__pf = true;
	return; //KCST_EndOfThread
}
void UCoffee_widget_C__pf575078304::bpf__ExecuteUbergraph_Coffee_widget__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 120);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpv__Cpxvalue__pfT, 1);
	bpv__Cpxvalue__pfT = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
	bpv__cpxanimation__pfT = true;
	return; //KCST_EndOfThread
}
void UCoffee_widget_C__pf575078304::bpf__BndEvt__Coffee_widget_Coffee_powder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Coffee_widget__pf_4(120);
}
void UCoffee_widget_C__pf575078304::bpf__BndEvt__Coffee_widget_Sugar_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Coffee_widget__pf_2(117);
}
void UCoffee_widget_C__pf575078304::bpf__BndEvt__Coffee_widget_Milk_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Coffee_widget__pf_3(114);
}
void UCoffee_widget_C__pf575078304::bpf__BndEvt__Coffee_widget_Accept_button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Coffee_widget__pf_0(107);
}
void UCoffee_widget_C__pf575078304::bpf__BndEvt__Coffee_widget_Coffee_cup_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Coffee_widget__pf_1(99);
}
void UCoffee_widget_C__pf575078304::bpf__BndEvt__Coffee_widget_Coffee_cup_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Coffee_widget__pf_1(98);
}
void UCoffee_widget_C__pf575078304::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_Coffee_widget__pf_1(75);
}
void UCoffee_widget_C__pf575078304::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Coffee_widget__pf_0(54);
}
PRAGMA_DISABLE_OPTIMIZATION
void UCoffee_widget_C__pf575078304::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{160, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0201.0201 
		{161, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0109.0109 
		{162, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0107.0107 
		{163, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0203.0203 
		{164, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0205.0205 
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0204.0204 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0202.0202 
		{168, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0206.0206 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0207.0207 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0208.0208 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0209.0209 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0210.0210 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0211.0211 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0212.0212 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0213.0213 
		{176, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0214.0214 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UCoffee_widget_C__pf575078304::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{136, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.WidgetTransform 
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{73, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/StatsTrackerLib_BP.StatsTrackerLib_BP_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UCoffee_widget_C__pf575078304
{
	FRegisterHelper__UCoffee_widget_C__pf575078304()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/MiniGame/Coffee/Coffee_widget"), &UCoffee_widget_C__pf575078304::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UCoffee_widget_C__pf575078304 Instance;
};
FRegisterHelper__UCoffee_widget_C__pf575078304 FRegisterHelper__UCoffee_widget_C__pf575078304::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
