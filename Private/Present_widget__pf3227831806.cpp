#include "NativizedAssets.h"
#include "Present_widget__pf3227831806.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/BackgroundBlur.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "StatsTrackerLib_BP__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
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
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UPresent_widget_C__pf3227831806::UPresent_widget_C__pf3227831806(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Button_130__pf = nullptr;
	bpv__employee__pf = nullptr;
	bpv__Fight__pf = nullptr;
	bpv__Image_42__pf = nullptr;
	bpv__manager__pf = nullptr;
	bpv__ProgressBar_42__pf = nullptr;
	bpv__Start__pf = nullptr;
	bpv__time_value__pf = nullptr;
	bpv__barxvalue__pfT = 0.000000f;
	bpv__barxmax__pfT = 0.000000f;
	bpv__Value__pf = 0.000000f;
	bpv__complete__pf = false;
	bpv__time__pf = 0.000000f;
	bpv__Barxvaluexdisplay__pfTT = 0.000000f;
	bpv__Fail__pf = false;
	bpv__start_pre__pf = false;
	bpv__EmpxAnimation__pfT = 0;
	bpv__ManaxAnimation__pfT = 0;
	bpv__empxt__pfT = TArray<UTexture2D*> ();
	bpv__manxt__pfT = TArray<UTexture2D*> ();
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UPresent_widget_C__pf3227831806::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UPresent_widget_C__pf3227831806::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	__Local__0->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Button_130"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Present_widget_Button_130_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__3 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__4 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__3), UPanelWidget::__PPO__Slots() )));
	__Local__4 = TArray<UPanelSlot*> ();
	__Local__4.Reserve(9);
	auto __Local__5 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_7"), (EObjectFlags)0x00280008);
	__Local__5->LayoutData.Offsets.Left = -1500.000000f;
	__Local__5->LayoutData.Offsets.Top = -900.000000f;
	__Local__5->LayoutData.Offsets.Right = 3000.000000f;
	__Local__5->LayoutData.Offsets.Bottom = 1800.000000f;
	__Local__5->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__5->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__5->Parent = __Local__3;
	auto __Local__6 = NewObject<UBackgroundBlur>(__Local__1, TEXT("BackgroundBlur_59"), (EObjectFlags)0x00280008);
	__Local__6->BlurStrength = 5.000000f;
	__Local__6->Slot = __Local__5;
	__Local__5->Content = __Local__6;
	__Local__4.Add(__Local__5);
	auto __Local__7 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__7->LayoutData.Offsets.Left = -760.000000f;
	__Local__7->LayoutData.Offsets.Top = -410.000000f;
	__Local__7->LayoutData.Offsets.Right = 1600.000000f;
	__Local__7->LayoutData.Offsets.Bottom = 880.000000f;
	__Local__7->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__7->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__7->Parent = __Local__3;
	auto __Local__8 = NewObject<UVerticalBox>(__Local__1, TEXT("Background"), (EObjectFlags)0x00280008);
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__8), UPanelWidget::__PPO__Slots() )));
	__Local__9 = TArray<UPanelSlot*> ();
	__Local__9.Reserve(1);
	auto __Local__10 = NewObject<UVerticalBoxSlot>(__Local__8, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__10->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__10->Parent = __Local__8;
	auto __Local__11 = NewObject<UImage>(__Local__1, TEXT("Image_42"), (EObjectFlags)0x00280008);
	__Local__11->Brush.ImageSize = FVector2D(1646.000000, 1080.000000);
	auto& __Local__12 = (*(AccessPrivateProperty<UObject* >(&(__Local__11->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__12 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__11->Slot = __Local__10;
	__Local__10->Content = __Local__11;
	__Local__9.Add(__Local__10);
	__Local__8->Slot = __Local__7;
	__Local__7->Content = __Local__8;
	__Local__4.Add(__Local__7);
	auto __Local__13 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_18"), (EObjectFlags)0x00280008);
	__Local__13->LayoutData.Offsets.Left = 555.000000f;
	__Local__13->LayoutData.Offsets.Top = -264.540527f;
	__Local__13->LayoutData.Offsets.Right = 200.000000f;
	__Local__13->LayoutData.Offsets.Bottom = 50.000000f;
	__Local__13->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__13->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__13->Parent = __Local__3;
	auto __Local__14 = NewObject<UBorder>(__Local__1, TEXT("Border_66"), (EObjectFlags)0x00280008);
	__Local__14->Background.ImageSize = FVector2D(1203.000000, 114.000000);
	auto& __Local__15 = (*(AccessPrivateProperty<UObject* >(&(__Local__14->Background), FSlateBrush::__PPO__ResourceObject() )));
	__Local__15 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__14->Background.DrawAs = ESlateBrushDrawType::Type::Box;
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__14), UPanelWidget::__PPO__Slots() )));
	__Local__16 = TArray<UPanelSlot*> ();
	__Local__16.Reserve(1);
	auto __Local__17 = NewObject<UBorderSlot>(__Local__14, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	__Local__17->Parent = __Local__14;
	auto __Local__18 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_68"), (EObjectFlags)0x00280008);
	auto& __Local__19 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__18), UPanelWidget::__PPO__Slots() )));
	__Local__19 = TArray<UPanelSlot*> ();
	__Local__19.Reserve(1);
	auto __Local__20 = NewObject<UHorizontalBoxSlot>(__Local__18, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__20->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__20->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__20->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__20->Parent = __Local__18;
	auto __Local__21 = NewObject<UTextBlock>(__Local__1, TEXT("time_value"), (EObjectFlags)0x00280008);
	__Local__21->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[1A3055FB407B65E50C3D4C80D7BC6650]\", \"871226044AA6197B56D2C6B4DD67157F\", \"time\")")	);
	auto& __Local__22 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__21->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__22 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__21->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__21->Font.OutlineSettings.OutlineSize = 2;
	__Local__21->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__21->Font.Size = 30;
	__Local__21->Slot = __Local__20;
	__Local__21->bIsVariable = true;
	__Local__20->Content = __Local__21;
	__Local__19.Add(__Local__20);
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__16.Add(__Local__17);
	__Local__14->Slot = __Local__13;
	__Local__13->Content = __Local__14;
	__Local__4.Add(__Local__13);
	auto __Local__23 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__23->LayoutData.Offsets.Left = -695.000000f;
	__Local__23->LayoutData.Offsets.Top = -360.000000f;
	__Local__23->LayoutData.Offsets.Right = 1450.000000f;
	__Local__23->LayoutData.Offsets.Bottom = 70.000000f;
	__Local__23->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__23->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__23->Parent = __Local__3;
	auto __Local__24 = NewObject<UProgressBar>(__Local__1, TEXT("ProgressBar_42"), (EObjectFlags)0x00280008);
	__Local__24->WidgetStyle.BackgroundImage.ImageSize = FVector2D(1203.000000, 114.000000);
	__Local__24->WidgetStyle.BackgroundImage.Margin.Left = 0.000000f;
	__Local__24->WidgetStyle.BackgroundImage.Margin.Top = 0.000000f;
	__Local__24->WidgetStyle.BackgroundImage.Margin.Right = 0.000000f;
	__Local__24->WidgetStyle.BackgroundImage.Margin.Bottom = 0.000000f;
	auto& __Local__25 = (*(AccessPrivateProperty<UObject* >(&(__Local__24->WidgetStyle.BackgroundImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__25 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__24->WidgetStyle.FillImage.ImageSize = FVector2D(661.000000, 112.000000);
	__Local__24->WidgetStyle.FillImage.Margin.Left = 0.000000f;
	__Local__24->WidgetStyle.FillImage.Margin.Top = 0.000000f;
	__Local__24->WidgetStyle.FillImage.Margin.Right = 0.000000f;
	__Local__24->WidgetStyle.FillImage.Margin.Bottom = 0.000000f;
	auto& __Local__26 = (*(AccessPrivateProperty<UObject* >(&(__Local__24->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__26 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__24->Percent = 0.259048f;
	__Local__24->Slot = __Local__23;
	__Local__23->Content = __Local__24;
	__Local__4.Add(__Local__23);
	auto __Local__27 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_13"), (EObjectFlags)0x00280008);
	__Local__27->LayoutData.Offsets.Left = -300.000000f;
	__Local__27->LayoutData.Offsets.Top = 275.000000f;
	__Local__27->LayoutData.Offsets.Right = 600.000000f;
	__Local__27->LayoutData.Offsets.Bottom = 250.000000f;
	__Local__27->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__27->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__27->Parent = __Local__3;
	auto __Local__28 = NewObject<UButton>(__Local__1, TEXT("Button_130"), (EObjectFlags)0x00280008);
	__Local__28->WidgetStyle.Normal.ImageSize = FVector2D(863.000000, 295.000000);
	__Local__28->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__28->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__28->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__28->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__29 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__29 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__28->WidgetStyle.Hovered.ImageSize = FVector2D(863.000000, 295.000000);
	__Local__28->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__28->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__28->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__28->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__30 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__30 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__28->WidgetStyle.Pressed.ImageSize = FVector2D(864.000000, 276.000000);
	__Local__28->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__28->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__28->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__28->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__4.Add(__Local__27);
	auto __Local__32 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__32->LayoutData.Offsets.Left = -400.000000f;
	__Local__32->LayoutData.Offsets.Top = 240.000000f;
	__Local__32->LayoutData.Offsets.Right = 800.000000f;
	__Local__32->LayoutData.Offsets.Bottom = 50.000000f;
	__Local__32->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__32->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__32->Parent = __Local__3;
	auto __Local__33 = NewObject<UVerticalBox>(__Local__1, TEXT("Start"), (EObjectFlags)0x00280008);
	auto& __Local__34 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__33), UPanelWidget::__PPO__Slots() )));
	__Local__34 = TArray<UPanelSlot*> ();
	__Local__34.Reserve(1);
	auto __Local__35 = NewObject<UVerticalBoxSlot>(__Local__33, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__35->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__35->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__35->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__35->Parent = __Local__33;
	auto __Local__36 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__36->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[1A3055FB407B65E50C3D4C80D7BC6650]\", \"9F06C646417FD2B5F9E8ECB0CDF1FFA3\", \"Press this Button to start presentation\")")	);
	auto& __Local__37 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__36->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__37 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__36->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__36->Font.OutlineSettings.OutlineSize = 2;
	__Local__36->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__36->Font.Size = 32;
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__34.Add(__Local__35);
	__Local__33->Slot = __Local__32;
	__Local__33->bIsVariable = true;
	__Local__32->Content = __Local__33;
	__Local__4.Add(__Local__32);
	auto __Local__38 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__38->LayoutData.Offsets.Left = -250.000000f;
	__Local__38->LayoutData.Offsets.Top = 240.000000f;
	__Local__38->LayoutData.Offsets.Right = 500.000000f;
	__Local__38->LayoutData.Offsets.Bottom = 50.000000f;
	__Local__38->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__38->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__38->Parent = __Local__3;
	auto __Local__39 = NewObject<UVerticalBox>(__Local__1, TEXT("Fight"), (EObjectFlags)0x00280008);
	auto& __Local__40 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__39), UPanelWidget::__PPO__Slots() )));
	__Local__40 = TArray<UPanelSlot*> ();
	__Local__40.Reserve(1);
	auto __Local__41 = NewObject<UVerticalBoxSlot>(__Local__39, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__41->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__41->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__41->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__41->Parent = __Local__39;
	auto __Local__42 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_47"), (EObjectFlags)0x00280008);
	__Local__42->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[1A3055FB407B65E50C3D4C80D7BC6650]\", \"F5B131864E84207F60EF47B6DDE75603\", \"Press space Bar to fight\")")	);
	auto& __Local__43 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__42->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__43 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__42->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__42->Font.OutlineSettings.OutlineSize = 2;
	__Local__42->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__42->Font.Size = 32;
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__40.Add(__Local__41);
	__Local__39->Slot = __Local__38;
	__Local__39->bIsVariable = true;
	__Local__38->Content = __Local__39;
	__Local__4.Add(__Local__38);
	auto __Local__44 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_24"), (EObjectFlags)0x00280008);
	__Local__44->LayoutData.Offsets.Left = -275.000000f;
	__Local__44->LayoutData.Offsets.Top = -70.000000f;
	__Local__44->LayoutData.Offsets.Right = 200.000000f;
	__Local__44->LayoutData.Offsets.Bottom = 300.000000f;
	__Local__44->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__44->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__44->Parent = __Local__3;
	auto __Local__45 = NewObject<UImage>(__Local__1, TEXT("employee"), (EObjectFlags)0x00280008);
	__Local__45->Brush.ImageSize = FVector2D(369.000000, 532.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<UObject* >(&(__Local__45->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__46 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__45->Slot = __Local__44;
	__Local__44->Content = __Local__45;
	__Local__4.Add(__Local__44);
	auto __Local__47 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_23"), (EObjectFlags)0x00280008);
	__Local__47->LayoutData.Offsets.Left = 115.000000f;
	__Local__47->LayoutData.Offsets.Top = -70.000000f;
	__Local__47->LayoutData.Offsets.Right = 200.000000f;
	__Local__47->LayoutData.Offsets.Bottom = 300.000000f;
	__Local__47->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__47->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__47->Parent = __Local__3;
	auto __Local__48 = NewObject<UImage>(__Local__1, TEXT("manager"), (EObjectFlags)0x00280008);
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__4.Add(__Local__47);
	__Local__1->RootWidget = __Local__3;
}
PRAGMA_ENABLE_OPTIMIZATION
void UPresent_widget_C__pf3227831806::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__49;
	SlotNames.Append(__Local__49);
}
void UPresent_widget_C__pf3227831806::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__50;
	TArray<FDelegateRuntimeBinding>  __Local__51;
	__Local__51.AddUninitialized(1);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__51.GetData(), 1);
	auto& __Local__52 = __Local__51[0];
	__Local__52.ObjectName = FString(TEXT("ProgressBar_42"));
	__Local__52.PropertyName = FName(TEXT("Percent"));
	__Local__52.FunctionName = FName(TEXT("GetPercent_0"));
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__52.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__53 = TArray<FPropertyPathSegment> ();
	__Local__53.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__53.GetData(), 1);
	auto& __Local__54 = __Local__53[0];
	__Local__54.Name = FName(TEXT("GetPercent_0"));
	__Local__52.Kind = EBindingKind::Function;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->MiscConvertedSubobjects[0]), __Local__50, __Local__51);
}
void UPresent_widget_C__pf3227831806::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UPresent_widget_C__pf3227831806::bpf__ExecuteUbergraph_Present_widget__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_MakeArray_Array__pf.SetNum(2, true);
	b0l__K2Node_MakeArray_Array__pf[0] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array__pf[1] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__empxt__pfT = b0l__K2Node_MakeArray_Array__pf;
	FCustomThunkTemplates::Array_Get(bpv__empxt__pfT, 0, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
	if(::IsValid(bpv__employee__pf))
	{
		bpv__employee__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_3__pf, false);
	}
	b0l__K2Node_MakeArray_Array_1__pf.SetNum(2, true);
	b0l__K2Node_MakeArray_Array_1__pf[0] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_1__pf[1] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UPresent_widget_C__pf3227831806::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	bpv__manxt__pfT = b0l__K2Node_MakeArray_Array_1__pf;
	FCustomThunkTemplates::Array_Get(bpv__manxt__pfT, 1, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
	if(::IsValid(bpv__manager__pf))
	{
		bpv__manager__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item__pf, false);
	}
	bpv__EmpxAnimation__pfT = 0;
	bpv__ManaxAnimation__pfT = 1;
	bpv__barxvalue__pfT = 0.000000;
	bpv__barxmax__pfT = 100.000000;
	bpv__Value__pf = 2.000000;
	bpv__complete__pf = false;
	bpv__time__pf = 24.000000;
	bpv__Fail__pf = false;
	if(::IsValid(bpv__Start__pf))
	{
		bpv__Start__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__Fight__pf))
	{
		bpv__Fight__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	return; //KCST_EndOfThread
}
void UPresent_widget_C__pf3227831806::bpf__ExecuteUbergraph_Present_widget__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_FFloor_ReturnValue__pf{};
	int32 bpfv__CallFunc_FFloor_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	float bpfv__CallFunc_Lerp_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(1.000000, 5.000000);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf, 2.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(1.000000, 5.000000);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf, 2.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__Value__pf, 3.000000);
				bpf__Barxx__pfTG(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				__CurrentState = 7;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__ManaxAnimation__pfT, 1);
				bpv__ManaxAnimation__pfT = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 8:
			{
				bpfv__CallFunc_Percent_IntInt_ReturnValue__pf = UKismetMathLibrary::Percent_IntInt(bpv__ManaxAnimation__pfT, 2);
				FCustomThunkTemplates::Array_Get(bpv__manxt__pfT, bpfv__CallFunc_Percent_IntInt_ReturnValue__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				if(::IsValid(bpv__manager__pf))
				{
					bpv__manager__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_1__pf, false);
				}
			}
		case 9:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__EmpxAnimation__pfT, 1);
				bpv__EmpxAnimation__pfT = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
			}
		case 10:
			{
				bpfv__CallFunc_Percent_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Percent_IntInt(bpv__EmpxAnimation__pfT, 2);
				FCustomThunkTemplates::Array_Get(bpv__empxt__pfT, bpfv__CallFunc_Percent_IntInt_ReturnValue_1__pf, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				if(::IsValid(bpv__employee__pf))
				{
					bpv__employee__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_2__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 37:
			{
				__CurrentState = 38;
				break;
			}
		case 38:
			{
				__StateStack.Push(50);
			}
		case 39:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__time__pf, b0l__K2Node_Event_InDeltaTime__pf);
				bpv__time__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 40:
			{
				bpfv__CallFunc_Lerp_ReturnValue__pf = UKismetMathLibrary::Lerp(bpv__Barxvaluexdisplay__pfTT, bpv__barxvalue__pfT, 0.100000);
				bpv__Barxvaluexdisplay__pfTT = bpfv__CallFunc_Lerp_ReturnValue__pf;
			}
		case 41:
			{
				bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Percent_FloatFloat(bpv__time__pf, 60.000000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__time__pf, 60.000000);
				bpfv__CallFunc_FFloor_ReturnValue__pf = UKismetMathLibrary::FFloor(bpfv__CallFunc_Percent_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_FFloor_ReturnValue_1__pf = UKismetMathLibrary::FFloor(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FFloor_ReturnValue__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FFloor_ReturnValue_1__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf, FString(TEXT(":")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf);
				if(::IsValid(bpv__time_value__pf))
				{
					bpv__time_value__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 42:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Less_FloatFloat(bpv__time__pf, 1.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf)
				{
					__CurrentState = 51;
					break;
				}
			}
		case 43:
			{
				bpv__Fail__pf = true;
			}
		case 44:
			{
				if (!bpv__Fail__pf)
				{
					__CurrentState = 52;
					break;
				}
			}
		case 45:
			{
				RemoveFromParent();
			}
		case 46:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Exp")), 40.000000, this);
			}
		case 47:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), 0.000000, this);
			}
		case 48:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), -48.000000, this);
			}
		case 49:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("ISUIOPENED")), -1.000000, this);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 50:
			{
				UKismetSystemLibrary::Delay(this, 0.800000, FLatentActionInfo(6, -574497806, TEXT("ExecuteUbergraph_Present_widget_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__time__pf, 1.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf)
				{
					__CurrentState = 43;
					break;
				}
				__CurrentState = 44;
				break;
			}
		case 52:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(2, -1947555571, TEXT("ExecuteUbergraph_Present_widget_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UPresent_widget_C__pf3227831806::bpf__ExecuteUbergraph_Present_widget__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("ISUIOPENED")), 0.000000, this);
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				__CurrentState = 27;
				break;
			}
		case 27:
			{
				if(::IsValid(bpv__Start__pf))
				{
					bpv__Start__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 28:
			{
				if(::IsValid(bpv__Fight__pf))
				{
					bpv__Fight__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 29:
			{
				bpf__Barxx__pfTI(bpv__Value__pf);
			}
		case 30:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__barxvalue__pfT, bpv__barxmax__pfT);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 35;
					break;
				}
			}
		case 31:
			{
				if (!bpv__complete__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 32:
			{
				RemoveFromParent();
			}
		case 33:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), 56.000000, this);
			}
		case 34:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), -48.000000, this);
				__CurrentState = 1;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__barxvalue__pfT, bpv__barxmax__pfT);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 36;
					break;
				}
			}
		case 36:
			{
				bpv__complete__pf = true;
				__CurrentState = 31;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UPresent_widget_C__pf3227831806::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_Present_widget__pf_1(37);
}
void UPresent_widget_C__pf3227831806::bpf__BndEvt__Present_widget_Button_130_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Present_widget__pf_2(26);
}
void UPresent_widget_C__pf3227831806::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Present_widget__pf_0(11);
}
float  UPresent_widget_C__pf3227831806::bpf__GetPercent_0__pf()
{
	float bpp__ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__Barxvaluexdisplay__pfTT, bpv__barxmax__pfT);
	bpp__ReturnValue__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
void UPresent_widget_C__pf3227831806::bpf__Barxx__pfTI(float bpp__value__pf)
{
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__barxvalue__pfT, bpp__value__pf);
				bpv__barxvalue__pfT = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__barxvalue__pfT, 0.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				bpv__barxvalue__pfT = 0.000000;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__barxvalue__pfT, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UPresent_widget_C__pf3227831806::bpf__Barxx__pfTG(float bpp__value__pf)
{
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__barxvalue__pfT, bpp__value__pf);
				bpv__barxvalue__pfT = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__barxvalue__pfT, 0.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				bpv__barxvalue__pfT = 0.000000;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__barxvalue__pfT, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void UPresent_widget_C__pf3227831806::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0501.0501 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0502.0502 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0105.0105 
		{153, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0503.0503 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0504.0504 
		{155, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0507.0507 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0508.0508 
		{157, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0505.0505 
		{158, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0506.0506 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UPresent_widget_C__pf3227831806::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{73, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{94, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
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
struct FRegisterHelper__UPresent_widget_C__pf3227831806
{
	FRegisterHelper__UPresent_widget_C__pf3227831806()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/MiniGame/Present/Present_widget"), &UPresent_widget_C__pf3227831806::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UPresent_widget_C__pf3227831806 Instance;
};
FRegisterHelper__UPresent_widget_C__pf3227831806 FRegisterHelper__UPresent_widget_C__pf3227831806::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
