#include "NativizedAssets.h"
#include "Recruit_widget__pf2914304342.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/BackgroundBlur.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "StatsTrackerLib_BP__pf2132744816.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
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
URecruit_widget_C__pf2914304342::URecruit_widget_C__pf2914304342(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__com_value__pf = nullptr;
	bpv__False_Button__pf = nullptr;
	bpv__Image_58__pf = nullptr;
	bpv__Image_98__pf = nullptr;
	bpv__max_com__pf = nullptr;
	bpv__Max_mis__pf = nullptr;
	bpv__Mis_value__pf = nullptr;
	bpv__Progress_Box__pf = nullptr;
	bpv__ProgressBar_1__pf = nullptr;
	bpv__ProgressBar_2__pf = nullptr;
	bpv__ProgressBar_3__pf = nullptr;
	bpv__ProgressBar_4__pf = nullptr;
	bpv__TextBlock_949__pf = nullptr;
	bpv__True_button__pf = nullptr;
	bpv__Maxxcom__pfT = 0.000000f;
	bpv__Bar1value__pf = 0.000000f;
	bpv__Bar2value__pf = 0.000000f;
	bpv__Bar3value__pf = 0.000000f;
	bpv__Bar4value__pf = 0.000000f;
	bpv__comxvalue__pfT = 0.000000f;
	bpv__complete_g__pf = false;
	bpv__misxmax__pfT = 0.000000f;
	bpv__misxvalue__pfT = 0.000000f;
	bpv__mis_g__pf = false;
	bpv__Veee__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void URecruit_widget_C__pf2914304342::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void URecruit_widget_C__pf2914304342::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	__Local__2.ComponentPropertyName = FName(TEXT("False_Button"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__recruit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("True_button"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__recruit_Button_453_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__4 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(9);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_5"), (EObjectFlags)0x00280008);
	__Local__6->LayoutData.Offsets.Left = -1500.000000f;
	__Local__6->LayoutData.Offsets.Top = -900.000000f;
	__Local__6->LayoutData.Offsets.Right = 3000.000000f;
	__Local__6->LayoutData.Offsets.Bottom = 1800.000000f;
	__Local__6->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__6->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UBackgroundBlur>(__Local__1, TEXT("BackgroundBlur_64"), (EObjectFlags)0x00280008);
	__Local__7->BlurStrength = 5.000000f;
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_7"), (EObjectFlags)0x00280008);
	__Local__8->LayoutData.Offsets.Left = -760.000000f;
	__Local__8->LayoutData.Offsets.Top = -410.000000f;
	__Local__8->LayoutData.Offsets.Right = 1600.000000f;
	__Local__8->LayoutData.Offsets.Bottom = 880.000000f;
	__Local__8->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__8->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__8->Parent = __Local__4;
	auto __Local__9 = NewObject<UVerticalBox>(__Local__1, TEXT("Background"), (EObjectFlags)0x00280008);
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__9), UPanelWidget::__PPO__Slots() )));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(1);
	auto __Local__11 = NewObject<UVerticalBoxSlot>(__Local__9, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__11->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__11->Padding.Left = 4.000000f;
	__Local__11->Padding.Top = 2.000000f;
	__Local__11->Padding.Right = 4.000000f;
	__Local__11->Padding.Bottom = 2.000000f;
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UImage>(__Local__1, TEXT("Image_98"), (EObjectFlags)0x00280008);
	__Local__12->Brush.ImageSize = FVector2D(890.000000, 584.000000);
	auto& __Local__13 = (*(AccessPrivateProperty<UObject* >(&(__Local__12->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__13 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__5.Add(__Local__8);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_34"), (EObjectFlags)0x00280008);
	__Local__14->LayoutData.Offsets.Left = 40.000000f;
	__Local__14->LayoutData.Offsets.Top = -50.000000f;
	__Local__14->LayoutData.Offsets.Right = 621.621643f;
	__Local__14->LayoutData.Offsets.Bottom = 454.054077f;
	__Local__14->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__14->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__14->Parent = __Local__4;
	auto __Local__15 = NewObject<UVerticalBox>(__Local__1, TEXT("Progress_Box"), (EObjectFlags)0x00280008);
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__15), UPanelWidget::__PPO__Slots() )));
	__Local__16 = TArray<UPanelSlot*> ();
	__Local__16.Reserve(4);
	auto __Local__17 = NewObject<UVerticalBoxSlot>(__Local__15, TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__17->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__17->Padding.Bottom = 70.000000f;
	__Local__17->Parent = __Local__15;
	auto __Local__18 = NewObject<UProgressBar>(__Local__1, TEXT("ProgressBar_1"), (EObjectFlags)0x00280008);
	__Local__18->WidgetStyle.BackgroundImage.ImageSize = FVector2D(945.000000, 164.000000);
	__Local__18->WidgetStyle.BackgroundImage.Margin.Left = 0.000000f;
	__Local__18->WidgetStyle.BackgroundImage.Margin.Top = 0.000000f;
	__Local__18->WidgetStyle.BackgroundImage.Margin.Right = 0.000000f;
	__Local__18->WidgetStyle.BackgroundImage.Margin.Bottom = 0.000000f;
	auto& __Local__19 = (*(AccessPrivateProperty<UObject* >(&(__Local__18->WidgetStyle.BackgroundImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__19 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__18->WidgetStyle.FillImage.ImageSize = FVector2D(661.000000, 112.000000);
	__Local__18->WidgetStyle.FillImage.Margin.Left = 0.000000f;
	__Local__18->WidgetStyle.FillImage.Margin.Top = 0.000000f;
	__Local__18->WidgetStyle.FillImage.Margin.Right = 0.000000f;
	__Local__18->WidgetStyle.FillImage.Margin.Bottom = 0.000000f;
	auto& __Local__20 = (*(AccessPrivateProperty<UObject* >(&(__Local__18->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__20 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__18->Percent = 0.328076f;
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__16.Add(__Local__17);
	auto __Local__21 = NewObject<UVerticalBoxSlot>(__Local__15, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__21->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__21->Padding.Bottom = 70.000000f;
	__Local__21->Parent = __Local__15;
	auto __Local__22 = NewObject<UProgressBar>(__Local__1, TEXT("ProgressBar_2"), (EObjectFlags)0x00280008);
	__Local__22->WidgetStyle.BackgroundImage.ImageSize = FVector2D(945.000000, 164.000000);
	__Local__22->WidgetStyle.BackgroundImage.Margin.Left = 0.000000f;
	__Local__22->WidgetStyle.BackgroundImage.Margin.Top = 0.000000f;
	__Local__22->WidgetStyle.BackgroundImage.Margin.Right = 0.000000f;
	__Local__22->WidgetStyle.BackgroundImage.Margin.Bottom = 0.000000f;
	auto& __Local__23 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.BackgroundImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__23 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__22->WidgetStyle.FillImage.ImageSize = FVector2D(660.000000, 111.000000);
	__Local__22->WidgetStyle.FillImage.Margin.Left = 0.000000f;
	__Local__22->WidgetStyle.FillImage.Margin.Top = 0.000000f;
	__Local__22->WidgetStyle.FillImage.Margin.Right = 0.000000f;
	__Local__22->WidgetStyle.FillImage.Margin.Bottom = 0.000000f;
	auto& __Local__24 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__24 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__22->Percent = 0.629928f;
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__16.Add(__Local__21);
	auto __Local__25 = NewObject<UVerticalBoxSlot>(__Local__15, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__25->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__25->Padding.Bottom = 70.000000f;
	__Local__25->Parent = __Local__15;
	auto __Local__26 = NewObject<UProgressBar>(__Local__1, TEXT("ProgressBar_3"), (EObjectFlags)0x00280008);
	__Local__26->WidgetStyle.BackgroundImage.ImageSize = FVector2D(945.000000, 164.000000);
	__Local__26->WidgetStyle.BackgroundImage.Margin.Left = 0.000000f;
	__Local__26->WidgetStyle.BackgroundImage.Margin.Top = 0.000000f;
	__Local__26->WidgetStyle.BackgroundImage.Margin.Right = 0.000000f;
	__Local__26->WidgetStyle.BackgroundImage.Margin.Bottom = 0.000000f;
	auto& __Local__27 = (*(AccessPrivateProperty<UObject* >(&(__Local__26->WidgetStyle.BackgroundImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__27 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__26->WidgetStyle.FillImage.ImageSize = FVector2D(661.000000, 112.000000);
	__Local__26->WidgetStyle.FillImage.Margin.Left = 0.000000f;
	__Local__26->WidgetStyle.FillImage.Margin.Top = 0.000000f;
	__Local__26->WidgetStyle.FillImage.Margin.Right = 0.000000f;
	__Local__26->WidgetStyle.FillImage.Margin.Bottom = 0.000000f;
	auto& __Local__28 = (*(AccessPrivateProperty<UObject* >(&(__Local__26->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__28 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__26->Percent = 0.495544f;
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__16.Add(__Local__25);
	auto __Local__29 = NewObject<UVerticalBoxSlot>(__Local__15, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__29->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__29->Parent = __Local__15;
	auto __Local__30 = NewObject<UProgressBar>(__Local__1, TEXT("ProgressBar_4"), (EObjectFlags)0x00280008);
	__Local__30->WidgetStyle.BackgroundImage.ImageSize = FVector2D(945.000000, 164.000000);
	__Local__30->WidgetStyle.BackgroundImage.Margin.Left = 0.000000f;
	__Local__30->WidgetStyle.BackgroundImage.Margin.Top = 0.000000f;
	__Local__30->WidgetStyle.BackgroundImage.Margin.Right = 0.000000f;
	__Local__30->WidgetStyle.BackgroundImage.Margin.Bottom = 0.000000f;
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__30->WidgetStyle.BackgroundImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__30->WidgetStyle.FillImage.ImageSize = FVector2D(660.000000, 112.000000);
	__Local__30->WidgetStyle.FillImage.Margin.Left = 0.000000f;
	__Local__30->WidgetStyle.FillImage.Margin.Top = 0.000000f;
	__Local__30->WidgetStyle.FillImage.Margin.Right = 0.000000f;
	__Local__30->WidgetStyle.FillImage.Margin.Bottom = 0.000000f;
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__30->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__30->Percent = 0.806308f;
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__16.Add(__Local__29);
	__Local__15->Slot = __Local__14;
	__Local__15->bIsVariable = true;
	__Local__14->Content = __Local__15;
	__Local__5.Add(__Local__14);
	auto __Local__33 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_11"), (EObjectFlags)0x00280008);
	__Local__33->LayoutData.Offsets.Left = 523.479919f;
	__Local__33->LayoutData.Offsets.Top = -326.540527f;
	__Local__33->LayoutData.Offsets.Right = 203.559113f;
	__Local__33->LayoutData.Offsets.Bottom = 160.000000f;
	__Local__33->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__33->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__33->Parent = __Local__4;
	auto __Local__34 = NewObject<UVerticalBox>(__Local__1, TEXT("resume_photo"), (EObjectFlags)0x00280008);
	auto& __Local__35 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__34), UPanelWidget::__PPO__Slots() )));
	__Local__35 = TArray<UPanelSlot*> ();
	__Local__35.Reserve(1);
	auto __Local__36 = NewObject<UVerticalBoxSlot>(__Local__34, TEXT("VerticalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__36->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__36->Parent = __Local__34;
	auto __Local__37 = NewObject<UImage>(__Local__1, TEXT("Image_58"), (EObjectFlags)0x00280008);
	__Local__37->Brush.ImageSize = FVector2D(694.000000, 660.000000);
	auto& __Local__38 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__38 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__35.Add(__Local__36);
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__5.Add(__Local__33);
	auto __Local__39 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_6"), (EObjectFlags)0x00280008);
	__Local__39->LayoutData.Offsets.Left = -550.000000f;
	__Local__39->LayoutData.Offsets.Top = -170.000000f;
	__Local__39->LayoutData.Offsets.Right = 300.000000f;
	__Local__39->LayoutData.Offsets.Bottom = 200.000000f;
	__Local__39->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__39->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__39->Parent = __Local__4;
	auto __Local__40 = NewObject<UButton>(__Local__1, TEXT("True_button"), (EObjectFlags)0x00280008);
	__Local__40->WidgetStyle.Normal.ImageSize = FVector2D(534.000000, 321.000000);
	__Local__40->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__40->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__40->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__40->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__41 = (*(AccessPrivateProperty<UObject* >(&(__Local__40->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__41 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__40->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__40->WidgetStyle.Hovered.ImageSize = FVector2D(534.000000, 321.000000);
	__Local__40->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__40->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__40->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__40->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__42 = (*(AccessPrivateProperty<UObject* >(&(__Local__40->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__42 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__40->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__40->WidgetStyle.Pressed.ImageSize = FVector2D(534.000000, 321.000000);
	__Local__40->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__40->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__40->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__40->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__43 = (*(AccessPrivateProperty<UObject* >(&(__Local__40->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__43 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__40->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__40->WidgetStyle.Disabled.ImageSize = FVector2D(534.000000, 321.000000);
	auto& __Local__44 = (*(AccessPrivateProperty<UObject* >(&(__Local__40->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__44 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__40->WidgetStyle.Disabled.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__5.Add(__Local__39);
	auto __Local__45 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_45"), (EObjectFlags)0x00280008);
	__Local__45->LayoutData.Offsets.Left = -550.000000f;
	__Local__45->LayoutData.Offsets.Top = 150.000000f;
	__Local__45->LayoutData.Offsets.Right = 300.000000f;
	__Local__45->LayoutData.Offsets.Bottom = 200.000000f;
	__Local__45->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__45->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__45->Parent = __Local__4;
	auto __Local__46 = NewObject<UButton>(__Local__1, TEXT("False_Button"), (EObjectFlags)0x00280008);
	__Local__46->WidgetStyle.Normal.ImageSize = FVector2D(536.000000, 321.000000);
	__Local__46->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__46->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__46->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__46->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__47 = (*(AccessPrivateProperty<UObject* >(&(__Local__46->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__47 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__46->WidgetStyle.Hovered.ImageSize = FVector2D(536.000000, 321.000000);
	__Local__46->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__46->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__46->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__46->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__48 = (*(AccessPrivateProperty<UObject* >(&(__Local__46->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__48 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__46->WidgetStyle.Pressed.ImageSize = FVector2D(536.000000, 321.000000);
	__Local__46->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__46->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__46->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__46->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__49 = (*(AccessPrivateProperty<UObject* >(&(__Local__46->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__49 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__46->WidgetStyle.Disabled.ImageSize = FVector2D(536.000000, 321.000000);
	auto& __Local__50 = (*(AccessPrivateProperty<UObject* >(&(__Local__46->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__50 = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__5.Add(__Local__45);
	auto __Local__51 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_59"), (EObjectFlags)0x00280008);
	__Local__51->LayoutData.Offsets.Left = -470.000000f;
	__Local__51->LayoutData.Offsets.Top = -380.000000f;
	__Local__51->LayoutData.Offsets.Right = 181.147827f;
	__Local__51->LayoutData.Offsets.Bottom = 53.543549f;
	__Local__51->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__51->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__51->Parent = __Local__4;
	auto __Local__52 = NewObject<UBorder>(__Local__1, TEXT("Complete_Box"), (EObjectFlags)0x00280008);
	__Local__52->Padding.Left = 0.000000f;
	__Local__52->Padding.Top = 0.000000f;
	__Local__52->Padding.Right = 0.000000f;
	__Local__52->Padding.Bottom = 0.000000f;
	__Local__52->Background.ImageSize = FVector2D(835.000000, 283.000000);
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__52), UPanelWidget::__PPO__Slots() )));
	__Local__53 = TArray<UPanelSlot*> ();
	__Local__53.Reserve(1);
	auto __Local__54 = NewObject<UBorderSlot>(__Local__52, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	auto& __Local__55 = (*(AccessPrivateProperty<FMargin >((__Local__54), UBorderSlot::__PPO__Padding() )));
	__Local__55.Left = 0.000000f;
	__Local__55.Top = 0.000000f;
	__Local__55.Right = 0.000000f;
	__Local__55.Bottom = 0.000000f;
	__Local__54->Parent = __Local__52;
	auto __Local__56 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_89"), (EObjectFlags)0x00280008);
	auto& __Local__57 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__56), UPanelWidget::__PPO__Slots() )));
	__Local__57 = TArray<UPanelSlot*> ();
	__Local__57.Reserve(3);
	auto __Local__58 = NewObject<UHorizontalBoxSlot>(__Local__56, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__58->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__58->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__58->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__58->Parent = __Local__56;
	auto __Local__59 = NewObject<UTextBlock>(__Local__1, TEXT("com_value"), (EObjectFlags)0x00280008);
	__Local__59->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[00DFE7D3424729DB036EDDA0B47D865B]\", \"26B837B44F7CA28929AFD3BAACCDC98B\", \"0\")")	);
	auto& __Local__60 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__59->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__60 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__59->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__59->Font.OutlineSettings.OutlineSize = 2;
	__Local__59->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__59->Font.Size = 30;
	__Local__59->Slot = __Local__58;
	__Local__59->bIsVariable = true;
	__Local__58->Content = __Local__59;
	__Local__57.Add(__Local__58);
	auto __Local__61 = NewObject<UHorizontalBoxSlot>(__Local__56, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__61->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__61->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__61->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__61->Parent = __Local__56;
	auto __Local__62 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_633"), (EObjectFlags)0x00280008);
	__Local__62->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[00DFE7D3424729DB036EDDA0B47D865B]\", \"089A9151482FD654A68929A64DE48B07\", \"/\")")	);
	auto& __Local__63 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__62->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__63 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__62->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__62->Font.OutlineSettings.OutlineSize = 2;
	__Local__62->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__62->Font.Size = 30;
	__Local__62->Slot = __Local__61;
	__Local__61->Content = __Local__62;
	__Local__57.Add(__Local__61);
	auto __Local__64 = NewObject<UHorizontalBoxSlot>(__Local__56, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__64->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__64->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__64->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__64->Parent = __Local__56;
	auto __Local__65 = NewObject<UTextBlock>(__Local__1, TEXT("max_com"), (EObjectFlags)0x00280008);
	__Local__65->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[00DFE7D3424729DB036EDDA0B47D865B]\", \"05B38E024D4B6E8D3E51ADAC7892755D\", \"4\")")	);
	auto& __Local__66 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__65->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__66 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__65->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__65->Font.OutlineSettings.OutlineSize = 2;
	__Local__65->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__65->Font.Size = 30;
	__Local__65->Slot = __Local__64;
	__Local__65->bIsVariable = true;
	__Local__64->Content = __Local__65;
	__Local__57.Add(__Local__64);
	__Local__56->Slot = __Local__54;
	__Local__54->Content = __Local__56;
	__Local__53.Add(__Local__54);
	__Local__52->Slot = __Local__51;
	__Local__51->Content = __Local__52;
	__Local__5.Add(__Local__51);
	auto __Local__67 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_58"), (EObjectFlags)0x00280008);
	__Local__67->LayoutData.Offsets.Left = -470.000000f;
	__Local__67->LayoutData.Offsets.Top = -303.000000f;
	__Local__67->LayoutData.Offsets.Right = 181.147827f;
	__Local__67->LayoutData.Offsets.Bottom = 53.543549f;
	__Local__67->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__67->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__67->Parent = __Local__4;
	auto __Local__68 = NewObject<UBorder>(__Local__1, TEXT("Mistake_Box"), (EObjectFlags)0x00280008);
	__Local__68->Padding.Left = 0.000000f;
	__Local__68->Padding.Top = 0.000000f;
	__Local__68->Padding.Right = 0.000000f;
	__Local__68->Padding.Bottom = 0.000000f;
	__Local__68->Background.ImageSize = FVector2D(835.000000, 283.000000);
	auto& __Local__69 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__68), UPanelWidget::__PPO__Slots() )));
	__Local__69 = TArray<UPanelSlot*> ();
	__Local__69.Reserve(1);
	auto __Local__70 = NewObject<UBorderSlot>(__Local__68, TEXT("BorderSlot_0"), (EObjectFlags)0x00280008);
	auto& __Local__71 = (*(AccessPrivateProperty<FMargin >((__Local__70), UBorderSlot::__PPO__Padding() )));
	__Local__71.Left = 0.000000f;
	__Local__71.Top = 0.000000f;
	__Local__71.Right = 0.000000f;
	__Local__71.Bottom = 0.000000f;
	__Local__70->Parent = __Local__68;
	auto __Local__72 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox"), (EObjectFlags)0x00280008);
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__72), UPanelWidget::__PPO__Slots() )));
	__Local__73 = TArray<UPanelSlot*> ();
	__Local__73.Reserve(3);
	auto __Local__74 = NewObject<UHorizontalBoxSlot>(__Local__72, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__74->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__74->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__74->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__74->Parent = __Local__72;
	auto __Local__75 = NewObject<UTextBlock>(__Local__1, TEXT("Mis_value"), (EObjectFlags)0x00280008);
	__Local__75->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[00DFE7D3424729DB036EDDA0B47D865B]\", \"4D4D7BAA4DC75DF4F471BAB5F04F4BDF\", \"0\")")	);
	auto& __Local__76 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__75->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__76 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__75->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__75->Font.OutlineSettings.OutlineSize = 2;
	__Local__75->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__75->Font.Size = 30;
	__Local__75->Slot = __Local__74;
	__Local__75->bIsVariable = true;
	__Local__74->Content = __Local__75;
	__Local__73.Add(__Local__74);
	auto __Local__77 = NewObject<UHorizontalBoxSlot>(__Local__72, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__77->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__77->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__77->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__77->Parent = __Local__72;
	auto __Local__78 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__78->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[00DFE7D3424729DB036EDDA0B47D865B]\", \"0F13F4EF41BFCCC7A9AD908BE31D5B92\", \"/\")")	);
	auto& __Local__79 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__78->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__79 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__78->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__78->Font.OutlineSettings.OutlineSize = 2;
	__Local__78->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__78->Font.Size = 30;
	__Local__78->Slot = __Local__77;
	__Local__77->Content = __Local__78;
	__Local__73.Add(__Local__77);
	auto __Local__80 = NewObject<UHorizontalBoxSlot>(__Local__72, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__80->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__80->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__80->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__80->Parent = __Local__72;
	auto __Local__81 = NewObject<UTextBlock>(__Local__1, TEXT("Max_mis"), (EObjectFlags)0x00280008);
	__Local__81->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[00DFE7D3424729DB036EDDA0B47D865B]\", \"C83134CD4CF62878CD166EAF1B969E03\", \"2\")")	);
	auto& __Local__82 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__81->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__82 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__81->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__81->Font.OutlineSettings.OutlineSize = 2;
	__Local__81->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__81->Font.Size = 30;
	__Local__81->Slot = __Local__80;
	__Local__81->bIsVariable = true;
	__Local__80->Content = __Local__81;
	__Local__73.Add(__Local__80);
	__Local__72->Slot = __Local__70;
	__Local__70->Content = __Local__72;
	__Local__69.Add(__Local__70);
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__5.Add(__Local__67);
	auto __Local__83 = NewObject<UCanvasPanelSlot>(__Local__4, TEXT("CanvasPanelSlot_20"), (EObjectFlags)0x00280008);
	__Local__83->LayoutData.Offsets.Right = 1049.849854f;
	__Local__83->LayoutData.Offsets.Bottom = 940.025757f;
	__Local__83->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__83->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__83->bAutoSize = true;
	__Local__83->Parent = __Local__4;
	auto __Local__84 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_949"), (EObjectFlags)0x00280008);
	__Local__84->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[00DFE7D3424729DB036EDDA0B47D865B]\", \"5D3EB7604DE91BEC11E0B980AEC2A0E2\", \"Victory\")")	);
	auto& __Local__85 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__84->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__85 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__84->Slot = __Local__83;
	__Local__84->bIsVariable = true;
	__Local__83->Content = __Local__84;
	__Local__5.Add(__Local__83);
	__Local__1->RootWidget = __Local__4;
}
PRAGMA_ENABLE_OPTIMIZATION
void URecruit_widget_C__pf2914304342::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__86;
	SlotNames.Append(__Local__86);
}
void URecruit_widget_C__pf2914304342::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__87;
	TArray<FDelegateRuntimeBinding>  __Local__88;
	__Local__88.AddUninitialized(8);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__88.GetData(), 8);
	auto& __Local__89 = __Local__88[0];
	__Local__89.ObjectName = FString(TEXT("ProgressBar_2"));
	__Local__89.PropertyName = FName(TEXT("Percent"));
	auto& __Local__90 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__89.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__90 = TArray<FPropertyPathSegment> ();
	__Local__90.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__90.GetData(), 1);
	auto& __Local__91 = __Local__90[0];
	__Local__91.Name = FName(TEXT("Bar2value"));
	auto& __Local__92 = __Local__88[1];
	__Local__92.ObjectName = FString(TEXT("ProgressBar_3"));
	__Local__92.PropertyName = FName(TEXT("Percent"));
	auto& __Local__93 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__92.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__93 = TArray<FPropertyPathSegment> ();
	__Local__93.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__93.GetData(), 1);
	auto& __Local__94 = __Local__93[0];
	__Local__94.Name = FName(TEXT("Bar3value"));
	auto& __Local__95 = __Local__88[2];
	__Local__95.ObjectName = FString(TEXT("ProgressBar_4"));
	__Local__95.PropertyName = FName(TEXT("Percent"));
	auto& __Local__96 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__95.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__96 = TArray<FPropertyPathSegment> ();
	__Local__96.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__96.GetData(), 1);
	auto& __Local__97 = __Local__96[0];
	__Local__97.Name = FName(TEXT("Bar4value"));
	auto& __Local__98 = __Local__88[3];
	__Local__98.ObjectName = FString(TEXT("ProgressBar_1"));
	__Local__98.PropertyName = FName(TEXT("Percent"));
	auto& __Local__99 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__98.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__99 = TArray<FPropertyPathSegment> ();
	__Local__99.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__99.GetData(), 1);
	auto& __Local__100 = __Local__99[0];
	__Local__100.Name = FName(TEXT("Bar1value"));
	auto& __Local__101 = __Local__88[4];
	__Local__101.ObjectName = FString(TEXT("com_value"));
	__Local__101.PropertyName = FName(TEXT("Text"));
	auto& __Local__102 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__101.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__102 = TArray<FPropertyPathSegment> ();
	__Local__102.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__102.GetData(), 1);
	auto& __Local__103 = __Local__102[0];
	__Local__103.Name = FName(TEXT("com value"));
	auto& __Local__104 = __Local__88[5];
	__Local__104.ObjectName = FString(TEXT("Mis_value"));
	__Local__104.PropertyName = FName(TEXT("Text"));
	auto& __Local__105 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__104.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__105 = TArray<FPropertyPathSegment> ();
	__Local__105.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__105.GetData(), 1);
	auto& __Local__106 = __Local__105[0];
	__Local__106.Name = FName(TEXT("mis value"));
	auto& __Local__107 = __Local__88[6];
	__Local__107.ObjectName = FString(TEXT("Max_mis"));
	__Local__107.PropertyName = FName(TEXT("Text"));
	auto& __Local__108 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__107.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__108 = TArray<FPropertyPathSegment> ();
	__Local__108.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__108.GetData(), 1);
	auto& __Local__109 = __Local__108[0];
	__Local__109.Name = FName(TEXT("mis max"));
	auto& __Local__110 = __Local__88[7];
	__Local__110.ObjectName = FString(TEXT("max_com"));
	__Local__110.PropertyName = FName(TEXT("Text"));
	auto& __Local__111 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__110.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__111 = TArray<FPropertyPathSegment> ();
	__Local__111.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__111.GetData(), 1);
	auto& __Local__112 = __Local__111[0];
	__Local__112.Name = FName(TEXT("Max com"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->MiscConvertedSubobjects[0]), __Local__87, __Local__88);
}
void URecruit_widget_C__pf2914304342::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void URecruit_widget_C__pf2914304342::bpf__ExecuteUbergraph_Recruit_widget__pf_0(int32 bpp__EntryPoint__pf)
{
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue_5__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_5__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_5__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 14:
			{
				__CurrentState = 15;
				break;
			}
		case 15:
			{
				bpf__sum__pf(/*out*/ b0l__CallFunc_sum_NewParam_1__pf);
			}
		case 16:
			{
				b0l__K2Node_MakeArray_Array_1__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array_1__pf[0] = 0.300000;
				b0l__K2Node_MakeArray_Array_1__pf[1] = 0.400000;
				b0l__K2Node_MakeArray_Array_1__pf[2] = 0.500000;
				FCustomThunkTemplates::Array_Random(b0l__K2Node_MakeArray_Array_1__pf, /*out*/ b0l__CallFunc_Array_Random_OutItem_1__pf, /*out*/ b0l__CallFunc_Array_Random_OutIndex_1__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Less_FloatFloat(b0l__CallFunc_sum_NewParam_1__pf, b0l__CallFunc_Array_Random_OutItem_1__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_5__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 17:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Add_FloatFloat(bpv__misxvalue__pfT, 1.000000);
				bpv__misxvalue__pfT = bpfv__CallFunc_Add_FloatFloat_ReturnValue_2__pf;
			}
		case 18:
			{
				bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf = UKismetTextLibrary::Conv_FloatToText(bpv__misxvalue__pfT, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 3);
				if(::IsValid(bpv__Mis_value__pf))
				{
					bpv__Mis_value__pf->SetText(bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf);
				}
			}
		case 19:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Less_FloatFloat(bpv__misxvalue__pfT, bpv__misxmax__pfT);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_3__pf)
				{
					__CurrentState = 37;
					break;
				}
			}
		case 20:
			{
				if (!bpv__mis_g__pf)
				{
					__CurrentState = 39;
					break;
				}
			}
		case 21:
			{
				RemoveFromParent();
			}
		case 22:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Exp")), 12.000000, this);
			}
		case 23:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), 12.000000, this);
			}
		case 24:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), -32.000000, this);
			}
		case 25:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("ISUIOPENED")), -1.000000, this);
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				b0l__K2Node_MakeArray_Array_1__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array_1__pf[0] = 0.300000;
				b0l__K2Node_MakeArray_Array_1__pf[1] = 0.400000;
				b0l__K2Node_MakeArray_Array_1__pf[2] = 0.500000;
				FCustomThunkTemplates::Array_Random(b0l__K2Node_MakeArray_Array_1__pf, /*out*/ b0l__CallFunc_Array_Random_OutItem_1__pf, /*out*/ b0l__CallFunc_Array_Random_OutIndex_1__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_5__pf = UKismetMathLibrary::Greater_FloatFloat(b0l__CallFunc_sum_NewParam_1__pf, b0l__CallFunc_Array_Random_OutItem_1__pf);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue_5__pf)
				{
					__CurrentState = 27;
					break;
				}
			}
		case 27:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpv__comxvalue__pfT, 1.000000);
				bpv__comxvalue__pfT = bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf;
			}
		case 28:
			{
				bpfv__CallFunc_Conv_FloatToText_ReturnValue_5__pf = UKismetTextLibrary::Conv_FloatToText(bpv__comxvalue__pfT, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 3);
				if(::IsValid(bpv__com_value__pf))
				{
					bpv__com_value__pf->SetText(bpfv__CallFunc_Conv_FloatToText_ReturnValue_5__pf);
				}
			}
		case 29:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Less_FloatFloat(bpv__comxvalue__pfT, bpv__Maxxcom__pfT);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = 35;
					break;
				}
			}
		case 30:
			{
				if (!bpv__complete_g__pf)
				{
					__CurrentState = 39;
					break;
				}
			}
		case 31:
			{
				RemoveFromParent();
			}
		case 32:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Exp")), 24.000000, this);
			}
		case 33:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), 24.000000, this);
			}
		case 34:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), -32.000000, this);
				__CurrentState = 25;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__comxvalue__pfT, bpv__Maxxcom__pfT);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = 36;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 36:
			{
				bpv__complete_g__pf = true;
				__CurrentState = 30;
				break;
			}
		case 37:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__misxvalue__pfT, bpv__misxmax__pfT);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue_3__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 38:
			{
				bpv__mis_g__pf = true;
				__CurrentState = 20;
				break;
			}
		case 39:
			{
				bpf__changestat__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void URecruit_widget_C__pf2914304342::bpf__ExecuteUbergraph_Recruit_widget__pf_1(int32 bpp__EntryPoint__pf)
{
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf{};
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue_7__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_4__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_4__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 40:
			{
				__CurrentState = 41;
				break;
			}
		case 41:
			{
				bpf__sum__pf(/*out*/ b0l__CallFunc_sum_NewParam__pf);
			}
		case 42:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = 0.300000;
				b0l__K2Node_MakeArray_Array__pf[1] = 0.400000;
				b0l__K2Node_MakeArray_Array__pf[2] = 0.500000;
				FCustomThunkTemplates::Array_Random(b0l__K2Node_MakeArray_Array__pf, /*out*/ b0l__CallFunc_Array_Random_OutItem__pf, /*out*/ b0l__CallFunc_Array_Random_OutIndex__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(b0l__CallFunc_sum_NewParam__pf, b0l__CallFunc_Array_Random_OutItem__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 55;
					break;
				}
			}
		case 43:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__comxvalue__pfT, 1.000000);
				bpv__comxvalue__pfT = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
			}
		case 44:
			{
				bpfv__CallFunc_Conv_FloatToText_ReturnValue_7__pf = UKismetTextLibrary::Conv_FloatToText(bpv__comxvalue__pfT, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 3);
				if(::IsValid(bpv__com_value__pf))
				{
					bpv__com_value__pf->SetText(bpfv__CallFunc_Conv_FloatToText_ReturnValue_7__pf);
				}
			}
		case 45:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Less_FloatFloat(bpv__comxvalue__pfT, bpv__Maxxcom__pfT);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf)
				{
					__CurrentState = 53;
					break;
				}
			}
		case 46:
			{
				if (!bpv__complete_g__pf)
				{
					__CurrentState = 52;
					break;
				}
			}
		case 47:
			{
				RemoveFromParent();
			}
		case 48:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Exp")), 24.000000, this);
			}
		case 49:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), 24.000000, this);
			}
		case 50:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), -32.000000, this);
			}
		case 51:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("ISUIOPENED")), -1.000000, this);
				__CurrentState = -1;
				break;
			}
		case 52:
			{
				bpf__changestat__pf();
				__CurrentState = -1;
				break;
			}
		case 53:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__comxvalue__pfT, bpv__Maxxcom__pfT);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue_2__pf)
				{
					__CurrentState = 54;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 54:
			{
				bpv__complete_g__pf = true;
				__CurrentState = 46;
				break;
			}
		case 55:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(3, true);
				b0l__K2Node_MakeArray_Array__pf[0] = 0.300000;
				b0l__K2Node_MakeArray_Array__pf[1] = 0.400000;
				b0l__K2Node_MakeArray_Array__pf[2] = 0.500000;
				FCustomThunkTemplates::Array_Random(b0l__K2Node_MakeArray_Array__pf, /*out*/ b0l__CallFunc_Array_Random_OutItem__pf, /*out*/ b0l__CallFunc_Array_Random_OutIndex__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(b0l__CallFunc_sum_NewParam__pf, b0l__CallFunc_Array_Random_OutItem__pf);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 56;
					break;
				}
			}
		case 56:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf = UKismetMathLibrary::Add_FloatFloat(bpv__misxvalue__pfT, 1.000000);
				bpv__misxvalue__pfT = bpfv__CallFunc_Add_FloatFloat_ReturnValue_3__pf;
			}
		case 57:
			{
				bpfv__CallFunc_Conv_FloatToText_ReturnValue_1__pf = UKismetTextLibrary::Conv_FloatToText(bpv__misxvalue__pfT, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 3);
				if(::IsValid(bpv__Mis_value__pf))
				{
					bpv__Mis_value__pf->SetText(bpfv__CallFunc_Conv_FloatToText_ReturnValue_1__pf);
				}
			}
		case 58:
			{
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Less_FloatFloat(bpv__misxvalue__pfT, bpv__misxmax__pfT);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_4__pf)
				{
					__CurrentState = 64;
					break;
				}
			}
		case 59:
			{
				if (!bpv__mis_g__pf)
				{
					__CurrentState = 52;
					break;
				}
			}
		case 60:
			{
				RemoveFromParent();
			}
		case 61:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Exp")), 12.000000, this);
			}
		case 62:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Money")), 12.000000, this);
			}
		case 63:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__AddStats__pf(FString(TEXT("Energy")), -32.000000, this);
				__CurrentState = 51;
				break;
			}
		case 64:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_4__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__misxvalue__pfT, bpv__misxmax__pfT);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue_4__pf)
				{
					__CurrentState = 59;
					break;
				}
			}
		case 65:
			{
				bpv__mis_g__pf = true;
				__CurrentState = 59;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void URecruit_widget_C__pf2914304342::bpf__ExecuteUbergraph_Recruit_widget__pf_2(int32 bpp__EntryPoint__pf)
{
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue_2__pf{};
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue_3__pf{};
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue_4__pf{};
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue_6__pf{};
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpf__changestat__pf();
	bpv__Maxxcom__pfT = 3.000000;
	bpfv__CallFunc_Conv_FloatToText_ReturnValue_4__pf = UKismetTextLibrary::Conv_FloatToText(bpv__Maxxcom__pfT, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 3);
	if(::IsValid(bpv__max_com__pf))
	{
		bpv__max_com__pf->SetText(bpfv__CallFunc_Conv_FloatToText_ReturnValue_4__pf);
	}
	bpv__comxvalue__pfT = 0.000000;
	bpfv__CallFunc_Conv_FloatToText_ReturnValue_6__pf = UKismetTextLibrary::Conv_FloatToText(bpv__comxvalue__pfT, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 3);
	if(::IsValid(bpv__com_value__pf))
	{
		bpv__com_value__pf->SetText(bpfv__CallFunc_Conv_FloatToText_ReturnValue_6__pf);
	}
	bpv__misxmax__pfT = 2.000000;
	bpfv__CallFunc_Conv_FloatToText_ReturnValue_3__pf = UKismetTextLibrary::Conv_FloatToText(bpv__misxmax__pfT, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 3);
	if(::IsValid(bpv__Max_mis__pf))
	{
		bpv__Max_mis__pf->SetText(bpfv__CallFunc_Conv_FloatToText_ReturnValue_3__pf);
	}
	bpv__misxvalue__pfT = 0.000000;
	bpfv__CallFunc_Conv_FloatToText_ReturnValue_2__pf = UKismetTextLibrary::Conv_FloatToText(bpv__misxvalue__pfT, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 3);
	if(::IsValid(bpv__Mis_value__pf))
	{
		bpv__Mis_value__pf->SetText(bpfv__CallFunc_Conv_FloatToText_ReturnValue_2__pf);
	}
	bpv__complete_g__pf = false;
	if(::IsValid(bpv__TextBlock_949__pf))
	{
		bpv__TextBlock_949__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	bpv__mis_g__pf = false;
	return; // KCST_GotoReturn
}
void URecruit_widget_C__pf2914304342::bpf__BndEvt__recruit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Recruit_widget__pf_1(40);
}
void URecruit_widget_C__pf2914304342::bpf__BndEvt__recruit_Button_453_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Recruit_widget__pf_0(14);
}
void URecruit_widget_C__pf2914304342::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Recruit_widget__pf_2(1);
}
void URecruit_widget_C__pf2914304342::bpf__Random__pf(/*out*/ float& bpp__rend__pf)
{
	float bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf{};
	bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf = UKismetMathLibrary::RandomFloatInRange(0.200000, 1.000000);
	bpp__rend__pf = bpfv__CallFunc_RandomFloatInRange_ReturnValue__pf;
}
void URecruit_widget_C__pf2914304342::bpf__changestat__pf()
{
	TArray<UTexture2D*> bpfv__K2Node_MakeArray_Array__pf{};
	float bpfv__CallFunc_Random_rend__pf{};
	UTexture2D* bpfv__CallFunc_Array_Random_OutItem__pf{};
	int32 bpfv__CallFunc_Array_Random_OutIndex__pf{};
	float bpfv__CallFunc_Random_rend_1__pf{};
	float bpfv__CallFunc_Random_rend_2__pf{};
	float bpfv__CallFunc_Random_rend_3__pf{};
	bpf__Random__pf(/*out*/ bpfv__CallFunc_Random_rend_3__pf);
	bpv__Bar1value__pf = bpfv__CallFunc_Random_rend_3__pf;
	bpf__Random__pf(/*out*/ bpfv__CallFunc_Random_rend_2__pf);
	bpv__Bar2value__pf = bpfv__CallFunc_Random_rend_2__pf;
	bpf__Random__pf(/*out*/ bpfv__CallFunc_Random_rend_1__pf);
	bpv__Bar3value__pf = bpfv__CallFunc_Random_rend_1__pf;
	bpf__Random__pf(/*out*/ bpfv__CallFunc_Random_rend__pf);
	bpv__Bar4value__pf = bpfv__CallFunc_Random_rend__pf;
	bpfv__K2Node_MakeArray_Array__pf.SetNum(4, true);
	bpfv__K2Node_MakeArray_Array__pf[0] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpfv__K2Node_MakeArray_Array__pf[1] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	bpfv__K2Node_MakeArray_Array__pf[2] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	bpfv__K2Node_MakeArray_Array__pf[3] = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(URecruit_widget_C__pf2914304342::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	FCustomThunkTemplates::Array_Random(bpfv__K2Node_MakeArray_Array__pf, /*out*/ bpfv__CallFunc_Array_Random_OutItem__pf, /*out*/ bpfv__CallFunc_Array_Random_OutIndex__pf);
	if(::IsValid(bpv__Image_58__pf))
	{
		bpv__Image_58__pf->SetBrushFromTexture(bpfv__CallFunc_Array_Random_OutItem__pf, false);
	}
}
void URecruit_widget_C__pf2914304342::bpf__sum__pf(/*out*/ float& bpp__NewParam__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__Bar3value__pf, bpv__Bar4value__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Bar1value__pf, bpv__Bar2value__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 4.000000);
	bpp__NewParam__pf = bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void URecruit_widget_C__pf2914304342::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{179, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0101.0101 
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0102.0102 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0103.0103 
		{182, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0104.0104 
		{183, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0105.0105 
		{184, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0106.0106 
		{185, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0110.0110 
		{186, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0107.0107 
		{187, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0108.0108 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
		{188, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0111.0111 
		{189, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0112.0112 
		{159, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/MiniGame/recruit/0113.0113 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void URecruit_widget_C__pf2914304342::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{73, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
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
struct FRegisterHelper__URecruit_widget_C__pf2914304342
{
	FRegisterHelper__URecruit_widget_C__pf2914304342()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/MiniGame/recruit/Recruit_widget"), &URecruit_widget_C__pf2914304342::__StaticDependenciesAssets);
	}
	static FRegisterHelper__URecruit_widget_C__pf2914304342 Instance;
};
FRegisterHelper__URecruit_widget_C__pf2914304342 FRegisterHelper__URecruit_widget_C__pf2914304342::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
