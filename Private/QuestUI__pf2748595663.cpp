#include "NativizedAssets.h"
#include "QuestUI__pf2748595663.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "StatsTrackerLib_BP__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
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
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
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
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
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
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
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
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
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
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UQuestUI_C__pf2748595663::UQuestUI_C__pf2748595663(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__CEO__pf = nullptr;
	bpv__Prom__pf = nullptr;
	bpv__Quest1__pf = nullptr;
	bpv__Quest2__pf = nullptr;
	bpv__Quest3__pf = nullptr;
	bpv__Quest1_Text__pf = FString(TEXT(""));
	bpv__Quest2_Text__pf = FString(TEXT(""));
	bpv__Quest3_Text__pf = FString(TEXT(""));
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UQuestUI_C__pf2748595663::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UQuestUI_C__pf2748595663::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(1);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__3->LayoutData.Offsets.Left = 400.000000f;
	__Local__3->LayoutData.Offsets.Top = -528.000000f;
	__Local__3->LayoutData.Offsets.Right = 450.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 450.000000f;
	__Local__3->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__3->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_1"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(8);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_14"), (EObjectFlags)0x00280008);
	__Local__6->LayoutData.Offsets.Right = 448.799988f;
	__Local__6->LayoutData.Offsets.Bottom = 205.200012f;
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UImage>(__Local__0, TEXT("Image_4"), (EObjectFlags)0x00280008);
	__Local__7->Brush.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__8 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__7->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__8 = FLinearColor(1.000000, 1.000000, 1.000000, 0.363000);
	auto& __Local__9 = (*(AccessPrivateProperty<UObject* >(&(__Local__7->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__9 = CastChecked<UObject>(CastChecked<UDynamicClass>(UQuestUI_C__pf2748595663::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__7->Slot = __Local__6;
	__Local__7->bIsVariable = false;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_16"), (EObjectFlags)0x00280008);
	__Local__10->LayoutData.Offsets.Right = 448.799988f;
	__Local__10->LayoutData.Offsets.Bottom = 52.571430f;
	__Local__10->Parent = __Local__4;
	auto __Local__11 = NewObject<UImage>(__Local__0, TEXT("Image"), (EObjectFlags)0x00280008);
	__Local__11->Brush.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__12 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__11->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__12 = FLinearColor(1.000000, 1.000000, 1.000000, 0.488000);
	auto& __Local__13 = (*(AccessPrivateProperty<UObject* >(&(__Local__11->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__13 = CastChecked<UObject>(CastChecked<UDynamicClass>(UQuestUI_C__pf2748595663::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__11->Slot = __Local__10;
	__Local__11->bIsVariable = false;
	__Local__10->Content = __Local__11;
	__Local__5.Add(__Local__10);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_15"), (EObjectFlags)0x00280008);
	__Local__14->LayoutData.Offsets.Left = -225.000000f;
	__Local__14->LayoutData.Offsets.Top = -221.000000f;
	__Local__14->LayoutData.Offsets.Right = 445.333344f;
	__Local__14->LayoutData.Offsets.Bottom = 36.761902f;
	__Local__14->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__14->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__14->Parent = __Local__4;
	auto __Local__15 = NewObject<UTextBlock>(__Local__0, TEXT("TextBlock_56"), (EObjectFlags)0x00280008);
	__Local__15->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[789BECF3426E1A4F0DAEA2AC3BCAD1B6]\", \"88C1B3A449D6B7D5FEC2609AB10B0BDA\", \"Daily Task\")")	);
	auto& __Local__16 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__15->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__16 = FLinearColor(0.000000, 0.006049, 0.020289, 1.000000);
	__Local__15->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UQuestUI_C__pf2748595663::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__15->Font.OutlineSettings.OutlineSize = 2;
	__Local__15->Font.OutlineSettings.OutlineColor = FLinearColor(0.000000, 0.006049, 0.020289, 1.000000);
	__Local__15->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__15->Font.Size = 25;
	__Local__15->Font.LetterSpacing = 356;
	auto& __Local__17 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__15), UTextLayoutWidget::__PPO__Justification() )));
	__Local__17 = ETextJustify::Type::Center;
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__5.Add(__Local__14);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__18->LayoutData.Offsets.Left = -225.000000f;
	__Local__18->LayoutData.Offsets.Top = -153.000000f;
	__Local__18->LayoutData.Offsets.Right = 445.333344f;
	__Local__18->LayoutData.Offsets.Bottom = 126.095230f;
	__Local__18->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__18->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__18->Parent = __Local__4;
	auto __Local__19 = NewObject<UTextBlock>(__Local__0, TEXT("Prom"), (EObjectFlags)0x00280008);
	__Local__19->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[789BECF3426E1A4F0DAEA2AC3BCAD1B6]\", \"4519256443DA66DDBD35B3AC35D6D375\", \"You can promote to CEO now.\\r\\nTalk to reception to take over\\r\\n\")")	);
	auto& __Local__20 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__19->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__20 = FLinearColor(0.000000, 0.006049, 0.020289, 1.000000);
	__Local__19->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UQuestUI_C__pf2748595663::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__19->Font.OutlineSettings.OutlineSize = 2;
	__Local__19->Font.OutlineSettings.OutlineColor = FLinearColor(0.000000, 0.006049, 0.020289, 1.000000);
	__Local__19->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__19->Font.Size = 19;
	__Local__19->Font.LetterSpacing = 240;
	auto& __Local__21 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__19), UTextLayoutWidget::__PPO__Justification() )));
	__Local__21 = ETextJustify::Type::Center;
	__Local__19->Slot = __Local__18;
	__Local__19->bIsVariable = true;
	__Local__18->Content = __Local__19;
	__Local__5.Add(__Local__18);
	auto __Local__22 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__22->LayoutData.Offsets.Left = -225.000000f;
	__Local__22->LayoutData.Offsets.Top = -77.000000f;
	__Local__22->LayoutData.Offsets.Right = 445.333344f;
	__Local__22->LayoutData.Offsets.Bottom = 126.095230f;
	__Local__22->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__22->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__22->Parent = __Local__4;
	auto __Local__23 = NewObject<UTextBlock>(__Local__0, TEXT("CEO"), (EObjectFlags)0x00280008);
	__Local__23->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[789BECF3426E1A4F0DAEA2AC3BCAD1B6]\", \"29B24F42481C2C455CC86BBA59781353\", \"C  E  O.\")")	);
	auto& __Local__24 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__23->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__24 = FLinearColor(0.000000, 0.006049, 0.020289, 1.000000);
	__Local__23->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UQuestUI_C__pf2748595663::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__23->Font.OutlineSettings.OutlineSize = 2;
	__Local__23->Font.OutlineSettings.OutlineColor = FLinearColor(0.000000, 0.006049, 0.020289, 1.000000);
	__Local__23->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__23->Font.Size = 38;
	__Local__23->Font.LetterSpacing = 240;
	auto& __Local__25 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__23), UTextLayoutWidget::__PPO__Justification() )));
	__Local__25 = ETextJustify::Type::Center;
	__Local__23->Slot = __Local__22;
	__Local__23->bIsVariable = true;
	__Local__22->Content = __Local__23;
	__Local__5.Add(__Local__22);
	auto __Local__26 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_35"), (EObjectFlags)0x00280008);
	__Local__26->LayoutData.Offsets.Left = 24.000000f;
	__Local__26->LayoutData.Offsets.Top = 64.000000f;
	__Local__26->LayoutData.Offsets.Right = 400.000000f;
	__Local__26->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__26->Parent = __Local__4;
	auto __Local__27 = NewObject<UTextBlock>(__Local__0, TEXT("Quest1"), (EObjectFlags)0x00280008);
	__Local__27->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[789BECF3426E1A4F0DAEA2AC3BCAD1B6]\", \"E0879FBD484112314F5689B09BBCB7E0\", \"1:\")")	);
	auto& __Local__28 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__27->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__28 = FLinearColor(0.000000, 0.006437, 0.020833, 1.000000);
	__Local__27->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UQuestUI_C__pf2748595663::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__27->Font.OutlineSettings.OutlineSize = 1;
	__Local__27->Font.OutlineSettings.OutlineColor = FLinearColor(0.000000, 0.006049, 0.020289, 1.000000);
	__Local__27->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__27->Slot = __Local__26;
	__Local__27->bIsVariable = true;
	__Local__26->Content = __Local__27;
	__Local__5.Add(__Local__26);
	auto __Local__29 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_34"), (EObjectFlags)0x00280008);
	__Local__29->LayoutData.Offsets.Left = 24.000000f;
	__Local__29->LayoutData.Offsets.Top = 112.000000f;
	__Local__29->LayoutData.Offsets.Right = 400.000000f;
	__Local__29->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__29->Parent = __Local__4;
	auto __Local__30 = NewObject<UTextBlock>(__Local__0, TEXT("Quest2"), (EObjectFlags)0x00280008);
	__Local__30->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[789BECF3426E1A4F0DAEA2AC3BCAD1B6]\", \"43BEF3DE4AE4D00D9765ACBC73AC36C2\", \"1.\")")	);
	auto& __Local__31 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__30->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__31 = FLinearColor(0.000000, 0.006437, 0.020833, 1.000000);
	__Local__30->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UQuestUI_C__pf2748595663::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__30->Font.OutlineSettings.OutlineSize = 1;
	__Local__30->Font.OutlineSettings.OutlineColor = FLinearColor(0.000000, 0.006049, 0.020289, 1.000000);
	__Local__30->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__30->Slot = __Local__29;
	__Local__30->bIsVariable = true;
	__Local__29->Content = __Local__30;
	__Local__5.Add(__Local__29);
	auto __Local__32 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_33"), (EObjectFlags)0x00280008);
	__Local__32->LayoutData.Offsets.Left = 24.000000f;
	__Local__32->LayoutData.Offsets.Top = 160.000000f;
	__Local__32->LayoutData.Offsets.Right = 400.000000f;
	__Local__32->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__32->Parent = __Local__4;
	auto __Local__33 = NewObject<UTextBlock>(__Local__0, TEXT("Quest3"), (EObjectFlags)0x00280008);
	__Local__33->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[789BECF3426E1A4F0DAEA2AC3BCAD1B6]\", \"43BEF3DE4AE4D00D9765ACBC73AC36C2\", \"1.\")")	);
	auto& __Local__34 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__33->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__34 = FLinearColor(0.000000, 0.006437, 0.020833, 1.000000);
	__Local__33->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UQuestUI_C__pf2748595663::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__33->Font.OutlineSettings.OutlineSize = 1;
	__Local__33->Font.OutlineSettings.OutlineColor = FLinearColor(0.000000, 0.006049, 0.020289, 1.000000);
	__Local__33->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__33->Slot = __Local__32;
	__Local__33->bIsVariable = true;
	__Local__32->Content = __Local__33;
	__Local__5.Add(__Local__32);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UQuestUI_C__pf2748595663::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__35;
	SlotNames.Append(__Local__35);
}
void UQuestUI_C__pf2748595663::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__36;
	TArray<FDelegateRuntimeBinding>  __Local__37;
	__Local__37.AddUninitialized(3);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__37.GetData(), 3);
	auto& __Local__38 = __Local__37[0];
	__Local__38.ObjectName = FString(TEXT("Quest1"));
	__Local__38.PropertyName = FName(TEXT("Text"));
	auto& __Local__39 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__38.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__39 = TArray<FPropertyPathSegment> ();
	__Local__39.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__39.GetData(), 1);
	auto& __Local__40 = __Local__39[0];
	__Local__40.Name = FName(TEXT("Quest1_Text"));
	auto& __Local__41 = __Local__37[1];
	__Local__41.ObjectName = FString(TEXT("Quest2"));
	__Local__41.PropertyName = FName(TEXT("Text"));
	auto& __Local__42 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__41.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__42 = TArray<FPropertyPathSegment> ();
	__Local__42.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__42.GetData(), 1);
	auto& __Local__43 = __Local__42[0];
	__Local__43.Name = FName(TEXT("Quest2_Text"));
	auto& __Local__44 = __Local__37[2];
	__Local__44.ObjectName = FString(TEXT("Quest3"));
	__Local__44.PropertyName = FName(TEXT("Text"));
	auto& __Local__45 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__44.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__45 = TArray<FPropertyPathSegment> ();
	__Local__45.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__45.GetData(), 1);
	auto& __Local__46 = __Local__45[0];
	__Local__46.Name = FName(TEXT("Quest3_Text"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UQuestUI_C__pf2748595663::StaticClass())->MiscConvertedSubobjects[0]), __Local__36, __Local__37);
}
void UQuestUI_C__pf2748595663::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UQuestUI_C__pf2748595663::bpf__ExecuteUbergraph_QuestUI__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 14);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Prom__pf))
	{
		bpv__Prom__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__CEO__pf))
	{
		bpv__CEO__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	return; // KCST_GotoReturn
}
void UQuestUI_C__pf2748595663::bpf__ExecuteUbergraph_QuestUI__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_FTrunc_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_9__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_10__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_11__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_FTrunc_ReturnValue_3__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_12__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_13__pf{};
	FString bpfv__CallFunc_SelectString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue_14__pf{};
	FString bpfv__CallFunc_SelectString_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	FString bpfv__CallFunc_SelectString_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("CompanyRank")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value__pf);
			}
		case 2:
			{
				b0l__Temp_string_Variable_3__pf = FString(TEXT("RECURIT"));
				b0l__Temp_string_Variable_4__pf = FString(TEXT("EMWORK"));
				b0l__Temp_string_Variable_5__pf = FString(TEXT("WATERPLANT"));
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value__pf);
				b0l__Temp_int_Variable_1__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(TSwitchValue<int32 , FString >(b0l__Temp_int_Variable_1__pf, b0l__K2Node_Select_Default_1__pf, 3, TSwitchPair<int32 , FString >(0, b0l__Temp_string_Variable_5__pf), TSwitchPair<int32 , FString >(1, b0l__Temp_string_Variable_4__pf), TSwitchPair<int32 , FString >(2, b0l__Temp_string_Variable_3__pf)), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_1__pf);
			}
		case 3:
			{
				b0l__Temp_string_Variable__pf = FString(TEXT("Do recruitment 3 times."));
				b0l__Temp_string_Variable_1__pf = FString(TEXT("Work 2 times"));
				b0l__Temp_string_Variable_2__pf = FString(TEXT("Watering 6 plants."));
				b0l__Temp_string_Variable_6__pf = FString(TEXT("3"));
				b0l__Temp_string_Variable_7__pf = FString(TEXT("2"));
				b0l__Temp_string_Variable_8__pf = FString(TEXT("6"));
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value__pf);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("1: ")), TSwitchValue<int32 , FString >(b0l__Temp_int_Variable__pf, b0l__K2Node_Select_Default__pf, 3, TSwitchPair<int32 , FString >(0, b0l__Temp_string_Variable_2__pf), TSwitchPair<int32 , FString >(1, b0l__Temp_string_Variable_1__pf), TSwitchPair<int32 , FString >(2, b0l__Temp_string_Variable__pf)));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, FString(TEXT("  ")));
				bpfv__CallFunc_FTrunc_ReturnValue_1__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value_1__pf);
				b0l__Temp_int_Variable_2__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_1__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_1__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_2__pf, FString(TEXT("/")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_3__pf, TSwitchValue<int32 , FString >(b0l__Temp_int_Variable_2__pf, b0l__K2Node_Select_Default_2__pf, 3, TSwitchPair<int32 , FString >(0, b0l__Temp_string_Variable_8__pf), TSwitchPair<int32 , FString >(1, b0l__Temp_string_Variable_7__pf), TSwitchPair<int32 , FString >(2, b0l__Temp_string_Variable_6__pf)));
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_FTrunc_ReturnValue__pf, 3);
				bpfv__CallFunc_SelectString_ReturnValue_2__pf = UKismetMathLibrary::SelectString(bpfv__CallFunc_Concat_StrStr_ReturnValue_4__pf, FString(TEXT("")), bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf);
				bpv__Quest1_Text__pf = bpfv__CallFunc_SelectString_ReturnValue_2__pf;
			}
		case 4:
			{
				b0l__Temp_string_Variable_12__pf = FString(TEXT("PRESENT"));
				b0l__Temp_string_Variable_13__pf = FString(TEXT("COFFE"));
				b0l__Temp_string_Variable_14__pf = FString(TEXT("REPAIR"));
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value__pf);
				b0l__Temp_int_Variable_4__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(TSwitchValue<int32 , FString >(b0l__Temp_int_Variable_4__pf, b0l__K2Node_Select_Default_4__pf, 3, TSwitchPair<int32 , FString >(0, b0l__Temp_string_Variable_14__pf), TSwitchPair<int32 , FString >(1, b0l__Temp_string_Variable_13__pf), TSwitchPair<int32 , FString >(2, b0l__Temp_string_Variable_12__pf)), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_2__pf);
			}
		case 5:
			{
				b0l__Temp_string_Variable_9__pf = FString(TEXT("Present 2 projects."));
				b0l__Temp_string_Variable_10__pf = FString(TEXT("Make coffee 3 times."));
				b0l__Temp_string_Variable_11__pf = FString(TEXT("Repair 3 broken items."));
				b0l__Temp_string_Variable_15__pf = FString(TEXT("2"));
				b0l__Temp_string_Variable_16__pf = FString(TEXT("3"));
				b0l__Temp_string_Variable_17__pf = FString(TEXT("3"));
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value__pf);
				b0l__Temp_int_Variable_3__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
				bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("2: ")), TSwitchValue<int32 , FString >(b0l__Temp_int_Variable_3__pf, b0l__K2Node_Select_Default_3__pf, 3, TSwitchPair<int32 , FString >(0, b0l__Temp_string_Variable_11__pf), TSwitchPair<int32 , FString >(1, b0l__Temp_string_Variable_10__pf), TSwitchPair<int32 , FString >(2, b0l__Temp_string_Variable_9__pf)));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_5__pf, FString(TEXT("  ")));
				b0l__Temp_int_Variable_5__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
				bpfv__CallFunc_FTrunc_ReturnValue_2__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value_2__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_2__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_6__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_1__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_9__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_7__pf, FString(TEXT("/")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_11__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_9__pf, TSwitchValue<int32 , FString >(b0l__Temp_int_Variable_5__pf, b0l__K2Node_Select_Default_5__pf, 3, TSwitchPair<int32 , FString >(0, b0l__Temp_string_Variable_17__pf), TSwitchPair<int32 , FString >(1, b0l__Temp_string_Variable_16__pf), TSwitchPair<int32 , FString >(2, b0l__Temp_string_Variable_15__pf)));
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpfv__CallFunc_FTrunc_ReturnValue__pf, 3);
				bpfv__CallFunc_SelectString_ReturnValue__pf = UKismetMathLibrary::SelectString(bpfv__CallFunc_Concat_StrStr_ReturnValue_11__pf, FString(TEXT("")), bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf);
				bpv__Quest2_Text__pf = bpfv__CallFunc_SelectString_ReturnValue__pf;
			}
		case 6:
			{
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_FTrunc_ReturnValue__pf, 2);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				b0l__Temp_string_Variable_21__pf = FString(TEXT("SHARE"));
				b0l__Temp_string_Variable_22__pf = FString(TEXT(""));
				b0l__Temp_string_Variable_23__pf = FString(TEXT(""));
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value__pf);
				b0l__Temp_int_Variable_7__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(TSwitchValue<int32 , FString >(b0l__Temp_int_Variable_7__pf, b0l__K2Node_Select_Default_7__pf, 3, TSwitchPair<int32 , FString >(0, b0l__Temp_string_Variable_23__pf), TSwitchPair<int32 , FString >(1, b0l__Temp_string_Variable_22__pf), TSwitchPair<int32 , FString >(2, b0l__Temp_string_Variable_21__pf)), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_3__pf);
			}
		case 8:
			{
				b0l__Temp_string_Variable_18__pf = FString(TEXT("Predict company stock."));
				b0l__Temp_string_Variable_19__pf = FString(TEXT(""));
				b0l__Temp_string_Variable_20__pf = FString(TEXT(""));
				b0l__Temp_string_Variable_24__pf = FString(TEXT("1"));
				b0l__Temp_string_Variable_25__pf = FString(TEXT(""));
				b0l__Temp_string_Variable_26__pf = FString(TEXT(""));
				bpfv__CallFunc_FTrunc_ReturnValue__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value__pf);
				b0l__Temp_int_Variable_6__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
				bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("3: ")), TSwitchValue<int32 , FString >(b0l__Temp_int_Variable_6__pf, b0l__K2Node_Select_Default_6__pf, 3, TSwitchPair<int32 , FString >(0, b0l__Temp_string_Variable_20__pf), TSwitchPair<int32 , FString >(1, b0l__Temp_string_Variable_19__pf), TSwitchPair<int32 , FString >(2, b0l__Temp_string_Variable_18__pf)));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_10__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_8__pf, FString(TEXT("  ")));
				b0l__Temp_int_Variable_8__pf = bpfv__CallFunc_FTrunc_ReturnValue__pf;
				bpfv__CallFunc_FTrunc_ReturnValue_3__pf = UKismetMathLibrary::FTrunc(b0l__CallFunc_ReadStats_Value_3__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_FTrunc_ReturnValue_3__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(0, bpfv__CallFunc_FTrunc_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_12__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_10__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue_2__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue_13__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_12__pf, FString(TEXT("/")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue_14__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue_13__pf, TSwitchValue<int32 , FString >(b0l__Temp_int_Variable_8__pf, b0l__K2Node_Select_Default_8__pf, 3, TSwitchPair<int32 , FString >(0, b0l__Temp_string_Variable_26__pf), TSwitchPair<int32 , FString >(1, b0l__Temp_string_Variable_25__pf), TSwitchPair<int32 , FString >(2, b0l__Temp_string_Variable_24__pf)));
				bpfv__CallFunc_SelectString_ReturnValue_1__pf = UKismetMathLibrary::SelectString(bpfv__CallFunc_Concat_StrStr_ReturnValue_14__pf, FString(TEXT("")), bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				bpv__Quest3_Text__pf = bpfv__CallFunc_SelectString_ReturnValue_1__pf;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				__CurrentState = 10;
				break;
			}
		case 10:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__ReadStats__pf(FString(TEXT("CCEEOO")), false, this, /*out*/ b0l__CallFunc_ReadStats_Value_4__pf);
			}
		case 11:
			{
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(b0l__CallFunc_ReadStats_Value_4__pf, 1.000000);
				if (!bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 1;
					break;
				}
			}
		case 12:
			{
				if(::IsValid(bpv__Quest3__pf))
				{
					bpv__Quest3__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Quest2__pf))
				{
					bpv__Quest2__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Quest1__pf))
				{
					bpv__Quest1__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 13:
			{
				if(::IsValid(bpv__Prom__pf))
				{
					bpv__Prom__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__CEO__pf))
				{
					bpv__CEO__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UQuestUI_C__pf2748595663::bpf__OnInitialized__pf()
{
	bpf__ExecuteUbergraph_QuestUI__pf_0(14);
}
void UQuestUI_C__pf2748595663::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_QuestUI__pf_1(9);
}
PRAGMA_DISABLE_OPTIMIZATION
void UQuestUI_C__pf2748595663::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/QuestBG.QuestBG 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UQuestUI_C__pf2748595663::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
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
struct FRegisterHelper__UQuestUI_C__pf2748595663
{
	FRegisterHelper__UQuestUI_C__pf2748595663()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/Ingame/StatsUI/QuestUI"), &UQuestUI_C__pf2748595663::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UQuestUI_C__pf2748595663 Instance;
};
FRegisterHelper__UQuestUI_C__pf2748595663 FRegisterHelper__UQuestUI_C__pf2748595663::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
