#include "NativizedAssets.h"
#include "School__pf4136444318.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/ScaleBox.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/BackgroundBlur.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
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
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
USchool_C__pf4136444318::USchool_C__pf4136444318(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__All_Box__pf = nullptr;
	bpv__Background_work__pf = nullptr;
	bpv__Book__pf = nullptr;
	bpv__Box_BG__pf = nullptr;
	bpv__Box_S__pf = nullptr;
	bpv__Box_S_Button_2__pf = nullptr;
	bpv__ConText__pf = nullptr;
	bpv__Exit_Box__pf = nullptr;
	bpv__Exit_Button_2__pf = nullptr;
	bpv__GdText__pf = nullptr;
	bpv__Graduated__pf = nullptr;
	bpv__Number__pf = nullptr;
	bpv__Price__pf = nullptr;
	bpv__Run__pf = nullptr;
	bpv__Work_box__pf = nullptr;
	bpv__BookPrice__pf = TArray<float> ();
	bpv__BookRank__pf = 0;
	bpv__ChapterRank__pf = 0;
	bpv__LearnPerRank__pf = TArray<int32> ();
	bpv__BookTexture__pf = TArray<UTexture2D*> ();
	bpv__Numbertexture__pf = TArray<UTexture2D*> ();
	bpv__LearnCount__pf = 0;
	bpv__SchoolRank__pf = 0;
	bpv__CompanyPerRank__pf = TArray<int32> ();
	bpv__CompanyRank__pf = 0;
	bpv__IsGraduated__pf = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void USchool_C__pf4136444318::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void USchool_C__pf4136444318::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	__Local__0->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Box_S_Button_2"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Professer_1_Box_S_Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Exit_Button_2"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Shop_2_Exit_Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__4 = NewObject<UScaleBox>(__Local__1, TEXT("ScaleBox_0"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(1);
	auto __Local__6 = NewObject<UScaleBoxSlot>(__Local__4, TEXT("ScaleBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<USizeBox>(__Local__1, TEXT("SizeBox_0"), (EObjectFlags)0x00280008);
	__Local__7->WidthOverride = 1920.000000f;
	__Local__7->HeightOverride = 1080.000000f;
	__Local__7->bOverride_WidthOverride = true;
	__Local__7->bOverride_HeightOverride = true;
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(1);
	auto __Local__9 = NewObject<USizeBoxSlot>(__Local__7, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(7);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__12->LayoutData.Offsets.Left = -377.142883f;
	__Local__12->LayoutData.Offsets.Top = -240.000000f;
	__Local__12->LayoutData.Offsets.Right = -351.111115f;
	__Local__12->LayoutData.Offsets.Bottom = -251.428574f;
	__Local__12->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UBackgroundBlur>(__Local__1, TEXT("Background"), (EObjectFlags)0x00280008);
	__Local__13->Padding.Left = 100.000000f;
	__Local__13->Padding.Top = 80.000000f;
	__Local__13->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__13->BlurStrength = 5.000000f;
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__14->LayoutData.Offsets.Left = 5.333374f;
	__Local__14->LayoutData.Offsets.Top = 5.333313f;
	__Local__14->LayoutData.Offsets.Right = -1.333496f;
	__Local__14->LayoutData.Offsets.Bottom = 7.333252f;
	__Local__14->LayoutData.Anchors.Minimum = FVector2D(0.363889, 0.228395);
	__Local__14->LayoutData.Anchors.Maximum = FVector2D(0.888889, 0.856790);
	__Local__14->Parent = __Local__10;
	auto __Local__15 = NewObject<UImage>(__Local__1, TEXT("Box_BG"), (EObjectFlags)0x00280008);
	__Local__15->Brush.ImageSize = FVector2D(997.000000, 639.000000);
	auto& __Local__16 = (*(AccessPrivateProperty<UObject* >(&(__Local__15->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__16 = CastChecked<UObject>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__11.Add(__Local__14);
	auto __Local__17 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_23"), (EObjectFlags)0x00280008);
	__Local__17->LayoutData.Offsets.Left = 924.000000f;
	__Local__17->LayoutData.Offsets.Top = 312.000000f;
	__Local__17->LayoutData.Offsets.Right = 593.407471f;
	__Local__17->LayoutData.Offsets.Bottom = 329.851868f;
	__Local__17->Parent = __Local__10;
	auto __Local__18 = NewObject<UImage>(__Local__1, TEXT("Graduated"), (EObjectFlags)0x00280008);
	auto& __Local__19 = (*(AccessPrivateProperty<UObject* >(&(__Local__18->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__19 = CastChecked<UObject>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__11.Add(__Local__17);
	auto __Local__20 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_21"), (EObjectFlags)0x00280008);
	__Local__20->LayoutData.Offsets.Left = 832.000000f;
	__Local__20->LayoutData.Offsets.Top = 624.000000f;
	__Local__20->LayoutData.Offsets.Right = 760.000000f;
	__Local__20->LayoutData.Offsets.Bottom = 116.000000f;
	__Local__20->Parent = __Local__10;
	auto __Local__21 = NewObject<UTextBlock>(__Local__1, TEXT("ConText"), (EObjectFlags)0x00280008);
	__Local__21->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[21E615104A13810E7F210BA353CE4B55]\", \"DEE4419B487543F82572F8B6534F7F2A\", \"Congratulations\")")	);
	auto& __Local__22 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__21->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__22 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__21->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__21->Font.OutlineSettings.OutlineSize = 1;
	__Local__21->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__21->Font.Size = 81;
	__Local__21->Font.LetterSpacing = 105;
	auto& __Local__23 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__21), UTextLayoutWidget::__PPO__Justification() )));
	__Local__23 = ETextJustify::Type::Center;
	__Local__21->Slot = __Local__20;
	__Local__21->bIsVariable = true;
	__Local__20->Content = __Local__21;
	__Local__11.Add(__Local__20);
	auto __Local__24 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_22"), (EObjectFlags)0x00280008);
	__Local__24->LayoutData.Offsets.Left = 820.000000f;
	__Local__24->LayoutData.Offsets.Top = 724.000000f;
	__Local__24->LayoutData.Offsets.Right = 760.000000f;
	__Local__24->LayoutData.Offsets.Bottom = 116.000000f;
	__Local__24->Parent = __Local__10;
	auto __Local__25 = NewObject<UTextBlock>(__Local__1, TEXT("GdText"), (EObjectFlags)0x00280008);
	__Local__25->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[21E615104A13810E7F210BA353CE4B55]\", \"69D13434471F2CA5987824AD94B452D9\", \"Graduated\")")	);
	auto& __Local__26 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__25->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__26 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__25->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__25->Font.OutlineSettings.OutlineSize = 1;
	__Local__25->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__25->Font.Size = 81;
	__Local__25->Font.LetterSpacing = 105;
	auto& __Local__27 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__25), UTextLayoutWidget::__PPO__Justification() )));
	__Local__27 = ETextJustify::Type::Center;
	__Local__25->Slot = __Local__24;
	__Local__25->bIsVariable = true;
	__Local__24->Content = __Local__25;
	__Local__11.Add(__Local__24);
	auto __Local__28 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_13"), (EObjectFlags)0x00280008);
	__Local__28->LayoutData.Offsets.Left = 14.667542f;
	__Local__28->LayoutData.Offsets.Top = -2.800061f;
	__Local__28->LayoutData.Offsets.Right = -2.334351f;
	__Local__28->LayoutData.Offsets.Bottom = 14.666870f;
	__Local__28->LayoutData.Anchors.Minimum = FVector2D(0.356944, 0.240741);
	__Local__28->LayoutData.Anchors.Maximum = FVector2D(0.888889, 0.850617);
	__Local__28->Parent = __Local__10;
	auto __Local__29 = NewObject<UVerticalBox>(__Local__1, TEXT("All_Box"), (EObjectFlags)0x00280008);
	auto& __Local__30 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__29), UPanelWidget::__PPO__Slots() )));
	__Local__30 = TArray<UPanelSlot*> ();
	__Local__30.Reserve(2);
	auto __Local__31 = NewObject<UVerticalBoxSlot>(__Local__29, TEXT("VerticalBoxSlot_9"), (EObjectFlags)0x00280008);
	__Local__31->Padding.Top = -140.000000f;
	__Local__31->Padding.Right = -107.000000f;
	__Local__31->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__31->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__31->Parent = __Local__29;
	auto __Local__32 = NewObject<UVerticalBox>(__Local__1, TEXT("Exit_Box"), (EObjectFlags)0x00280008);
	auto& __Local__33 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__32), UPanelWidget::__PPO__Slots() )));
	__Local__33 = TArray<UPanelSlot*> ();
	__Local__33.Reserve(1);
	auto __Local__34 = NewObject<UVerticalBoxSlot>(__Local__32, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__34->Parent = __Local__32;
	auto __Local__35 = NewObject<UButton>(__Local__1, TEXT("Exit_Button_2"), (EObjectFlags)0x00280008);
	auto& __Local__36 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__35), UPanelWidget::__PPO__Slots() )));
	__Local__36 = TArray<UPanelSlot*> ();
	__Local__36.Reserve(1);
	auto __Local__37 = NewObject<UButtonSlot>(__Local__35, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__37->Parent = __Local__35;
	auto __Local__38 = NewObject<UImage>(__Local__1, TEXT("Run"), (EObjectFlags)0x00280008);
	__Local__38->Brush.ImageSize = FVector2D(252.000000, 304.000000);
	auto& __Local__39 = (*(AccessPrivateProperty<UObject* >(&(__Local__38->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__39 = CastChecked<UObject>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__38->Slot = __Local__37;
	__Local__38->RenderTransform.Scale = FVector2D(1.150000, 1.100000);
	__Local__37->Content = __Local__38;
	__Local__36.Add(__Local__37);
	__Local__35->Slot = __Local__34;
	__Local__35->RenderTransform.Scale = FVector2D(0.900000, 0.900000);
	__Local__34->Content = __Local__35;
	__Local__33.Add(__Local__34);
	__Local__32->Slot = __Local__31;
	__Local__32->RenderTransform.Translation = FVector2D(-30.000000, 35.000000);
	__Local__32->RenderTransform.Scale = FVector2D(0.300000, 0.350000);
	__Local__32->bIsVariable = true;
	__Local__31->Content = __Local__32;
	__Local__30.Add(__Local__31);
	auto __Local__40 = NewObject<UVerticalBoxSlot>(__Local__29, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__40->Padding.Left = 100.000000f;
	__Local__40->Padding.Top = 80.000000f;
	__Local__40->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__40->Parent = __Local__29;
	auto __Local__41 = NewObject<UVerticalBox>(__Local__1, TEXT("Box_S"), (EObjectFlags)0x00280008);
	auto& __Local__42 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__41), UPanelWidget::__PPO__Slots() )));
	__Local__42 = TArray<UPanelSlot*> ();
	__Local__42.Reserve(1);
	auto __Local__43 = NewObject<UVerticalBoxSlot>(__Local__41, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__43->Parent = __Local__41;
	auto __Local__44 = NewObject<UButton>(__Local__1, TEXT("Box_S_Button_2"), (EObjectFlags)0x00280008);
	auto& __Local__45 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__44), UPanelWidget::__PPO__Slots() )));
	__Local__45 = TArray<UPanelSlot*> ();
	__Local__45.Reserve(1);
	auto __Local__46 = NewObject<UButtonSlot>(__Local__44, TEXT("ButtonSlot_1"), (EObjectFlags)0x00280008);
	__Local__46->Padding.Left = 0.000000f;
	__Local__46->Padding.Top = 0.000000f;
	__Local__46->Padding.Right = 0.000000f;
	__Local__46->Padding.Bottom = 0.000000f;
	__Local__46->Parent = __Local__44;
	auto __Local__47 = NewObject<UOverlay>(__Local__1, TEXT("Overlay_0"), (EObjectFlags)0x00280008);
	auto& __Local__48 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__47), UPanelWidget::__PPO__Slots() )));
	__Local__48 = TArray<UPanelSlot*> ();
	__Local__48.Reserve(3);
	auto __Local__49 = NewObject<UOverlaySlot>(__Local__47, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__49->Parent = __Local__47;
	auto __Local__50 = NewObject<UImage>(__Local__1, TEXT("Book"), (EObjectFlags)0x00280008);
	__Local__50->Brush.ImageSize = FVector2D(302.000000, 388.000000);
	auto& __Local__51 = (*(AccessPrivateProperty<UObject* >(&(__Local__50->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__51 = CastChecked<UObject>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__50->Slot = __Local__49;
	__Local__50->RenderTransform.Scale = FVector2D(1.150000, 1.100000);
	__Local__49->Content = __Local__50;
	__Local__48.Add(__Local__49);
	auto __Local__52 = NewObject<UOverlaySlot>(__Local__47, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__52->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__52->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__52->Parent = __Local__47;
	auto __Local__53 = NewObject<UImage>(__Local__1, TEXT("Number"), (EObjectFlags)0x00280008);
	__Local__53->Brush.ImageSize = FVector2D(256.000000, 128.000000);
	auto& __Local__54 = (*(AccessPrivateProperty<UObject* >(&(__Local__53->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__54 = CastChecked<UObject>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__53->Slot = __Local__52;
	__Local__53->RenderTransform.Translation = FVector2D(17.000000, 134.000000);
	__Local__53->RenderTransform.Scale = FVector2D(0.850000, 0.400000);
	__Local__52->Content = __Local__53;
	__Local__48.Add(__Local__52);
	auto __Local__55 = NewObject<UOverlaySlot>(__Local__47, TEXT("OverlaySlot_2"), (EObjectFlags)0x00280008);
	__Local__55->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__55->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__55->Parent = __Local__47;
	auto __Local__56 = NewObject<UTextBlock>(__Local__1, TEXT("Price"), (EObjectFlags)0x00280008);
	__Local__56->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[21E615104A13810E7F210BA353CE4B55]\", \"6EB1B9B543F07928EE7783B3809F9316\", \"5\")")	);
	auto& __Local__57 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__56->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__57 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__56->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__56->Font.OutlineSettings.OutlineSize = 1;
	__Local__56->Font.TypefaceFontName = FName(TEXT("Default"));
	auto& __Local__58 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__56), UTextLayoutWidget::__PPO__Justification() )));
	__Local__58 = ETextJustify::Type::Right;
	__Local__56->Slot = __Local__55;
	__Local__56->RenderTransform.Translation = FVector2D(-40.000000, -156.000000);
	__Local__56->bIsVariable = true;
	__Local__55->Content = __Local__56;
	__Local__48.Add(__Local__55);
	__Local__47->Slot = __Local__46;
	__Local__46->Content = __Local__47;
	__Local__45.Add(__Local__46);
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__42.Add(__Local__43);
	__Local__41->Slot = __Local__40;
	__Local__41->RenderTransform.Translation = FVector2D(233.000000, -113.000000);
	__Local__41->bIsVariable = true;
	__Local__40->Content = __Local__41;
	__Local__30.Add(__Local__40);
	__Local__29->Slot = __Local__28;
	__Local__29->bIsVariable = true;
	__Local__28->Content = __Local__29;
	__Local__11.Add(__Local__28);
	auto __Local__59 = NewObject<UCanvasPanelSlot>(__Local__10, TEXT("CanvasPanelSlot_14"), (EObjectFlags)0x00280008);
	__Local__59->LayoutData.Offsets.Left = 140.000000f;
	__Local__59->LayoutData.Offsets.Top = 250.000000f;
	__Local__59->LayoutData.Offsets.Right = 480.000000f;
	__Local__59->LayoutData.Offsets.Bottom = 670.000000f;
	__Local__59->Parent = __Local__10;
	auto __Local__60 = NewObject<UVerticalBox>(__Local__1, TEXT("Work_box"), (EObjectFlags)0x00280008);
	auto& __Local__61 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__60), UPanelWidget::__PPO__Slots() )));
	__Local__61 = TArray<UPanelSlot*> ();
	__Local__61.Reserve(1);
	auto __Local__62 = NewObject<UVerticalBoxSlot>(__Local__60, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__62->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__62->Padding.Left = 10.000000f;
	__Local__62->Parent = __Local__60;
	auto __Local__63 = NewObject<UImage>(__Local__1, TEXT("Background_work"), (EObjectFlags)0x00280008);
	__Local__63->Brush.ImageSize = FVector2D(516.000000, 666.000000);
	auto& __Local__64 = (*(AccessPrivateProperty<UObject* >(&(__Local__63->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__64 = CastChecked<UObject>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__63->Slot = __Local__62;
	__Local__63->RenderTransform.Scale = FVector2D(1.200000, 1.000000);
	__Local__62->Content = __Local__63;
	__Local__61.Add(__Local__62);
	__Local__60->Slot = __Local__59;
	__Local__60->RenderTransform.Scale = FVector2D(0.800000, 0.900000);
	__Local__60->bIsVariable = true;
	__Local__59->Content = __Local__60;
	__Local__11.Add(__Local__59);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	__Local__1->RootWidget = __Local__4;
}
PRAGMA_ENABLE_OPTIMIZATION
void USchool_C__pf4136444318::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__65;
	SlotNames.Append(__Local__65);
}
void USchool_C__pf4136444318::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__66;
	TArray<FDelegateRuntimeBinding>  __Local__67;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->MiscConvertedSubobjects[0]), __Local__66, __Local__67);
}
void USchool_C__pf4136444318::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void USchool_C__pf4136444318::bpf__ExecuteUbergraph_School__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("ISUIOPENED")), 0.000000, this);
	return; // KCST_GotoReturn
}
void USchool_C__pf4136444318::bpf__ExecuteUbergraph_School__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 5);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__IsGraduated__pf);
	if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Money")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value__pf);
	FCustomThunkTemplates::Array_Get(bpv__BookPrice__pf, bpv__SchoolRank__pf, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
	bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(b0l__CallFunc_ReadStats_Value__pf, b0l__CallFunc_Array_Get_Item_2__pf);
	if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Knowledge")), 1.000000, this);
	FCustomThunkTemplates::Array_Get(bpv__BookPrice__pf, bpv__SchoolRank__pf, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_Array_Get_Item_2__pf, -1.000000);
	UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, this);
	bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__LearnCount__pf, 1);
	b0l__Temp_int_Variable_2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
	bpv__LearnCount__pf = b0l__Temp_int_Variable_2__pf;
	bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(bpv__ChapterRank__pf, 1);
	b0l__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
	bpv__ChapterRank__pf = b0l__Temp_int_Variable_1__pf;
	FCustomThunkTemplates::Array_Get(bpv__Numbertexture__pf, bpv__ChapterRank__pf, /*out*/ b0l__CallFunc_Array_Get_Item_5__pf);
	if(::IsValid(bpv__Number__pf))
	{
		bpv__Number__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_5__pf, false);
	}
	FCustomThunkTemplates::Array_Get(bpv__LearnPerRank__pf, bpv__SchoolRank__pf, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
	bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__LearnCount__pf, b0l__CallFunc_Array_Get_Item_1__pf);
	if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Add_IntInt(bpv__SchoolRank__pf, 1);
	b0l__Temp_int_Variable_3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_2__pf;
	bpv__SchoolRank__pf = b0l__Temp_int_Variable_3__pf;
	FCustomThunkTemplates::Array_Get(bpv__CompanyPerRank__pf, bpv__CompanyRank__pf, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
	bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_IntInt(b0l__CallFunc_Array_Get_Item_3__pf, b0l__Temp_int_Variable_3__pf);
	if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue_1__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf = UKismetMathLibrary::Add_IntInt(bpv__CompanyRank__pf, 1);
	b0l__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_3__pf;
	bpv__CompanyRank__pf = b0l__Temp_int_Variable__pf;
	bpv__ChapterRank__pf = 0;
	UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("CompanyRank")), 1.000000, this);
	FCustomThunkTemplates::Array_Get(bpv__Numbertexture__pf, bpv__ChapterRank__pf, /*out*/ b0l__CallFunc_Array_Get_Item_6__pf);
	if(::IsValid(bpv__Number__pf))
	{
		bpv__Number__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_6__pf, false);
	}
	FCustomThunkTemplates::Array_Get(bpv__BookTexture__pf, b0l__Temp_int_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item_7__pf);
	if(::IsValid(bpv__Book__pf))
	{
		bpv__Book__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_7__pf, false);
	}
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Knowledge")), true, this, /*out*/ b0l__CallFunc_ReadStats_Value_1__pf);
	bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(b0l__CallFunc_ReadStats_Value_1__pf, 1.000000);
	if (!bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__IsGraduated__pf = true;
	if(::IsValid(bpv__Book__pf))
	{
		bpv__Book__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Price__pf))
	{
		bpv__Price__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Number__pf))
	{
		bpv__Number__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Box_S_Button_2__pf))
	{
		bpv__Box_S_Button_2__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Graduated__pf))
	{
		bpv__Graduated__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__ConText__pf))
	{
		bpv__ConText__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__GdText__pf))
	{
		bpv__GdText__pf->SetVisibility(ESlateVisibility::Visible);
	}
	// optimized KCST_UnconditionalGoto
	UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("CCEEOO")), 1.000000, this);
	return; // KCST_GotoReturn
}
void USchool_C__pf4136444318::bpf__ExecuteUbergraph_School__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 44);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_MakeArray_Array__pf.SetNum(11, true);
	b0l__K2Node_MakeArray_Array__pf[0] = 5.000000;
	b0l__K2Node_MakeArray_Array__pf[1] = 10.000000;
	b0l__K2Node_MakeArray_Array__pf[2] = 20.000000;
	b0l__K2Node_MakeArray_Array__pf[3] = 30.000000;
	b0l__K2Node_MakeArray_Array__pf[4] = 45.000000;
	b0l__K2Node_MakeArray_Array__pf[5] = 60.000000;
	b0l__K2Node_MakeArray_Array__pf[6] = 75.000000;
	b0l__K2Node_MakeArray_Array__pf[7] = 90.000000;
	b0l__K2Node_MakeArray_Array__pf[8] = 110.000000;
	b0l__K2Node_MakeArray_Array__pf[9] = 130.000000;
	b0l__K2Node_MakeArray_Array__pf[10] = 200.000000;
	bpv__BookPrice__pf = b0l__K2Node_MakeArray_Array__pf;
	b0l__K2Node_MakeArray_Array_1__pf.SetNum(11, true);
	b0l__K2Node_MakeArray_Array_1__pf[0] = 2;
	b0l__K2Node_MakeArray_Array_1__pf[1] = 4;
	b0l__K2Node_MakeArray_Array_1__pf[2] = 6;
	b0l__K2Node_MakeArray_Array_1__pf[3] = 10;
	b0l__K2Node_MakeArray_Array_1__pf[4] = 14;
	b0l__K2Node_MakeArray_Array_1__pf[5] = 18;
	b0l__K2Node_MakeArray_Array_1__pf[6] = 22;
	b0l__K2Node_MakeArray_Array_1__pf[7] = 28;
	b0l__K2Node_MakeArray_Array_1__pf[8] = 34;
	b0l__K2Node_MakeArray_Array_1__pf[9] = 40;
	b0l__K2Node_MakeArray_Array_1__pf[10] = 41;
	bpv__LearnPerRank__pf = b0l__K2Node_MakeArray_Array_1__pf;
	b0l__K2Node_MakeArray_Array_4__pf.SetNum(4, true);
	b0l__K2Node_MakeArray_Array_4__pf[0] = 3;
	b0l__K2Node_MakeArray_Array_4__pf[1] = 7;
	b0l__K2Node_MakeArray_Array_4__pf[2] = 10;
	b0l__K2Node_MakeArray_Array_4__pf[3] = 11;
	bpv__CompanyPerRank__pf = b0l__K2Node_MakeArray_Array_4__pf;
	b0l__K2Node_MakeArray_Array_2__pf.SetNum(4, true);
	b0l__K2Node_MakeArray_Array_2__pf[0] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_2__pf[1] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_2__pf[2] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_2__pf[3] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__BookTexture__pf = b0l__K2Node_MakeArray_Array_2__pf;
	b0l__K2Node_MakeArray_Array_3__pf.SetNum(18, true);
	b0l__K2Node_MakeArray_Array_3__pf[0] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[1] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[2] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[3] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[4] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[5] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[6] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[7] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[8] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[9] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[10] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[11] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[12] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[13] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[14] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[23], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[15] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[16] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed);
	b0l__K2Node_MakeArray_Array_3__pf[17] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(USchool_C__pf4136444318::StaticClass())->UsedAssets[25], ECastCheckedType::NullAllowed);
	bpv__Numbertexture__pf = b0l__K2Node_MakeArray_Array_3__pf;
	// optimized KCST_UnconditionalGoto
	bpv__BookRank__pf = 0;
	bpv__ChapterRank__pf = 0;
	bpv__LearnCount__pf = 0;
	FCustomThunkTemplates::Array_Get(bpv__Numbertexture__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
	if(::IsValid(bpv__Number__pf))
	{
		bpv__Number__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item__pf, false);
	}
	FCustomThunkTemplates::Array_Get(bpv__BookTexture__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item_4__pf);
	if(::IsValid(bpv__Book__pf))
	{
		bpv__Book__pf->SetBrushFromTexture(b0l__CallFunc_Array_Get_Item_4__pf, false);
	}
	if(::IsValid(bpv__Graduated__pf))
	{
		bpv__Graduated__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__ConText__pf))
	{
		bpv__ConText__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__GdText__pf))
	{
		bpv__GdText__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	return; // KCST_GotoReturn
}
void USchool_C__pf4136444318::bpf__ExecuteUbergraph_School__pf_3(int32 bpp__EntryPoint__pf)
{
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 42);
	// optimized KCST_UnconditionalGoto
	FCustomThunkTemplates::Array_Get(bpv__BookPrice__pf, bpv__SchoolRank__pf, /*out*/ b0l__CallFunc_Array_Get_Item_8__pf);
	bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf = UKismetTextLibrary::Conv_FloatToText(b0l__CallFunc_Array_Get_Item_8__pf, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 3);
	if(::IsValid(bpv__Price__pf))
	{
		bpv__Price__pf->SetText(bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf);
	}
	return; // KCST_GotoReturn
}
void USchool_C__pf4136444318::bpf__OnInitialized__pf()
{
	bpf__ExecuteUbergraph_School__pf_2(44);
}
void USchool_C__pf4136444318::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_School__pf_3(42);
}
void USchool_C__pf4136444318::bpf__BndEvt__Professer_1_Box_S_Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_School__pf_1(5);
}
void USchool_C__pf4136444318::bpf__BndEvt__Shop_2_Exit_Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_School__pf_0(2);
}
PRAGMA_DISABLE_OPTIMIZATION
void USchool_C__pf4136444318::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/Background_crop.Background_crop 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/School/SchoolImage/7_001.7_001 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Exit.Exit 
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
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void USchool_C__pf4136444318::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{73, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
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
struct FRegisterHelper__USchool_C__pf4136444318
{
	FRegisterHelper__USchool_C__pf4136444318()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/Ingame/WorldBuilding/School/School"), &USchool_C__pf4136444318::__StaticDependenciesAssets);
	}
	static FRegisterHelper__USchool_C__pf4136444318 Instance;
};
FRegisterHelper__USchool_C__pf4136444318 FRegisterHelper__USchool_C__pf4136444318::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
