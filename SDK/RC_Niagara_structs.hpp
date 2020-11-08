#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None = 2,
	ENiagaraSystemSpawnSectionEndBehavior__ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};


// Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior__ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};


// Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior__ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};


// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None    = 0,
	ENiagaraCollisionMode__SceneGeometry = 1,
	ENiagaraCollisionMode__DepthBuffer = 2,
	ENiagaraCollisionMode__DistanceField = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX = 4
};


// Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond = 2,
	ENiagaraLegacyTrailWidthMode__ENiagaraLegacyTrailWidthMode_MAX = 3
};


// Enum Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles = 0,
	ENiagaraIterationSource__DataInterface = 1,
	ENiagaraIterationSource__ENiagaraIterationSource_MAX = 2
};


// Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle  = 0,
	ENiagaraScriptGroup__Emitter   = 1,
	ENiagaraScriptGroup__System    = 2,
	ENiagaraScriptGroup__Max       = 3
};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function  = 0,
	ENiagaraScriptUsage__Module    = 1,
	ENiagaraScriptUsage__DynamicInput = 2,
	ENiagaraScriptUsage__ParticleSpawnScript = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated = 4,
	ENiagaraScriptUsage__ParticleUpdateScript = 5,
	ENiagaraScriptUsage__ParticleEventScript = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript = 8,
	ENiagaraScriptUsage__EmitterSpawnScript = 9,
	ENiagaraScriptUsage__EmitterUpdateScript = 10,
	ENiagaraScriptUsage__SystemSpawnScript = 11,
	ENiagaraScriptUsage__SystemUpdateScript = 12,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX = 13
};


// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty = 1,
	ENiagaraScriptCompileStatus__NCS_Error = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings = 6,
	ENiagaraScriptCompileStatus__NCS_MAX = 7
};


// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined = 0,
	ENiagaraInputNodeUsage__Parameter = 1,
	ENiagaraInputNodeUsage__Attribute = 2,
	ENiagaraInputNodeUsage__SystemConstant = 3,
	ENiagaraInputNodeUsage__TranslatorConstant = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter = 5,
	ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX = 6
};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData = 0,
	ENiagaraDataSetType__Shared    = 1,
	ENiagaraDataSetType__Event     = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3
};


// Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime = 0,
	ENiagaraAgeUpdateMode__DesiredAge = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode__ENiagaraAgeUpdateMode_MAX = 3
};


// Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim      = 0,
	ENiagaraSimTarget__GPUComputeSim = 1,
	ENiagaraSimTarget__ENiagaraSimTarget_MAX = 2
};


// Enum Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value     = 0,
	ENiagaraDefaultMode__Binding   = 1,
	ENiagaraDefaultMode__Custom    = 2,
	ENiagaraDefaultMode__ENiagaraDefaultMode_MAX = 3
};


// Enum Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs = 0,
	ENiagaraTickBehavior__UseComponentTickGroup = 1,
	ENiagaraTickBehavior__ForceTickFirst = 2,
	ENiagaraTickBehavior__ForceTickLast = 3,
	ENiagaraTickBehavior__ENiagaraTickBehavior_MAX = 4
};


// Enum Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None            = 0,
	ENCPoolMethod__AutoRelease     = 1,
	ENCPoolMethod__ManualRelease   = 2,
	ENCPoolMethod__ManualRelease_OnComplete = 3,
	ENCPoolMethod__FreeInPool      = 4,
	ENCPoolMethod__ENCPoolMethod_MAX = 5
};


// Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid = 0,
	ENDISkeletalMesh_SkinningMode__None = 1,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly = 2,
	ENDISkeletalMesh_SkinningMode__PreSkin = 3,
	ENDISkeletalMesh_SkinningMode__ENDISkeletalMesh_MAX = 4
};


// Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly = 0,
	ENiagaraScalabilityUpdateFrequency__Low = 1,
	ENiagaraScalabilityUpdateFrequency__Medium = 2,
	ENiagaraScalabilityUpdateFrequency__High = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous = 4,
	ENiagaraScalabilityUpdateFrequency__ENiagaraScalabilityUpdateFrequency_MAX = 5
};


// Enum Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8_t
{
	ENiagaraCullReaction__Deactivate = 0,
	ENiagaraCullReaction__DeactivateImmediate = 1,
	ENiagaraCullReaction__DeactivateResume = 2,
	ENiagaraCullReaction__DeactivateImmediateResume = 3,
	ENiagaraCullReaction__ENiagaraCullReaction_MAX = 4
};


// Enum Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate = 0,
	EParticleAllocationMode__ManualEstimate = 1,
	EParticleAllocationMode__EParticleAllocationMode_MAX = 2
};


// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle = 0,
	EScriptExecutionMode__SpawnedParticles = 1,
	EScriptExecutionMode__SingleParticle = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX = 3
};


// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None         = 0,
	ENiagaraSortMode__ViewDepth    = 1,
	ENiagaraSortMode__ViewDistance = 2,
	ENiagaraSortMode__CustomAscending = 3,
	ENiagaraSortMode__CustomDecending = 4,
	ENiagaraSortMode__ENiagaraSortMode_MAX = 5
};


// Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation = 0,
	ENiagaraMeshLockedAxisSpace__World = 1,
	ENiagaraMeshLockedAxisSpace__Local = 2,
	ENiagaraMeshLockedAxisSpace__ENiagaraMeshLockedAxisSpace_MAX = 3
};


// Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default = 0,
	ENiagaraMeshFacingMode__Velocity = 1,
	ENiagaraMeshFacingMode__CameraPosition = 2,
	ENiagaraMeshFacingMode__CameraPlane = 3,
	ENiagaraMeshFacingMode__ENiagaraMeshFacingMode_MAX = 4
};


// Enum Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled = 0,
	ENiagaraPlatformSetState__Enabled = 1,
	ENiagaraPlatformSetState__Active = 2,
	ENiagaraPlatformSetState__Unknown = 3,
	ENiagaraPlatformSetState__ENiagaraPlatformSetState_MAX = 4
};


// Enum Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default = 0,
	ENiagaraPlatformSelectionState__Enabled = 1,
	ENiagaraPlatformSelectionState__Disabled = 2,
	ENiagaraPlatformSelectionState__ENiagaraPlatformSelectionState_MAX = 3
};


// Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never = 0,
	ENiagaraPreviewGridResetMode__Individual = 1,
	ENiagaraPreviewGridResetMode__All = 2,
	ENiagaraPreviewGridResetMode__ENiagaraPreviewGridResetMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic = 0,
	ENiagaraRibbonTessellationMode__Custom = 1,
	ENiagaraRibbonTessellationMode__Disabled = 2,
	ENiagaraRibbonTessellationMode__ENiagaraRibbonTessellationMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack = 0,
	ENiagaraRibbonDrawDirection__BackToFront = 1,
	ENiagaraRibbonDrawDirection__ENiagaraRibbonDrawDirection_MAX = 2
};


// Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale = 0,
	ENiagaraRibbonAgeOffsetMode__Clip = 1,
	ENiagaraRibbonAgeOffsetMode__ENiagaraRibbonAgeOffsetMode_MAX = 2
};


// Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen = 0,
	ENiagaraRibbonFacingMode__Custom = 1,
	ENiagaraRibbonFacingMode__CustomSideVector = 2,
	ENiagaraRibbonFacingMode__ENiagaraRibbonFacingMode_MAX = 3
};


// Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint__ENiagaraModuleDependencyScriptConstraint_MAX = 2
};


// Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency = 0,
	ENiagaraModuleDependencyType__PostDependency = 1,
	ENiagaraModuleDependencyType__ENiagaraModuleDependencyType_MAX = 2
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy = 0,
	EUnusedAttributeBehaviour__Zero = 1,
	EUnusedAttributeBehaviour__None = 2,
	EUnusedAttributeBehaviour__MarkInvalid = 3,
	EUnusedAttributeBehaviour__PassThrough = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5
};


// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX = 5
};


// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned = 0,
	ENiagaraSpriteAlignment__VelocityAligned = 1,
	ENiagaraSpriteAlignment__CustomAlignment = 2,
	ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX = 3
};


// Enum Niagara.ENiagaraParameterPanelCategory
enum class ENiagaraParameterPanelCategory : uint8_t
{
	ENiagaraParameterPanelCategory__Input = 0,
	ENiagaraParameterPanelCategory__Attributes = 1,
	ENiagaraParameterPanelCategory__Output = 2,
	ENiagaraParameterPanelCategory__Local = 3,
	ENiagaraParameterPanelCategory__User = 4,
	ENiagaraParameterPanelCategory__Engine = 5,
	ENiagaraParameterPanelCategory__Owner = 6,
	ENiagaraParameterPanelCategory__System = 7,
	ENiagaraParameterPanelCategory__Emitter = 8,
	ENiagaraParameterPanelCategory__Particles = 9,
	ENiagaraParameterPanelCategory__ScriptTransient = 10,
	ENiagaraParameterPanelCategory__StaticSwitch = 11,
	ENiagaraParameterPanelCategory__None = 12,
	ENiagaraParameterPanelCategory__Num = 13,
	ENiagaraParameterPanelCategory__ENiagaraParameterPanelCategory_MAX = 14
};


// Enum Niagara.ENiagaraScriptParameterUsage
enum class ENiagaraScriptParameterUsage : uint8_t
{
	ENiagaraScriptParameterUsage__Input = 0,
	ENiagaraScriptParameterUsage__Output = 1,
	ENiagaraScriptParameterUsage__Local = 2,
	ENiagaraScriptParameterUsage__InputOutput = 3,
	ENiagaraScriptParameterUsage__InitialValueInput = 4,
	ENiagaraScriptParameterUsage__None = 5,
	ENiagaraScriptParameterUsage__Num = 6,
	ENiagaraScriptParameterUsage__ENiagaraScriptParameterUsage_MAX = 7
};


// Enum Niagara.ENiagaraParameterScope
enum class ENiagaraParameterScope : uint8_t
{
	ENiagaraParameterScope__Input  = 0,
	ENiagaraParameterScope__User   = 1,
	ENiagaraParameterScope__Engine = 2,
	ENiagaraParameterScope__Owner  = 3,
	ENiagaraParameterScope__System = 4,
	ENiagaraParameterScope__Emitter = 5,
	ENiagaraParameterScope__Particles = 6,
	ENiagaraParameterScope__ScriptPersistent = 7,
	ENiagaraParameterScope__ScriptTransient = 8,
	ENiagaraParameterScope__Local  = 9,
	ENiagaraParameterScope__Custom = 10,
	ENiagaraParameterScope__DISPLAY_ONLY_StaticSwitch = 11,
	ENiagaraParameterScope__Output = 12,
	ENiagaraParameterScope__None   = 13,
	ENiagaraParameterScope__Num    = 14,
	ENiagaraParameterScope__ENiagaraParameterScope_MAX = 15
};


// Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t
{
	ENiagaraExecutionState__Active = 0,
	ENiagaraExecutionState__Inactive = 1,
	ENiagaraExecutionState__InactiveClear = 2,
	ENiagaraExecutionState__Complete = 3,
	ENiagaraExecutionState__Disabled = 4,
	ENiagaraExecutionState__Num    = 5,
	ENiagaraExecutionState__ENiagaraExecutionState_MAX = 6
};


// Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability = 0,
	ENiagaraExecutionStateSource__Internal = 1,
	ENiagaraExecutionStateSource__Owner = 2,
	ENiagaraExecutionStateSource__InternalCompletion = 3,
	ENiagaraExecutionStateSource__ENiagaraExecutionStateSource_MAX = 4
};


// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};


// Enum Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8_t
{
	ENiagaraVariantMode__None      = 0,
	ENiagaraVariantMode__Object    = 1,
	ENiagaraVariantMode__DataInterface = 2,
	ENiagaraVariantMode__Bytes     = 3,
	ENiagaraVariantMode__ENiagaraVariantMode_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// 0x310C0 (0x5AF81580 - 0x5AF504C0)
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x310C0];                                   // 0x5AF504C0(0x310C0) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariableBase
// 0x5AF81380
struct FNiagaraVariableBase
{
	unsigned char                                      UnknownData00[0x5AF81380];                                // 0x0000(0x5AF81380) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraTypeDefinition
// 0x5AF81400
struct FNiagaraTypeDefinition
{
	unsigned char                                      UnknownData00[0x5AF81400];                                // 0x0000(0x5AF81400) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariable
// 0xFFFFFFFFFFFD25C0 (0x5AF53940 - 0x5AF81380)
struct FNiagaraVariable : public FNiagaraVariableBase
{

};

// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// 0xFFFFFFFFFFFFFD00 (0x5AF81280 - 0x5AF81580)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{

};

// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// 0x1C00 (0x5AF83180 - 0x5AF81580)
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	unsigned char                                      UnknownData00[0x1C00];                                    // 0x5AF81580(0x1C00) MISSED OFFSET
};

// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// 0x1B80 (0x5AF83100 - 0x5AF81580)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	unsigned char                                      UnknownData00[0x1B80];                                    // 0x5AF81580(0x1B80) MISSED OFFSET
};

// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// 0x1B00 (0x5AF83080 - 0x5AF81580)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	unsigned char                                      UnknownData00[0x1B00];                                    // 0x5AF81580(0x1B00) MISSED OFFSET
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// 0x5AF82D80
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
	unsigned char                                      UnknownData00[0x5AF82D80];                                // 0x0000(0x5AF82D80) MISSED OFFSET
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// 0xFFFFFFFFA50AFB40 (0x0000 - 0x5AF504C0)
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// 0x1700 (0x5AF82C80 - 0x5AF81580)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	unsigned char                                      UnknownData00[0x1700];                                    // 0x5AF81580(0x1700) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraRandInfo
// 0x5AF82B00
struct FNiagaraRandInfo
{
	unsigned char                                      UnknownData00[0x5AF82B00];                                // 0x0000(0x5AF82B00) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraUserParameterBinding
// 0x5AF82A80
struct FNiagaraUserParameterBinding
{
	unsigned char                                      UnknownData00[0x5AF82A80];                                // 0x0000(0x5AF82A80) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptVariableBinding
// 0x5AF82A00
struct FNiagaraScriptVariableBinding
{
	unsigned char                                      UnknownData00[0x5AF82A00];                                // 0x0000(0x5AF82A00) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
// 0x5AF82980
struct FNiagaraVariableDataInterfaceBinding
{
	unsigned char                                      UnknownData00[0x5AF82980];                                // 0x0000(0x5AF82980) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariableAttributeBinding
// 0x5AF82800
struct FNiagaraVariableAttributeBinding
{
	unsigned char                                      UnknownData00[0x5AF82800];                                // 0x0000(0x5AF82800) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariableInfo
// 0x5AF82680
struct FNiagaraVariableInfo
{
	unsigned char                                      UnknownData00[0x5AF82680];                                // 0x0000(0x5AF82680) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraSystemUpdateContext
// 0x5AF534E0
struct FNiagaraSystemUpdateContext
{
	unsigned char                                      UnknownData00[0x5AF534E0];                                // 0x0000(0x5AF534E0) MISSED OFFSET
};

// ScriptStruct Niagara.VMExternalFunctionBindingInfo
// 0x5AF82180
struct FVMExternalFunctionBindingInfo
{
	unsigned char                                      UnknownData00[0x5AF82180];                                // 0x0000(0x5AF82180) MISSED OFFSET
};

// ScriptStruct Niagara.VMFunctionSpecifier
// 0x5AF82380
struct FVMFunctionSpecifier
{
	unsigned char                                      UnknownData00[0x5AF82380];                                // 0x0000(0x5AF82380) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraStatScope
// 0x5AF84180
struct FNiagaraStatScope
{
	unsigned char                                      UnknownData00[0x5AF84180];                                // 0x0000(0x5AF84180) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
// 0x5AF83E80
struct FNiagaraScriptDataInterfaceCompileInfo
{
	unsigned char                                      UnknownData00[0x5AF83E80];                                // 0x0000(0x5AF83E80) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// 0x5AF83B80
struct FNiagaraScriptDataInterfaceInfo
{
	unsigned char                                      UnknownData00[0x5AF83B80];                                // 0x0000(0x5AF83B80) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraFunctionSignature
// 0x5AF83580
struct FNiagaraFunctionSignature
{
	unsigned char                                      UnknownData00[0x5AF83580];                                // 0x0000(0x5AF83580) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// 0x5AF83500
struct FNiagaraScriptDataUsageInfo
{
	unsigned char                                      UnknownData00[0x5AF83500];                                // 0x0000(0x5AF83500) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// 0x5AF83400
struct FNiagaraDataSetProperties
{
	unsigned char                                      UnknownData00[0x5AF83400];                                // 0x0000(0x5AF83400) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDataSetID
// 0x5AF83300
struct FNiagaraDataSetID
{
	unsigned char                                      UnknownData00[0x5AF83300];                                // 0x0000(0x5AF83300) MISSED OFFSET
};

// ScriptStruct Niagara.NCPool
// 0x5AF52F40
struct FNCPool
{
	unsigned char                                      UnknownData00[0x5AF52F40];                                // 0x0000(0x5AF52F40) MISSED OFFSET
};

// ScriptStruct Niagara.NCPoolElement
// 0x5AF85200
struct FNCPoolElement
{
	unsigned char                                      UnknownData00[0x5AF85200];                                // 0x0000(0x5AF85200) MISSED OFFSET
};

// ScriptStruct Niagara.BasicParticleData
// 0x5AF85080
struct FBasicParticleData
{
	unsigned char                                      UnknownData00[0x5AF85080];                                // 0x0000(0x5AF85080) MISSED OFFSET
};

// ScriptStruct Niagara.MeshTriCoordinate
// 0x5AF84F80
struct FMeshTriCoordinate
{
	unsigned char                                      UnknownData00[0x5AF84F80];                                // 0x0000(0x5AF84F80) MISSED OFFSET
};

// ScriptStruct Niagara.NDIStaticMeshSectionFilter
// 0x5AF52EA0
struct FNDIStaticMeshSectionFilter
{
	unsigned char                                      UnknownData00[0x5AF52EA0];                                // 0x0000(0x5AF52EA0) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDataSetCompiledData
// 0x5AF52A40
struct FNiagaraDataSetCompiledData
{
	unsigned char                                      UnknownData00[0x5AF52A40];                                // 0x0000(0x5AF52A40) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariableLayoutInfo
// 0x5AF84880
struct FNiagaraVariableLayoutInfo
{
	unsigned char                                      UnknownData00[0x5AF84880];                                // 0x0000(0x5AF84880) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraTypeLayoutInfo
// 0x5AF52AE0
struct FNiagaraTypeLayoutInfo
{
	unsigned char                                      UnknownData00[0x5AF52AE0];                                // 0x0000(0x5AF52AE0) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraGraphViewSettings
// 0x5AF84680
struct FNiagaraGraphViewSettings
{
	unsigned char                                      UnknownData00[0x5AF84680];                                // 0x0000(0x5AF84680) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
// 0x5AF529A0
struct FNiagaraEmitterScalabilityOverrides
{
	unsigned char                                      UnknownData00[0x5AF529A0];                                // 0x0000(0x5AF529A0) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
// 0x5AF84480
struct FNiagaraEmitterScalabilitySettings
{
	unsigned char                                      UnknownData00[0x5AF84480];                                // 0x0000(0x5AF84480) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraPlatformSet
// 0x5AF86300
struct FNiagaraPlatformSet
{
	unsigned char                                      UnknownData00[0x5AF86300];                                // 0x0000(0x5AF86300) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
// 0x5AF84280
struct FNiagaraDeviceProfileStateEntry
{
	unsigned char                                      UnknownData00[0x5AF84280];                                // 0x0000(0x5AF84280) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
// 0x1E00 (0x5AF86280 - 0x5AF84480)
struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
	unsigned char                                      UnknownData00[0x1E00];                                    // 0x5AF84480(0x1E00) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
// 0x5AF551A0
struct FNiagaraEmitterScalabilitySettingsArray
{
	unsigned char                                      UnknownData00[0x5AF551A0];                                // 0x0000(0x5AF551A0) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
// 0x5AF55100
struct FNiagaraSystemScalabilityOverrides
{
	unsigned char                                      UnknownData00[0x5AF55100];                                // 0x0000(0x5AF55100) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
// 0x5AF85E00
struct FNiagaraSystemScalabilitySettings
{
	unsigned char                                      UnknownData00[0x5AF85E00];                                // 0x0000(0x5AF85E00) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
// 0xFFFFFFFFFFFFFE80 (0x5AF85C80 - 0x5AF85E00)
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{

};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
// 0x5AF55060
struct FNiagaraSystemScalabilitySettingsArray
{
	unsigned char                                      UnknownData00[0x5AF55060];                                // 0x0000(0x5AF55060) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
// 0x5AF85980
struct FNiagaraDetailsLevelScaleOverrides
{
	unsigned char                                      UnknownData00[0x5AF85980];                                // 0x0000(0x5AF85980) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x5AF85500
struct FNiagaraEmitterScriptProperties
{
	unsigned char                                      UnknownData00[0x5AF85500];                                // 0x0000(0x5AF85500) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// 0x5AF85780
struct FNiagaraEventGeneratorProperties
{
	unsigned char                                      UnknownData00[0x5AF85780];                                // 0x0000(0x5AF85780) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// 0x5AF85580
struct FNiagaraEventReceiverProperties
{
	unsigned char                                      UnknownData00[0x5AF85580];                                // 0x0000(0x5AF85580) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
// 0xFFFFFFFFFFFCF980 (0x5AF54E80 - 0x5AF85500)
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{

};

// ScriptStruct Niagara.NiagaraEmitterHandle
// 0x5AF87000
struct FNiagaraEmitterHandle
{
	unsigned char                                      UnknownData00[0x5AF87000];                                // 0x0000(0x5AF87000) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
// 0x5AF86D80
struct FNiagaraCollisionEventPayload
{
	unsigned char                                      UnknownData00[0x5AF86D80];                                // 0x0000(0x5AF86D80) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraMeshMaterialOverride
// 0x5AF86C80
struct FNiagaraMeshMaterialOverride
{
	unsigned char                                      UnknownData00[0x5AF86C80];                                // 0x0000(0x5AF86C80) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraParameters
// 0x5AF54DE0
struct FNiagaraParameters
{
	unsigned char                                      UnknownData00[0x5AF54DE0];                                // 0x0000(0x5AF54DE0) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraParameterStore
// 0x5AF86900
struct FNiagaraParameterStore
{
	unsigned char                                      UnknownData00[0x5AF86900];                                // 0x0000(0x5AF86900) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariableWithOffset
// 0x5600 (0x5AF86980 - 0x5AF81380)
struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
	unsigned char                                      UnknownData00[0x5600];                                    // 0x5AF81380(0x5600) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraBoundParameter
// 0x5AF86780
struct FNiagaraBoundParameter
{
	unsigned char                                      UnknownData00[0x5AF86780];                                // 0x0000(0x5AF86780) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
// 0x5AF86500
struct FNiagaraPlatformSetConflictInfo
{
	unsigned char                                      UnknownData00[0x5AF86500];                                // 0x0000(0x5AF86500) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
// 0x5AF86600
struct FNiagaraPlatformSetConflictEntry
{
	unsigned char                                      UnknownData00[0x5AF86600];                                // 0x0000(0x5AF86600) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScalabilityManager
// 0x5AF86400
struct FNiagaraScalabilityManager
{
	unsigned char                                      UnknownData00[0x5AF86400];                                // 0x0000(0x5AF86400) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVMExecutableData
// 0x5AF54200
struct FNiagaraVMExecutableData
{
	unsigned char                                      UnknownData00[0x5AF54200];                                // 0x0000(0x5AF54200) MISSED OFFSET
};

// ScriptStruct Niagara.SimulationStageMetaData
// 0x5AF88180
struct FSimulationStageMetaData
{
	unsigned char                                      UnknownData00[0x5AF88180];                                // 0x0000(0x5AF88180) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVMExecutableDataId
// 0x5AF89480
struct FNiagaraVMExecutableDataId
{
	unsigned char                                      UnknownData00[0x5AF89480];                                // 0x0000(0x5AF89480) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraModuleDependency
// 0x5AF89280
struct FNiagaraModuleDependency
{
	unsigned char                                      UnknownData00[0x5AF89280];                                // 0x0000(0x5AF89280) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// 0x2580 (0x5AF88E80 - 0x5AF86900)
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
	unsigned char                                      UnknownData00[0x2580];                                    // 0x5AF86900(0x2580) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
// 0x5AF88F80
struct FNiagaraScriptExecutionPaddingInfo
{
	unsigned char                                      UnknownData00[0x5AF88F80];                                // 0x0000(0x5AF88F80) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptHighlight
// 0x5AF88D80
struct FNiagaraScriptHighlight
{
	unsigned char                                      UnknownData00[0x5AF88D80];                                // 0x0000(0x5AF88D80) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraSystemCompileRequest
// 0x5AF53EE0
struct FNiagaraSystemCompileRequest
{
	unsigned char                                      UnknownData00[0x5AF53EE0];                                // 0x0000(0x5AF53EE0) MISSED OFFSET
};

// ScriptStruct Niagara.EmitterCompiledScriptPair
// 0x0000
struct FEmitterCompiledScriptPair
{

};

// ScriptStruct Niagara.NiagaraSystemCompiledData
// 0x5AF88500
struct FNiagaraSystemCompiledData
{
	unsigned char                                      UnknownData00[0x5AF88500];                                // 0x0000(0x5AF88500) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
// 0x5AF56640
struct FNiagaraParameterDataSetBindingCollection
{
	unsigned char                                      UnknownData00[0x5AF56640];                                // 0x0000(0x5AF56640) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraParameterDataSetBinding
// 0x5AF88B00
struct FNiagaraParameterDataSetBinding
{
	unsigned char                                      UnknownData00[0x5AF88B00];                                // 0x0000(0x5AF88B00) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterCompiledData
// 0x5AF56500
struct FNiagaraEmitterCompiledData
{
	unsigned char                                      UnknownData00[0x5AF56500];                                // 0x0000(0x5AF56500) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariableMetaData
// 0x5AF89800
struct FNiagaraVariableMetaData
{
	unsigned char                                      UnknownData00[0x5AF89800];                                // 0x0000(0x5AF89800) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraInputConditionMetadata
// 0x5AF89B00
struct FNiagaraInputConditionMetadata
{
	unsigned char                                      UnknownData00[0x5AF89B00];                                // 0x0000(0x5AF89B00) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraParameterScopeInfo
// 0x5AF56320
struct FNiagaraParameterScopeInfo
{
	unsigned char                                      UnknownData00[0x5AF56320];                                // 0x0000(0x5AF56320) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
// 0x5AF89580
struct FNiagaraCompileHashVisitorDebugInfo
{
	unsigned char                                      UnknownData00[0x5AF89580];                                // 0x0000(0x5AF89580) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraID
// 0x5AF8B580
struct FNiagaraID
{
	unsigned char                                      UnknownData00[0x5AF8B580];                                // 0x0000(0x5AF8B580) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraSpawnInfo
// 0x5AF8B380
struct FNiagaraSpawnInfo
{
	unsigned char                                      UnknownData00[0x5AF8B380];                                // 0x0000(0x5AF8B380) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraMatrix
// 0x5AF8B180
struct FNiagaraMatrix
{
	unsigned char                                      UnknownData00[0x5AF8B180];                                // 0x0000(0x5AF8B180) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraTestStruct
// 0x5AF8AE80
struct FNiagaraTestStruct
{
	unsigned char                                      UnknownData00[0x5AF8AE80];                                // 0x0000(0x5AF8AE80) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraTestStructInner
// 0x5AF8B000
struct FNiagaraTestStructInner
{
	unsigned char                                      UnknownData00[0x5AF8B000];                                // 0x0000(0x5AF8B000) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraParameterMap
// 0x0000
struct FNiagaraParameterMap
{

};

// ScriptStruct Niagara.NiagaraNumeric
// 0x0000
struct FNiagaraNumeric
{

};

// ScriptStruct Niagara.NiagaraBool
// 0x5AF8AE00
struct FNiagaraBool
{
	unsigned char                                      UnknownData00[0x5AF8AE00];                                // 0x0000(0x5AF8AE00) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraInt32
// 0x5AF8AD80
struct FNiagaraInt32
{
	unsigned char                                      UnknownData00[0x5AF8AD80];                                // 0x0000(0x5AF8AD80) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraFloat
// 0x5AF8AD00
struct FNiagaraFloat
{
	unsigned char                                      UnknownData00[0x5AF8AD00];                                // 0x0000(0x5AF8AD00) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// 0xFFFFFFFFFFFEEA80 (0x5AF75380 - 0x5AF86900)
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{

};

// ScriptStruct Niagara.NiagaraVariant
// 0x5AF8AA00
struct FNiagaraVariant
{
	unsigned char                                      UnknownData00[0x5AF8AA00];                                // 0x0000(0x5AF8AA00) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
// 0xFFFFFFFFAF450500 (0x0000 - 0x50BAFB00)
struct FNiagaraWorldManagerTickFunction : public FTickFunction
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
