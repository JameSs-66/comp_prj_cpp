#include "NativizedAssets.h"
#include "ALL__pf1007151779.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/ScaleBox.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/Engine/Font.h"
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
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UALL_C__pf1007151779::UALL_C__pf1007151779(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Background__pf = nullptr;
	bpv__CEO__pf = nullptr;
	bpv__Director__pf = nullptr;
	bpv__Employee__pf = nullptr;
	bpv__exitMAINMEAU__pf = nullptr;
	bpv__exp__pf = nullptr;
	bpv__Janitor__pf = nullptr;
	bpv__learn__pf = nullptr;
	bpv__logo__pf = nullptr;
	bpv__LOGOWORKPLAN__pf = nullptr;
	bpv__manager__pf = nullptr;
	bpv__promote__pf = nullptr;
	bpv__workplan__pf = nullptr;
	bpv__Isopenpromote__pf = false;
	bpv__Isopenworkplan__pf = false;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UALL_C__pf1007151779::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UALL_C__pf1007151779::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("pomote_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("wokedplans_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	auto __Local__4 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("promote1_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__4);
	auto __Local__5 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("workla_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__5);
	auto __Local__6 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("exitla_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__6);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(9);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 9);
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[0];
	__Local__7.ComponentPropertyName = FName(TEXT("workplan"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[1];
	__Local__8.ComponentPropertyName = FName(TEXT("workplan"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__9 = __Local__0->ComponentDelegateBindings[2];
	__Local__9.ComponentPropertyName = FName(TEXT("workplan"));
	__Local__9.DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__9.FunctionNameToBind = FName(TEXT("BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__10 = __Local__0->ComponentDelegateBindings[3];
	__Local__10.ComponentPropertyName = FName(TEXT("exitMAINMEAU"));
	__Local__10.DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__10.FunctionNameToBind = FName(TEXT("BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__11 = __Local__0->ComponentDelegateBindings[4];
	__Local__11.ComponentPropertyName = FName(TEXT("exitMAINMEAU"));
	__Local__11.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__11.FunctionNameToBind = FName(TEXT("BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__12 = __Local__0->ComponentDelegateBindings[5];
	__Local__12.ComponentPropertyName = FName(TEXT("exitMAINMEAU"));
	__Local__12.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__12.FunctionNameToBind = FName(TEXT("BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__13 = __Local__0->ComponentDelegateBindings[6];
	__Local__13.ComponentPropertyName = FName(TEXT("promote"));
	__Local__13.DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__13.FunctionNameToBind = FName(TEXT("BndEvt__ALL_promote_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__14 = __Local__0->ComponentDelegateBindings[7];
	__Local__14.ComponentPropertyName = FName(TEXT("promote"));
	__Local__14.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__14.FunctionNameToBind = FName(TEXT("BndEvt__ALL_promote_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__15 = __Local__0->ComponentDelegateBindings[8];
	__Local__15.ComponentPropertyName = FName(TEXT("promote"));
	__Local__15.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__15.FunctionNameToBind = FName(TEXT("BndEvt__ALL_promote_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__16 = NewObject<UScaleBox>(__Local__1, TEXT("ScaleBox_1"), (EObjectFlags)0x00280008);
	auto& __Local__17 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__16), UPanelWidget::__PPO__Slots() )));
	__Local__17 = TArray<UPanelSlot*> ();
	__Local__17.Reserve(1);
	auto __Local__18 = NewObject<UScaleBoxSlot>(__Local__16, TEXT("ScaleBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__18->Parent = __Local__16;
	auto __Local__19 = NewObject<USizeBox>(__Local__1, TEXT("SizeBox_2"), (EObjectFlags)0x00280008);
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__19), UPanelWidget::__PPO__Slots() )));
	__Local__20 = TArray<UPanelSlot*> ();
	__Local__20.Reserve(1);
	auto __Local__21 = NewObject<USizeBoxSlot>(__Local__19, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__21->Parent = __Local__19;
	auto __Local__22 = NewObject<UCanvasPanel>(__Local__1, TEXT("main"), (EObjectFlags)0x00280008);
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__22), UPanelWidget::__PPO__Slots() )));
	__Local__23 = TArray<UPanelSlot*> ();
	__Local__23.Reserve(3);
	auto __Local__24 = NewObject<UCanvasPanelSlot>(__Local__22, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__24->LayoutData.Offsets.Left = -506.000031f;
	__Local__24->LayoutData.Offsets.Top = -505.200012f;
	__Local__24->LayoutData.Offsets.Bottom = -447.037018f;
	__Local__24->LayoutData.Anchors.Minimum = FVector2D(0.300000, 0.300000);
	__Local__24->LayoutData.Anchors.Maximum = FVector2D(0.300000, 0.300000);
	__Local__24->bAutoSize = true;
	__Local__24->Parent = __Local__22;
	auto __Local__25 = NewObject<UCanvasPanel>(__Local__1, TEXT("MAINMEAU"), (EObjectFlags)0x00280008);
	auto& __Local__26 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__25), UPanelWidget::__PPO__Slots() )));
	__Local__26 = TArray<UPanelSlot*> ();
	__Local__26.Reserve(4);
	auto __Local__27 = NewObject<UCanvasPanelSlot>(__Local__25, TEXT("CanvasPanelSlot_6"), (EObjectFlags)0x00280008);
	__Local__27->LayoutData.Offsets.Left = -850.000000f;
	__Local__27->LayoutData.Offsets.Top = -850.000000f;
	__Local__27->LayoutData.Offsets.Bottom = -251.481476f;
	__Local__27->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__27->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__27->bAutoSize = true;
	__Local__27->Parent = __Local__25;
	auto __Local__28 = NewObject<UImage>(__Local__1, TEXT("Background"), (EObjectFlags)0x00280008);
	__Local__28->Brush.ImageSize = FVector2D(1920.000000, 1080.000000);
	auto& __Local__29 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__29 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__26.Add(__Local__27);
	auto __Local__30 = NewObject<UCanvasPanelSlot>(__Local__25, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__30->LayoutData.Offsets.Left = -618.000000f;
	__Local__30->LayoutData.Offsets.Top = -78.000000f;
	__Local__30->LayoutData.Offsets.Right = 436.336365f;
	__Local__30->LayoutData.Offsets.Bottom = 138.108109f;
	__Local__30->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__30->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__30->Parent = __Local__25;
	auto __Local__31 = NewObject<UButton>(__Local__1, TEXT("workplan"), (EObjectFlags)0x00280008);
	__Local__31->WidgetStyle.Normal.ImageSize = FVector2D(418.000000, 137.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__31->WidgetStyle.Hovered.ImageSize = FVector2D(418.000000, 137.000000);
	auto& __Local__33 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__33 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__31->WidgetStyle.Pressed.ImageSize = FVector2D(418.000000, 137.000000);
	auto& __Local__34 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__34 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__31->WidgetStyle.Disabled.ImageSize = FVector2D(418.000000, 137.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__35 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__26.Add(__Local__30);
	auto __Local__36 = NewObject<UCanvasPanelSlot>(__Local__25, TEXT("CanvasPanelSlot_7"), (EObjectFlags)0x00280008);
	__Local__36->LayoutData.Offsets.Left = -270.000031f;
	__Local__36->LayoutData.Offsets.Top = 3.991992f;
	__Local__36->LayoutData.Offsets.Right = 436.088409f;
	__Local__36->LayoutData.Offsets.Bottom = 144.390579f;
	__Local__36->LayoutData.Anchors.Minimum = FVector2D(0.300000, 0.300000);
	__Local__36->LayoutData.Anchors.Maximum = FVector2D(0.300000, 0.300000);
	__Local__36->Parent = __Local__25;
	auto __Local__37 = NewObject<UButton>(__Local__1, TEXT("promote"), (EObjectFlags)0x00280008);
	__Local__37->WidgetStyle.Normal.ImageSize = FVector2D(508.000000, 165.000000);
	auto& __Local__38 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__38 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__37->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__37->WidgetStyle.Hovered.ImageSize = FVector2D(508.000000, 165.000000);
	auto& __Local__39 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__39 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__37->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__37->WidgetStyle.Pressed.ImageSize = FVector2D(508.000000, 165.000000);
	auto& __Local__40 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__40 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__37->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__37->WidgetStyle.Disabled.ImageSize = FVector2D(508.000000, 165.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__41 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__26.Add(__Local__36);
	auto __Local__42 = NewObject<UCanvasPanelSlot>(__Local__25, TEXT("CanvasPanelSlot_13"), (EObjectFlags)0x00280008);
	__Local__42->LayoutData.Offsets.Left = 926.000000f;
	__Local__42->LayoutData.Offsets.Top = -122.000031f;
	__Local__42->LayoutData.Offsets.Right = 145.326065f;
	__Local__42->LayoutData.Offsets.Bottom = 178.954819f;
	__Local__42->LayoutData.Anchors.Minimum = FVector2D(0.300000, 0.300000);
	__Local__42->LayoutData.Anchors.Maximum = FVector2D(0.300000, 0.300000);
	__Local__42->Parent = __Local__25;
	auto __Local__43 = NewObject<UButton>(__Local__1, TEXT("exitMAINMEAU"), (EObjectFlags)0x00280008);
	__Local__43->WidgetStyle.Normal.ImageSize = FVector2D(405.000000, 144.000000);
	auto& __Local__44 = (*(AccessPrivateProperty<UObject* >(&(__Local__43->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__44 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__43->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__43->WidgetStyle.Hovered.ImageSize = FVector2D(405.000000, 144.000000);
	auto& __Local__45 = (*(AccessPrivateProperty<UObject* >(&(__Local__43->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__45 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__43->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__43->WidgetStyle.Pressed.ImageSize = FVector2D(405.000000, 144.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<UObject* >(&(__Local__43->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__46 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__43->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__26.Add(__Local__42);
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__23.Add(__Local__24);
	auto __Local__47 = NewObject<UCanvasPanelSlot>(__Local__22, TEXT("CanvasPanelSlot_0"), (EObjectFlags)0x00280008);
	__Local__47->LayoutData.Offsets.Top = 4.000000f;
	__Local__47->LayoutData.Offsets.Right = 1701.458618f;
	__Local__47->LayoutData.Offsets.Bottom = 1682.080566f;
	__Local__47->Parent = __Local__22;
	auto __Local__48 = NewObject<UCanvasPanel>(__Local__1, TEXT("infopromote"), (EObjectFlags)0x00280008);
	auto& __Local__49 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__48), UPanelWidget::__PPO__Slots() )));
	__Local__49 = TArray<UPanelSlot*> ();
	__Local__49.Reserve(3);
	auto __Local__50 = NewObject<UCanvasPanelSlot>(__Local__48, TEXT("CanvasPanelSlot_19"), (EObjectFlags)0x00280008);
	__Local__50->LayoutData.Offsets.Left = 133.270691f;
	__Local__50->LayoutData.Offsets.Top = -117.040283f;
	__Local__50->LayoutData.Offsets.Right = 285.268616f;
	__Local__50->LayoutData.Offsets.Bottom = 90.992813f;
	__Local__50->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__50->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__50->Parent = __Local__48;
	auto __Local__51 = NewObject<UImage>(__Local__1, TEXT("exp"), (EObjectFlags)0x00280008);
	__Local__51->Brush.ImageSize = FVector2D(390.000000, 108.000000);
	auto& __Local__52 = (*(AccessPrivateProperty<UObject* >(&(__Local__51->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__52 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__51->Slot = __Local__50;
	__Local__51->bIsEnabled = false;
	__Local__50->Content = __Local__51;
	__Local__49.Add(__Local__50);
	auto __Local__53 = NewObject<UCanvasPanelSlot>(__Local__48, TEXT("CanvasPanelSlot_23"), (EObjectFlags)0x00280008);
	__Local__53->LayoutData.Offsets.Left = 105.270691f;
	__Local__53->LayoutData.Offsets.Top = -309.040283f;
	__Local__53->LayoutData.Offsets.Right = 354.766693f;
	__Local__53->LayoutData.Offsets.Bottom = 143.330872f;
	__Local__53->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__53->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__53->Parent = __Local__48;
	auto __Local__54 = NewObject<UImage>(__Local__1, TEXT("logo"), (EObjectFlags)0x00280008);
	__Local__54->Brush.ImageSize = FVector2D(2232.000000, 909.000000);
	auto& __Local__55 = (*(AccessPrivateProperty<UObject* >(&(__Local__54->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__55 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__54->Slot = __Local__53;
	__Local__54->bIsEnabled = false;
	__Local__53->Content = __Local__54;
	__Local__49.Add(__Local__53);
	auto __Local__56 = NewObject<UCanvasPanelSlot>(__Local__48, TEXT("CanvasPanelSlot_21"), (EObjectFlags)0x00280008);
	__Local__56->LayoutData.Offsets.Left = 133.270691f;
	__Local__56->LayoutData.Offsets.Top = 66.959717f;
	__Local__56->LayoutData.Offsets.Right = 263.818604f;
	__Local__56->LayoutData.Offsets.Bottom = 100.430824f;
	__Local__56->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__56->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__56->Parent = __Local__48;
	auto __Local__57 = NewObject<UImage>(__Local__1, TEXT("learn"), (EObjectFlags)0x00280008);
	__Local__57->Brush.ImageSize = FVector2D(267.000000, 120.000000);
	auto& __Local__58 = (*(AccessPrivateProperty<UObject* >(&(__Local__57->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__58 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__57->Slot = __Local__56;
	__Local__57->bIsEnabled = false;
	__Local__56->Content = __Local__57;
	__Local__49.Add(__Local__56);
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__23.Add(__Local__47);
	auto __Local__59 = NewObject<UCanvasPanelSlot>(__Local__22, TEXT("CanvasPanelSlot_9"), (EObjectFlags)0x00280008);
	__Local__59->LayoutData.Offsets.Left = 857.562378f;
	__Local__59->LayoutData.Offsets.Top = 3.723694f;
	__Local__59->LayoutData.Offsets.Right = -496.571533f;
	__Local__59->LayoutData.Offsets.Bottom = 708.163513f;
	__Local__59->LayoutData.Anchors.Minimum = FVector2D(0.300000, 0.300000);
	__Local__59->LayoutData.Anchors.Maximum = FVector2D(0.300000, 0.300000);
	__Local__59->Parent = __Local__22;
	auto __Local__60 = NewObject<UCanvasPanel>(__Local__1, TEXT("workplanlana"), (EObjectFlags)0x00280008);
	auto& __Local__61 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__60), UPanelWidget::__PPO__Slots() )));
	__Local__61 = TArray<UPanelSlot*> ();
	__Local__61.Reserve(6);
	auto __Local__62 = NewObject<UCanvasPanelSlot>(__Local__60, TEXT("CanvasPanelSlot_48"), (EObjectFlags)0x00280008);
	__Local__62->LayoutData.Offsets.Left = -159.714233f;
	__Local__62->LayoutData.Offsets.Top = -346.081757f;
	__Local__62->LayoutData.Offsets.Right = 354.766693f;
	__Local__62->LayoutData.Offsets.Bottom = 143.330872f;
	__Local__62->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__62->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__62->Parent = __Local__60;
	auto __Local__63 = NewObject<UImage>(__Local__1, TEXT("LOGOWORKPLAN"), (EObjectFlags)0x00280008);
	__Local__63->Brush.ImageSize = FVector2D(418.000000, 137.000000);
	auto& __Local__64 = (*(AccessPrivateProperty<UObject* >(&(__Local__63->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__64 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__63->Slot = __Local__62;
	__Local__63->bIsEnabled = false;
	__Local__62->Content = __Local__63;
	__Local__61.Add(__Local__62);
	auto __Local__65 = NewObject<UCanvasPanelSlot>(__Local__60, TEXT("CanvasPanelSlot_51"), (EObjectFlags)0x00280008);
	__Local__65->LayoutData.Offsets.Left = 60.571533f;
	__Local__65->LayoutData.Offsets.Top = -180.163513f;
	__Local__65->LayoutData.Offsets.Right = 341.956268f;
	__Local__65->LayoutData.Offsets.Bottom = 156.233368f;
	__Local__65->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__65->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__65->Parent = __Local__60;
	auto __Local__66 = NewObject<UImage>(__Local__1, TEXT("CEO"), (EObjectFlags)0x00280008);
	__Local__66->Brush.ImageSize = FVector2D(606.000000, 228.000000);
	auto& __Local__67 = (*(AccessPrivateProperty<UObject* >(&(__Local__66->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__67 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__66->Slot = __Local__65;
	__Local__65->Content = __Local__66;
	__Local__61.Add(__Local__65);
	auto __Local__68 = NewObject<UCanvasPanelSlot>(__Local__60, TEXT("CanvasPanelSlot_45"), (EObjectFlags)0x00280008);
	__Local__68->LayoutData.Offsets.Left = -464.000000f;
	__Local__68->LayoutData.Offsets.Top = 432.000000f;
	__Local__68->LayoutData.Offsets.Right = 377.777771f;
	__Local__68->LayoutData.Offsets.Bottom = 152.801361f;
	__Local__68->Parent = __Local__60;
	auto __Local__69 = NewObject<UImage>(__Local__1, TEXT("Director"), (EObjectFlags)0x00280008);
	__Local__69->Brush.ImageSize = FVector2D(681.000000, 219.000000);
	auto& __Local__70 = (*(AccessPrivateProperty<UObject* >(&(__Local__69->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__70 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__69->Slot = __Local__68;
	__Local__68->Content = __Local__69;
	__Local__61.Add(__Local__68);
	auto __Local__71 = NewObject<UCanvasPanelSlot>(__Local__60, TEXT("CanvasPanelSlot_44"), (EObjectFlags)0x00280008);
	__Local__71->LayoutData.Offsets.Left = 68.571533f;
	__Local__71->LayoutData.Offsets.Top = -376.163513f;
	__Local__71->LayoutData.Offsets.Right = 318.682983f;
	__Local__71->LayoutData.Offsets.Bottom = 142.719864f;
	__Local__71->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__71->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__71->Parent = __Local__60;
	auto __Local__72 = NewObject<UImage>(__Local__1, TEXT("manager"), (EObjectFlags)0x00280008);
	__Local__72->Brush.ImageSize = FVector2D(552.000000, 207.000000);
	auto& __Local__73 = (*(AccessPrivateProperty<UObject* >(&(__Local__72->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__73 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__72->Slot = __Local__71;
	__Local__71->Content = __Local__72;
	__Local__61.Add(__Local__71);
	auto __Local__74 = NewObject<UCanvasPanelSlot>(__Local__60, TEXT("CanvasPanelSlot_32"), (EObjectFlags)0x00280008);
	__Local__74->LayoutData.Offsets.Left = -468.000000f;
	__Local__74->LayoutData.Offsets.Top = 228.000000f;
	__Local__74->LayoutData.Offsets.Right = 376.276276f;
	__Local__74->LayoutData.Offsets.Bottom = 162.132126f;
	__Local__74->Parent = __Local__60;
	auto __Local__75 = NewObject<UImage>(__Local__1, TEXT("Employee"), (EObjectFlags)0x00280008);
	__Local__75->Brush.ImageSize = FVector2D(624.000000, 243.000000);
	auto& __Local__76 = (*(AccessPrivateProperty<UObject* >(&(__Local__75->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__76 = CastChecked<UObject>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__75->Slot = __Local__74;
	__Local__74->Content = __Local__75;
	__Local__61.Add(__Local__74);
	auto __Local__77 = NewObject<UCanvasPanelSlot>(__Local__60, TEXT("CanvasPanelSlot_47"), (EObjectFlags)0x00280008);
	__Local__77->LayoutData.Offsets.Left = 44.657410f;
	__Local__77->LayoutData.Offsets.Top = -556.163513f;
	__Local__77->LayoutData.Offsets.Right = 321.221252f;
	__Local__77->LayoutData.Offsets.Bottom = 128.241089f;
	__Local__77->LayoutData.Anchors.Minimum = FVector2D(0.967952, 1.000000);
	__Local__77->LayoutData.Anchors.Maximum = FVector2D(0.967952, 1.000000);
	__Local__77->Parent = __Local__60;
	auto __Local__78 = NewObject<UImage>(__Local__1, TEXT("Janitor"), (EObjectFlags)0x00280008);
	__Local__78->Brush.ImageSize = FVector2D(504.000000, 174.000000);
	__Local__78->Slot = __Local__77;
	__Local__77->Content = __Local__78;
	__Local__61.Add(__Local__77);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__23.Add(__Local__59);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__20.Add(__Local__21);
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__17.Add(__Local__18);
	__Local__1->RootWidget = __Local__16;
	auto __Local__79 = NewObject<UMovieScene>(__Local__2, TEXT("pomote"), (EObjectFlags)0x00280008);
	auto& __Local__80 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__79), UMovieScene::__PPO__Possessables() )));
	__Local__80 = TArray<FMovieScenePossessable> ();
	__Local__80.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__80.GetData(), 1);
	auto& __Local__81 = __Local__80[0];
	auto& __Local__82 = (*(AccessPrivateProperty<FGuid >(&(__Local__81), FMovieScenePossessable::__PPO__Guid() )));
	__Local__82 = FGuid(0x5244F867, 0x45982000, 0x0071A898, 0xEFCB3206);
	auto& __Local__83 = (*(AccessPrivateProperty<FString >(&(__Local__81), FMovieScenePossessable::__PPO__Name() )));
	__Local__83 = FString(TEXT("promote"));
	auto& __Local__84 = (*(AccessPrivateProperty<UClass* >(&(__Local__81), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__84 = UButton::StaticClass();
	auto& __Local__85 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__79), UMovieScene::__PPO__ObjectBindings() )));
	__Local__85 = TArray<FMovieSceneBinding> ();
	__Local__85.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__85.GetData(), 1);
	auto& __Local__86 = __Local__85[0];
	auto& __Local__87 = (*(AccessPrivateProperty<FGuid >(&(__Local__86), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__87 = FGuid(0x5244F867, 0x45982000, 0x0071A898, 0xEFCB3206);
	auto& __Local__88 = (*(AccessPrivateProperty<FString >(&(__Local__86), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__88 = FString(TEXT("promote"));
	auto& __Local__89 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__86), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__89 = TArray<UMovieSceneTrack*> ();
	__Local__89.Reserve(1);
	auto __Local__90 = NewObject<UMovieScene2DTransformTrack>(__Local__79, TEXT("MovieScene2DTransformTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__91 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__90), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__91.PropertyName = FName(TEXT("RenderTransform"));
	__Local__91.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__91.bCanUseClassLookup = true;
	auto& __Local__92 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__90), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__92 = TArray<UMovieSceneSection*> ();
	__Local__92.Reserve(1);
	auto __Local__93 = NewObject<UMovieScene2DTransformSection>(__Local__90, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__94 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__93->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__95 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__93->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__94)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__95)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__96 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__93->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__96 = TArray<FFrameNumber> ();
	__Local__96.Reserve(1);
	__Local__96.Add(FFrameNumber{});
	__Local__96[0].Value = 15000;
	auto& __Local__97 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__93->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__97 = TArray<FMovieSceneFloatValue> ();
	__Local__97.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__97.GetData(), 1);
	auto& __Local__98 = __Local__97[0];
	auto& __Local__99 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__93->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__99 = TArray<FFrameNumber> ();
	__Local__99.Reserve(1);
	__Local__99.Add(FFrameNumber{});
	__Local__99[0].Value = 15000;
	auto& __Local__100 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__93->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__100 = TArray<FMovieSceneFloatValue> ();
	__Local__100.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__100.GetData(), 1);
	auto& __Local__101 = __Local__100[0];
	auto& __Local__102 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__93->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__102 = TArray<FFrameNumber> ();
	__Local__102.Reserve(1);
	__Local__102.Add(FFrameNumber{});
	__Local__102[0].Value = 15000;
	auto& __Local__103 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__93->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__103 = TArray<FMovieSceneFloatValue> ();
	__Local__103.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__103.GetData(), 1);
	auto& __Local__104 = __Local__103[0];
	auto& __Local__105 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__93->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__105 = TArray<FFrameNumber> ();
	__Local__105.Reserve(2);
	__Local__105.Add(FFrameNumber{});
	__Local__105[0].Value = 500;
	__Local__105.Add(FFrameNumber{});
	__Local__105[1].Value = 15000;
	auto& __Local__106 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__93->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__106 = TArray<FMovieSceneFloatValue> ();
	__Local__106.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__106.GetData(), 2);
	auto& __Local__107 = __Local__106[0];
	__Local__107.Value = 1.000000f;
	auto& __Local__108 = __Local__106[1];
	__Local__108.Value = 1.121006f;
	auto& __Local__109 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__93->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__109 = TArray<FFrameNumber> ();
	__Local__109.Reserve(2);
	__Local__109.Add(FFrameNumber{});
	__Local__109[0].Value = 500;
	__Local__109.Add(FFrameNumber{});
	__Local__109[1].Value = 15000;
	auto& __Local__110 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__93->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__110 = TArray<FMovieSceneFloatValue> ();
	__Local__110.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__110.GetData(), 2);
	auto& __Local__111 = __Local__110[0];
	__Local__111.Value = 1.000000f;
	auto& __Local__112 = __Local__110[1];
	__Local__112.Value = 1.121006f;
	auto& __Local__113 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__93->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__113 = TArray<FFrameNumber> ();
	__Local__113.Reserve(1);
	__Local__113.Add(FFrameNumber{});
	__Local__113[0].Value = 15000;
	auto& __Local__114 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__93->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__114 = TArray<FMovieSceneFloatValue> ();
	__Local__114.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__114.GetData(), 1);
	auto& __Local__115 = __Local__114[0];
	auto& __Local__116 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__93->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__116 = TArray<FFrameNumber> ();
	__Local__116.Reserve(1);
	__Local__116.Add(FFrameNumber{});
	__Local__116[0].Value = 15000;
	auto& __Local__117 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__93->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__117 = TArray<FMovieSceneFloatValue> ();
	__Local__117.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__117.GetData(), 1);
	auto& __Local__118 = __Local__117[0];
	__Local__93->Easing.EaseIn = __Local__94;
	__Local__93->Easing.EaseOut = __Local__95;
	__Local__93->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__119 = (*(AccessPrivateProperty<FGuid >((__Local__93), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__119 = FGuid(0x5E2CFD6F, 0x464D6C21, 0x1CBA48B8, 0x5318535E);
	__Local__92.Add(__Local__93);
	auto& __Local__120 = (*(AccessPrivateProperty<FGuid >((__Local__90), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__120 = FGuid(0xC78E504D, 0x40BBDF2F, 0x35EB3A9D, 0xEBD53850);
	auto& __Local__121 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__90), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__121.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__121.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__121.Entries.GetData(), 1);
	auto& __Local__122 = __Local__121.Entries[0];
	__Local__122.Section = __Local__93;
	static TWeakFieldPtr<FProperty> __Local__124{};
	const FProperty* __Local__123 = __Local__124.Get();
	if (nullptr == __Local__123)
	{
		__Local__123 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__123);
		__Local__124 = __Local__123;
	}
	auto& __Local__125 = (*(__Local__123->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__122.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__127{};
	const FProperty* __Local__126 = __Local__127.Get();
	if (nullptr == __Local__126)
	{
		__Local__126 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__126);
		__Local__127 = __Local__126;
	}
	auto& __Local__128 = (*(__Local__126->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__125), 0)));
	__Local__128 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__130{};
	const FProperty* __Local__129 = __Local__130.Get();
	if (nullptr == __Local__129)
	{
		__Local__129 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__129);
		__Local__130 = __Local__129;
	}
	auto& __Local__131 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__125), 0)));
	__Local__131.Value = 500;
	static TWeakFieldPtr<FProperty> __Local__133{};
	const FProperty* __Local__132 = __Local__133.Get();
	if (nullptr == __Local__132)
	{
		__Local__132 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__132);
		__Local__133 = __Local__132;
	}
	auto& __Local__134 = (*(__Local__132->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__122.Range), 0)));
	auto& __Local__135 = (*(__Local__126->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__134), 0)));
	__Local__135 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__136 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__134), 0)));
	__Local__136.Value = 15000;
	__Local__122.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__137 = (*(AccessPrivateProperty<FGuid >((__Local__90), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__137 = FGuid(0xC78E504D, 0x40BBDF2F, 0x35EB3A9D, 0xEBD53850);
	__Local__89.Add(__Local__90);
	auto& __Local__138 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__79), UMovieScene::__PPO__PlaybackRange() )));
	__Local__138 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__139 = (*(AccessPrivateProperty<FFrameRate >((__Local__79), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__141{};
	const FProperty* __Local__140 = __Local__141.Get();
	if (nullptr == __Local__140)
	{
		__Local__140 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__140);
		__Local__141 = __Local__140;
	}
	auto& __Local__142 = (*(__Local__140->ContainerPtrToValuePtr<int32 >(&(__Local__139), 0)));
	__Local__142 = 20;
	auto& __Local__143 = (*(AccessPrivateProperty<FGuid >((__Local__79), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__143 = FGuid(0x2DA32994, 0x4D8B7FA7, 0xB8FAB29E, 0xD56E823F);
	__Local__2->MovieScene = __Local__79;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 1);
	auto& __Local__144 = __Local__2->AnimationBindings[0];
	__Local__144.WidgetName = FName(TEXT("promote"));
	__Local__144.AnimationGuid = FGuid(0x5244F867, 0x45982000, 0x0071A898, 0xEFCB3206);
	auto& __Local__145 = (*(AccessPrivateProperty<FString >((__Local__2), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__145 = FString(TEXT("pomote"));
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__146 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__146 = FGuid(0x5C8A3E84, 0x4ACDE88C, 0x3A7CDDB9, 0x0EF1C02B);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
	auto __Local__147 = NewObject<UMovieScene>(__Local__3, TEXT("wokedplans"), (EObjectFlags)0x00280008);
	auto& __Local__148 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__147), UMovieScene::__PPO__Possessables() )));
	__Local__148 = TArray<FMovieScenePossessable> ();
	__Local__148.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__148.GetData(), 1);
	auto& __Local__149 = __Local__148[0];
	auto& __Local__150 = (*(AccessPrivateProperty<FGuid >(&(__Local__149), FMovieScenePossessable::__PPO__Guid() )));
	__Local__150 = FGuid(0x10F8B629, 0x45CE4413, 0x4BFAE5B4, 0x74DC8076);
	auto& __Local__151 = (*(AccessPrivateProperty<FString >(&(__Local__149), FMovieScenePossessable::__PPO__Name() )));
	__Local__151 = FString(TEXT("workplan"));
	auto& __Local__152 = (*(AccessPrivateProperty<UClass* >(&(__Local__149), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__152 = UButton::StaticClass();
	auto& __Local__153 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__147), UMovieScene::__PPO__ObjectBindings() )));
	__Local__153 = TArray<FMovieSceneBinding> ();
	__Local__153.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__153.GetData(), 1);
	auto& __Local__154 = __Local__153[0];
	auto& __Local__155 = (*(AccessPrivateProperty<FGuid >(&(__Local__154), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__155 = FGuid(0x10F8B629, 0x45CE4413, 0x4BFAE5B4, 0x74DC8076);
	auto& __Local__156 = (*(AccessPrivateProperty<FString >(&(__Local__154), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__156 = FString(TEXT("workplan"));
	auto& __Local__157 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__154), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__157 = TArray<UMovieSceneTrack*> ();
	__Local__157.Reserve(1);
	auto __Local__158 = NewObject<UMovieScene2DTransformTrack>(__Local__147, TEXT("MovieScene2DTransformTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__159 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__158), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__159.PropertyName = FName(TEXT("RenderTransform"));
	__Local__159.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__159.bCanUseClassLookup = true;
	auto& __Local__160 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__158), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__160 = TArray<UMovieSceneSection*> ();
	__Local__160.Reserve(1);
	auto __Local__161 = NewObject<UMovieScene2DTransformSection>(__Local__158, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__162 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__161->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__163 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__161->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__162)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__163)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__164 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__164 = TArray<FFrameNumber> ();
	__Local__164.Reserve(1);
	__Local__164.Add(FFrameNumber{});
	__Local__164[0].Value = 15000;
	auto& __Local__165 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__165 = TArray<FMovieSceneFloatValue> ();
	__Local__165.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__165.GetData(), 1);
	auto& __Local__166 = __Local__165[0];
	auto& __Local__167 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__167 = TArray<FFrameNumber> ();
	__Local__167.Reserve(1);
	__Local__167.Add(FFrameNumber{});
	__Local__167[0].Value = 15000;
	auto& __Local__168 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__168 = TArray<FMovieSceneFloatValue> ();
	__Local__168.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__168.GetData(), 1);
	auto& __Local__169 = __Local__168[0];
	auto& __Local__170 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__170 = TArray<FFrameNumber> ();
	__Local__170.Reserve(1);
	__Local__170.Add(FFrameNumber{});
	__Local__170[0].Value = 15000;
	auto& __Local__171 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__171 = TArray<FMovieSceneFloatValue> ();
	__Local__171.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__171.GetData(), 1);
	auto& __Local__172 = __Local__171[0];
	auto& __Local__173 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__173 = TArray<FFrameNumber> ();
	__Local__173.Reserve(2);
	__Local__173.Add(FFrameNumber{});
	__Local__173[0].Value = 500;
	__Local__173.Add(FFrameNumber{});
	__Local__173[1].Value = 15000;
	auto& __Local__174 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__174 = TArray<FMovieSceneFloatValue> ();
	__Local__174.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__174.GetData(), 2);
	auto& __Local__175 = __Local__174[0];
	__Local__175.Value = 1.000000f;
	auto& __Local__176 = __Local__174[1];
	__Local__176.Value = 1.121006f;
	auto& __Local__177 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__177 = TArray<FFrameNumber> ();
	__Local__177.Reserve(2);
	__Local__177.Add(FFrameNumber{});
	__Local__177[0].Value = 500;
	__Local__177.Add(FFrameNumber{});
	__Local__177[1].Value = 15000;
	auto& __Local__178 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__178 = TArray<FMovieSceneFloatValue> ();
	__Local__178.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__178.GetData(), 2);
	auto& __Local__179 = __Local__178[0];
	__Local__179.Value = 1.000000f;
	auto& __Local__180 = __Local__178[1];
	__Local__180.Value = 1.121006f;
	auto& __Local__181 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__181 = TArray<FFrameNumber> ();
	__Local__181.Reserve(1);
	__Local__181.Add(FFrameNumber{});
	__Local__181[0].Value = 15000;
	auto& __Local__182 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__182 = TArray<FMovieSceneFloatValue> ();
	__Local__182.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__182.GetData(), 1);
	auto& __Local__183 = __Local__182[0];
	auto& __Local__184 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__161->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__184 = TArray<FFrameNumber> ();
	__Local__184.Reserve(1);
	__Local__184.Add(FFrameNumber{});
	__Local__184[0].Value = 15000;
	auto& __Local__185 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__161->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__185 = TArray<FMovieSceneFloatValue> ();
	__Local__185.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__185.GetData(), 1);
	auto& __Local__186 = __Local__185[0];
	__Local__161->Easing.EaseIn = __Local__162;
	__Local__161->Easing.EaseOut = __Local__163;
	__Local__161->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__187 = (*(AccessPrivateProperty<FGuid >((__Local__161), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__187 = FGuid(0xF31CBAFE, 0x4D2EACC6, 0x57AD07B5, 0x63213F74);
	__Local__160.Add(__Local__161);
	auto& __Local__188 = (*(AccessPrivateProperty<FGuid >((__Local__158), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__188 = FGuid(0x617E7A6A, 0x4072FD20, 0xCF2B08BB, 0xFF2F76C3);
	auto& __Local__189 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__158), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__189.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__189.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__189.Entries.GetData(), 1);
	auto& __Local__190 = __Local__189.Entries[0];
	__Local__190.Section = __Local__161;
	auto& __Local__191 = (*(__Local__123->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__190.Range), 0)));
	auto& __Local__192 = (*(__Local__126->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__191), 0)));
	__Local__192 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__193 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__191), 0)));
	__Local__193.Value = 500;
	auto& __Local__194 = (*(__Local__132->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__190.Range), 0)));
	auto& __Local__195 = (*(__Local__126->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__194), 0)));
	__Local__195 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__196 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__194), 0)));
	__Local__196.Value = 15000;
	__Local__190.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__197 = (*(AccessPrivateProperty<FGuid >((__Local__158), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__197 = FGuid(0x617E7A6A, 0x4072FD20, 0xCF2B08BB, 0xFF2F76C3);
	__Local__157.Add(__Local__158);
	auto& __Local__198 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__147), UMovieScene::__PPO__PlaybackRange() )));
	__Local__198 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__199 = (*(AccessPrivateProperty<FFrameRate >((__Local__147), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__200 = (*(__Local__140->ContainerPtrToValuePtr<int32 >(&(__Local__199), 0)));
	__Local__200 = 20;
	auto& __Local__201 = (*(AccessPrivateProperty<FGuid >((__Local__147), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__201 = FGuid(0x75ADF3AB, 0x4B2BC29F, 0x927E509F, 0xD744F65E);
	__Local__3->MovieScene = __Local__147;
	__Local__3->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__3->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__3->AnimationBindings.GetData(), 1);
	auto& __Local__202 = __Local__3->AnimationBindings[0];
	__Local__202.WidgetName = FName(TEXT("workplan"));
	__Local__202.AnimationGuid = FGuid(0x10F8B629, 0x45CE4413, 0x4BFAE5B4, 0x74DC8076);
	auto& __Local__203 = (*(AccessPrivateProperty<FString >((__Local__3), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__203 = FString(TEXT("wokedplans"));
	__Local__3->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__204 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__204 = FGuid(0x1672C8DC, 0x489876B4, 0x37571282, 0xF8BDB6A6);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__3);
	auto __Local__205 = NewObject<UMovieScene>(__Local__4, TEXT("promote1"), (EObjectFlags)0x00280008);
	auto& __Local__206 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__205), UMovieScene::__PPO__Possessables() )));
	__Local__206 = TArray<FMovieScenePossessable> ();
	__Local__206.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__206.GetData(), 1);
	auto& __Local__207 = __Local__206[0];
	auto& __Local__208 = (*(AccessPrivateProperty<FGuid >(&(__Local__207), FMovieScenePossessable::__PPO__Guid() )));
	__Local__208 = FGuid(0x61C1BBC6, 0x40683D91, 0x80956584, 0xDE764DA1);
	auto& __Local__209 = (*(AccessPrivateProperty<FString >(&(__Local__207), FMovieScenePossessable::__PPO__Name() )));
	__Local__209 = FString(TEXT("promote_1"));
	auto& __Local__210 = (*(AccessPrivateProperty<UClass* >(&(__Local__207), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__210 = UButton::StaticClass();
	auto& __Local__211 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__205), UMovieScene::__PPO__ObjectBindings() )));
	__Local__211 = TArray<FMovieSceneBinding> ();
	__Local__211.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__211.GetData(), 1);
	auto& __Local__212 = __Local__211[0];
	auto& __Local__213 = (*(AccessPrivateProperty<FGuid >(&(__Local__212), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__213 = FGuid(0x61C1BBC6, 0x40683D91, 0x80956584, 0xDE764DA1);
	auto& __Local__214 = (*(AccessPrivateProperty<FString >(&(__Local__212), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__214 = FString(TEXT("promote_1"));
	auto& __Local__215 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__212), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__215 = TArray<UMovieSceneTrack*> ();
	__Local__215.Reserve(1);
	auto __Local__216 = NewObject<UMovieScene2DTransformTrack>(__Local__205, TEXT("MovieScene2DTransformTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__217 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__216), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__217.PropertyName = FName(TEXT("RenderTransform"));
	__Local__217.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__217.bCanUseClassLookup = true;
	auto& __Local__218 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__216), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__218 = TArray<UMovieSceneSection*> ();
	__Local__218.Reserve(1);
	auto __Local__219 = NewObject<UMovieScene2DTransformSection>(__Local__216, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__220 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__219->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__221 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__219->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__220)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__221)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__222 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__219->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__222 = TArray<FFrameNumber> ();
	__Local__222.Reserve(1);
	__Local__222.Add(FFrameNumber{});
	__Local__222[0].Value = 15000;
	auto& __Local__223 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__219->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__223 = TArray<FMovieSceneFloatValue> ();
	__Local__223.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__223.GetData(), 1);
	auto& __Local__224 = __Local__223[0];
	auto& __Local__225 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__219->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__225 = TArray<FFrameNumber> ();
	__Local__225.Reserve(1);
	__Local__225.Add(FFrameNumber{});
	__Local__225[0].Value = 15000;
	auto& __Local__226 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__219->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__226 = TArray<FMovieSceneFloatValue> ();
	__Local__226.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__226.GetData(), 1);
	auto& __Local__227 = __Local__226[0];
	auto& __Local__228 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__219->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__228 = TArray<FFrameNumber> ();
	__Local__228.Reserve(1);
	__Local__228.Add(FFrameNumber{});
	__Local__228[0].Value = 15000;
	auto& __Local__229 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__219->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__229 = TArray<FMovieSceneFloatValue> ();
	__Local__229.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__229.GetData(), 1);
	auto& __Local__230 = __Local__229[0];
	auto& __Local__231 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__219->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__231 = TArray<FFrameNumber> ();
	__Local__231.Reserve(2);
	__Local__231.Add(FFrameNumber{});
	__Local__231[0].Value = 500;
	__Local__231.Add(FFrameNumber{});
	__Local__231[1].Value = 15000;
	auto& __Local__232 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__219->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__232 = TArray<FMovieSceneFloatValue> ();
	__Local__232.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__232.GetData(), 2);
	auto& __Local__233 = __Local__232[0];
	__Local__233.Value = 1.000000f;
	auto& __Local__234 = __Local__232[1];
	__Local__234.Value = 1.121006f;
	auto& __Local__235 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__219->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__235 = TArray<FFrameNumber> ();
	__Local__235.Reserve(2);
	__Local__235.Add(FFrameNumber{});
	__Local__235[0].Value = 500;
	__Local__235.Add(FFrameNumber{});
	__Local__235[1].Value = 15000;
	auto& __Local__236 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__219->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__236 = TArray<FMovieSceneFloatValue> ();
	__Local__236.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__236.GetData(), 2);
	auto& __Local__237 = __Local__236[0];
	__Local__237.Value = 1.000000f;
	auto& __Local__238 = __Local__236[1];
	__Local__238.Value = 1.121006f;
	auto& __Local__239 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__219->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__239 = TArray<FFrameNumber> ();
	__Local__239.Reserve(1);
	__Local__239.Add(FFrameNumber{});
	__Local__239[0].Value = 15000;
	auto& __Local__240 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__219->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__240 = TArray<FMovieSceneFloatValue> ();
	__Local__240.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__240.GetData(), 1);
	auto& __Local__241 = __Local__240[0];
	auto& __Local__242 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__219->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__242 = TArray<FFrameNumber> ();
	__Local__242.Reserve(1);
	__Local__242.Add(FFrameNumber{});
	__Local__242[0].Value = 15000;
	auto& __Local__243 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__219->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__243 = TArray<FMovieSceneFloatValue> ();
	__Local__243.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__243.GetData(), 1);
	auto& __Local__244 = __Local__243[0];
	__Local__219->Easing.EaseIn = __Local__220;
	__Local__219->Easing.EaseOut = __Local__221;
	__Local__219->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__245 = (*(AccessPrivateProperty<FGuid >((__Local__219), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__245 = FGuid(0x0A8DC21E, 0x4D3C277D, 0x9A65E1B6, 0x1C41F655);
	__Local__218.Add(__Local__219);
	auto& __Local__246 = (*(AccessPrivateProperty<FGuid >((__Local__216), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__246 = FGuid(0x63BED442, 0x4C9C884C, 0x58385EB3, 0x028455A2);
	auto& __Local__247 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__216), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__247.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__247.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__247.Entries.GetData(), 1);
	auto& __Local__248 = __Local__247.Entries[0];
	__Local__248.Section = __Local__219;
	auto& __Local__249 = (*(__Local__123->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__248.Range), 0)));
	auto& __Local__250 = (*(__Local__126->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__249), 0)));
	__Local__250 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__251 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__249), 0)));
	__Local__251.Value = 500;
	auto& __Local__252 = (*(__Local__132->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__248.Range), 0)));
	auto& __Local__253 = (*(__Local__126->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__252), 0)));
	__Local__253 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__254 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__252), 0)));
	__Local__254.Value = 15000;
	__Local__248.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__255 = (*(AccessPrivateProperty<FGuid >((__Local__216), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__255 = FGuid(0x63BED442, 0x4C9C884C, 0x58385EB3, 0x028455A2);
	__Local__215.Add(__Local__216);
	auto& __Local__256 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__205), UMovieScene::__PPO__PlaybackRange() )));
	__Local__256 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__257 = (*(AccessPrivateProperty<FFrameRate >((__Local__205), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__258 = (*(__Local__140->ContainerPtrToValuePtr<int32 >(&(__Local__257), 0)));
	__Local__258 = 20;
	auto& __Local__259 = (*(AccessPrivateProperty<FGuid >((__Local__205), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__259 = FGuid(0x7C094F76, 0x4D0B8DC3, 0x4F825C9F, 0x99F2A281);
	__Local__4->MovieScene = __Local__205;
	__Local__4->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__4->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__4->AnimationBindings.GetData(), 1);
	auto& __Local__260 = __Local__4->AnimationBindings[0];
	__Local__260.WidgetName = FName(TEXT("promote_1"));
	__Local__260.AnimationGuid = FGuid(0x61C1BBC6, 0x40683D91, 0x80956584, 0xDE764DA1);
	auto& __Local__261 = (*(AccessPrivateProperty<FString >((__Local__4), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__261 = FString(TEXT("promote1"));
	__Local__4->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__262 = (*(AccessPrivateProperty<FGuid >((__Local__4), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__262 = FGuid(0x04BDD90F, 0x4805B36B, 0x89A7189E, 0x22A7460B);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__4);
	auto __Local__263 = NewObject<UMovieScene>(__Local__5, TEXT("workla"), (EObjectFlags)0x00280008);
	auto& __Local__264 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__263), UMovieScene::__PPO__Possessables() )));
	__Local__264 = TArray<FMovieScenePossessable> ();
	__Local__264.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__264.GetData(), 1);
	auto& __Local__265 = __Local__264[0];
	auto& __Local__266 = (*(AccessPrivateProperty<FGuid >(&(__Local__265), FMovieScenePossessable::__PPO__Guid() )));
	__Local__266 = FGuid(0xBB2AAB34, 0x4BA030E6, 0xBDC671BF, 0xFBF9E20E);
	auto& __Local__267 = (*(AccessPrivateProperty<FString >(&(__Local__265), FMovieScenePossessable::__PPO__Name() )));
	__Local__267 = FString(TEXT("workplan_1"));
	auto& __Local__268 = (*(AccessPrivateProperty<UClass* >(&(__Local__265), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__268 = UButton::StaticClass();
	auto& __Local__269 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__263), UMovieScene::__PPO__ObjectBindings() )));
	__Local__269 = TArray<FMovieSceneBinding> ();
	__Local__269.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__269.GetData(), 1);
	auto& __Local__270 = __Local__269[0];
	auto& __Local__271 = (*(AccessPrivateProperty<FGuid >(&(__Local__270), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__271 = FGuid(0xBB2AAB34, 0x4BA030E6, 0xBDC671BF, 0xFBF9E20E);
	auto& __Local__272 = (*(AccessPrivateProperty<FString >(&(__Local__270), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__272 = FString(TEXT("workplan_1"));
	auto& __Local__273 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__270), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__273 = TArray<UMovieSceneTrack*> ();
	__Local__273.Reserve(1);
	auto __Local__274 = NewObject<UMovieScene2DTransformTrack>(__Local__263, TEXT("MovieScene2DTransformTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__275 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__274), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__275.PropertyName = FName(TEXT("RenderTransform"));
	__Local__275.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__275.bCanUseClassLookup = true;
	auto& __Local__276 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__274), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__276 = TArray<UMovieSceneSection*> ();
	__Local__276.Reserve(1);
	auto __Local__277 = NewObject<UMovieScene2DTransformSection>(__Local__274, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__278 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__277->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__279 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__277->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__278)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__279)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__280 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__277->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__280 = TArray<FFrameNumber> ();
	__Local__280.Reserve(1);
	__Local__280.Add(FFrameNumber{});
	__Local__280[0].Value = 15000;
	auto& __Local__281 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__277->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__281 = TArray<FMovieSceneFloatValue> ();
	__Local__281.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__281.GetData(), 1);
	auto& __Local__282 = __Local__281[0];
	auto& __Local__283 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__277->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__283 = TArray<FFrameNumber> ();
	__Local__283.Reserve(1);
	__Local__283.Add(FFrameNumber{});
	__Local__283[0].Value = 15000;
	auto& __Local__284 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__277->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__284 = TArray<FMovieSceneFloatValue> ();
	__Local__284.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__284.GetData(), 1);
	auto& __Local__285 = __Local__284[0];
	auto& __Local__286 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__277->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__286 = TArray<FFrameNumber> ();
	__Local__286.Reserve(1);
	__Local__286.Add(FFrameNumber{});
	__Local__286[0].Value = 15000;
	auto& __Local__287 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__277->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__287 = TArray<FMovieSceneFloatValue> ();
	__Local__287.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__287.GetData(), 1);
	auto& __Local__288 = __Local__287[0];
	auto& __Local__289 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__277->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__289 = TArray<FFrameNumber> ();
	__Local__289.Reserve(2);
	__Local__289.Add(FFrameNumber{});
	__Local__289[0].Value = 500;
	__Local__289.Add(FFrameNumber{});
	__Local__289[1].Value = 15000;
	auto& __Local__290 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__277->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__290 = TArray<FMovieSceneFloatValue> ();
	__Local__290.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__290.GetData(), 2);
	auto& __Local__291 = __Local__290[0];
	__Local__291.Value = 1.000000f;
	auto& __Local__292 = __Local__290[1];
	__Local__292.Value = 1.121006f;
	auto& __Local__293 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__277->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__293 = TArray<FFrameNumber> ();
	__Local__293.Reserve(2);
	__Local__293.Add(FFrameNumber{});
	__Local__293[0].Value = 500;
	__Local__293.Add(FFrameNumber{});
	__Local__293[1].Value = 15000;
	auto& __Local__294 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__277->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__294 = TArray<FMovieSceneFloatValue> ();
	__Local__294.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__294.GetData(), 2);
	auto& __Local__295 = __Local__294[0];
	__Local__295.Value = 1.000000f;
	auto& __Local__296 = __Local__294[1];
	__Local__296.Value = 1.121006f;
	auto& __Local__297 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__277->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__297 = TArray<FFrameNumber> ();
	__Local__297.Reserve(1);
	__Local__297.Add(FFrameNumber{});
	__Local__297[0].Value = 15000;
	auto& __Local__298 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__277->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__298 = TArray<FMovieSceneFloatValue> ();
	__Local__298.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__298.GetData(), 1);
	auto& __Local__299 = __Local__298[0];
	auto& __Local__300 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__277->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__300 = TArray<FFrameNumber> ();
	__Local__300.Reserve(1);
	__Local__300.Add(FFrameNumber{});
	__Local__300[0].Value = 15000;
	auto& __Local__301 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__277->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__301 = TArray<FMovieSceneFloatValue> ();
	__Local__301.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__301.GetData(), 1);
	auto& __Local__302 = __Local__301[0];
	__Local__277->Easing.EaseIn = __Local__278;
	__Local__277->Easing.EaseOut = __Local__279;
	__Local__277->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__303 = (*(AccessPrivateProperty<FGuid >((__Local__277), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__303 = FGuid(0x53139C97, 0x404D1170, 0xC27190B5, 0xE89B5DB9);
	__Local__276.Add(__Local__277);
	auto& __Local__304 = (*(AccessPrivateProperty<FGuid >((__Local__274), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__304 = FGuid(0xB49ACD29, 0x431EE8F4, 0x2CDF2DAE, 0xC2E01AC2);
	auto& __Local__305 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__274), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__305.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__305.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__305.Entries.GetData(), 1);
	auto& __Local__306 = __Local__305.Entries[0];
	__Local__306.Section = __Local__277;
	auto& __Local__307 = (*(__Local__123->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__306.Range), 0)));
	auto& __Local__308 = (*(__Local__126->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__307), 0)));
	__Local__308 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__309 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__307), 0)));
	__Local__309.Value = 500;
	auto& __Local__310 = (*(__Local__132->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__306.Range), 0)));
	auto& __Local__311 = (*(__Local__126->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__310), 0)));
	__Local__311 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__312 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__310), 0)));
	__Local__312.Value = 15000;
	__Local__306.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__313 = (*(AccessPrivateProperty<FGuid >((__Local__274), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__313 = FGuid(0xB49ACD29, 0x431EE8F4, 0x2CDF2DAE, 0xC2E01AC2);
	__Local__273.Add(__Local__274);
	auto& __Local__314 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__263), UMovieScene::__PPO__PlaybackRange() )));
	__Local__314 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(500), TRangeBound<FFrameNumber>::Exclusive(15000)));
	auto& __Local__315 = (*(AccessPrivateProperty<FFrameRate >((__Local__263), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__316 = (*(__Local__140->ContainerPtrToValuePtr<int32 >(&(__Local__315), 0)));
	__Local__316 = 20;
	auto& __Local__317 = (*(AccessPrivateProperty<FGuid >((__Local__263), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__317 = FGuid(0x79A3BB7D, 0x49EBC436, 0xD6D6B484, 0x970BA3EA);
	__Local__5->MovieScene = __Local__263;
	__Local__5->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__5->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__5->AnimationBindings.GetData(), 1);
	auto& __Local__318 = __Local__5->AnimationBindings[0];
	__Local__318.WidgetName = FName(TEXT("workplan_1"));
	__Local__318.AnimationGuid = FGuid(0xBB2AAB34, 0x4BA030E6, 0xBDC671BF, 0xFBF9E20E);
	auto& __Local__319 = (*(AccessPrivateProperty<FString >((__Local__5), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__319 = FString(TEXT("workla"));
	__Local__5->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__320 = (*(AccessPrivateProperty<FGuid >((__Local__5), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__320 = FGuid(0xBDF80676, 0x431282E7, 0xB8B15488, 0x4228A07E);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__5);
	auto __Local__321 = NewObject<UMovieScene>(__Local__6, TEXT("exitla"), (EObjectFlags)0x00280008);
	auto& __Local__322 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__321), UMovieScene::__PPO__Possessables() )));
	__Local__322 = TArray<FMovieScenePossessable> ();
	__Local__322.AddUninitialized(2);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__322.GetData(), 2);
	auto& __Local__323 = __Local__322[0];
	auto& __Local__324 = (*(AccessPrivateProperty<FGuid >(&(__Local__323), FMovieScenePossessable::__PPO__Guid() )));
	__Local__324 = FGuid(0x3D869404, 0x4845E5B6, 0x8E1E6395, 0x83A9DDF3);
	auto& __Local__325 = (*(AccessPrivateProperty<FString >(&(__Local__323), FMovieScenePossessable::__PPO__Name() )));
	__Local__325 = FString(TEXT("exitMAINMEAU"));
	auto& __Local__326 = (*(AccessPrivateProperty<UClass* >(&(__Local__323), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__326 = UButton::StaticClass();
	auto& __Local__327 = __Local__322[1];
	auto& __Local__328 = (*(AccessPrivateProperty<FGuid >(&(__Local__327), FMovieScenePossessable::__PPO__Guid() )));
	__Local__328 = FGuid(0xB48E3DF2, 0x4F53ED6F, 0xB35C8190, 0xE49F0444);
	auto& __Local__329 = (*(AccessPrivateProperty<FString >(&(__Local__327), FMovieScenePossessable::__PPO__Name() )));
	__Local__329 = FString(TEXT("exit"));
	auto& __Local__330 = (*(AccessPrivateProperty<UClass* >(&(__Local__327), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__330 = UButton::StaticClass();
	auto& __Local__331 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__321), UMovieScene::__PPO__ObjectBindings() )));
	__Local__331 = TArray<FMovieSceneBinding> ();
	__Local__331.AddUninitialized(2);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__331.GetData(), 2);
	auto& __Local__332 = __Local__331[0];
	auto& __Local__333 = (*(AccessPrivateProperty<FGuid >(&(__Local__332), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__333 = FGuid(0x3D869404, 0x4845E5B6, 0x8E1E6395, 0x83A9DDF3);
	auto& __Local__334 = (*(AccessPrivateProperty<FString >(&(__Local__332), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__334 = FString(TEXT("exitMAINMEAU"));
	auto& __Local__335 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__332), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__335 = TArray<UMovieSceneTrack*> ();
	__Local__335.Reserve(1);
	auto __Local__336 = NewObject<UMovieScene2DTransformTrack>(__Local__321, TEXT("MovieScene2DTransformTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__337 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__336), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__337.PropertyName = FName(TEXT("RenderTransform"));
	__Local__337.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__337.bCanUseClassLookup = true;
	auto& __Local__338 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__336), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__338 = TArray<UMovieSceneSection*> ();
	__Local__338.Reserve(1);
	auto __Local__339 = NewObject<UMovieScene2DTransformSection>(__Local__336, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__340 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__339->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__341 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__339->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__340)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__341)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__342 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__339->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__342 = TArray<FFrameNumber> ();
	__Local__342.Reserve(1);
	__Local__342.Add(FFrameNumber{});
	auto& __Local__343 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__339->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__343 = TArray<FMovieSceneFloatValue> ();
	__Local__343.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__343.GetData(), 1);
	auto& __Local__344 = __Local__343[0];
	auto& __Local__345 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__339->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__345 = TArray<FFrameNumber> ();
	__Local__345.Reserve(1);
	__Local__345.Add(FFrameNumber{});
	auto& __Local__346 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__339->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__346 = TArray<FMovieSceneFloatValue> ();
	__Local__346.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__346.GetData(), 1);
	auto& __Local__347 = __Local__346[0];
	auto& __Local__348 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__339->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__348 = TArray<FFrameNumber> ();
	__Local__348.Reserve(1);
	__Local__348.Add(FFrameNumber{});
	auto& __Local__349 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__339->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__349 = TArray<FMovieSceneFloatValue> ();
	__Local__349.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__349.GetData(), 1);
	auto& __Local__350 = __Local__349[0];
	auto& __Local__351 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__339->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__351 = TArray<FFrameNumber> ();
	__Local__351.Reserve(5);
	__Local__351.Add(FFrameNumber{});
	__Local__351.Add(FFrameNumber{});
	__Local__351[1].Value = 3000;
	__Local__351.Add(FFrameNumber{});
	__Local__351[2].Value = 6000;
	__Local__351.Add(FFrameNumber{});
	__Local__351[3].Value = 9000;
	__Local__351.Add(FFrameNumber{});
	__Local__351[4].Value = 12000;
	auto& __Local__352 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__339->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__352 = TArray<FMovieSceneFloatValue> ();
	__Local__352.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__352.GetData(), 5);
	auto& __Local__353 = __Local__352[0];
	__Local__353.Value = 1.100000f;
	auto& __Local__354 = __Local__352[1];
	__Local__354.Value = 1.200000f;
	__Local__354.Tangent.ArriveTangent = 0.000033f;
	__Local__354.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__355 = __Local__352[2];
	__Local__355.Value = 1.300000f;
	__Local__355.Tangent.ArriveTangent = 0.000033f;
	__Local__355.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__356 = __Local__352[3];
	__Local__356.Value = 1.400000f;
	__Local__356.Tangent.ArriveTangent = 0.000011f;
	__Local__356.Tangent.LeaveTangent = 0.000011f;
	auto& __Local__357 = __Local__352[4];
	__Local__357.Value = 1.410000f;
	auto& __Local__358 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__339->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__358 = TArray<FFrameNumber> ();
	__Local__358.Reserve(5);
	__Local__358.Add(FFrameNumber{});
	__Local__358.Add(FFrameNumber{});
	__Local__358[1].Value = 3000;
	__Local__358.Add(FFrameNumber{});
	__Local__358[2].Value = 6000;
	__Local__358.Add(FFrameNumber{});
	__Local__358[3].Value = 9000;
	__Local__358.Add(FFrameNumber{});
	__Local__358[4].Value = 12000;
	auto& __Local__359 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__339->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__359 = TArray<FMovieSceneFloatValue> ();
	__Local__359.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__359.GetData(), 5);
	auto& __Local__360 = __Local__359[0];
	__Local__360.Value = 1.100000f;
	auto& __Local__361 = __Local__359[1];
	__Local__361.Value = 1.200000f;
	__Local__361.Tangent.ArriveTangent = 0.000033f;
	__Local__361.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__362 = __Local__359[2];
	__Local__362.Value = 1.300000f;
	__Local__362.Tangent.ArriveTangent = 0.000033f;
	__Local__362.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__363 = __Local__359[3];
	__Local__363.Value = 1.400000f;
	__Local__363.Tangent.ArriveTangent = 0.000011f;
	__Local__363.Tangent.LeaveTangent = 0.000011f;
	auto& __Local__364 = __Local__359[4];
	__Local__364.Value = 1.410000f;
	auto& __Local__365 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__339->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__365 = TArray<FFrameNumber> ();
	__Local__365.Reserve(1);
	__Local__365.Add(FFrameNumber{});
	auto& __Local__366 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__339->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__366 = TArray<FMovieSceneFloatValue> ();
	__Local__366.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__366.GetData(), 1);
	auto& __Local__367 = __Local__366[0];
	auto& __Local__368 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__339->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__368 = TArray<FFrameNumber> ();
	__Local__368.Reserve(1);
	__Local__368.Add(FFrameNumber{});
	auto& __Local__369 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__339->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__369 = TArray<FMovieSceneFloatValue> ();
	__Local__369.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__369.GetData(), 1);
	auto& __Local__370 = __Local__369[0];
	__Local__339->Easing.EaseIn = __Local__340;
	__Local__339->Easing.EaseOut = __Local__341;
	__Local__339->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(9000)));
	auto& __Local__371 = (*(AccessPrivateProperty<FGuid >((__Local__339), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__371 = FGuid(0xA26DED1E, 0x4C8605E8, 0xD729DFB0, 0xE26B5DB0);
	__Local__338.Add(__Local__339);
	auto& __Local__372 = (*(AccessPrivateProperty<FGuid >((__Local__336), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__372 = FGuid(0xCD1DBF90, 0x42AFC8BE, 0x92E9A48B, 0x4F989340);
	auto& __Local__373 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__336), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__373.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__373.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__373.Entries.GetData(), 1);
	auto& __Local__374 = __Local__373.Entries[0];
	__Local__374.Section = __Local__339;
	auto& __Local__375 = (*(__Local__123->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__374.Range), 0)));
	auto& __Local__376 = (*(__Local__126->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__375), 0)));
	__Local__376 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__377 = (*(__Local__132->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__374.Range), 0)));
	auto& __Local__378 = (*(__Local__126->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__377), 0)));
	__Local__378 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__379 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__377), 0)));
	__Local__379.Value = 9000;
	__Local__374.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__380 = (*(AccessPrivateProperty<FGuid >((__Local__336), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__380 = FGuid(0xCD1DBF90, 0x42AFC8BE, 0x92E9A48B, 0x4F989340);
	__Local__335.Add(__Local__336);
	auto& __Local__381 = __Local__331[1];
	auto& __Local__382 = (*(AccessPrivateProperty<FGuid >(&(__Local__381), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__382 = FGuid(0xB48E3DF2, 0x4F53ED6F, 0xB35C8190, 0xE49F0444);
	auto& __Local__383 = (*(AccessPrivateProperty<FString >(&(__Local__381), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__383 = FString(TEXT("exit"));
	auto& __Local__384 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__381), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__384 = TArray<UMovieSceneTrack*> ();
	__Local__384.Reserve(1);
	auto __Local__385 = NewObject<UMovieScene2DTransformTrack>(__Local__321, TEXT("MovieScene2DTransformTrack_2"), (EObjectFlags)0x00280008);
	auto& __Local__386 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__385), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__386.PropertyName = FName(TEXT("RenderTransform"));
	__Local__386.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__386.bCanUseClassLookup = true;
	auto& __Local__387 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__385), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__387 = TArray<UMovieSceneSection*> ();
	__Local__387.Reserve(1);
	auto __Local__388 = NewObject<UMovieScene2DTransformSection>(__Local__385, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__389 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__388->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__390 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__388->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__389)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__390)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__391 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__388->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__391 = TArray<FFrameNumber> ();
	__Local__391.Reserve(1);
	__Local__391.Add(FFrameNumber{});
	auto& __Local__392 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__388->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__392 = TArray<FMovieSceneFloatValue> ();
	__Local__392.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__392.GetData(), 1);
	auto& __Local__393 = __Local__392[0];
	auto& __Local__394 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__388->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__394 = TArray<FFrameNumber> ();
	__Local__394.Reserve(1);
	__Local__394.Add(FFrameNumber{});
	auto& __Local__395 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__388->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__395 = TArray<FMovieSceneFloatValue> ();
	__Local__395.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__395.GetData(), 1);
	auto& __Local__396 = __Local__395[0];
	auto& __Local__397 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__388->Rotation), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__397 = TArray<FFrameNumber> ();
	__Local__397.Reserve(1);
	__Local__397.Add(FFrameNumber{});
	auto& __Local__398 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__388->Rotation), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__398 = TArray<FMovieSceneFloatValue> ();
	__Local__398.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__398.GetData(), 1);
	auto& __Local__399 = __Local__398[0];
	auto& __Local__400 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__388->Scale[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__400 = TArray<FFrameNumber> ();
	__Local__400.Reserve(5);
	__Local__400.Add(FFrameNumber{});
	__Local__400.Add(FFrameNumber{});
	__Local__400[1].Value = 3000;
	__Local__400.Add(FFrameNumber{});
	__Local__400[2].Value = 6000;
	__Local__400.Add(FFrameNumber{});
	__Local__400[3].Value = 9000;
	__Local__400.Add(FFrameNumber{});
	__Local__400[4].Value = 12000;
	auto& __Local__401 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__388->Scale[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__401 = TArray<FMovieSceneFloatValue> ();
	__Local__401.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__401.GetData(), 5);
	auto& __Local__402 = __Local__401[0];
	__Local__402.Value = 1.100000f;
	auto& __Local__403 = __Local__401[1];
	__Local__403.Value = 1.200000f;
	__Local__403.Tangent.ArriveTangent = 0.000033f;
	__Local__403.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__404 = __Local__401[2];
	__Local__404.Value = 1.300000f;
	__Local__404.Tangent.ArriveTangent = 0.000033f;
	__Local__404.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__405 = __Local__401[3];
	__Local__405.Value = 1.400000f;
	__Local__405.Tangent.ArriveTangent = 0.000011f;
	__Local__405.Tangent.LeaveTangent = 0.000011f;
	auto& __Local__406 = __Local__401[4];
	__Local__406.Value = 1.410000f;
	auto& __Local__407 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__388->Scale[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__407 = TArray<FFrameNumber> ();
	__Local__407.Reserve(5);
	__Local__407.Add(FFrameNumber{});
	__Local__407.Add(FFrameNumber{});
	__Local__407[1].Value = 3000;
	__Local__407.Add(FFrameNumber{});
	__Local__407[2].Value = 6000;
	__Local__407.Add(FFrameNumber{});
	__Local__407[3].Value = 9000;
	__Local__407.Add(FFrameNumber{});
	__Local__407[4].Value = 12000;
	auto& __Local__408 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__388->Scale[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__408 = TArray<FMovieSceneFloatValue> ();
	__Local__408.AddUninitialized(5);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__408.GetData(), 5);
	auto& __Local__409 = __Local__408[0];
	__Local__409.Value = 1.100000f;
	auto& __Local__410 = __Local__408[1];
	__Local__410.Value = 1.200000f;
	__Local__410.Tangent.ArriveTangent = 0.000033f;
	__Local__410.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__411 = __Local__408[2];
	__Local__411.Value = 1.300000f;
	__Local__411.Tangent.ArriveTangent = 0.000033f;
	__Local__411.Tangent.LeaveTangent = 0.000033f;
	auto& __Local__412 = __Local__408[3];
	__Local__412.Value = 1.400000f;
	__Local__412.Tangent.ArriveTangent = 0.000011f;
	__Local__412.Tangent.LeaveTangent = 0.000011f;
	auto& __Local__413 = __Local__408[4];
	__Local__413.Value = 1.410000f;
	auto& __Local__414 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__388->Shear[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__414 = TArray<FFrameNumber> ();
	__Local__414.Reserve(1);
	__Local__414.Add(FFrameNumber{});
	auto& __Local__415 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__388->Shear[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__415 = TArray<FMovieSceneFloatValue> ();
	__Local__415.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__415.GetData(), 1);
	auto& __Local__416 = __Local__415[0];
	auto& __Local__417 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__388->Shear[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__417 = TArray<FFrameNumber> ();
	__Local__417.Reserve(1);
	__Local__417.Add(FFrameNumber{});
	auto& __Local__418 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__388->Shear[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__418 = TArray<FMovieSceneFloatValue> ();
	__Local__418.AddUninitialized(1);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__418.GetData(), 1);
	auto& __Local__419 = __Local__418[0];
	__Local__388->Easing.EaseIn = __Local__389;
	__Local__388->Easing.EaseOut = __Local__390;
	__Local__388->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(9000)));
	auto& __Local__420 = (*(AccessPrivateProperty<FGuid >((__Local__388), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__420 = FGuid(0xCA49F95F, 0x4B3A5D43, 0xB7C568A2, 0x20FDFFEC);
	__Local__387.Add(__Local__388);
	auto& __Local__421 = (*(AccessPrivateProperty<FGuid >((__Local__385), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__421 = FGuid(0xFE0F720D, 0x43FEF9A6, 0xB4C85898, 0x3CF13CFF);
	auto& __Local__422 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__385), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__422.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__422.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__422.Entries.GetData(), 1);
	auto& __Local__423 = __Local__422.Entries[0];
	__Local__423.Section = __Local__388;
	auto& __Local__424 = (*(__Local__123->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__423.Range), 0)));
	auto& __Local__425 = (*(__Local__126->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__424), 0)));
	__Local__425 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__426 = (*(__Local__132->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__423.Range), 0)));
	auto& __Local__427 = (*(__Local__126->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__426), 0)));
	__Local__427 = ERangeBoundTypes::Type::Exclusive;
	auto& __Local__428 = (*(__Local__129->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__426), 0)));
	__Local__428.Value = 9000;
	__Local__423.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__429 = (*(AccessPrivateProperty<FGuid >((__Local__385), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__429 = FGuid(0xFE0F720D, 0x43FEF9A6, 0xB4C85898, 0x3CF13CFF);
	__Local__384.Add(__Local__385);
	auto& __Local__430 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__321), UMovieScene::__PPO__PlaybackRange() )));
	__Local__430 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(9000)));
	auto& __Local__431 = (*(AccessPrivateProperty<FFrameRate >((__Local__321), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__432 = (*(__Local__140->ContainerPtrToValuePtr<int32 >(&(__Local__431), 0)));
	__Local__432 = 20;
	auto& __Local__433 = (*(AccessPrivateProperty<FGuid >((__Local__321), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__433 = FGuid(0x4E4FE953, 0x4DC48FE3, 0x908A0CB2, 0x7F793D94);
	__Local__6->MovieScene = __Local__321;
	__Local__6->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__6->AnimationBindings.AddUninitialized(2);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__6->AnimationBindings.GetData(), 2);
	auto& __Local__434 = __Local__6->AnimationBindings[0];
	__Local__434.WidgetName = FName(TEXT("exitMAINMEAU"));
	__Local__434.AnimationGuid = FGuid(0x3D869404, 0x4845E5B6, 0x8E1E6395, 0x83A9DDF3);
	auto& __Local__435 = __Local__6->AnimationBindings[1];
	__Local__435.WidgetName = FName(TEXT("exit"));
	__Local__435.AnimationGuid = FGuid(0xB48E3DF2, 0x4F53ED6F, 0xB35C8190, 0xE49F0444);
	auto& __Local__436 = (*(AccessPrivateProperty<FString >((__Local__6), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__436 = FString(TEXT("exitla"));
	__Local__6->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__437 = (*(AccessPrivateProperty<FGuid >((__Local__6), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__437 = FGuid(0xCF82B313, 0x458C5518, 0x20CFF297, 0xF2F0156C);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__6);
}
PRAGMA_ENABLE_OPTIMIZATION
void UALL_C__pf1007151779::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__438;
	SlotNames.Append(__Local__438);
}
void UALL_C__pf1007151779::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__439;
	__Local__439.Reserve(5);
	__Local__439.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__439.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->MiscConvertedSubobjects[2]));
	__Local__439.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->MiscConvertedSubobjects[3]));
	__Local__439.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->MiscConvertedSubobjects[4]));
	__Local__439.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->MiscConvertedSubobjects[5]));
	TArray<FDelegateRuntimeBinding>  __Local__440;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UALL_C__pf1007151779::StaticClass())->MiscConvertedSubobjects[0]), __Local__439, __Local__440);
}
void UALL_C__pf1007151779::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UALL_C__pf1007151779::bpf__ExecuteUbergraph_ALL__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 3:
			{
				__CurrentState = 4;
				break;
			}
		case 4:
			{
				if (!bpv__Isopenworkplan__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(bpv__CEO__pf))
				{
					bpv__CEO__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Director__pf))
				{
					bpv__Director__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__manager__pf))
				{
					bpv__manager__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Janitor__pf))
				{
					bpv__Janitor__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__LOGOWORKPLAN__pf))
				{
					bpv__LOGOWORKPLAN__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Employee__pf))
				{
					bpv__Employee__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 6:
			{
				bpv__Isopenworkplan__pf = false;
			}
		case 7:
			{
				if(::IsValid(bpv__exp__pf))
				{
					bpv__exp__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__learn__pf))
				{
					bpv__learn__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__logo__pf))
				{
					bpv__logo__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 8:
			{
				bpv__Isopenpromote__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UALL_C__pf1007151779::bpf__ExecuteUbergraph_ALL__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 34);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__exp__pf))
	{
		bpv__exp__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__learn__pf))
	{
		bpv__learn__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__logo__pf))
	{
		bpv__logo__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__CEO__pf))
	{
		bpv__CEO__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Director__pf))
	{
		bpv__Director__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__manager__pf))
	{
		bpv__manager__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Employee__pf))
	{
		bpv__Employee__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Janitor__pf))
	{
		bpv__Janitor__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__LOGOWORKPLAN__pf))
	{
		bpv__LOGOWORKPLAN__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	return; // KCST_GotoReturn
}
void UALL_C__pf1007151779::bpf__ExecuteUbergraph_ALL__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 27:
			{
				__CurrentState = 28;
				break;
			}
		case 28:
			{
				if (!bpv__Isopenpromote__pf)
				{
					__CurrentState = 31;
					break;
				}
			}
		case 29:
			{
				if(::IsValid(bpv__exp__pf))
				{
					bpv__exp__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__learn__pf))
				{
					bpv__learn__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__logo__pf))
				{
					bpv__logo__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 30:
			{
				bpv__Isopenpromote__pf = false;
			}
		case 31:
			{
				if(::IsValid(bpv__CEO__pf))
				{
					bpv__CEO__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Director__pf))
				{
					bpv__Director__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__manager__pf))
				{
					bpv__manager__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Employee__pf))
				{
					bpv__Employee__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Janitor__pf))
				{
					bpv__Janitor__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__LOGOWORKPLAN__pf))
				{
					bpv__LOGOWORKPLAN__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 32:
			{
				bpv__Isopenworkplan__pf = true;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UALL_C__pf1007151779::bpf__ExecuteUbergraph_ALL__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 13:
			{
				__CurrentState = 14;
				break;
			}
		case 14:
			{
				if (!bpv__Isopenpromote__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 15:
			{
				if(::IsValid(bpv__exp__pf))
				{
					bpv__exp__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__learn__pf))
				{
					bpv__learn__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__logo__pf))
				{
					bpv__logo__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 16:
			{
				bpv__Isopenpromote__pf = false;
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				if (!bpv__Isopenworkplan__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 18:
			{
				if(::IsValid(bpv__CEO__pf))
				{
					bpv__CEO__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Director__pf))
				{
					bpv__Director__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__manager__pf))
				{
					bpv__manager__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Employee__pf))
				{
					bpv__Employee__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Janitor__pf))
				{
					bpv__Janitor__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__LOGOWORKPLAN__pf))
				{
					bpv__LOGOWORKPLAN__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 19:
			{
				bpv__Isopenworkplan__pf = false;
				__CurrentState = -1;
				break;
			}
		case 20:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Exit!!")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UALL_C__pf1007151779::bpf__ExecuteUbergraph_ALL__pf_4(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 26);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__wokedplans__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.500000, false);
	return; // KCST_GotoReturn
}
void UALL_C__pf1007151779::bpf__ExecuteUbergraph_ALL__pf_5(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf = UUserWidget::PlayAnimation(bpv__wokedplans__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.500000, false);
	return; // KCST_GotoReturn
}
void UALL_C__pf1007151779::bpf__ExecuteUbergraph_ALL__pf_6(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_5__pf{};
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue_5__pf = UUserWidget::PlayAnimation(bpv__exitla__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.500000, false);
	return; // KCST_GotoReturn
}
void UALL_C__pf1007151779::bpf__ExecuteUbergraph_ALL__pf_7(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf{};
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf = UUserWidget::PlayAnimation(bpv__exitla__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.500000, false);
	return; // KCST_GotoReturn
}
void UALL_C__pf1007151779::bpf__ExecuteUbergraph_ALL__pf_8(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf{};
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf = UUserWidget::PlayAnimation(bpv__pomote__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.500000, false);
	return; // KCST_GotoReturn
}
void UALL_C__pf1007151779::bpf__ExecuteUbergraph_ALL__pf_9(int32 bpp__EntryPoint__pf)
{
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf = UUserWidget::PlayAnimation(bpv__pomote__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.500000, false);
	return; // KCST_GotoReturn
}
void UALL_C__pf1007151779::bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf)
{
	b0l__K2Node_Event_IsDesignTime__pf = bpp__IsDesignTime__pf;
	bpf__ExecuteUbergraph_ALL__pf_1(34);
}
void UALL_C__pf1007151779::bpf__BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_2(27);
}
void UALL_C__pf1007151779::bpf__BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_4(26);
}
void UALL_C__pf1007151779::bpf__BndEvt__ALL_workplan_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_5(25);
}
void UALL_C__pf1007151779::bpf__BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_7(23);
}
void UALL_C__pf1007151779::bpf__BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_6(21);
}
void UALL_C__pf1007151779::bpf__BndEvt__ALL_exitMAINMEAU_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_3(13);
}
void UALL_C__pf1007151779::bpf__BndEvt__ALL_promote_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_8(11);
}
void UALL_C__pf1007151779::bpf__BndEvt__ALL_promote_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_9(9);
}
void UALL_C__pf1007151779::bpf__BndEvt__ALL_promote_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_ALL__pf_0(3);
}
PRAGMA_DISABLE_OPTIMIZATION
void UALL_C__pf1007151779::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{268, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/menu/perk.perk 
		{269, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/menu/Work_plan.Work_plan 
		{270, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/menu/promote.promote 
		{271, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/menu/exitss.exitss 
		{272, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/menu/expertxt.expertxt 
		{273, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/menu/logo.logo 
		{274, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/menu/learning_txt.learning_txt 
		{275, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/menu/CEO.CEO 
		{276, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/menu/Director.Director 
		{277, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/menu/manager.manager 
		{278, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/menu/employee.employee 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UALL_C__pf1007151779::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{279, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{199, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UALL_C__pf1007151779
{
	FRegisterHelper__UALL_C__pf1007151779()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/menu/ALL"), &UALL_C__pf1007151779::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UALL_C__pf1007151779 Instance;
};
FRegisterHelper__UALL_C__pf1007151779 FRegisterHelper__UALL_C__pf1007151779::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
