#include "NativizedAssets.h"
#include "Gamewin__pf1489439355.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
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
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
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
#include "GameInstance_BP__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "StatsTrackerLib_BP__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
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
#include "Runtime/Engine/Classes/Kismet/BlueprintMapLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UGamewin_C__pf1489439355::UGamewin_C__pf1489439355(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Image_260__pf = nullptr;
	bpv__No__pf = nullptr;
	bpv__Overlay_0__pf = nullptr;
	bpv__Return__pf = nullptr;
	bpv__TextBlock__pf = nullptr;
	bpv__TextBlock_1__pf = nullptr;
	bpv__TextBlock_45__pf = nullptr;
	bpv__Yes__pf = nullptr;
	bpv__DelayTime__pf = 10;
	bpv__IsEnd__pf = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UGamewin_C__pf1489439355::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UGamewin_C__pf1489439355::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(UGameInstance_BP_C__pf2132744816::StaticClass());
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
	__Local__2.ComponentPropertyName = FName(TEXT("Yes"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Gamewin_Yes_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("No"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnUnhovered"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Gamewin_No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("No"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Gamewin_No_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Yes"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Gamewin_Yes_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("No"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Gamewin_No_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Yes"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnHovered"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Gamewin_Yes_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
	auto __Local__8 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__8), UPanelWidget::__PPO__Slots() )));
	__Local__9 = TArray<UPanelSlot*> ();
	__Local__9.Reserve(6);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_28"), (EObjectFlags)0x00280008);
	__Local__10->LayoutData.Offsets.Left = 442.666656f;
	__Local__10->LayoutData.Offsets.Top = 394.666656f;
	__Local__10->LayoutData.Offsets.Right = 1046.666626f;
	__Local__10->LayoutData.Offsets.Bottom = 424.666687f;
	__Local__10->Parent = __Local__8;
	auto __Local__11 = NewObject<UImage>(__Local__1, TEXT("Image_260"), (EObjectFlags)0x00280008);
	__Local__11->Brush.ImageSize = FVector2D(256.000000, 256.000000);
	auto& __Local__12 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__11->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__12 = FLinearColor(1.000000, 1.000000, 1.000000, 0.500000);
	auto& __Local__13 = (*(AccessPrivateProperty<UObject* >(&(__Local__11->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__13 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGamewin_C__pf1489439355::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__11->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__11->Slot = __Local__10;
	__Local__10->Content = __Local__11;
	__Local__9.Add(__Local__10);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_10"), (EObjectFlags)0x00280008);
	__Local__14->LayoutData.Offsets.Right = 854.074036f;
	__Local__14->LayoutData.Offsets.Bottom = 195.925919f;
	__Local__14->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__14->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__14->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__14->Parent = __Local__8;
	auto __Local__15 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_45"), (EObjectFlags)0x00280008);
	__Local__15->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4BFC75624033474D6EB91C94B45EE41C]\", \"C35D141B436B873C235184AB223C78D1\", \"Are you ready for CEO?\")")	);
	auto& __Local__16 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__15->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__16 = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	__Local__15->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UGamewin_C__pf1489439355::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__15->Font.OutlineSettings.OutlineSize = 4;
	__Local__15->Font.OutlineSettings.OutlineColor = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	__Local__15->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__15->Font.Size = 64;
	__Local__15->Font.LetterSpacing = 100;
	auto& __Local__17 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__15), UTextLayoutWidget::__PPO__Justification() )));
	__Local__17 = ETextJustify::Type::Center;
	__Local__15->Slot = __Local__14;
	__Local__15->bIsVariable = true;
	__Local__15->Visibility = ESlateVisibility::HitTestInvisible;
	__Local__14->Content = __Local__15;
	__Local__9.Add(__Local__14);
	auto __Local__18 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_19"), (EObjectFlags)0x00280008);
	__Local__18->LayoutData.Offsets.Left = -408.000000f;
	__Local__18->LayoutData.Offsets.Top = 156.000000f;
	__Local__18->LayoutData.Offsets.Right = 380.000000f;
	__Local__18->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__18->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__18->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__18->Parent = __Local__8;
	auto __Local__19 = NewObject<UButton>(__Local__1, TEXT("Yes"), (EObjectFlags)0x00280008);
	__Local__19->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__19->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__19->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__19), UPanelWidget::__PPO__Slots() )));
	__Local__20 = TArray<UPanelSlot*> ();
	__Local__20.Reserve(1);
	auto __Local__21 = NewObject<UButtonSlot>(__Local__19, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__21->Parent = __Local__19;
	auto __Local__22 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__22->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4BFC75624033474D6EB91C94B45EE41C]\", \"CF9D623647E63EAF1C5C2583F4B44AB2\", \"Yes!!\")")	);
	auto& __Local__23 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__22->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__23 = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	__Local__22->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UGamewin_C__pf1489439355::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__22->Font.OutlineSettings.OutlineSize = 3;
	__Local__22->Font.OutlineSettings.OutlineColor = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	__Local__22->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__22->Font.Size = 40;
	__Local__22->Font.LetterSpacing = 100;
	auto& __Local__24 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__22), UTextLayoutWidget::__PPO__Justification() )));
	__Local__24 = ETextJustify::Type::Center;
	__Local__22->Slot = __Local__21;
	__Local__22->bIsVariable = true;
	__Local__22->Visibility = ESlateVisibility::HitTestInvisible;
	__Local__21->Content = __Local__22;
	__Local__20.Add(__Local__21);
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__9.Add(__Local__18);
	auto __Local__25 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_20"), (EObjectFlags)0x00280008);
	__Local__25->LayoutData.Offsets.Left = 40.000000f;
	__Local__25->LayoutData.Offsets.Top = 156.000000f;
	__Local__25->LayoutData.Offsets.Right = 380.000000f;
	__Local__25->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__25->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__25->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__25->Parent = __Local__8;
	auto __Local__26 = NewObject<UButton>(__Local__1, TEXT("No"), (EObjectFlags)0x00280008);
	__Local__26->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__26->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__26->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	auto& __Local__27 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__26), UPanelWidget::__PPO__Slots() )));
	__Local__27 = TArray<UPanelSlot*> ();
	__Local__27.Reserve(1);
	auto __Local__28 = NewObject<UButtonSlot>(__Local__26, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__28->Parent = __Local__26;
	auto __Local__29 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__29->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4BFC75624033474D6EB91C94B45EE41C]\", \"D71E79E14C8EFF7C128646A8EF966260\", \"Give me a sec.\")")	);
	auto& __Local__30 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__29->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__30 = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	__Local__29->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UGamewin_C__pf1489439355::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__29->Font.OutlineSettings.OutlineSize = 3;
	__Local__29->Font.OutlineSettings.OutlineColor = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	__Local__29->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__29->Font.Size = 40;
	__Local__29->Font.LetterSpacing = 100;
	auto& __Local__31 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__29), UTextLayoutWidget::__PPO__Justification() )));
	__Local__31 = ETextJustify::Type::Center;
	__Local__29->Slot = __Local__28;
	__Local__29->bIsVariable = true;
	__Local__29->Visibility = ESlateVisibility::HitTestInvisible;
	__Local__28->Content = __Local__29;
	__Local__27.Add(__Local__28);
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__9.Add(__Local__25);
	auto __Local__32 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_21"), (EObjectFlags)0x00280008);
	__Local__32->LayoutData.Offsets.Left = 534.666687f;
	__Local__32->LayoutData.Offsets.Top = 584.000000f;
	__Local__32->LayoutData.Offsets.Right = 849.666626f;
	__Local__32->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__32->Parent = __Local__8;
	auto __Local__33 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_0"), (EObjectFlags)0x00280008);
	__Local__33->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4BFC75624033474D6EB91C94B45EE41C]\", \"3A5A66574EEDF0C286763A95135BEF91\", \"The real game start after this.\")")	);
	auto& __Local__34 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__33->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__34 = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	__Local__33->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UGamewin_C__pf1489439355::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__33->Font.OutlineSettings.OutlineSize = 1;
	__Local__33->Font.OutlineSettings.OutlineColor = FLinearColor(0.500000, 0.500000, 0.500000, 1.000000);
	__Local__33->Font.TypefaceFontName = FName(TEXT("Default"));
	auto& __Local__35 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__33), UTextLayoutWidget::__PPO__Justification() )));
	__Local__35 = ETextJustify::Type::Center;
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__9.Add(__Local__32);
	auto __Local__36 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_26"), (EObjectFlags)0x00280008);
	__Local__36->LayoutData.Offsets.Right = 2060.000000f;
	__Local__36->LayoutData.Offsets.Bottom = 1198.000000f;
	__Local__36->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__36->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__36->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__36->Parent = __Local__8;
	auto __Local__37 = NewObject<UOverlay>(__Local__1, TEXT("Overlay_0"), (EObjectFlags)0x00280008);
	auto& __Local__38 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__37), UPanelWidget::__PPO__Slots() )));
	__Local__38 = TArray<UPanelSlot*> ();
	__Local__38.Reserve(3);
	auto __Local__39 = NewObject<UOverlaySlot>(__Local__37, TEXT("OverlaySlot_3"), (EObjectFlags)0x00280008);
	__Local__39->Parent = __Local__37;
	auto __Local__40 = NewObject<UImage>(__Local__1, TEXT("Image_201"), (EObjectFlags)0x00280008);
	__Local__40->Brush.ImageSize = FVector2D(3086.000000, 2182.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<UObject* >(&(__Local__40->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__41 = CastChecked<UObject>(CastChecked<UDynamicClass>(UGamewin_C__pf1489439355::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__40->Slot = __Local__39;
	__Local__40->bIsVariable = false;
	__Local__39->Content = __Local__40;
	__Local__38.Add(__Local__39);
	auto __Local__42 = NewObject<UOverlaySlot>(__Local__37, TEXT("OverlaySlot_4"), (EObjectFlags)0x00280008);
	__Local__42->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__42->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__42->Parent = __Local__37;
	auto __Local__43 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_149"), (EObjectFlags)0x00280008);
	__Local__43->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4BFC75624033474D6EB91C94B45EE41C]\", \"153EB75C4EB26819AC2355B757AF362E\", \"Thanks for playing.\")")	);
	auto& __Local__44 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__43->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__44 = FLinearColor(0.000000, 0.000911, 0.020289, 1.000000);
	__Local__43->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UGamewin_C__pf1489439355::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__43->Font.OutlineSettings.OutlineSize = 3;
	__Local__43->Font.OutlineSettings.OutlineColor = FLinearColor(0.000000, 0.001075, 0.020833, 1.000000);
	__Local__43->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__43->Font.Size = 72;
	auto& __Local__45 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__43), UTextLayoutWidget::__PPO__Justification() )));
	__Local__45 = ETextJustify::Type::Center;
	__Local__43->Slot = __Local__42;
	__Local__43->RenderTransform.Translation = FVector2D(169.000000, -354.000000);
	__Local__42->Content = __Local__43;
	__Local__38.Add(__Local__42);
	auto __Local__46 = NewObject<UOverlaySlot>(__Local__37, TEXT("OverlaySlot_6"), (EObjectFlags)0x00280008);
	__Local__46->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__46->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__46->Parent = __Local__37;
	auto __Local__47 = NewObject<UTextBlock>(__Local__1, TEXT("Return"), (EObjectFlags)0x00280008);
	__Local__47->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4BFC75624033474D6EB91C94B45EE41C]\", \"6CEA52134C5F3475B698949D509F672A\", \"ntice\")")	);
	auto& __Local__48 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__47->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__48 = FLinearColor(0.000000, 0.000911, 0.020289, 1.000000);
	__Local__47->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UGamewin_C__pf1489439355::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__47->Font.OutlineSettings.OutlineSize = 2;
	__Local__47->Font.OutlineSettings.OutlineColor = FLinearColor(0.000000, 0.000911, 0.020289, 1.000000);
	__Local__47->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__47->Font.Size = 39;
	__Local__47->Font.LetterSpacing = 100;
	auto& __Local__49 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__47), UTextLayoutWidget::__PPO__Justification() )));
	__Local__49 = ETextJustify::Type::Center;
	__Local__47->Slot = __Local__46;
	__Local__47->RenderTransform.Translation = FVector2D(169.000000, 468.000000);
	__Local__47->bIsVariable = true;
	__Local__47->Visibility = ESlateVisibility::HitTestInvisible;
	__Local__46->Content = __Local__47;
	__Local__38.Add(__Local__46);
	__Local__37->Slot = __Local__36;
	__Local__37->bIsVariable = true;
	__Local__36->Content = __Local__37;
	__Local__9.Add(__Local__36);
	__Local__1->RootWidget = __Local__8;
}
PRAGMA_ENABLE_OPTIMIZATION
void UGamewin_C__pf1489439355::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__50;
	SlotNames.Append(__Local__50);
}
void UGamewin_C__pf1489439355::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__51;
	TArray<FDelegateRuntimeBinding>  __Local__52;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UGamewin_C__pf1489439355::StaticClass())->MiscConvertedSubobjects[0]), __Local__51, __Local__52);
}
void UGamewin_C__pf1489439355::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UGamewin_C__pf1489439355::bpf__ExecuteUbergraph_Gamewin__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__DelayTime__pf, 1);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
			}
		case 3:
			{
				bpv__DelayTime__pf = b0l__Temp_int_Variable__pf;
			}
		case 4:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(b0l__Temp_int_Variable__pf, 0);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("ISUIOPENED")), 0.000000, this);
			}
		case 6:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsGame_Instance_BP__pf = Cast<UGameInstance_BP_C__pf2132744816>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsGame_Instance_BP__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				TMap<FString,float>  __Local__53 = {};
				FCustomThunkTemplates::Map_Clear(((::IsValid(b0l__K2Node_DynamicCast_AsGame_Instance_BP__pf)) ? (b0l__K2Node_DynamicCast_AsGame_Instance_BP__pf->bpv__StatsMax__pf) : (__Local__53)));
			}
		case 8:
			{
				TMap<FString,float>  __Local__54 = {};
				FCustomThunkTemplates::Map_Clear(((::IsValid(b0l__K2Node_DynamicCast_AsGame_Instance_BP__pf)) ? (b0l__K2Node_DynamicCast_AsGame_Instance_BP__pf->bpv__Stats__pf) : (__Local__54)));
			}
		case 9:
			{
				UGameplayStatics::SetGlobalTimeDilation(this, 1.000000);
			}
		case 10:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("MainMenu")), true, FString(TEXT("")));
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				__CurrentState = 17;
				break;
			}
		case 17:
			{
				if (!bpv__IsEnd__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 18:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpv__DelayTime__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Return to main menu in : ")), bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf);
				if(::IsValid(bpv__Return__pf))
				{
					bpv__Return__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 19:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(1, 1276885163, TEXT("ExecuteUbergraph_Gamewin_0"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UGamewin_C__pf1489439355::bpf__ExecuteUbergraph_Gamewin__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("ISUIOPENED")), 1.000000, this);
	if(::IsValid(bpv__Overlay_0__pf))
	{
		bpv__Overlay_0__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__TextBlock_1__pf))
	{
		bpv__TextBlock_1__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__No__pf))
	{
		bpv__No__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__Yes__pf))
	{
		bpv__Yes__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__TextBlock_45__pf))
	{
		bpv__TextBlock_45__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__TextBlock__pf))
	{
		bpv__TextBlock__pf->SetVisibility(ESlateVisibility::Visible);
	}
	bpv__IsEnd__pf = false;
	return; //KCST_EndOfThread
}
void UGamewin_C__pf1489439355::bpf__ExecuteUbergraph_Gamewin__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__TextBlock_1__pf))
	{
		bpv__TextBlock_1__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__No__pf))
	{
		bpv__No__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Yes__pf))
	{
		bpv__Yes__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__TextBlock_45__pf))
	{
		bpv__TextBlock_45__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__TextBlock__pf))
	{
		bpv__TextBlock__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Overlay_0__pf))
	{
		bpv__Overlay_0__pf->SetVisibility(ESlateVisibility::Visible);
	}
	bpv__IsEnd__pf = true;
	return; //KCST_EndOfThread
}
void UGamewin_C__pf1489439355::bpf__ExecuteUbergraph_Gamewin__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 20);
	// optimized KCST_UnconditionalGoto
	(*(AccessPrivateProperty<FLinearColor >(&(b0l__K2Node_MakeStruct_SlateColor_3__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(0.500000,0.500000,0.500000,1.000000);
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b0l__K2Node_MakeStruct_SlateColor_3__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	if(::IsValid(bpv__TextBlock__pf))
	{
		bpv__TextBlock__pf->UTextBlock::SetColorAndOpacity(b0l__K2Node_MakeStruct_SlateColor_3__pf);
	}
	return; //KCST_EndOfThread
}
void UGamewin_C__pf1489439355::bpf__ExecuteUbergraph_Gamewin__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 34);
	// optimized KCST_UnconditionalGoto
	(*(AccessPrivateProperty<FLinearColor >(&(b0l__K2Node_MakeStruct_SlateColor_2__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(0.000000,0.002158,0.031250,1.000000);
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b0l__K2Node_MakeStruct_SlateColor_2__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	if(::IsValid(bpv__TextBlock__pf))
	{
		bpv__TextBlock__pf->UTextBlock::SetColorAndOpacity(b0l__K2Node_MakeStruct_SlateColor_2__pf);
	}
	return; //KCST_EndOfThread
}
void UGamewin_C__pf1489439355::bpf__ExecuteUbergraph_Gamewin__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 33);
	// optimized KCST_UnconditionalGoto
	(*(AccessPrivateProperty<FLinearColor >(&(b0l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(0.000000,0.002125,0.030713,1.000000);
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b0l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	if(::IsValid(bpv__TextBlock_1__pf))
	{
		bpv__TextBlock_1__pf->UTextBlock::SetColorAndOpacity(b0l__K2Node_MakeStruct_SlateColor__pf);
	}
	return; //KCST_EndOfThread
}
void UGamewin_C__pf1489439355::bpf__ExecuteUbergraph_Gamewin__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 22);
	// optimized KCST_UnconditionalGoto
	(*(AccessPrivateProperty<FLinearColor >(&(b0l__K2Node_MakeStruct_SlateColor_1__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(0.500000,0.500000,0.500000,1.000000);
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b0l__K2Node_MakeStruct_SlateColor_1__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	if(::IsValid(bpv__TextBlock_1__pf))
	{
		bpv__TextBlock_1__pf->UTextBlock::SetColorAndOpacity(b0l__K2Node_MakeStruct_SlateColor_1__pf);
	}
	return; //KCST_EndOfThread
}
void UGamewin_C__pf1489439355::bpf__ExecuteUbergraph_Gamewin__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 28);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	UStatsTrackerLib_BP_C__pf2132744816::bpf__SetStats__pf(FString(TEXT("ISUIOPENED")), 0.000000, this);
	return; //KCST_EndOfThread
}
void UGamewin_C__pf1489439355::bpf__BndEvt__Gamewin_Yes_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Gamewin__pf_4(34);
}
void UGamewin_C__pf1489439355::bpf__BndEvt__Gamewin_No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Gamewin__pf_5(33);
}
void UGamewin_C__pf1489439355::bpf__BndEvt__Gamewin_No_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Gamewin__pf_7(28);
}
void UGamewin_C__pf1489439355::bpf__BndEvt__Gamewin_Yes_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Gamewin__pf_2(24);
}
void UGamewin_C__pf1489439355::bpf__BndEvt__Gamewin_No_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Gamewin__pf_6(22);
}
void UGamewin_C__pf1489439355::bpf__BndEvt__Gamewin_Yes_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Gamewin__pf_3(20);
}
void UGamewin_C__pf1489439355::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_Gamewin__pf_0(16);
}
void UGamewin_C__pf1489439355::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Gamewin__pf_1(11);
}
PRAGMA_DISABLE_OPTIMIZATION
void UGamewin_C__pf1489439355::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/Ingame/StatsUI/QuestBG.QuestBG 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/UI/BRADHITC_Font.BRADHITC_Font 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/ProjectYW-44.ProjectYW-44 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UGamewin_C__pf1489439355::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{90, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{72, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{131, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Overlay 
		{73, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BlueprintFunctionLibrary 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/GameInstance_BP.GameInstance_BP_C 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/StatsTrackerLib_BP.StatsTrackerLib_BP_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UGamewin_C__pf1489439355
{
	FRegisterHelper__UGamewin_C__pf1489439355()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/Gamewin"), &UGamewin_C__pf1489439355::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UGamewin_C__pf1489439355 Instance;
};
FRegisterHelper__UGamewin_C__pf1489439355 FRegisterHelper__UGamewin_C__pf1489439355::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
