#include "NativizedAssets.h"
#include "MainMenu_W__pf1343218889.h"
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
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/ScrollBox.h"
#include "Runtime/UMG/Public/Components/ScrollBoxSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Slider.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
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
#include "Runtime/Engine/Classes/Engine/Texture.h"
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
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
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
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
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
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
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
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
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
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
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
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
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
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
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
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Slate/Public/Widgets/Layout/SScrollBox.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UMainMenu_W_C__pf1343218889::UMainMenu_W_C__pf1343218889(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__BACK__pf = nullptr;
	bpv__Background__pf = nullptr;
	bpv__Backtomain__pf = nullptr;
	bpv__Black_BG__pf = nullptr;
	bpv__Box_1__pf = nullptr;
	bpv__Box_2__pf = nullptr;
	bpv__Button_Back_Mainmenu__pf = nullptr;
	bpv__Effects__pf = nullptr;
	bpv__Exit__pf = nullptr;
	bpv__Exit_BT__pf = nullptr;
	bpv__Exit_Button__pf = nullptr;
	bpv__ExittoMain__pf = nullptr;
	bpv__goback__pf = nullptr;
	bpv__Image_2106__pf = nullptr;
	bpv__Line_BG__pf = nullptr;
	bpv__MainMenuVB__pf = nullptr;
	bpv__MEME__pf = nullptr;
	bpv__MEME_ver__pf = nullptr;
	bpv__Play__pf = nullptr;
	bpv__Play_BT__pf = nullptr;
	bpv__Play_Button__pf = nullptr;
	bpv__S__pf = nullptr;
	bpv__ScrollBox_Effects__pf = nullptr;
	bpv__ScrollBox_Song__pf = nullptr;
	bpv__Setting__pf = nullptr;
	bpv__Setting_BG__pf = nullptr;
	bpv__Setting_BG_1__pf = nullptr;
	bpv__Setting_Bt__pf = nullptr;
	bpv__Setting_Button__pf = nullptr;
	bpv__SettingsMenu__pf = nullptr;
	bpv__Slider_236__pf = nullptr;
	bpv__Slider_423__pf = nullptr;
	bpv__Song__pf = nullptr;
	bpv__Sound__pf = nullptr;
	bpv__SS__pf = nullptr;
	bpv__Sun__pf = nullptr;
	bpv__Sunmove__pf = nullptr;
	bpv__White_BG__pf = nullptr;
	bpv__MainGameModeBase__pf = nullptr;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UMainMenu_W_C__pf1343218889::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UMainMenu_W_C__pf1343218889::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(7);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 7);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("goback"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Mainwidget_goback_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("S"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Mainwidget_S_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("ExittoMain"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Mainwidget_ExittoMain_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Button_Back_Mainmenu"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Mainwidget_Button_Back_Mainmenu_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Setting_Bt"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Mainwidget_Setting_Bt_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Exit_BT"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Mainwidget_Exit_BT_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("Play_BT"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__Mainwidget_Play_BT_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__9 = NewObject<UScaleBox>(__Local__1, TEXT("ScaleBox_0"), (EObjectFlags)0x00280008);
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__9), UPanelWidget::__PPO__Slots() )));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(1);
	auto __Local__11 = NewObject<UScaleBoxSlot>(__Local__9, TEXT("ScaleBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<USizeBox>(__Local__1, TEXT("SizeBox_0"), (EObjectFlags)0x00280008);
	__Local__12->WidthOverride = 1920.000000f;
	__Local__12->HeightOverride = 1080.000000f;
	__Local__12->bOverride_WidthOverride = true;
	__Local__12->bOverride_HeightOverride = true;
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(1);
	auto __Local__14 = NewObject<USizeBoxSlot>(__Local__12, TEXT("SizeBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UCanvasPanel>(__Local__1, TEXT("MainMenu_YourWays"), (EObjectFlags)0x00280008);
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__15), UPanelWidget::__PPO__Slots() )));
	__Local__16 = TArray<UPanelSlot*> ();
	__Local__16.Reserve(10);
	auto __Local__17 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_5"), (EObjectFlags)0x00280008);
	__Local__17->LayoutData.Offsets.Right = 0.000000f;
	__Local__17->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__17->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__17->Parent = __Local__15;
	auto __Local__18 = NewObject<UImage>(__Local__1, TEXT("Background"), (EObjectFlags)0x00280008);
	__Local__18->Brush.ImageSize = FVector2D(4800.000000, 2700.000000);
	auto& __Local__19 = (*(AccessPrivateProperty<UObject* >(&(__Local__18->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__19 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__16.Add(__Local__17);
	auto __Local__20 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_25"), (EObjectFlags)0x00280008);
	__Local__20->LayoutData.Offsets.Left = -96.575684f;
	__Local__20->LayoutData.Offsets.Top = -100.333344f;
	__Local__20->LayoutData.Offsets.Right = -98.048157f;
	__Local__20->LayoutData.Offsets.Bottom = -94.438232f;
	__Local__20->LayoutData.Anchors.Minimum = FVector2D(0.132917, 0.410185);
	__Local__20->LayoutData.Anchors.Maximum = FVector2D(0.287104, 0.674568);
	__Local__20->Parent = __Local__15;
	auto __Local__21 = NewObject<UVerticalBox>(__Local__1, TEXT("MainMenuVB"), (EObjectFlags)0x00280008);
	auto& __Local__22 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__21), UPanelWidget::__PPO__Slots() )));
	__Local__22 = TArray<UPanelSlot*> ();
	__Local__22.Reserve(3);
	auto __Local__23 = NewObject<UVerticalBoxSlot>(__Local__21, TEXT("VerticalBoxSlot_18"), (EObjectFlags)0x00280008);
	__Local__23->Padding.Left = -100.000000f;
	__Local__23->Padding.Top = -10.000000f;
	__Local__23->Padding.Right = -60.000000f;
	__Local__23->Padding.Bottom = -60.000000f;
	__Local__23->Parent = __Local__21;
	auto __Local__24 = NewObject<UVerticalBox>(__Local__1, TEXT("Play_Button"), (EObjectFlags)0x00280008);
	auto& __Local__25 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__24), UPanelWidget::__PPO__Slots() )));
	__Local__25 = TArray<UPanelSlot*> ();
	__Local__25.Reserve(1);
	auto __Local__26 = NewObject<UVerticalBoxSlot>(__Local__24, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__26->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__26->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__26->Parent = __Local__24;
	auto __Local__27 = NewObject<UButton>(__Local__1, TEXT("Play_BT"), (EObjectFlags)0x00280008);
	__Local__27->WidgetStyle.Normal.ImageSize = FVector2D(83.540413, 2.977270);
	auto& __Local__28 = (*(AccessPrivateProperty<UObject* >(&(__Local__27->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__28 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__29 = (*(AccessPrivateProperty<FName >(&(__Local__27->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceName() )));
	__Local__29 = FName(TEXT("../../../Engine/Content/Slate/Common/Button_Hovered.png"));
	__Local__27->WidgetStyle.Hovered.ImageSize = FVector2D(46.884071, 218.000000);
	__Local__27->WidgetStyle.Pressed.ImageSize = FVector2D(46.884071, 218.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<FName >(&(__Local__27->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceName() )));
	__Local__30 = FName(TEXT("../../../Engine/Content/Slate/Common/Button_Hovered.png"));
	auto& __Local__31 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__27), UPanelWidget::__PPO__Slots() )));
	__Local__31 = TArray<UPanelSlot*> ();
	__Local__31.Reserve(1);
	auto __Local__32 = NewObject<UButtonSlot>(__Local__27, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__32->Padding.Left = 25.000000f;
	__Local__32->Padding.Top = 0.000000f;
	__Local__32->Padding.Right = 50.000000f;
	__Local__32->Padding.Bottom = 0.000000f;
	__Local__32->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__32->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__32->Parent = __Local__27;
	auto __Local__33 = NewObject<UImage>(__Local__1, TEXT("Play"), (EObjectFlags)0x00280008);
	__Local__33->Brush.ImageSize = FVector2D(460.000000, 210.000000);
	auto& __Local__34 = (*(AccessPrivateProperty<UObject* >(&(__Local__33->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__34 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__33->Slot = __Local__32;
	__Local__33->RenderTransform.Scale = FVector2D(1.250000, 1.050000);
	__Local__32->Content = __Local__33;
	__Local__31.Add(__Local__32);
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__25.Add(__Local__26);
	__Local__24->Slot = __Local__23;
	__Local__24->RenderTransform.Scale = FVector2D(0.600000, 0.600000);
	__Local__24->bIsVariable = true;
	__Local__23->Content = __Local__24;
	__Local__22.Add(__Local__23);
	auto __Local__35 = NewObject<UVerticalBoxSlot>(__Local__21, TEXT("VerticalBoxSlot_19"), (EObjectFlags)0x00280008);
	__Local__35->Padding.Left = -70.000000f;
	__Local__35->Padding.Top = -10.000000f;
	__Local__35->Padding.Right = -80.000000f;
	__Local__35->Padding.Bottom = -60.000000f;
	__Local__35->Parent = __Local__21;
	auto __Local__36 = NewObject<UVerticalBox>(__Local__1, TEXT("Setting_Button"), (EObjectFlags)0x00280008);
	auto& __Local__37 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__36), UPanelWidget::__PPO__Slots() )));
	__Local__37 = TArray<UPanelSlot*> ();
	__Local__37.Reserve(1);
	auto __Local__38 = NewObject<UVerticalBoxSlot>(__Local__36, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__38->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__38->Parent = __Local__36;
	auto __Local__39 = NewObject<UButton>(__Local__1, TEXT("Setting_Bt"), (EObjectFlags)0x00280008);
	auto& __Local__40 = (*(AccessPrivateProperty<FName >(&(__Local__39->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceName() )));
	__Local__40 = FName(TEXT("../../../Engine/Content/Slate/Common/Button_Hovered.png"));
	auto& __Local__41 = (*(AccessPrivateProperty<FName >(&(__Local__39->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceName() )));
	__Local__41 = FName(TEXT("../../../Engine/Content/Slate/Common/Button_Hovered.png"));
	auto& __Local__42 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__39), UPanelWidget::__PPO__Slots() )));
	__Local__42 = TArray<UPanelSlot*> ();
	__Local__42.Reserve(1);
	auto __Local__43 = NewObject<UButtonSlot>(__Local__39, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__43->Padding.Left = 0.000000f;
	__Local__43->Padding.Top = 0.000000f;
	__Local__43->Padding.Right = 0.000000f;
	__Local__43->Padding.Bottom = 0.000000f;
	__Local__43->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__43->Parent = __Local__39;
	auto __Local__44 = NewObject<UImage>(__Local__1, TEXT("Setting"), (EObjectFlags)0x00280008);
	__Local__44->Brush.ImageSize = FVector2D(707.000000, 210.000000);
	auto& __Local__45 = (*(AccessPrivateProperty<UObject* >(&(__Local__44->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__45 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__44->Slot = __Local__43;
	__Local__44->RenderTransform.Scale = FVector2D(1.010000, 1.020000);
	__Local__43->Content = __Local__44;
	__Local__42.Add(__Local__43);
	__Local__39->Slot = __Local__38;
	__Local__39->RenderTransform.Scale = FVector2D(1.300000, 1.000000);
	__Local__38->Content = __Local__39;
	__Local__37.Add(__Local__38);
	__Local__36->Slot = __Local__35;
	__Local__36->RenderTransform.Scale = FVector2D(0.600000, 0.600000);
	__Local__36->bIsVariable = true;
	__Local__35->Content = __Local__36;
	__Local__22.Add(__Local__35);
	auto __Local__46 = NewObject<UVerticalBoxSlot>(__Local__21, TEXT("VerticalBoxSlot_20"), (EObjectFlags)0x00280008);
	__Local__46->Padding.Left = -100.000000f;
	__Local__46->Padding.Top = -10.000000f;
	__Local__46->Padding.Right = -60.000000f;
	__Local__46->Padding.Bottom = -60.000000f;
	__Local__46->Parent = __Local__21;
	auto __Local__47 = NewObject<UVerticalBox>(__Local__1, TEXT("Exit_Button"), (EObjectFlags)0x00280008);
	auto& __Local__48 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__47), UPanelWidget::__PPO__Slots() )));
	__Local__48 = TArray<UPanelSlot*> ();
	__Local__48.Reserve(1);
	auto __Local__49 = NewObject<UVerticalBoxSlot>(__Local__47, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__49->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__49->Parent = __Local__47;
	auto __Local__50 = NewObject<UButton>(__Local__1, TEXT("Exit_BT"), (EObjectFlags)0x00280008);
	auto& __Local__51 = (*(AccessPrivateProperty<FName >(&(__Local__50->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceName() )));
	__Local__51 = FName(TEXT("../../../Engine/Content/Slate/Common/Button_Hovered.png"));
	auto& __Local__52 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__50), UPanelWidget::__PPO__Slots() )));
	__Local__52 = TArray<UPanelSlot*> ();
	__Local__52.Reserve(1);
	auto __Local__53 = NewObject<UButtonSlot>(__Local__50, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__53->Padding.Left = 0.000000f;
	__Local__53->Padding.Top = 0.000000f;
	__Local__53->Padding.Right = 50.000000f;
	__Local__53->Padding.Bottom = 0.000000f;
	__Local__53->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__53->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__53->Parent = __Local__50;
	auto __Local__54 = NewObject<UImage>(__Local__1, TEXT("Exit"), (EObjectFlags)0x00280008);
	__Local__54->Brush.ImageSize = FVector2D(427.000000, 228.000000);
	auto& __Local__55 = (*(AccessPrivateProperty<UObject* >(&(__Local__54->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__55 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__54->Slot = __Local__53;
	__Local__54->RenderTransform.Scale = FVector2D(1.255000, 1.020000);
	__Local__53->Content = __Local__54;
	__Local__52.Add(__Local__53);
	__Local__50->Slot = __Local__49;
	__Local__49->Content = __Local__50;
	__Local__48.Add(__Local__49);
	__Local__47->Slot = __Local__46;
	__Local__47->RenderTransform.Scale = FVector2D(0.600000, 0.600000);
	__Local__47->bIsVariable = true;
	__Local__46->Content = __Local__47;
	__Local__22.Add(__Local__46);
	__Local__21->Slot = __Local__20;
	__Local__21->RenderTransform.Scale = FVector2D(0.600000, 0.600000);
	__Local__21->bIsVariable = true;
	__Local__20->Content = __Local__21;
	__Local__16.Add(__Local__20);
	auto __Local__56 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_36"), (EObjectFlags)0x00280008);
	__Local__56->LayoutData.Offsets.Left = -4.000000f;
	__Local__56->LayoutData.Offsets.Top = -4.000000f;
	__Local__56->LayoutData.Offsets.Right = -4.000000f;
	__Local__56->LayoutData.Offsets.Bottom = -8.000000f;
	__Local__56->LayoutData.Anchors.Minimum = FVector2D(0.267901, 0.216187);
	__Local__56->LayoutData.Anchors.Maximum = FVector2D(0.748611, 0.874623);
	__Local__56->Parent = __Local__15;
	auto __Local__57 = NewObject<UVerticalBox>(__Local__1, TEXT("Setting_BG_1"), (EObjectFlags)0x00280008);
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__57), UPanelWidget::__PPO__Slots() )));
	__Local__58 = TArray<UPanelSlot*> ();
	__Local__58.Reserve(1);
	auto __Local__59 = NewObject<UVerticalBoxSlot>(__Local__57, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__59->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__59->Parent = __Local__57;
	auto __Local__60 = NewObject<UImage>(__Local__1, TEXT("Black_BG"), (EObjectFlags)0x00280008);
	auto& __Local__61 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__60->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__61 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__58.Add(__Local__59);
	__Local__57->Slot = __Local__56;
	__Local__57->bIsVariable = true;
	__Local__57->Visibility = ESlateVisibility::Hidden;
	__Local__56->Content = __Local__57;
	__Local__16.Add(__Local__56);
	auto __Local__62 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_34"), (EObjectFlags)0x00280008);
	__Local__62->LayoutData.Offsets.Left = 3.851766f;
	__Local__62->LayoutData.Offsets.Top = 4.296265f;
	__Local__62->LayoutData.Offsets.Right = 3.904663f;
	__Local__62->LayoutData.Offsets.Bottom = 2.306885f;
	__Local__62->LayoutData.Anchors.Minimum = FVector2D(0.267901, 0.216187);
	__Local__62->LayoutData.Anchors.Maximum = FVector2D(0.748611, 0.874623);
	__Local__62->Parent = __Local__15;
	auto __Local__63 = NewObject<UVerticalBox>(__Local__1, TEXT("Setting_BG"), (EObjectFlags)0x00280008);
	auto& __Local__64 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__63), UPanelWidget::__PPO__Slots() )));
	__Local__64 = TArray<UPanelSlot*> ();
	__Local__64.Reserve(1);
	auto __Local__65 = NewObject<UVerticalBoxSlot>(__Local__63, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__65->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__65->Parent = __Local__63;
	auto __Local__66 = NewObject<UImage>(__Local__1, TEXT("White_BG"), (EObjectFlags)0x00280008);
	__Local__66->Slot = __Local__65;
	__Local__65->Content = __Local__66;
	__Local__64.Add(__Local__65);
	__Local__63->Slot = __Local__62;
	__Local__63->bIsVariable = true;
	__Local__63->Visibility = ESlateVisibility::Hidden;
	__Local__62->Content = __Local__63;
	__Local__16.Add(__Local__62);
	auto __Local__67 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_40"), (EObjectFlags)0x00280008);
	__Local__67->LayoutData.Offsets.Left = -378.666687f;
	__Local__67->LayoutData.Offsets.Top = -334.833344f;
	__Local__67->LayoutData.Offsets.Right = 916.897400f;
	__Local__67->LayoutData.Offsets.Bottom = 733.890991f;
	__Local__67->LayoutData.Anchors.Minimum = FVector2D(0.466667, 0.529630);
	__Local__67->LayoutData.Anchors.Maximum = FVector2D(0.466667, 0.529630);
	__Local__67->Parent = __Local__15;
	auto __Local__68 = NewObject<UVerticalBox>(__Local__1, TEXT("Line_BG"), (EObjectFlags)0x00280008);
	auto& __Local__69 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__68), UPanelWidget::__PPO__Slots() )));
	__Local__69 = TArray<UPanelSlot*> ();
	__Local__69.Reserve(2);
	auto __Local__70 = NewObject<UVerticalBoxSlot>(__Local__68, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__70->Padding.Top = 317.500000f;
	__Local__70->Parent = __Local__68;
	auto __Local__71 = NewObject<UImage>(__Local__1, TEXT("Box_1"), (EObjectFlags)0x00280008);
	auto& __Local__72 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__71->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__72 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__71->Slot = __Local__70;
	__Local__71->RenderTransform.Scale = FVector2D(0.810000, -2.500000);
	__Local__70->Content = __Local__71;
	__Local__69.Add(__Local__70);
	auto __Local__73 = NewObject<UVerticalBoxSlot>(__Local__68, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__73->Padding.Top = 235.000000f;
	__Local__73->Parent = __Local__68;
	auto __Local__74 = NewObject<UImage>(__Local__1, TEXT("Box_2"), (EObjectFlags)0x00280008);
	auto& __Local__75 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__74->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__75 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__74->Slot = __Local__73;
	__Local__74->RenderTransform.Scale = FVector2D(0.810000, -2.500000);
	__Local__73->Content = __Local__74;
	__Local__69.Add(__Local__73);
	__Local__68->Slot = __Local__67;
	__Local__68->bIsVariable = true;
	__Local__68->Visibility = ESlateVisibility::Hidden;
	__Local__67->Content = __Local__68;
	__Local__16.Add(__Local__67);
	auto __Local__76 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_16"), (EObjectFlags)0x00280008);
	__Local__76->LayoutData.Offsets.Left = 3.703674f;
	__Local__76->LayoutData.Offsets.Top = 4.740784f;
	__Local__76->LayoutData.Offsets.Right = 1.129639f;
	__Local__76->LayoutData.Offsets.Bottom = 0.666687f;
	__Local__76->LayoutData.Anchors.Minimum = FVector2D(0.267361, 0.214815);
	__Local__76->LayoutData.Anchors.Maximum = FVector2D(0.747656, 0.900000);
	__Local__76->Parent = __Local__15;
	auto __Local__77 = NewObject<UVerticalBox>(__Local__1, TEXT("SettingsMenu"), (EObjectFlags)0x00280008);
	auto& __Local__78 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__77), UPanelWidget::__PPO__Slots() )));
	__Local__78 = TArray<UPanelSlot*> ();
	__Local__78.Reserve(7);
	auto __Local__79 = NewObject<UVerticalBoxSlot>(__Local__77, TEXT("VerticalBoxSlot_17"), (EObjectFlags)0x00280008);
	__Local__79->Padding.Top = 15.000000f;
	__Local__79->Padding.Right = 15.000000f;
	__Local__79->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__79->Parent = __Local__77;
	auto __Local__80 = NewObject<UButton>(__Local__1, TEXT("ExittoMain"), (EObjectFlags)0x00280008);
	auto& __Local__81 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__80->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__81 = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__82 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__80), UPanelWidget::__PPO__Slots() )));
	__Local__82 = TArray<UPanelSlot*> ();
	__Local__82.Reserve(1);
	auto __Local__83 = NewObject<UButtonSlot>(__Local__80, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__83->Padding.Left = 0.000000f;
	__Local__83->Padding.Top = 0.000000f;
	__Local__83->Padding.Right = 0.000000f;
	__Local__83->Padding.Bottom = 0.000000f;
	__Local__83->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__83->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__83->Parent = __Local__80;
	auto __Local__84 = NewObject<UImage>(__Local__1, TEXT("BACK"), (EObjectFlags)0x00280008);
	__Local__84->Brush.ImageSize = FVector2D(15.000000, 15.000000);
	auto& __Local__85 = (*(AccessPrivateProperty<UObject* >(&(__Local__84->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__85 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__82.Add(__Local__83);
	__Local__80->Slot = __Local__79;
	__Local__80->RenderTransform.Scale = FVector2D(2.000000, 2.000000);
	__Local__79->Content = __Local__80;
	__Local__78.Add(__Local__79);
	auto __Local__86 = NewObject<UVerticalBoxSlot>(__Local__77, TEXT("VerticalBoxSlot_15"), (EObjectFlags)0x00280008);
	__Local__86->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__86->Parent = __Local__77;
	auto __Local__87 = NewObject<UImage>(__Local__1, TEXT("Sound"), (EObjectFlags)0x00280008);
	__Local__87->Brush.ImageSize = FVector2D(350.000000, 100.000000);
	auto& __Local__88 = (*(AccessPrivateProperty<UObject* >(&(__Local__87->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__88 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__87->Slot = __Local__86;
	__Local__86->Content = __Local__87;
	__Local__78.Add(__Local__86);
	auto __Local__89 = NewObject<UVerticalBoxSlot>(__Local__77, TEXT("VerticalBoxSlot_13"), (EObjectFlags)0x00280008);
	__Local__89->Padding.Top = 50.000000f;
	__Local__89->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__89->Parent = __Local__77;
	auto __Local__90 = NewObject<UImage>(__Local__1, TEXT("Song"), (EObjectFlags)0x00280008);
	__Local__90->Brush.ImageSize = FVector2D(250.000000, 100.000000);
	auto& __Local__91 = (*(AccessPrivateProperty<UObject* >(&(__Local__90->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__91 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__90->Slot = __Local__89;
	__Local__89->Content = __Local__90;
	__Local__78.Add(__Local__89);
	auto __Local__92 = NewObject<UVerticalBoxSlot>(__Local__77, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__92->Padding.Left = 100.000000f;
	__Local__92->Padding.Top = 20.000000f;
	__Local__92->Padding.Right = 100.000000f;
	__Local__92->Padding.Bottom = 30.000000f;
	__Local__92->Parent = __Local__77;
	auto __Local__93 = NewObject<UScrollBox>(__Local__1, TEXT("ScrollBox_Song"), (EObjectFlags)0x00280008);
	auto& __Local__94 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__93), UPanelWidget::__PPO__Slots() )));
	__Local__94 = TArray<UPanelSlot*> ();
	__Local__94.Reserve(1);
	auto __Local__95 = NewObject<UScrollBoxSlot>(__Local__93, TEXT("ScrollBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__95->Parent = __Local__93;
	auto __Local__96 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_110"), (EObjectFlags)0x00280008);
	auto& __Local__97 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__96), UPanelWidget::__PPO__Slots() )));
	__Local__97 = TArray<UPanelSlot*> ();
	__Local__97.Reserve(1);
	auto __Local__98 = NewObject<UHorizontalBoxSlot>(__Local__96, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__98->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__98->Parent = __Local__96;
	auto __Local__99 = NewObject<USlider>(__Local__1, TEXT("Slider_423"), (EObjectFlags)0x00280008);
	__Local__99->Value = 0.020000f;
	auto& __Local__100 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__99->WidgetStyle.DisabledBarImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__100 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	__Local__99->WidgetStyle.NormalThumbImage.ImageSize = FVector2D(30.000000, 60.000000);
	auto& __Local__101 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__99->WidgetStyle.NormalThumbImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__101 = FLinearColor(0.210000, 0.210000, 0.210000, 1.000000);
	__Local__99->WidgetStyle.HoveredThumbImage.ImageSize = FVector2D(30.000000, 60.000000);
	auto& __Local__102 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__99->WidgetStyle.HoveredThumbImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__102 = FLinearColor(0.210000, 0.210000, 0.210000, 1.000000);
	__Local__99->WidgetStyle.DisabledThumbImage.ImageSize = FVector2D(30.000000, 60.000000);
	auto& __Local__103 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__99->WidgetStyle.DisabledThumbImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__103 = FLinearColor(0.210000, 0.210000, 0.210000, 1.000000);
	auto& __Local__104 = (*(AccessPrivateProperty<FName >(&(__Local__99->WidgetStyle.DisabledThumbImage), FSlateBrush::__PPO__ResourceName() )));
	__Local__104 = FName(TEXT("../../../Engine/Content/Slate/Common/Button.png"));
	__Local__99->WidgetStyle.BarThickness = 60.000000f;
	__Local__99->Slot = __Local__98;
	__Local__99->RenderTransform.Scale = FVector2D(1.000000, 1.100000);
	__Local__98->Content = __Local__99;
	__Local__97.Add(__Local__98);
	__Local__96->Slot = __Local__95;
	__Local__95->Content = __Local__96;
	__Local__94.Add(__Local__95);
	__Local__93->Slot = __Local__92;
	__Local__93->bIsVariable = true;
	__Local__92->Content = __Local__93;
	__Local__78.Add(__Local__92);
	auto __Local__105 = NewObject<UVerticalBoxSlot>(__Local__77, TEXT("VerticalBoxSlot_10"), (EObjectFlags)0x00280008);
	__Local__105->Padding.Top = 30.000000f;
	__Local__105->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__105->Parent = __Local__77;
	auto __Local__106 = NewObject<UImage>(__Local__1, TEXT("Effects"), (EObjectFlags)0x00280008);
	__Local__106->Brush.ImageSize = FVector2D(325.000000, 125.000000);
	auto& __Local__107 = (*(AccessPrivateProperty<UObject* >(&(__Local__106->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__107 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	__Local__106->Slot = __Local__105;
	__Local__105->Content = __Local__106;
	__Local__78.Add(__Local__105);
	auto __Local__108 = NewObject<UVerticalBoxSlot>(__Local__77, TEXT("VerticalBoxSlot_8"), (EObjectFlags)0x00280008);
	__Local__108->Padding.Left = 100.000000f;
	__Local__108->Padding.Top = 20.000000f;
	__Local__108->Padding.Right = 100.000000f;
	__Local__108->Padding.Bottom = 30.000000f;
	__Local__108->Parent = __Local__77;
	auto __Local__109 = NewObject<UScrollBox>(__Local__1, TEXT("ScrollBox_Effects"), (EObjectFlags)0x00280008);
	auto& __Local__110 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__109), UPanelWidget::__PPO__Slots() )));
	__Local__110 = TArray<UPanelSlot*> ();
	__Local__110.Reserve(1);
	auto __Local__111 = NewObject<UScrollBoxSlot>(__Local__109, TEXT("ScrollBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__111->Parent = __Local__109;
	auto __Local__112 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_95"), (EObjectFlags)0x00280008);
	auto& __Local__113 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__112), UPanelWidget::__PPO__Slots() )));
	__Local__113 = TArray<UPanelSlot*> ();
	__Local__113.Reserve(1);
	auto __Local__114 = NewObject<UHorizontalBoxSlot>(__Local__112, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__114->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__114->Parent = __Local__112;
	auto __Local__115 = NewObject<USlider>(__Local__1, TEXT("Slider_236"), (EObjectFlags)0x00280008);
	__Local__115->Value = 0.020000f;
	auto& __Local__116 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__115->WidgetStyle.DisabledBarImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__116 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	__Local__115->WidgetStyle.NormalThumbImage.ImageSize = FVector2D(30.000000, 60.000000);
	auto& __Local__117 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__115->WidgetStyle.NormalThumbImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__117 = FLinearColor(0.210000, 0.210000, 0.210000, 1.000000);
	__Local__115->WidgetStyle.HoveredThumbImage.ImageSize = FVector2D(30.000000, 60.000000);
	auto& __Local__118 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__115->WidgetStyle.HoveredThumbImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__118 = FLinearColor(0.210000, 0.210000, 0.210000, 1.000000);
	__Local__115->WidgetStyle.DisabledThumbImage.ImageSize = FVector2D(30.000000, 60.000000);
	auto& __Local__119 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__115->WidgetStyle.DisabledThumbImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__119 = FLinearColor(0.210000, 0.210000, 0.210000, 1.000000);
	auto& __Local__120 = (*(AccessPrivateProperty<FName >(&(__Local__115->WidgetStyle.DisabledThumbImage), FSlateBrush::__PPO__ResourceName() )));
	__Local__120 = FName(TEXT("../../../Engine/Content/Slate/Common/Button.png"));
	__Local__115->WidgetStyle.BarThickness = 60.000000f;
	__Local__115->Slot = __Local__114;
	__Local__115->RenderTransform.Scale = FVector2D(1.000000, 1.100000);
	__Local__114->Content = __Local__115;
	__Local__113.Add(__Local__114);
	__Local__112->Slot = __Local__111;
	__Local__111->Content = __Local__112;
	__Local__110.Add(__Local__111);
	__Local__109->Slot = __Local__108;
	__Local__109->bIsVariable = true;
	__Local__108->Content = __Local__109;
	__Local__78.Add(__Local__108);
	auto __Local__121 = NewObject<UVerticalBoxSlot>(__Local__77, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__121->Padding.Bottom = 100.000000f;
	__Local__121->Parent = __Local__77;
	auto __Local__122 = NewObject<UButton>(__Local__1, TEXT("Button_Back_Mainmenu"), (EObjectFlags)0x00280008);
	auto& __Local__123 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__122->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__123 = FLinearColor(1.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__124 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__122), UPanelWidget::__PPO__Slots() )));
	__Local__124 = TArray<UPanelSlot*> ();
	__Local__124.Reserve(1);
	auto __Local__125 = NewObject<UButtonSlot>(__Local__122, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__125->Parent = __Local__122;
	auto __Local__126 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_298"), (EObjectFlags)0x00280008);
	__Local__126->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[55E993074F97F5683BCADE96C236F35A]\", \"4DF1B41A4B2BC2EA68D8BA832E20CF25\", \"Back\")")	);
	auto& __Local__127 = (*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(__Local__126->ColorAndOpacity), FSlateColor::__PPO__ColorUseRule() )));
	__Local__127 = ESlateColorStylingMode::Type::UseColor_Foreground;
	__Local__126->Slot = __Local__125;
	__Local__125->Content = __Local__126;
	__Local__124.Add(__Local__125);
	__Local__122->Slot = __Local__121;
	__Local__121->Content = __Local__122;
	__Local__78.Add(__Local__121);
	__Local__77->Slot = __Local__76;
	__Local__77->bIsVariable = true;
	__Local__77->Visibility = ESlateVisibility::Collapsed;
	__Local__76->Content = __Local__77;
	__Local__16.Add(__Local__76);
	auto __Local__128 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_4"), (EObjectFlags)0x00280008);
	__Local__128->LayoutData.Offsets.Left = 1.333984f;
	__Local__128->LayoutData.Offsets.Top = 0.999573f;
	__Local__128->LayoutData.Offsets.Right = 2.332764f;
	__Local__128->LayoutData.Offsets.Bottom = 1.667053f;
	__Local__128->LayoutData.Anchors.Minimum = FVector2D(0.313889, 0.325000);
	__Local__128->LayoutData.Anchors.Maximum = FVector2D(0.431944, 0.518210);
	__Local__128->Parent = __Local__15;
	auto __Local__129 = NewObject<UVerticalBox>(__Local__1, TEXT("Sunmove"), (EObjectFlags)0x00280008);
	auto& __Local__130 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__129), UPanelWidget::__PPO__Slots() )));
	__Local__130 = TArray<UPanelSlot*> ();
	__Local__130.Reserve(1);
	auto __Local__131 = NewObject<UVerticalBoxSlot>(__Local__129, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__131->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__131->Parent = __Local__129;
	auto __Local__132 = NewObject<UImage>(__Local__1, TEXT("Sun"), (EObjectFlags)0x00280008);
	__Local__132->Brush.ImageSize = FVector2D(588.000000, 538.000000);
	auto& __Local__133 = (*(AccessPrivateProperty<UObject* >(&(__Local__132->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__133 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	__Local__132->Slot = __Local__131;
	__Local__131->Content = __Local__132;
	__Local__130.Add(__Local__131);
	__Local__129->Slot = __Local__128;
	__Local__129->RenderTransform.Scale = FVector2D(1.000000, 1.100000);
	__Local__129->bIsVariable = true;
	__Local__128->Content = __Local__129;
	__Local__16.Add(__Local__128);
	auto __Local__134 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_23"), (EObjectFlags)0x00280008);
	__Local__134->LayoutData.Offsets.Left = 0.500000f;
	__Local__134->LayoutData.Offsets.Top = 0.722168f;
	__Local__134->LayoutData.Offsets.Right = 0.555557f;
	__Local__134->LayoutData.Offsets.Bottom = 0.500000f;
	__Local__134->LayoutData.Anchors.Minimum = FVector2D(0.027083, 0.874537);
	__Local__134->LayoutData.Anchors.Maximum = FVector2D(0.057813, 0.969444);
	__Local__134->Parent = __Local__15;
	auto __Local__135 = NewObject<UVerticalBox>(__Local__1, TEXT("SS"), (EObjectFlags)0x00280008);
	auto& __Local__136 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__135), UPanelWidget::__PPO__Slots() )));
	__Local__136 = TArray<UPanelSlot*> ();
	__Local__136.Reserve(1);
	auto __Local__137 = NewObject<UVerticalBoxSlot>(__Local__135, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__137->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__137->Parent = __Local__135;
	auto __Local__138 = NewObject<UButton>(__Local__1, TEXT("S"), (EObjectFlags)0x00280008);
	__Local__138->WidgetStyle.Normal.ImageSize = FVector2D(47.000000, 126.000000);
	auto& __Local__139 = (*(AccessPrivateProperty<UObject* >(&(__Local__138->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__139 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__138->WidgetStyle.Hovered.ImageSize = FVector2D(47.000000, 126.000000);
	auto& __Local__140 = (*(AccessPrivateProperty<UObject* >(&(__Local__138->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__140 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	auto& __Local__141 = (*(AccessPrivateProperty<FName >(&(__Local__138->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceName() )));
	__Local__141 = FName(TEXT("../../../Engine/Content/Slate/Common/Button.png"));
	__Local__138->WidgetStyle.Pressed.ImageSize = FVector2D(90.000000, 100.000000);
	auto& __Local__142 = (*(AccessPrivateProperty<UObject* >(&(__Local__138->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__142 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	auto& __Local__143 = (*(AccessPrivateProperty<FName >(&(__Local__138->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceName() )));
	__Local__143 = FName(TEXT("../../../Engine/Content/Slate/Common/Button.png"));
	__Local__138->Slot = __Local__137;
	__Local__138->RenderTransform.Scale = FVector2D(0.900000, 1.200000);
	__Local__137->Content = __Local__138;
	__Local__136.Add(__Local__137);
	__Local__135->Slot = __Local__134;
	__Local__135->RenderTransform.Scale = FVector2D(0.700000, 0.600000);
	__Local__135->bIsVariable = true;
	__Local__134->Content = __Local__135;
	__Local__16.Add(__Local__134);
	auto __Local__144 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_41"), (EObjectFlags)0x00280008);
	__Local__144->LayoutData.Offsets.Right = 0.000000f;
	__Local__144->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__144->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__144->Parent = __Local__15;
	auto __Local__145 = NewObject<UVerticalBox>(__Local__1, TEXT("MEME_ver"), (EObjectFlags)0x00280008);
	auto& __Local__146 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__145), UPanelWidget::__PPO__Slots() )));
	__Local__146 = TArray<UPanelSlot*> ();
	__Local__146.Reserve(1);
	auto __Local__147 = NewObject<UVerticalBoxSlot>(__Local__145, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__147->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__147->Parent = __Local__145;
	auto __Local__148 = NewObject<UImage>(__Local__1, TEXT("MEME"), (EObjectFlags)0x00280008);
	__Local__148->Brush.ImageSize = FVector2D(1134.000000, 814.000000);
	auto& __Local__149 = (*(AccessPrivateProperty<UObject* >(&(__Local__148->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__149 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__148->Slot = __Local__147;
	__Local__147->Content = __Local__148;
	__Local__146.Add(__Local__147);
	__Local__145->Slot = __Local__144;
	__Local__145->bIsVariable = true;
	__Local__145->Visibility = ESlateVisibility::Hidden;
	__Local__144->Content = __Local__145;
	__Local__16.Add(__Local__144);
	auto __Local__150 = NewObject<UCanvasPanelSlot>(__Local__15, TEXT("CanvasPanelSlot_45"), (EObjectFlags)0x00280008);
	__Local__150->LayoutData.Offsets.Left = 0.571411f;
	__Local__150->LayoutData.Offsets.Top = 1.142853f;
	__Local__150->LayoutData.Offsets.Right = 1.142822f;
	__Local__150->LayoutData.Offsets.Bottom = 3.428558f;
	__Local__150->LayoutData.Anchors.Minimum = FVector2D(0.918155, 0.013757);
	__Local__150->LayoutData.Anchors.Maximum = FVector2D(0.971131, 0.110582);
	__Local__150->Parent = __Local__15;
	auto __Local__151 = NewObject<UVerticalBox>(__Local__1, TEXT("Backtomain"), (EObjectFlags)0x00280008);
	auto& __Local__152 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__151), UPanelWidget::__PPO__Slots() )));
	__Local__152 = TArray<UPanelSlot*> ();
	__Local__152.Reserve(1);
	auto __Local__153 = NewObject<UVerticalBoxSlot>(__Local__151, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__153->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__153->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__153->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__153->Parent = __Local__151;
	auto __Local__154 = NewObject<UButton>(__Local__1, TEXT("goback"), (EObjectFlags)0x00280008);
	__Local__154->WidgetStyle.Hovered.ImageSize = FVector2D(100.000000, 100.000000);
	auto& __Local__155 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__154), UPanelWidget::__PPO__Slots() )));
	__Local__155 = TArray<UPanelSlot*> ();
	__Local__155.Reserve(1);
	auto __Local__156 = NewObject<UButtonSlot>(__Local__154, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__156->Parent = __Local__154;
	auto __Local__157 = NewObject<UImage>(__Local__1, TEXT("Image_2106"), (EObjectFlags)0x00280008);
	__Local__157->Brush.ImageSize = FVector2D(100.000000, 100.000000);
	auto& __Local__158 = (*(AccessPrivateProperty<UObject* >(&(__Local__157->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__158 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__157->Slot = __Local__156;
	__Local__156->Content = __Local__157;
	__Local__155.Add(__Local__156);
	__Local__154->Slot = __Local__153;
	__Local__153->Content = __Local__154;
	__Local__152.Add(__Local__153);
	__Local__151->Slot = __Local__150;
	__Local__151->bIsVariable = true;
	__Local__151->Visibility = ESlateVisibility::Hidden;
	__Local__150->Content = __Local__151;
	__Local__16.Add(__Local__150);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	__Local__1->RootWidget = __Local__9;
}
PRAGMA_ENABLE_OPTIMIZATION
void UMainMenu_W_C__pf1343218889::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__159;
	SlotNames.Append(__Local__159);
}
void UMainMenu_W_C__pf1343218889::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__160;
	TArray<FDelegateRuntimeBinding>  __Local__161;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UMainMenu_W_C__pf1343218889::StaticClass())->MiscConvertedSubobjects[0]), __Local__160, __Local__161);
}
void UMainMenu_W_C__pf1343218889::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UMainMenu_W_C__pf1343218889::bpf__ExecuteUbergraph_MainMenu_W__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__MainMenuVB__pf))
	{
		bpv__MainMenuVB__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__Sun__pf))
	{
		bpv__Sun__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__MEME_ver__pf))
	{
		bpv__MEME_ver__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Backtomain__pf))
	{
		bpv__Backtomain__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	return; // KCST_GotoReturn
}
void UMainMenu_W_C__pf1343218889::bpf__ExecuteUbergraph_MainMenu_W__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__MainMenuVB__pf))
	{
		bpv__MainMenuVB__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Sun__pf))
	{
		bpv__Sun__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__MEME_ver__pf))
	{
		bpv__MEME_ver__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__Backtomain__pf))
	{
		bpv__Backtomain__pf->SetVisibility(ESlateVisibility::Visible);
	}
	return; // KCST_GotoReturn
}
void UMainMenu_W_C__pf1343218889::bpf__ExecuteUbergraph_MainMenu_W__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 8:
			{
				__CurrentState = 9;
				break;
			}
		case 9:
			{
				if(::IsValid(bpv__MainMenuVB__pf))
				{
					bpv__MainMenuVB__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Setting_BG__pf))
				{
					bpv__Setting_BG__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Setting_BG_1__pf))
				{
					bpv__Setting_BG_1__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Sun__pf))
				{
					bpv__Sun__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(::IsValid(bpv__Line_BG__pf))
				{
					bpv__Line_BG__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__SettingsMenu__pf))
				{
					bpv__SettingsMenu__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Setting_BG__pf))
				{
					bpv__Setting_BG__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Setting_BG_1__pf))
				{
					bpv__Setting_BG_1__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(::IsValid(bpv__Line_BG__pf))
				{
					bpv__Line_BG__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				__CurrentState = 9;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMainMenu_W_C__pf1343218889::bpf__ExecuteUbergraph_MainMenu_W__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 5);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__MainMenuVB__pf))
	{
		bpv__MainMenuVB__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__Sun__pf))
	{
		bpv__Sun__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(::IsValid(bpv__SettingsMenu__pf))
	{
		bpv__SettingsMenu__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__Setting_BG__pf))
	{
		bpv__Setting_BG__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__Setting_BG_1__pf))
	{
		bpv__Setting_BG_1__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(::IsValid(bpv__Line_BG__pf))
	{
		bpv__Line_BG__pf->SetVisibility(ESlateVisibility::Visible);
	}
	return; // KCST_GotoReturn
}
void UMainMenu_W_C__pf1343218889::bpf__ExecuteUbergraph_MainMenu_W__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::QuitGame(this, ((APlayerController*)nullptr), EQuitPreference::Quit, false);
	return; // KCST_GotoReturn
}
void UMainMenu_W_C__pf1343218889::bpf__ExecuteUbergraph_MainMenu_W__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::OpenLevel(this, FName(TEXT("MainWorld")), true, FString(TEXT("")));
	return; // KCST_GotoReturn
}
void UMainMenu_W_C__pf1343218889::bpf__BndEvt__Mainwidget_goback_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_MainMenu_W__pf_0(15);
}
void UMainMenu_W_C__pf1343218889::bpf__BndEvt__Mainwidget_S_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_MainMenu_W__pf_1(12);
}
void UMainMenu_W_C__pf1343218889::bpf__BndEvt__Mainwidget_ExittoMain_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_MainMenu_W__pf_2(11);
}
void UMainMenu_W_C__pf1343218889::bpf__BndEvt__Mainwidget_Button_Back_Mainmenu_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_MainMenu_W__pf_2(8);
}
void UMainMenu_W_C__pf1343218889::bpf__BndEvt__Mainwidget_Setting_Bt_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_MainMenu_W__pf_3(5);
}
void UMainMenu_W_C__pf1343218889::bpf__BndEvt__Mainwidget_Exit_BT_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_MainMenu_W__pf_4(4);
}
void UMainMenu_W_C__pf1343218889::bpf__BndEvt__Mainwidget_Play_BT_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_MainMenu_W__pf_5(3);
}
PRAGMA_DISABLE_OPTIMIZATION
void UMainMenu_W_C__pf1343218889::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{219, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/MainMenu/Cover_Game.Cover_Game 
		{220, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/MainMenu/play.play 
		{221, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/MainMenu/Setting_button.Setting_button 
		{222, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/MainMenu/Exit_button.Exit_button 
		{223, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/MainMenu/X.X 
		{224, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/MainMenu/Sound.Sound 
		{225, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/MainMenu/Song.Song 
		{226, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/MainMenu/Effects.Effects 
		{227, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/MainMenu/Sun.Sun 
		{228, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/MainMenu/S.S 
		{229, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/UI/MainMenu/meme.meme 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UMainMenu_W_C__pf1343218889::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.VerticalBox 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{230, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ScrollBox 
		{100, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Slider 
		{231, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/GameModeBase_BP.GameModeBase_BP_C 
		{232, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  GameModeBase_BP_C /Game/Blueprints/GameModeBase_BP.Default__GameModeBase_BP_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UMainMenu_W_C__pf1343218889
{
	FRegisterHelper__UMainMenu_W_C__pf1343218889()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UI/MainMenu/MainMenu_W"), &UMainMenu_W_C__pf1343218889::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UMainMenu_W_C__pf1343218889 Instance;
};
FRegisterHelper__UMainMenu_W_C__pf1343218889 FRegisterHelper__UMainMenu_W_C__pf1343218889::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
