#include "NativizedAssets.h"
#include "SleepWell__pf645916017.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/Slider.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
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
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
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
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
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
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "CharacterBase_BP__pf2567911892.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/AudioMixer/Public/Quartz/QuartzSubsystem.h"
#include "Runtime/Engine/Public/Subsystems/WorldSubsystem.h"
#include "Runtime/Engine/Public/Subsystems/Subsystem.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "StatsTrackerLib_BP__pf2132744816.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
USleepWell_C__pf645916017::USleepWell_C__pf645916017(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Background_1__pf = nullptr;
	bpv__EnergySleep__pf = nullptr;
	bpv__Exit_Box__pf = nullptr;
	bpv__Exit_Button_2__pf = nullptr;
	bpv__HealthBarSleep__pf = nullptr;
	bpv__Image_12__pf = nullptr;
	bpv__Image_219__pf = nullptr;
	bpv__Run__pf = nullptr;
	bpv__Sleep__pf = nullptr;
	bpv__SleepText__pf = nullptr;
	bpv__Sleeptime__pf = nullptr;
	bpv__SleepTimeSelect__pf = nullptr;
	bpv__Total_1__pf = nullptr;
	bpv__SleepingTime__pf = FString(TEXT(""));
	bpv__TimeInMin__pf = 0;
	bpv__SleepToTime__pf = 0.000000f;
	bpv__LoopingTimeSkip__pf = false;
	bpv__Spend__pf = 0;
	bpv__Price__pf = 0;
	bpv__PredHealth__pf = 0.000000f;
	bpv__PerdEnergy__pf = 0.000000f;
	bpv__BarOpacity__pf = 0.500000f;
	bpv__GetHealth__pf = 20.000000f;
	bpv__GetEnergy__pf = 0.000000f;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void USleepWell_C__pf645916017::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void USleepWell_C__pf645916017::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ACharacterBase_BP_C__pf2567911892::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UStatsTrackerLib_BP_C__pf2132744816::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Exit_Button_2"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__SleepWell_Exit_Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Sleep"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__SleepWell_Sleep_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__4 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(1);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__6->LayoutData.Offsets.Right = 1920.000000f;
	__Local__6->LayoutData.Offsets.Bottom = 1080.000000f;
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_58"), (EObjectFlags)0x00280008);
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(3);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_4"), (EObjectFlags)0x00280008);
	__Local__9->LayoutData.Offsets.Left = 141.423584f;
	__Local__9->LayoutData.Offsets.Top = 32.936211f;
	__Local__9->LayoutData.Offsets.Right = 1920.000000f;
	__Local__9->LayoutData.Offsets.Bottom = 1080.000000f;
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UCanvasPanel>(__Local__1, TEXT("SleepTimeSelect"), (EObjectFlags)0x00280008);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(6);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__12->LayoutData.Offsets.Left = -16.000000f;
	__Local__12->LayoutData.Offsets.Right = 1104.000000f;
	__Local__12->LayoutData.Offsets.Bottom = 838.000000f;
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UImage>(__Local__1, TEXT("Background_1"), (EObjectFlags)0x00280008);
	__Local__13->Brush.ImageSize = FVector2D(1085.000000, 816.000000);
	auto& __Local__14 = (*(AccessPrivateProperty<UObject* >(&(__Local__13->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__14 = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__13->Slot = __Local__12;
	__Local__13->RenderTransform.Translation = FVector2D(438.000000, 148.000000);
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__15 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_26"), (EObjectFlags)0x00280008);
	__Local__15->LayoutData.Offsets.Left = 964.000000f;
	__Local__15->LayoutData.Offsets.Top = 748.000000f;
	__Local__15->LayoutData.Offsets.Right = 80.800003f;
	__Local__15->LayoutData.Offsets.Bottom = 72.800003f;
	__Local__15->Parent = __Local__10;
	auto __Local__16 = NewObject<UImage>(__Local__1, TEXT("Image_12"), (EObjectFlags)0x00280008);
	auto& __Local__17 = (*(AccessPrivateProperty<UObject* >(&(__Local__16->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__17 = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__11.Add(__Local__15);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_25"), (EObjectFlags)0x00280008);
	__Local__18->LayoutData.Offsets.Left = 844.000000f;
	__Local__18->LayoutData.Offsets.Top = 736.000000f;
	__Local__18->LayoutData.Offsets.Bottom = 92.000000f;
	__Local__18->Parent = __Local__10;
	auto __Local__19 = NewObject<UTextBlock>(__Local__1, TEXT("Total_1"), (EObjectFlags)0x00280008);
	__Local__19->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[421E4ADA490DA4BAA3CD5BAF4C9699DC]\", \"99F5FFBC4877D28CC68415A8B34CFC0D\", \"100\")")	);
	auto& __Local__20 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__19->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__20 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__19->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__19->Font.OutlineSettings.OutlineSize = 1;
	__Local__19->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__19->Font.Size = 64;
	auto& __Local__21 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__19), UTextLayoutWidget::__PPO__Justification() )));
	__Local__21 = ETextJustify::Type::Right;
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__11.Add(__Local__18);
	auto __Local__22 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_42"), (EObjectFlags)0x00280008);
	__Local__22->LayoutData.Offsets.Left = 732.000000f;
	__Local__22->LayoutData.Offsets.Top = 584.000000f;
	__Local__22->LayoutData.Offsets.Right = 680.296265f;
	__Local__22->LayoutData.Offsets.Bottom = 68.666656f;
	__Local__22->Parent = __Local__10;
	auto __Local__23 = NewObject<UOverlay>(__Local__1, TEXT("Overlay_322"), (EObjectFlags)0x00280008);
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__23), UPanelWidget::__PPO__Slots() )));
	__Local__24 = TArray<UPanelSlot*> ();
	__Local__24.Reserve(2);
	auto __Local__25 = NewObject<UOverlaySlot>(__Local__23, TEXT("OverlaySlot_4"), (EObjectFlags)0x00280008);
	__Local__25->Parent = __Local__23;
	auto __Local__26 = NewObject<UImage>(__Local__1, TEXT("Image_219"), (EObjectFlags)0x00280008);
	__Local__26->Brush.ImageSize = FVector2D(1243.697021, 69.507233);
	auto& __Local__27 = (*(AccessPrivateProperty<UObject* >(&(__Local__26->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__27 = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__24.Add(__Local__25);
	auto __Local__28 = NewObject<UOverlaySlot>(__Local__23, TEXT("OverlaySlot_3"), (EObjectFlags)0x00280008);
	__Local__28->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__28->Parent = __Local__23;
	auto __Local__29 = NewObject<USlider>(__Local__1, TEXT("Sleeptime"), (EObjectFlags)0x00280008);
	__Local__29->MaxValue = 100.000000f;
	__Local__29->WidgetStyle.NormalBarImage.ImageSize = FVector2D(0.000000, 1.075545);
	__Local__29->WidgetStyle.NormalThumbImage.ImageSize = FVector2D(30.000000, 70.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<UObject* >(&(__Local__29->WidgetStyle.NormalThumbImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__30 = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__29->WidgetStyle.HoveredThumbImage.ImageSize = FVector2D(35.000000, 75.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__29->WidgetStyle.HoveredThumbImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__29->WidgetStyle.BarThickness = 1.809095f;
	__Local__29->Slot = __Local__28;
	__Local__28->Content = __Local__29;
	__Local__24.Add(__Local__28);
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__11.Add(__Local__22);
	auto __Local__32 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_37"), (EObjectFlags)0x00280008);
	__Local__32->LayoutData.Offsets.Left = 754.857117f;
	__Local__32->LayoutData.Offsets.Top = 862.857117f;
	__Local__32->LayoutData.Offsets.Right = 361.714264f;
	__Local__32->LayoutData.Offsets.Bottom = 76.571434f;
	__Local__32->Parent = __Local__10;
	auto __Local__33 = NewObject<UButton>(__Local__1, TEXT("Sleep"), (EObjectFlags)0x00280008);
	__Local__33->WidgetStyle.Normal.ImageSize = FVector2D(1436.000000, 310.000000);
	auto& __Local__34 = (*(AccessPrivateProperty<UObject* >(&(__Local__33->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__34 = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__33->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__33->WidgetStyle.Hovered.ImageSize = FVector2D(1436.000000, 310.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<UObject* >(&(__Local__33->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__35 = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__33->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__33->WidgetStyle.Pressed.ImageSize = FVector2D(1436.000000, 310.000000);
	auto& __Local__36 = (*(AccessPrivateProperty<UObject* >(&(__Local__33->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__36 = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__33->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__11.Add(__Local__32);
	auto __Local__37 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_43"), (EObjectFlags)0x00280008);
	__Local__37->LayoutData.Offsets.Left = 536.000000f;
	__Local__37->LayoutData.Offsets.Top = 576.000000f;
	__Local__37->LayoutData.Offsets.Right = 175.000000f;
	__Local__37->LayoutData.Offsets.Bottom = 70.000000f;
	__Local__37->Parent = __Local__10;
	auto __Local__38 = NewObject<UTextBlock>(__Local__1, TEXT("SleepText"), (EObjectFlags)0x00280008);
	__Local__38->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[421E4ADA490DA4BAA3CD5BAF4C9699DC]\", \"6BDE0BC64B0D9ADD980C6994D3748199\", \"00 : 00\")")	);
	auto& __Local__39 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__38->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__39 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__38->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__38->Font.OutlineSettings.OutlineSize = 2;
	__Local__38->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__38->Font.Size = 49;
	__Local__38->Slot = __Local__37;
	__Local__38->bIsVariable = true;
	__Local__37->Content = __Local__38;
	__Local__11.Add(__Local__37);
	__Local__10->Slot = __Local__9;
	__Local__10->bIsVariable = true;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	auto __Local__40 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__40->LayoutData.Offsets.Left = 1485.361694f;
	__Local__40->LayoutData.Offsets.Top = 64.540375f;
	__Local__40->LayoutData.Offsets.Right = 302.614777f;
	__Local__40->LayoutData.Offsets.Bottom = 307.599976f;
	__Local__40->Parent = __Local__7;
	auto __Local__41 = NewObject<UVerticalBox>(__Local__1, TEXT("Exit_Box"), (EObjectFlags)0x00280008);
	auto& __Local__42 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__41), UPanelWidget::__PPO__Slots() )));
	__Local__42 = TArray<UPanelSlot*> ();
	__Local__42.Reserve(1);
	auto __Local__43 = NewObject<UVerticalBoxSlot>(__Local__41, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__43->Parent = __Local__41;
	auto __Local__44 = NewObject<UButton>(__Local__1, TEXT("Exit_Button_2"), (EObjectFlags)0x00280008);
	auto& __Local__45 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__44->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__45 = FLinearColor(1.000000, 1.000000, 1.000000, 0.063000);
	auto& __Local__46 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__44->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__46 = FLinearColor(1.000000, 1.000000, 1.000000, 0.073000);
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__44->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(1.000000, 1.000000, 1.000000, 0.044000);
	auto& __Local__48 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__44), UPanelWidget::__PPO__Slots() )));
	__Local__48 = TArray<UPanelSlot*> ();
	__Local__48.Reserve(1);
	auto __Local__49 = NewObject<UButtonSlot>(__Local__44, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__49->Parent = __Local__44;
	auto __Local__50 = NewObject<UImage>(__Local__1, TEXT("Run"), (EObjectFlags)0x00280008);
	__Local__50->Brush.ImageSize = FVector2D(252.000000, 304.000000);
	auto& __Local__51 = (*(AccessPrivateProperty<UObject* >(&(__Local__50->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__51 = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__50->Slot = __Local__49;
	__Local__50->RenderTransform.Scale = FVector2D(1.150000, 1.100000);
	__Local__49->Content = __Local__50;
	__Local__48.Add(__Local__49);
	__Local__44->Slot = __Local__43;
	__Local__44->RenderTransform.Scale = FVector2D(0.900000, 0.900000);
	__Local__43->Content = __Local__44;
	__Local__42.Add(__Local__43);
	__Local__41->Slot = __Local__40;
	__Local__41->RenderTransform.Translation = FVector2D(-30.000000, 35.000000);
	__Local__41->RenderTransform.Scale = FVector2D(0.300000, 0.350000);
	__Local__41->bIsVariable = true;
	__Local__40->Content = __Local__41;
	__Local__8.Add(__Local__40);
	auto __Local__52 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__52->LayoutData.Offsets.Left = -4.000000f;
	__Local__52->LayoutData.Offsets.Top = -4.000000f;
	__Local__52->LayoutData.Offsets.Right = 650.000000f;
	__Local__52->LayoutData.Offsets.Bottom = 350.000000f;
	__Local__52->Parent = __Local__7;
	auto __Local__53 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_84"), (EObjectFlags)0x00280008);
	auto& __Local__54 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__53), UPanelWidget::__PPO__Slots() )));
	__Local__54 = TArray<UPanelSlot*> ();
	__Local__54.Reserve(2);
	auto __Local__55 = NewObject<UCanvasPanelSlot>(__Local__53, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__55->LayoutData.Offsets.Left = 312.000000f;
	__Local__55->LayoutData.Offsets.Top = 80.000000f;
	__Local__55->LayoutData.Offsets.Right = 300.000000f;
	__Local__55->ZOrder = 25;
	__Local__55->Parent = __Local__53;
	auto __Local__56 = NewObject<UProgressBar>(__Local__1, TEXT("EnergySleep"), (EObjectFlags)0x00280008);
	__Local__56->WidgetStyle.BackgroundImage.ImageSize = FVector2D(561.000000, 105.000000);
	__Local__56->WidgetStyle.BackgroundImage.Margin.Left = 0.000000f;
	__Local__56->WidgetStyle.BackgroundImage.Margin.Top = 0.000000f;
	__Local__56->WidgetStyle.BackgroundImage.Margin.Right = 0.000000f;
	__Local__56->WidgetStyle.BackgroundImage.Margin.Bottom = 0.000000f;
	auto& __Local__57 = (*(AccessPrivateProperty<UObject* >(&(__Local__56->WidgetStyle.BackgroundImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__57 = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__56->WidgetStyle.BackgroundImage.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__56->WidgetStyle.FillImage.ImageSize = FVector2D(561.000000, 105.000000);
	auto& __Local__58 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__56->WidgetStyle.FillImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__58 = FLinearColor(0.982251, 0.982251, 0.304987, 0.500000);
	auto& __Local__59 = (*(AccessPrivateProperty<UObject* >(&(__Local__56->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__59 = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	auto& __Local__60 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__56->WidgetStyle.MarqueeImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__60 = FLinearColor(0.989583, 0.979167, 1.000000, 1.000000);
	__Local__56->WidgetStyle.MarqueeImage.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__56->Percent = 0.785714f;
	__Local__56->Slot = __Local__55;
	__Local__55->Content = __Local__56;
	__Local__54.Add(__Local__55);
	auto __Local__61 = NewObject<UCanvasPanelSlot>(__Local__53, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__61->LayoutData.Offsets.Left = 312.000000f;
	__Local__61->LayoutData.Offsets.Top = 32.000000f;
	__Local__61->LayoutData.Offsets.Right = 300.000000f;
	__Local__61->ZOrder = 25;
	__Local__61->Parent = __Local__53;
	auto __Local__62 = NewObject<UProgressBar>(__Local__1, TEXT("HealthBarSleep"), (EObjectFlags)0x00280008);
	__Local__62->WidgetStyle.BackgroundImage.ImageSize = FVector2D(561.000000, 105.000000);
	__Local__62->WidgetStyle.BackgroundImage.Margin.Left = 0.000000f;
	__Local__62->WidgetStyle.BackgroundImage.Margin.Top = 0.000000f;
	__Local__62->WidgetStyle.BackgroundImage.Margin.Right = 0.000000f;
	__Local__62->WidgetStyle.BackgroundImage.Margin.Bottom = 0.000000f;
	__Local__62->WidgetStyle.BackgroundImage.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__62->WidgetStyle.FillImage.ImageSize = FVector2D(561.000000, 105.000000);
	auto& __Local__63 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__62->WidgetStyle.FillImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__63 = FLinearColor(1.000000, 0.141263, 0.119538, 0.250000);
	auto& __Local__64 = (*(AccessPrivateProperty<UObject* >(&(__Local__62->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__64 = CastChecked<UObject>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	auto& __Local__65 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__62->WidgetStyle.MarqueeImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__65 = FLinearColor(0.989583, 0.979167, 1.000000, 1.000000);
	__Local__62->WidgetStyle.MarqueeImage.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__62->Percent = 0.838095f;
	__Local__62->Slot = __Local__61;
	__Local__61->Content = __Local__62;
	__Local__54.Add(__Local__61);
	__Local__53->Slot = __Local__52;
	__Local__52->Content = __Local__53;
	__Local__8.Add(__Local__52);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	__Local__1->RootWidget = __Local__4;
}
PRAGMA_ENABLE_OPTIMIZATION
void USleepWell_C__pf645916017::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__66;
	SlotNames.Append(__Local__66);
}
void USleepWell_C__pf645916017::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__67;
	TArray<FDelegateRuntimeBinding>  __Local__68;
	__Local__68.AddUninitialized(3);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__68.GetData(), 3);
	auto& __Local__69 = __Local__68[0];
	__Local__69.ObjectName = FString(TEXT("Total_1"));
	__Local__69.PropertyName = FName(TEXT("Text"));
	auto& __Local__70 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__69.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__70 = TArray<FPropertyPathSegment> ();
	__Local__70.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__70.GetData(), 1);
	auto& __Local__71 = __Local__70[0];
	__Local__71.Name = FName(TEXT("Price"));
	auto& __Local__72 = __Local__68[1];
	__Local__72.ObjectName = FString(TEXT("EnergySleep"));
	__Local__72.PropertyName = FName(TEXT("Percent"));
	__Local__72.FunctionName = FName(TEXT("Get_EnergySleep_Percent_0"));
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__72.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__73 = TArray<FPropertyPathSegment> ();
	__Local__73.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__73.GetData(), 1);
	auto& __Local__74 = __Local__73[0];
	__Local__74.Name = FName(TEXT("Get_EnergySleep_Percent_0"));
	__Local__72.Kind = EBindingKind::Function;
	auto& __Local__75 = __Local__68[2];
	__Local__75.ObjectName = FString(TEXT("HealthBarSleep"));
	__Local__75.PropertyName = FName(TEXT("Percent"));
	__Local__75.FunctionName = FName(TEXT("Get_HealthBarSleep_Percent_0"));
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__75.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__76 = TArray<FPropertyPathSegment> ();
	__Local__76.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__76.GetData(), 1);
	auto& __Local__77 = __Local__76[0];
	__Local__77.Name = FName(TEXT("Get_HealthBarSleep_Percent_0"));
	__Local__75.Kind = EBindingKind::Function;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(USleepWell_C__pf645916017::StaticClass())->MiscConvertedSubobjects[0]), __Local__67, __Local__68);
}
void USleepWell_C__pf645916017::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void USleepWell_C__pf645916017::bpf__ExecuteUbergraph_SleepWell__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Lerp_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_4__pf{};
	float bpfv__CallFunc_Lerp_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Clamp_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_4__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_5__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_5__pf{};
	bool bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Percent_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	FString bpfv__CallFunc_SelectString_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 2:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 3:
			{
				UGameplayStatics::SetGlobalTimeDilation(this, 1.000000);
			}
		case 4:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("WORLDDILATION")), 1.000000, this);
			}
		case 5:
			{
				bpv__LoopingTimeSkip__pf = false;
			}
		case 6:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), bpv__GetEnergy__pf, this);
			}
		case 7:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Health")), bpv__GetHealth__pf, this);
			}
		case 8:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue_1__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsCharacter_Base_BP_1__pf = Cast<ACharacterBase_BP_C__pf2567911892>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue_1__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsCharacter_Base_BP_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsCharacter_Base_BP_1__pf))
				{
					b0l__K2Node_DynamicCast_AsCharacter_Base_BP_1__pf->SetActorHiddenInGame(false);
				}
			}
		case 10:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("ISSLEEP")), 0.000000, this);
			}
		case 11:
			{
				RemoveFromParent();
			}
		case 12:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("ISUIOPENED")), 0.000000, this);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 15:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 14;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				__StateStack.Push(1);
				__CurrentState = 17;
				break;
			}
		case 26:
			{
				__CurrentState = 27;
				break;
			}
		case 27:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Health")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_3__pf);
			}
		case 28:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Energy")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value__pf);
			}
		case 29:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_ReadStats_Value__pf, -1.000000);
				if(::IsValid(bpv__Sleeptime__pf))
				{
					bpv__Sleeptime__pf->USlider::SetMinValue(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				}
			}
		case 30:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDTIME")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_1__pf);
			}
		case 31:
			{
				if(::IsValid(bpv__Sleeptime__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__Sleeptime__pf->USlider::GetValue();
				}
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_GetValue_ReturnValue__pf, 100.000000);
				bpfv__CallFunc_Lerp_ReturnValue__pf = UKismetMathLibrary::Lerp(35.000000, 100.000000, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_1__pf);
				bpv__PerdEnergy__pf = bpfv__CallFunc_Lerp_ReturnValue__pf;
			}
		case 32:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__PerdEnergy__pf, b0l__CallFunc_ReadStats_Value__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_5__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_4__pf, 50.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_5__pf, b0l__CallFunc_ReadStats_Value_3__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_4__pf, 1.000000);
				bpv__PredHealth__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue_5__pf;
			}
		case 33:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(509.000000, 6.000000);
				if(::IsValid(bpv__Sleeptime__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__Sleeptime__pf->USlider::GetValue();
				}
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_GetValue_ReturnValue__pf, b0l__CallFunc_ReadStats_Value__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 1.125000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, b0l__CallFunc_ReadStats_Value_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf, b0l__CallFunc_ReadStats_Value_1__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_2__pf, 70.000000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_3__pf, 110.000000);
				bpfv__CallFunc_Lerp_ReturnValue_1__pf = UKismetMathLibrary::Lerp(6.000000, 30.000000, bpfv__CallFunc_Divide_FloatFloat_ReturnValue_3__pf);
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Lerp_ReturnValue_1__pf);
				bpfv__CallFunc_Clamp_ReturnValue__pf = UKismetMathLibrary::Clamp(bpfv__CallFunc_FTrunc_ReturnValue_1__pf, 6, 30);
				bpv__Price__pf = bpfv__CallFunc_Clamp_ReturnValue__pf;
			}
		case 34:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(509.000000, 6.000000);
				if(::IsValid(bpv__Sleeptime__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__Sleeptime__pf->USlider::GetValue();
				}
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_GetValue_ReturnValue__pf, b0l__CallFunc_ReadStats_Value__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 1.125000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, b0l__CallFunc_ReadStats_Value_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf, 1440.000000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, 509.000000);
				bpfv__CallFunc_FTrunc_ReturnValue_2__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf);
				bpfv__CallFunc_Percent_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Percent_IntInt(bpfv__CallFunc_FTrunc_ReturnValue_2__pf, 5);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Percent_IntInt_ReturnValue_1__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 37;
					break;
				}
			}
		case 35:
			{
				__StateStack.Push(44);
			}
		case 36:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable_1__pf)
				{
					__CurrentState = 47;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 37:
			{
				__StateStack.Push(40);
			}
		case 38:
			{
				b0l__Temp_bool_IsClosed_Variable_1__pf = false;
			}
		case 39:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 40:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(509.000000, 6.000000);
				if(::IsValid(bpv__Sleeptime__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__Sleeptime__pf->USlider::GetValue();
				}
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_GetValue_ReturnValue__pf, b0l__CallFunc_ReadStats_Value__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 1.125000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, b0l__CallFunc_ReadStats_Value_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf, 1440.000000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue_1__pf, 509.000000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_4__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_2__pf, 60.000000);
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_4__pf);
				bpfv__CallFunc_Percent_IntInt_ReturnValue__pf = UKismetMathLibrary::Percent_IntInt(bpfv__CallFunc_FTrunc_ReturnValue__pf, 24);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Percent_IntInt_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue__pf, FString(TEXT(" : ")));
				bpfv__CallFunc_Percent_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Percent_IntInt(bpv__TimeInMin__pf, 60);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_Percent_IntInt_ReturnValue_2__pf, 10);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Percent_IntInt_ReturnValue_2__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("0")), bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf);
				bpfv__CallFunc_SelectString_ReturnValue__pf = UKismetMathLibrary::SelectString(bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, bpfv__CallFunc_SelectString_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf);
				if(::IsValid(bpv__SleepText__pf))
				{
					bpv__SleepText__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 41:
			{
				if (!bpv__LoopingTimeSkip__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 42:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDTIME")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_2__pf);
			}
		case 43:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Add_FloatFloat(bpv__SleepToTime__pf, 1.000000);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__SleepToTime__pf, 1.000000);
				bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf = UKismetMathLibrary::InRange_FloatFloat(b0l__CallFunc_ReadStats_Value_2__pf, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_5__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf, true, true);
				if (!bpfv__CallFunc_InRange_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 19;
				break;
			}
		case 44:
			{
				if (!b0l__Temp_bool_IsClosed_Variable_1__pf)
				{
					__CurrentState = 45;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 45:
			{
				b0l__Temp_bool_IsClosed_Variable_1__pf = true;
			}
		case 46:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__TimeInMin__pf, 5);
				bpv__TimeInMin__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 40;
				break;
			}
		case 47:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable_1__pf = true;
			}
		case 48:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 49:
			{
				b0l__Temp_bool_IsClosed_Variable_1__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void USleepWell_C__pf645916017::bpf__ExecuteUbergraph_SleepWell__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_6__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_7__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue_6__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_7__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 13:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = false;
				__CurrentState = 13;
				break;
			}
		case 50:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(509.000000, 6.000000);
				if(::IsValid(bpv__Sleeptime__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__Sleeptime__pf->USlider::GetValue();
				}
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_GetValue_ReturnValue__pf, b0l__CallFunc_ReadStats_Value__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 1.125000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, b0l__CallFunc_ReadStats_Value_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpv__SleepToTime__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf;
			}
		case 51:
			{
				UGameplayStatics::SetGlobalTimeDilation(this, 50.000000);
			}
		case 52:
			{
				bpv__LoopingTimeSkip__pf = true;
			}
		case 53:
			{
				if(::IsValid(bpv__SleepTimeSelect__pf))
				{
					bpv__SleepTimeSelect__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Exit_Button_2__pf))
				{
					bpv__Exit_Button_2__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = 18;
				break;
			}
		case 54:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(509.000000, 6.000000);
				if(::IsValid(bpv__Sleeptime__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__Sleeptime__pf->USlider::GetValue();
				}
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_GetValue_ReturnValue__pf, b0l__CallFunc_ReadStats_Value__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 1.125000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, b0l__CallFunc_ReadStats_Value_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf, 509.000000);
				bpv__SleepToTime__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf;
				__CurrentState = 51;
				break;
			}
		case 55:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(509.000000, 6.000000);
				if(::IsValid(bpv__Sleeptime__pf))
				{
					bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__Sleeptime__pf->USlider::GetValue();
				}
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_GetValue_ReturnValue__pf, b0l__CallFunc_ReadStats_Value__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 1.125000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, b0l__CallFunc_ReadStats_Value_1__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf, 509.000000);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 54;
					break;
				}
				__CurrentState = 50;
				break;
			}
		case 56:
			{
				__CurrentState = 57;
				break;
			}
		case 57:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("ISSLEEP")), 1.000000, this);
			}
		case 58:
			{
				bpv__Spend__pf = bpv__Price__pf;
			}
		case 59:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Energy")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_6__pf);
			}
		case 60:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_7__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__PerdEnergy__pf, b0l__CallFunc_ReadStats_Value_6__pf);
				bpv__GetEnergy__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_7__pf;
			}
		case 61:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_7__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__PerdEnergy__pf, b0l__CallFunc_ReadStats_Value_6__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue_6__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_7__pf, 50.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_7__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue_6__pf, 1.000000);
				bpv__GetHealth__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue_7__pf;
			}
		case 62:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Money")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_5__pf);
			}
		case 63:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__Spend__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(b0l__CallFunc_ReadStats_Value_5__pf, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 64:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsCharacter_Base_BP__pf = Cast<ACharacterBase_BP_C__pf2567911892>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsCharacter_Base_BP__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 65:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsCharacter_Base_BP__pf))
				{
					b0l__K2Node_DynamicCast_AsCharacter_Base_BP__pf->SetActorHiddenInGame(true);
				}
			}
		case 66:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf = UKismetMathLibrary::Conv_IntToFloat(bpv__Spend__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_6__pf = UKismetMathLibrary::Subtract_FloatFloat(0.000000, bpfv__CallFunc_Conv_IntToFloat_ReturnValue_1__pf);
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_6__pf, this);
				__CurrentState = 55;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void USleepWell_C__pf645916017::bpf__ExecuteUbergraph_SleepWell__pf_2(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_6__pf{};
	check(bpp__EntryPoint__pf == 20);
	// optimized KCST_UnconditionalGoto
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Energy")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_4__pf);
	if(::IsValid(bpv__Sleeptime__pf))
	{
		bpv__Sleeptime__pf->USlider::SetValue(b0l__CallFunc_ReadStats_Value_4__pf);
	}
	if(::IsValid(bpv__Sleeptime__pf))
	{
		bpv__Sleeptime__pf->USlider::SetMaxValue(100.000000);
	}
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_6__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_ReadStats_Value_4__pf, -1.000000);
	if(::IsValid(bpv__Sleeptime__pf))
	{
		bpv__Sleeptime__pf->USlider::SetMinValue(bpfv__CallFunc_Add_FloatFloat_ReturnValue_6__pf);
	}
	if(::IsValid(bpv__SleepTimeSelect__pf))
	{
		bpv__SleepTimeSelect__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__Exit_Button_2__pf))
	{
		bpv__Exit_Button_2__pf->SetVisibility(ESlateVisibility::Visible);
	}
	return; //KCST_EndOfThread
}
void USleepWell_C__pf645916017::bpf__ExecuteUbergraph_SleepWell__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 67);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("ISUIOPENED")), 0.000000, this);
	return; //KCST_EndOfThread
}
void USleepWell_C__pf645916017::bpf__BndEvt__SleepWell_Exit_Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_SleepWell__pf_3(67);
}
void USleepWell_C__pf645916017::bpf__BndEvt__SleepWell_Sleep_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_SleepWell__pf_1(56);
}
void USleepWell_C__pf645916017::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_SleepWell__pf_0(26);
}
void USleepWell_C__pf645916017::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_SleepWell__pf_2(20);
}
float  USleepWell_C__pf645916017::bpf__Get_EnergySleep_Percent_0__pf()
{
	float bpp__ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__PerdEnergy__pf, 100.000000);
	bpp__ReturnValue__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
float  USleepWell_C__pf645916017::bpf__Get_HealthBarSleep_Percent_0__pf()
{
	float bpp__ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__PredHealth__pf, 100.000000);
	bpp__ReturnValue__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void USleepWell_C__pf645916017::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/RestBuilding/SleepUI.SleepUI 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/CoinImage.CoinImage 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/FillBar.FillBar 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/RestBuilding/SleepSlider.SleepSlider 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/RestBuilding/Sleepbutton.Sleepbutton 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Exit.Exit 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/Bar.Bar 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void USleepWell_C__pf645916017::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{100, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Slider 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{101, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{73, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{94, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cube.Cube 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Blueprints/BuildingDoorBP/Materials/Invisible_M.Invisible_M 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperCharacter 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperFlipbookComponent 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperFlipbook 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Manager/M_crt_idle_FB.M_crt_idle_FB 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Employee/E_crt_idle_FB.E_crt_idle_FB 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Janitor/J_crt_idle_FB.J_crt_idle_FB 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Manager/M_crt_Walk_FB.M_crt_Walk_FB 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Employee/E_crt_Walk_FB.E_crt_Walk_FB 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/Assets/Sprites/Characters/Janitor/J_crt_Walk_FB.J_crt_Walk_FB 
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Assets/Materials/DefaultLitSpriteMaterial_FlipN.DefaultLitSpriteMaterial_FlipN 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Blueprints/BuildingDoorBP/Materials/DoorFrame.DoorFrame 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Blueprints/BuildingDoorBP/Materials/DoorFrame_M.DoorFrame_M 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{129, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/playstock/0603.0603 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/QuestBG.QuestBG 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/ProjectYW-44.ProjectYW-44 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{131, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0401.0401 
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0109.0109 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0403.0403 
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0402.0402 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.WidgetTransform 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0404.0404 
		{139, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0405.0405 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0406.0406 
		{141, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0407.0407 
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Working/0408.0408 
		{143, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Repair/0305.0305 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/playstock/0601.0601 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/playstock/0602.0602 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Repair/0301.0301 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Repair/0302.0302 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Repair/0303.0303 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0501.0501 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0502.0502 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0105.0105 
		{153, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0503.0503 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0504.0504 
		{155, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0507.0507 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0508.0508 
		{157, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0505.0505 
		{158, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Present/0506.0506 
		{159, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0113.0113 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/L_2_Crop.L_2_Crop 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/M_2_Crop.M_2_Crop 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/Xl_2_Crop.Xl_2_Crop 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/People_2_Crop.People_2_Crop 
		{160, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0201.0201 
		{161, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0109.0109 
		{162, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0107.0107 
		{163, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0203.0203 
		{164, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0205.0205 
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0204.0204 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0202.0202 
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{168, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0206.0206 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0207.0207 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0208.0208 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0209.0209 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0210.0210 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0211.0211 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0212.0212 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0213.0213 
		{176, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/Coffee/0214.0214 
		{177, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/RestBuilding/DayResult.DayResult 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/RestBuilding/continuebutton.continuebutton 
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0101.0101 
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0102.0102 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0103.0103 
		{182, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0104.0104 
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0105.0105 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0106.0106 
		{185, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0110.0110 
		{186, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0107.0107 
		{187, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0108.0108 
		{188, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0111.0111 
		{189, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0112.0112 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/Background_crop.Background_crop 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/7_001.7_001 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/Book_1_crop.Book_1_crop 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/16RM.16RM 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/Professer_crop.Professer_crop 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/Book_2__crop.Book_2__crop 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/Book_3_crop.Book_3_crop 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/1RM.1RM 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/2RM.2RM 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/3RM.3RM 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/4RM.4RM 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/5RM.5RM 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/6RM.6RM 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/7RM.7RM 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/8RM.8RM 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/9RM.9RM 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/10RM.10RM 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/11RM.11RM 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/12RM.12RM 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/13RM.13RM 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/14RM.14RM 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/15RM.15RM 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/17RM.17RM 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/18RM.18RM 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/All_Box_2_Crop.All_Box_2_Crop 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/S_2_Crop.S_2_Crop 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_1/Crop/All_Box_crop.All_Box_crop 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_1/Crop/S_crop.S_crop 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_1/Crop/L_crop.L_crop 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_1/Crop/M_crop.M_crop 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_1/Crop/XL_crop.XL_crop 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_1/Crop/People_crop.People_crop 
		{190, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Backgorund.Backgorund 
		{191, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Plant3.Plant3 
		{192, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/WateringCan.WateringCan 
		{193, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Drip2.Drip2 
		{194, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Plant0.Plant0 
		{195, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Plant1.Plant1 
		{196, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Plant2.Plant2 
		{197, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Drip0.Drip0 
		{198, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/WateringPlant/Drip1.Drip1 
		{199, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/ProfileBG.ProfileBG 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/slaveProfile.slaveProfile 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/ProfileFrame.ProfileFrame 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/Speed3x.Speed3x 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/PauseButton.PauseButton 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/Speed1x.Speed1x 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/Speed2x.Speed2x 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/EmployeeeProfile.EmployeeeProfile 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/ManagerProfile.ManagerProfile 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/DirectorProfile.DirectorProfile 
		{200, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/CharacterBP/CharacterBase_BP.CharacterBase_BP_C 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/StatsTrackerLib_BP.StatsTrackerLib_BP_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__USleepWell_C__pf645916017
{
	FRegisterHelper__USleepWell_C__pf645916017()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/Ingame/RestBuilding/SleepWell"), &USleepWell_C__pf645916017::__StaticDependenciesAssets);
	}
	static FRegisterHelper__USleepWell_C__pf645916017 Instance;
};
FRegisterHelper__USleepWell_C__pf645916017 FRegisterHelper__USleepWell_C__pf645916017::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
