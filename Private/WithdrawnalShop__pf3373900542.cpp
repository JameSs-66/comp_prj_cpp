#include "NativizedAssets.h"
#include "WithdrawnalShop__pf3373900542.h"
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
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "StatsTrackerLib_BP__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
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
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UWithdrawnalShop_C__pf3373900542::UWithdrawnalShop_C__pf3373900542(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__All_Box__pf = nullptr;
	bpv__Background_work__pf = nullptr;
	bpv__Box_BG__pf = nullptr;
	bpv__Box_L__pf = nullptr;
	bpv__Box_L_Button_2__pf = nullptr;
	bpv__Box_M__pf = nullptr;
	bpv__Box_M_Button_2__pf = nullptr;
	bpv__Box_S__pf = nullptr;
	bpv__Box_S_Button_2__pf = nullptr;
	bpv__Box_Xl__pf = nullptr;
	bpv__Box_XL_Button_2__pf = nullptr;
	bpv__Exit_Box__pf = nullptr;
	bpv__Exit_Button_2__pf = nullptr;
	bpv__Image_87__pf = nullptr;
	bpv__Image_239__pf = nullptr;
	bpv__Image_352__pf = nullptr;
	bpv__Image_461__pf = nullptr;
	bpv__Run__pf = nullptr;
	bpv__Work_box__pf = nullptr;
	bpv__GetxEnergyxValue__pfTT = TArray<float> ();
	bpv__PerviusDay__pf = 0.000000f;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWithdrawnalShop_C__pf3373900542::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UWithdrawnalShop_C__pf3373900542::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	__Local__0->ComponentDelegateBindings.AddUninitialized(5);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 5);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Exit_Button_2"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Shop_2_Exit_Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Box_XL_Button_2"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Shop_2_Box_XL_Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Box_M_Button_2"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Shop_2_Box_M_Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Box_L_Button_2"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Shop_2_Box_L_Button_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Box_S_Button_2"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Shop_2_Box_S_Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__7 = NewObject<UScaleBox>(__Local__1, TEXT("ScaleBox_0"), (EObjectFlags)0x00280008);
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(1);
	auto __Local__9 = NewObject<UScaleBoxSlot>(__Local__7, TEXT("ScaleBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<USizeBox>(__Local__1, TEXT("SizeBox_0"), (EObjectFlags)0x00280008);
	__Local__10->WidthOverride = 1920.000000f;
	__Local__10->HeightOverride = 1080.000000f;
	__Local__10->bOverride_WidthOverride = true;
	__Local__10->bOverride_HeightOverride = true;
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(1);
	auto __Local__12 = NewObject<USizeBoxSlot>(__Local__10, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__14 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__13), UPanelWidget::__PPO__Slots() )));
	__Local__14 = TArray<UPanelSlot*> ();
	__Local__14.Reserve(4);
	auto __Local__15 = NewObject<UCanvasPanelSlot>(__Local__13, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__15->LayoutData.Offsets.Left = -416.000000f;
	__Local__15->LayoutData.Offsets.Top = -192.000000f;
	__Local__15->LayoutData.Offsets.Right = -242.666672f;
	__Local__15->LayoutData.Offsets.Bottom = -256.000000f;
	__Local__15->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__15->Parent = __Local__13;
	auto __Local__16 = NewObject<UBackgroundBlur>(__Local__1, TEXT("Background"), (EObjectFlags)0x00280008);
	__Local__16->BlurStrength = 5.000000f;
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__14.Add(__Local__15);
	auto __Local__17 = NewObject<UCanvasPanelSlot>(__Local__13, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__17->LayoutData.Offsets.Left = 5.333374f;
	__Local__17->LayoutData.Offsets.Top = 5.333313f;
	__Local__17->LayoutData.Offsets.Right = -1.333496f;
	__Local__17->LayoutData.Offsets.Bottom = 7.333252f;
	__Local__17->LayoutData.Anchors.Minimum = FVector2D(0.363889, 0.228395);
	__Local__17->LayoutData.Anchors.Maximum = FVector2D(0.888889, 0.856790);
	__Local__17->Parent = __Local__13;
	auto __Local__18 = NewObject<UImage>(__Local__1, TEXT("Box_BG"), (EObjectFlags)0x00280008);
	__Local__18->Brush.ImageSize = FVector2D(845.000000, 556.000000);
	auto& __Local__19 = (*(AccessPrivateProperty<UObject* >(&(__Local__18->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__19 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop_C__pf3373900542::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__14.Add(__Local__17);
	auto __Local__20 = NewObject<UCanvasPanelSlot>(__Local__13, TEXT("CanvasPanelSlot_10"), (EObjectFlags)0x00280008);
	__Local__20->LayoutData.Offsets.Left = 14.666809f;
	__Local__20->LayoutData.Offsets.Top = 6.000061f;
	__Local__20->LayoutData.Offsets.Right = -2.333740f;
	__Local__20->LayoutData.Offsets.Bottom = -1.333252f;
	__Local__20->LayoutData.Anchors.Minimum = FVector2D(0.356944, 0.225926);
	__Local__20->LayoutData.Anchors.Maximum = FVector2D(0.888889, 0.850617);
	__Local__20->Parent = __Local__13;
	auto __Local__21 = NewObject<UVerticalBox>(__Local__1, TEXT("All_Box"), (EObjectFlags)0x00280008);
	auto& __Local__22 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__21), UPanelWidget::__PPO__Slots() )));
	__Local__22 = TArray<UPanelSlot*> ();
	__Local__22.Reserve(5);
	auto __Local__23 = NewObject<UVerticalBoxSlot>(__Local__21, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__23->Padding.Left = 100.000000f;
	__Local__23->Padding.Top = 80.000000f;
	__Local__23->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__23->Parent = __Local__21;
	auto __Local__24 = NewObject<UVerticalBox>(__Local__1, TEXT("Box_S"), (EObjectFlags)0x00280008);
	auto& __Local__25 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__24), UPanelWidget::__PPO__Slots() )));
	__Local__25 = TArray<UPanelSlot*> ();
	__Local__25.Reserve(1);
	auto __Local__26 = NewObject<UVerticalBoxSlot>(__Local__24, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__26->Parent = __Local__24;
	auto __Local__27 = NewObject<UButton>(__Local__1, TEXT("Box_S_Button_2"), (EObjectFlags)0x00280008);
	auto& __Local__28 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__27), UPanelWidget::__PPO__Slots() )));
	__Local__28 = TArray<UPanelSlot*> ();
	__Local__28.Reserve(1);
	auto __Local__29 = NewObject<UButtonSlot>(__Local__27, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__29->Padding.Left = 10.000000f;
	__Local__29->Padding.Top = -4.000000f;
	__Local__29->Parent = __Local__27;
	auto __Local__30 = NewObject<UOverlay>(__Local__1, TEXT("Overlay_0"), (EObjectFlags)0x00280008);
	auto& __Local__31 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__30), UPanelWidget::__PPO__Slots() )));
	__Local__31 = TArray<UPanelSlot*> ();
	__Local__31.Reserve(2);
	auto __Local__32 = NewObject<UOverlaySlot>(__Local__30, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__32->Parent = __Local__30;
	auto __Local__33 = NewObject<UImage>(__Local__1, TEXT("Image_87"), (EObjectFlags)0x00280008);
	__Local__33->Brush.ImageSize = FVector2D(325.000000, 227.000000);
	auto& __Local__34 = (*(AccessPrivateProperty<UObject* >(&(__Local__33->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__34 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop_C__pf3373900542::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__33->Slot = __Local__32;
	__Local__33->RenderTransform.Scale = FVector2D(1.150000, 1.100000);
	__Local__32->Content = __Local__33;
	__Local__31.Add(__Local__32);
	auto __Local__35 = NewObject<UOverlaySlot>(__Local__30, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__35->Parent = __Local__30;
	auto __Local__36 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_131"), (EObjectFlags)0x00280008);
	__Local__36->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[21E615104A13810E7F210BA353CE4B55]\", \"6FD5EDB440BF87B91DA560858292F274\", \"9\")")	);
	auto& __Local__37 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__36->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__37 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__36->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop_C__pf3373900542::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__36->Font.OutlineSettings.OutlineSize = 1;
	__Local__36->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__36->Slot = __Local__35;
	__Local__36->RenderTransform.Translation = FVector2D(257.000000, 5.000000);
	__Local__35->Content = __Local__36;
	__Local__31.Add(__Local__35);
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__28.Add(__Local__29);
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__25.Add(__Local__26);
	__Local__24->Slot = __Local__23;
	__Local__24->RenderTransform.Scale = FVector2D(0.800000, 0.800000);
	__Local__24->bIsVariable = true;
	__Local__23->Content = __Local__24;
	__Local__22.Add(__Local__23);
	auto __Local__38 = NewObject<UVerticalBoxSlot>(__Local__21, TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__38->Padding.Left = 100.000000f;
	__Local__38->Padding.Top = 30.000000f;
	__Local__38->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__38->Parent = __Local__21;
	auto __Local__39 = NewObject<UVerticalBox>(__Local__1, TEXT("Box_L"), (EObjectFlags)0x00280008);
	auto& __Local__40 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__39), UPanelWidget::__PPO__Slots() )));
	__Local__40 = TArray<UPanelSlot*> ();
	__Local__40.Reserve(1);
	auto __Local__41 = NewObject<UVerticalBoxSlot>(__Local__39, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__41->Parent = __Local__39;
	auto __Local__42 = NewObject<UButton>(__Local__1, TEXT("Box_L_Button_2"), (EObjectFlags)0x00280008);
	auto& __Local__43 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__42), UPanelWidget::__PPO__Slots() )));
	__Local__43 = TArray<UPanelSlot*> ();
	__Local__43.Reserve(1);
	auto __Local__44 = NewObject<UButtonSlot>(__Local__42, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__44->Padding.Left = 10.000000f;
	__Local__44->Padding.Top = -3.000000f;
	__Local__44->Parent = __Local__42;
	auto __Local__45 = NewObject<UOverlay>(__Local__1, TEXT("Overlay_1"), (EObjectFlags)0x00280008);
	auto& __Local__46 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__45), UPanelWidget::__PPO__Slots() )));
	__Local__46 = TArray<UPanelSlot*> ();
	__Local__46.Reserve(2);
	auto __Local__47 = NewObject<UOverlaySlot>(__Local__45, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__47->Parent = __Local__45;
	auto __Local__48 = NewObject<UImage>(__Local__1, TEXT("Image_239"), (EObjectFlags)0x00280008);
	__Local__48->Brush.ImageSize = FVector2D(329.000000, 232.000000);
	auto& __Local__49 = (*(AccessPrivateProperty<UObject* >(&(__Local__48->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__49 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop_C__pf3373900542::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__48->Slot = __Local__47;
	__Local__48->RenderTransform.Scale = FVector2D(1.150000, 1.100000);
	__Local__47->Content = __Local__48;
	__Local__46.Add(__Local__47);
	auto __Local__50 = NewObject<UOverlaySlot>(__Local__45, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__50->Parent = __Local__45;
	auto __Local__51 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_388"), (EObjectFlags)0x00280008);
	__Local__51->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[21E615104A13810E7F210BA353CE4B55]\", \"4B097FA34B2A3AA307F7A7BF3541F8B8\", \"39\")")	);
	auto& __Local__52 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__51->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__52 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__51->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop_C__pf3373900542::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__51->Font.OutlineSettings.OutlineSize = 1;
	__Local__51->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__51->Slot = __Local__50;
	__Local__51->RenderTransform.Translation = FVector2D(240.000000, 5.000000);
	__Local__50->Content = __Local__51;
	__Local__46.Add(__Local__50);
	__Local__45->Slot = __Local__44;
	__Local__44->Content = __Local__45;
	__Local__43.Add(__Local__44);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__40.Add(__Local__41);
	__Local__39->Slot = __Local__38;
	__Local__39->RenderTransform.Scale = FVector2D(0.800000, 0.800000);
	__Local__39->bIsVariable = true;
	__Local__38->Content = __Local__39;
	__Local__22.Add(__Local__38);
	auto __Local__53 = NewObject<UVerticalBoxSlot>(__Local__21, TEXT("VerticalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__53->Padding.Top = -500.000000f;
	__Local__53->Padding.Right = 100.000000f;
	__Local__53->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__53->Parent = __Local__21;
	auto __Local__54 = NewObject<UVerticalBox>(__Local__1, TEXT("Box_M"), (EObjectFlags)0x00280008);
	auto& __Local__55 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__54), UPanelWidget::__PPO__Slots() )));
	__Local__55 = TArray<UPanelSlot*> ();
	__Local__55.Reserve(1);
	auto __Local__56 = NewObject<UVerticalBoxSlot>(__Local__54, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__56->Parent = __Local__54;
	auto __Local__57 = NewObject<UButton>(__Local__1, TEXT("Box_M_Button_2"), (EObjectFlags)0x00280008);
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__57), UPanelWidget::__PPO__Slots() )));
	__Local__58 = TArray<UPanelSlot*> ();
	__Local__58.Reserve(1);
	auto __Local__59 = NewObject<UButtonSlot>(__Local__57, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__59->Padding.Left = 10.000000f;
	__Local__59->Padding.Top = -4.000000f;
	__Local__59->Parent = __Local__57;
	auto __Local__60 = NewObject<UOverlay>(__Local__1, TEXT("Overlay_2"), (EObjectFlags)0x00280008);
	auto& __Local__61 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__60), UPanelWidget::__PPO__Slots() )));
	__Local__61 = TArray<UPanelSlot*> ();
	__Local__61.Reserve(2);
	auto __Local__62 = NewObject<UOverlaySlot>(__Local__60, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__62->Parent = __Local__60;
	auto __Local__63 = NewObject<UImage>(__Local__1, TEXT("Image_352"), (EObjectFlags)0x00280008);
	__Local__63->Brush.ImageSize = FVector2D(328.000000, 231.000000);
	auto& __Local__64 = (*(AccessPrivateProperty<UObject* >(&(__Local__63->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__64 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop_C__pf3373900542::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__63->Slot = __Local__62;
	__Local__63->RenderTransform.Scale = FVector2D(1.150000, 1.100000);
	__Local__62->Content = __Local__63;
	__Local__61.Add(__Local__62);
	auto __Local__65 = NewObject<UOverlaySlot>(__Local__60, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__65->Parent = __Local__60;
	auto __Local__66 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1086"), (EObjectFlags)0x00280008);
	__Local__66->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[21E615104A13810E7F210BA353CE4B55]\", \"25A05C034CE1914C44DE0E8C6878CD14\", \"19\")")	);
	auto& __Local__67 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__66->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__67 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__66->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop_C__pf3373900542::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__66->Font.OutlineSettings.OutlineSize = 1;
	__Local__66->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__66->Slot = __Local__65;
	__Local__66->RenderTransform.Translation = FVector2D(240.000000, 5.000000);
	__Local__65->Content = __Local__66;
	__Local__61.Add(__Local__65);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__58.Add(__Local__59);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__55.Add(__Local__56);
	__Local__54->Slot = __Local__53;
	__Local__54->RenderTransform.Scale = FVector2D(0.800000, 0.800000);
	__Local__54->bIsVariable = true;
	__Local__53->Content = __Local__54;
	__Local__22.Add(__Local__53);
	auto __Local__68 = NewObject<UVerticalBoxSlot>(__Local__21, TEXT("VerticalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__68->Padding.Top = 25.000000f;
	__Local__68->Padding.Right = 90.000000f;
	__Local__68->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__68->Parent = __Local__21;
	auto __Local__69 = NewObject<UVerticalBox>(__Local__1, TEXT("Box_Xl"), (EObjectFlags)0x00280008);
	auto& __Local__70 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__69), UPanelWidget::__PPO__Slots() )));
	__Local__70 = TArray<UPanelSlot*> ();
	__Local__70.Reserve(1);
	auto __Local__71 = NewObject<UVerticalBoxSlot>(__Local__69, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__71->Parent = __Local__69;
	auto __Local__72 = NewObject<UButton>(__Local__1, TEXT("Box_XL_Button_2"), (EObjectFlags)0x00280008);
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__72), UPanelWidget::__PPO__Slots() )));
	__Local__73 = TArray<UPanelSlot*> ();
	__Local__73.Reserve(1);
	auto __Local__74 = NewObject<UButtonSlot>(__Local__72, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__74->Padding.Left = 10.000000f;
	__Local__74->Padding.Top = -4.000000f;
	__Local__74->Parent = __Local__72;
	auto __Local__75 = NewObject<UOverlay>(__Local__1, TEXT("Overlay_3"), (EObjectFlags)0x00280008);
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__75), UPanelWidget::__PPO__Slots() )));
	__Local__76 = TArray<UPanelSlot*> ();
	__Local__76.Reserve(2);
	auto __Local__77 = NewObject<UOverlaySlot>(__Local__75, TEXT("OverlaySlot_0"), (EObjectFlags)0x00280008);
	__Local__77->Parent = __Local__75;
	auto __Local__78 = NewObject<UImage>(__Local__1, TEXT("Image_461"), (EObjectFlags)0x00280008);
	__Local__78->Brush.ImageSize = FVector2D(329.000000, 234.000000);
	auto& __Local__79 = (*(AccessPrivateProperty<UObject* >(&(__Local__78->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__79 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop_C__pf3373900542::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__78->Slot = __Local__77;
	__Local__78->RenderTransform.Scale = FVector2D(1.150000, 1.100000);
	__Local__77->Content = __Local__78;
	__Local__76.Add(__Local__77);
	auto __Local__80 = NewObject<UOverlaySlot>(__Local__75, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__80->Parent = __Local__75;
	auto __Local__81 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_711"), (EObjectFlags)0x00280008);
	__Local__81->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[21E615104A13810E7F210BA353CE4B55]\", \"92CDDC2B4BF7647FDB7672B5C3E3D334\", \"69\")")	);
	auto& __Local__82 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__81->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__82 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__81->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop_C__pf3373900542::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__81->Font.OutlineSettings.OutlineSize = 1;
	__Local__81->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__81->Slot = __Local__80;
	__Local__81->RenderTransform.Translation = FVector2D(242.000000, 5.000000);
	__Local__80->Content = __Local__81;
	__Local__76.Add(__Local__80);
	__Local__75->Slot = __Local__74;
	__Local__74->Content = __Local__75;
	__Local__73.Add(__Local__74);
	__Local__72->Slot = __Local__71;
	__Local__71->Content = __Local__72;
	__Local__70.Add(__Local__71);
	__Local__69->Slot = __Local__68;
	__Local__69->RenderTransform.Scale = FVector2D(0.800000, 0.800000);
	__Local__69->bIsVariable = true;
	__Local__68->Content = __Local__69;
	__Local__22.Add(__Local__68);
	auto __Local__83 = NewObject<UVerticalBoxSlot>(__Local__21, TEXT("VerticalBoxSlot_9"), (EObjectFlags)0x00280008);
	__Local__83->Padding.Top = -170.000000f;
	__Local__83->Padding.Right = -106.000000f;
	__Local__83->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__83->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__83->Parent = __Local__21;
	auto __Local__84 = NewObject<UVerticalBox>(__Local__1, TEXT("Exit_Box"), (EObjectFlags)0x00280008);
	auto& __Local__85 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__84), UPanelWidget::__PPO__Slots() )));
	__Local__85 = TArray<UPanelSlot*> ();
	__Local__85.Reserve(1);
	auto __Local__86 = NewObject<UVerticalBoxSlot>(__Local__84, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__86->Parent = __Local__84;
	auto __Local__87 = NewObject<UButton>(__Local__1, TEXT("Exit_Button_2"), (EObjectFlags)0x00280008);
	auto& __Local__88 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__87), UPanelWidget::__PPO__Slots() )));
	__Local__88 = TArray<UPanelSlot*> ();
	__Local__88.Reserve(1);
	auto __Local__89 = NewObject<UButtonSlot>(__Local__87, TEXT("ButtonSlot_1"), (EObjectFlags)0x00280008);
	__Local__89->Padding.Left = 0.000000f;
	__Local__89->Padding.Top = 0.000000f;
	__Local__89->Padding.Right = 0.000000f;
	__Local__89->Padding.Bottom = 0.000000f;
	__Local__89->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__89->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__89->Parent = __Local__87;
	auto __Local__90 = NewObject<UImage>(__Local__1, TEXT("Run"), (EObjectFlags)0x00280008);
	__Local__90->Brush.ImageSize = FVector2D(252.000000, 304.000000);
	auto& __Local__91 = (*(AccessPrivateProperty<UObject* >(&(__Local__90->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__91 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop_C__pf3373900542::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__90->ColorAndOpacity = FLinearColor(0.746939, 0.781250, 0.744856, 1.000000);
	__Local__90->Slot = __Local__89;
	__Local__90->RenderTransform.Scale = FVector2D(1.150000, 1.100000);
	__Local__89->Content = __Local__90;
	__Local__88.Add(__Local__89);
	__Local__87->Slot = __Local__86;
	__Local__87->RenderTransform.Scale = FVector2D(0.900000, 0.900000);
	__Local__86->Content = __Local__87;
	__Local__85.Add(__Local__86);
	__Local__84->Slot = __Local__83;
	__Local__84->RenderTransform.Translation = FVector2D(-30.000000, -485.000000);
	__Local__84->RenderTransform.Scale = FVector2D(0.300000, 0.350000);
	__Local__84->bIsVariable = true;
	__Local__83->Content = __Local__84;
	__Local__22.Add(__Local__83);
	__Local__21->Slot = __Local__20;
	__Local__21->bIsVariable = true;
	__Local__20->Content = __Local__21;
	__Local__14.Add(__Local__20);
	auto __Local__92 = NewObject<UCanvasPanelSlot>(__Local__13, TEXT("CanvasPanelSlot_14"), (EObjectFlags)0x00280008);
	__Local__92->LayoutData.Offsets.Left = 140.000000f;
	__Local__92->LayoutData.Offsets.Top = 250.000000f;
	__Local__92->LayoutData.Offsets.Right = 480.000000f;
	__Local__92->LayoutData.Offsets.Bottom = 670.000000f;
	__Local__92->Parent = __Local__13;
	auto __Local__93 = NewObject<UVerticalBox>(__Local__1, TEXT("Work_box"), (EObjectFlags)0x00280008);
	auto& __Local__94 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__93), UPanelWidget::__PPO__Slots() )));
	__Local__94 = TArray<UPanelSlot*> ();
	__Local__94.Reserve(1);
	auto __Local__95 = NewObject<UVerticalBoxSlot>(__Local__93, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__95->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__95->Padding.Left = 10.000000f;
	__Local__95->Parent = __Local__93;
	auto __Local__96 = NewObject<UImage>(__Local__1, TEXT("Background_work"), (EObjectFlags)0x00280008);
	__Local__96->Brush.ImageSize = FVector2D(600.000000, 778.000000);
	auto& __Local__97 = (*(AccessPrivateProperty<UObject* >(&(__Local__96->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__97 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWithdrawnalShop_C__pf3373900542::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__96->Slot = __Local__95;
	__Local__96->RenderTransform.Scale = FVector2D(1.200000, 1.100000);
	__Local__95->Content = __Local__96;
	__Local__94.Add(__Local__95);
	__Local__93->Slot = __Local__92;
	__Local__93->RenderTransform.Scale = FVector2D(0.800000, 0.900000);
	__Local__93->bIsVariable = true;
	__Local__92->Content = __Local__93;
	__Local__14.Add(__Local__92);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	__Local__1->RootWidget = __Local__7;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWithdrawnalShop_C__pf3373900542::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__98;
	SlotNames.Append(__Local__98);
}
void UWithdrawnalShop_C__pf3373900542::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__99;
	TArray<FDelegateRuntimeBinding>  __Local__100;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UWithdrawnalShop_C__pf3373900542::StaticClass())->MiscConvertedSubobjects[0]), __Local__99, __Local__100);
}
void UWithdrawnalShop_C__pf3373900542::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UWithdrawnalShop_C__pf3373900542::bpf__ExecuteUbergraph_WithdrawnalShop__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 41);
	// optimized KCST_UnconditionalGoto
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDDATE")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_6__pf);
	bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(b0l__CallFunc_ReadStats_Value_6__pf, bpv__PerviusDay__pf);
	if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_MakeArray_Array_1__pf.SetNum(4, true);
	b0l__K2Node_MakeArray_Array_1__pf[0] = 10.000000;
	b0l__K2Node_MakeArray_Array_1__pf[1] = 25.000000;
	b0l__K2Node_MakeArray_Array_1__pf[2] = 50.000000;
	b0l__K2Node_MakeArray_Array_1__pf[3] = 100.000000;
	bpv__GetxEnergyxValue__pfTT = b0l__K2Node_MakeArray_Array_1__pf;
	return; //KCST_EndOfThread
}
void UWithdrawnalShop_C__pf3373900542::bpf__ExecuteUbergraph_WithdrawnalShop__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 40);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_MakeArray_Array__pf.SetNum(4, true);
	b0l__K2Node_MakeArray_Array__pf[0] = 10.000000;
	b0l__K2Node_MakeArray_Array__pf[1] = 25.000000;
	b0l__K2Node_MakeArray_Array__pf[2] = 50.000000;
	b0l__K2Node_MakeArray_Array__pf[3] = 100.000000;
	bpv__GetxEnergyxValue__pfTT = b0l__K2Node_MakeArray_Array__pf;
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDDATE")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_5__pf);
	bpv__PerviusDay__pf = b0l__CallFunc_ReadStats_Value_5__pf;
	return; //KCST_EndOfThread
}
void UWithdrawnalShop_C__pf3373900542::bpf__ExecuteUbergraph_WithdrawnalShop__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 34);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("ISUIOPENED")), 0.000000, this);
	// optimized KCST_UnconditionalGoto
	UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("WORLDDATE")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value__pf);
	bpv__PerviusDay__pf = b0l__CallFunc_ReadStats_Value__pf;
	return; //KCST_EndOfThread
}
void UWithdrawnalShop_C__pf3373900542::bpf__ExecuteUbergraph_WithdrawnalShop__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_2__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_3__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 3:
			{
				__StateStack.Push(5);
			}
		case 4:
			{
				FCustomThunkTemplates::Array_Get(bpv__GetxEnergyxValue__pfTT, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_Array_Get_Item__pf, 0.500000);
				FCustomThunkTemplates::Array_Set(bpv__GetxEnergyxValue__pfTT, b0l__Temp_int_Array_Index_Variable__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 6:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__GetxEnergyxValue__pfTT);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
				__CurrentState = 3;
				break;
			}
		case 8:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
				__CurrentState = 6;
				break;
			}
		case 9:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
				__CurrentState = 8;
				break;
			}
		case 10:
			{
				__CurrentState = 11;
				break;
			}
		case 11:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Money")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_1__pf);
			}
		case 12:
			{
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(b0l__CallFunc_ReadStats_Value_1__pf, 9.000000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), -9.000000, this);
			}
		case 14:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Health")), -2.000000, this);
			}
		case 15:
			{
				FCustomThunkTemplates::Array_Get(bpv__GetxEnergyxValue__pfTT, 0, /*out*/ b0l__CallFunc_Array_Get_Item_1__pf);
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), b0l__CallFunc_Array_Get_Item_1__pf, this);
				__CurrentState = 9;
				break;
			}
		case 16:
			{
				__CurrentState = 17;
				break;
			}
		case 17:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Money")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_3__pf);
			}
		case 18:
			{
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(b0l__CallFunc_ReadStats_Value_3__pf, 39.000000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), -39.000000, this);
			}
		case 20:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Health")), -10.000000, this);
			}
		case 21:
			{
				FCustomThunkTemplates::Array_Get(bpv__GetxEnergyxValue__pfTT, 2, /*out*/ b0l__CallFunc_Array_Get_Item_3__pf);
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), b0l__CallFunc_Array_Get_Item_3__pf, this);
				__CurrentState = 9;
				break;
			}
		case 22:
			{
				__CurrentState = 23;
				break;
			}
		case 23:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Money")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_2__pf);
			}
		case 24:
			{
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(b0l__CallFunc_ReadStats_Value_2__pf, 19.000000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 25:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), -19.000000, this);
			}
		case 26:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Health")), -6.000000, this);
			}
		case 27:
			{
				FCustomThunkTemplates::Array_Get(bpv__GetxEnergyxValue__pfTT, 1, /*out*/ b0l__CallFunc_Array_Get_Item_2__pf);
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), b0l__CallFunc_Array_Get_Item_2__pf, this);
				__CurrentState = 9;
				break;
			}
		case 28:
			{
				__CurrentState = 29;
				break;
			}
		case 29:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("Money")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_4__pf);
			}
		case 30:
			{
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(b0l__CallFunc_ReadStats_Value_4__pf, 69.000000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 31:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), -69.000000, this);
			}
		case 32:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Health")), -18.000000, this);
			}
		case 33:
			{
				FCustomThunkTemplates::Array_Get(bpv__GetxEnergyxValue__pfTT, 3, /*out*/ b0l__CallFunc_Array_Get_Item_4__pf);
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), b0l__CallFunc_Array_Get_Item_4__pf, this);
				__CurrentState = 9;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UWithdrawnalShop_C__pf3373900542::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_WithdrawnalShop__pf_0(41);
}
void UWithdrawnalShop_C__pf3373900542::bpf__OnInitialized__pf()
{
	bpf__ExecuteUbergraph_WithdrawnalShop__pf_1(40);
}
void UWithdrawnalShop_C__pf3373900542::bpf__BndEvt__Shop_2_Exit_Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_WithdrawnalShop__pf_2(34);
}
void UWithdrawnalShop_C__pf3373900542::bpf__BndEvt__Shop_2_Box_XL_Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_WithdrawnalShop__pf_3(28);
}
void UWithdrawnalShop_C__pf3373900542::bpf__BndEvt__Shop_2_Box_M_Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_WithdrawnalShop__pf_3(22);
}
void UWithdrawnalShop_C__pf3373900542::bpf__BndEvt__Shop_2_Box_L_Button_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_WithdrawnalShop__pf_3(16);
}
void UWithdrawnalShop_C__pf3373900542::bpf__BndEvt__Shop_2_Box_S_Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_WithdrawnalShop__pf_3(10);
}
PRAGMA_DISABLE_OPTIMIZATION
void UWithdrawnalShop_C__pf3373900542::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/All_Box_2_Crop.All_Box_2_Crop 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/S_2_Crop.S_2_Crop 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/L_2_Crop.L_2_Crop 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/M_2_Crop.M_2_Crop 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/Xl_2_Crop.Xl_2_Crop 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Exit.Exit 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/WorldBuilding/Shop_2/Burgur/People_2_Crop.People_2_Crop 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UWithdrawnalShop_C__pf3373900542::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
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
struct FRegisterHelper__UWithdrawnalShop_C__pf3373900542
{
	FRegisterHelper__UWithdrawnalShop_C__pf3373900542()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/Ingame/WorldBuilding/Shop_2/WithdrawnalShop"), &UWithdrawnalShop_C__pf3373900542::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UWithdrawnalShop_C__pf3373900542 Instance;
};
FRegisterHelper__UWithdrawnalShop_C__pf3373900542 FRegisterHelper__UWithdrawnalShop_C__pf3373900542::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
