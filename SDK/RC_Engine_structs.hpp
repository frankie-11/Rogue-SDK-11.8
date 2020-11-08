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

// Enum Engine.ETextGender
enum class ETextGender : uint8_t
{
	ETextGender__Masculine         = 0,
	ETextGender__Feminine          = 1,
	ETextGender__Neuter            = 2,
	ETextGender__ETextGender_MAX   = 3
};


// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
	EFormatArgumentType__Int       = 0,
	EFormatArgumentType__UInt      = 1,
	EFormatArgumentType__Float     = 2,
	EFormatArgumentType__Double    = 3,
	EFormatArgumentType__Text      = 4,
	EFormatArgumentType__Gender    = 5,
	EFormatArgumentType__EFormatArgumentType_MAX = 6
};


// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
	EEndPlayReason__Destroyed      = 0,
	EEndPlayReason__LevelTransition = 1,
	EEndPlayReason__EndPlayInEditor = 2,
	EEndPlayReason__RemovedFromWorld = 3,
	EEndPlayReason__Quit           = 4,
	EEndPlayReason__EEndPlayReason_MAX = 5
};


// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8
};


// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
	EComponentCreationMethod__Native = 0,
	EComponentCreationMethod__SimpleConstructionScript = 1,
	EComponentCreationMethod__UserConstructionScript = 2,
	EComponentCreationMethod__Instance = 3,
	EComponentCreationMethod__EComponentCreationMethod_MAX = 4
};


// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8_t
{
	ETemperatureSeverityType__Unknown = 0,
	ETemperatureSeverityType__Good = 1,
	ETemperatureSeverityType__Bad  = 2,
	ETemperatureSeverityType__Serious = 3,
	ETemperatureSeverityType__Critical = 4,
	ETemperatureSeverityType__NumSeverities = 5,
	ETemperatureSeverityType__ETemperatureSeverityType_MAX = 6
};


// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
	EPlaneConstraintAxisSetting__Custom = 0,
	EPlaneConstraintAxisSetting__X = 1,
	EPlaneConstraintAxisSetting__Y = 2,
	EPlaneConstraintAxisSetting__Z = 3,
	EPlaneConstraintAxisSetting__UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting__EPlaneConstraintAxisSetting_MAX = 5
};


// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
	EInterpToBehaviourType__OneShot = 0,
	EInterpToBehaviourType__OneShot_Reverse = 1,
	EInterpToBehaviourType__Loop_Reset = 2,
	EInterpToBehaviourType__PingPong = 3,
	EInterpToBehaviourType__EInterpToBehaviourType_MAX = 4
};


// Enum Engine.ETeleportType
enum class ETeleportType : uint8_t
{
	ETeleportType__None            = 0,
	ETeleportType__TeleportPhysics = 1,
	ETeleportType__ResetPhysics    = 2,
	ETeleportType__ETeleportType_MAX = 3
};


// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6
};


// Enum Engine.EMovementMode
enum class EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7
};


// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists = 0,
	ENetworkFailure__NetDriverCreateFailure = 1,
	ENetworkFailure__NetDriverListenFailure = 2,
	ENetworkFailure__ConnectionLost = 3,
	ENetworkFailure__ConnectionTimeout = 4,
	ENetworkFailure__FailureReceived = 5,
	ENetworkFailure__OutdatedClient = 6,
	ENetworkFailure__OutdatedServer = 7,
	ENetworkFailure__PendingConnectionFailure = 8,
	ENetworkFailure__NetGuidMismatch = 9,
	ENetworkFailure__NetChecksumMismatch = 10,
	ENetworkFailure__ENetworkFailure_MAX = 11
};


// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
	ETravelFailure__NoLevel        = 0,
	ETravelFailure__LoadMapFailure = 1,
	ETravelFailure__InvalidURL     = 2,
	ETravelFailure__PackageMissing = 3,
	ETravelFailure__PackageVersion = 4,
	ETravelFailure__NoDownload     = 5,
	ETravelFailure__TravelFailure  = 6,
	ETravelFailure__CheatCommands  = 7,
	ETravelFailure__PendingNetGameCreateFailure = 8,
	ETravelFailure__CloudSaveFailure = 9,
	ETravelFailure__ServerTravelFailure = 10,
	ETravelFailure__ClientTravelFailure = 11,
	ETravelFailure__ETravelFailure_MAX = 12
};


// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
	EScreenOrientation__Unknown    = 0,
	EScreenOrientation__Portrait   = 1,
	EScreenOrientation__PortraitUpsideDown = 2,
	EScreenOrientation__LandscapeLeft = 3,
	EScreenOrientation__LandscapeRight = 4,
	EScreenOrientation__FaceUp     = 5,
	EScreenOrientation__FaceDown   = 6,
	EScreenOrientation__EScreenOrientation_MAX = 7
};


// Enum Engine.EApplicationState
enum class EApplicationState : uint8_t
{
	EApplicationState__Unknown     = 0,
	EApplicationState__Inactive    = 1,
	EApplicationState__Background  = 2,
	EApplicationState__Active      = 3,
	EApplicationState__EApplicationState_MAX = 4
};


// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33
};


// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	EDrawDebugTrace__None          = 0,
	EDrawDebugTrace__ForOneFrame   = 1,
	EDrawDebugTrace__ForDuration   = 2,
	EDrawDebugTrace__Persistent    = 3,
	EDrawDebugTrace__EDrawDebugTrace_MAX = 4
};


// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33
};


// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
	EMoveComponentAction__Move     = 0,
	EMoveComponentAction__Stop     = 1,
	EMoveComponentAction__Return   = 2,
	EMoveComponentAction__EMoveComponentAction_MAX = 3
};


// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
	EQuitPreference__Quit          = 0,
	EQuitPreference__Background    = 1,
	EQuitPreference__EQuitPreference_MAX = 2
};


// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_ParentBoneSpace            = 3,
	RTS_MAX                        = 4
};


// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
	EAttachLocation__KeepRelativeOffset = 0,
	EAttachLocation__KeepWorldPosition = 1,
	EAttachLocation__SnapToTarget  = 2,
	EAttachLocation__SnapToTargetIncludingScale = 3,
	EAttachLocation__EAttachLocation_MAX = 4
};


// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
	EAttachmentRule__KeepRelative  = 0,
	EAttachmentRule__KeepWorld     = 1,
	EAttachmentRule__SnapToTarget  = 2,
	EAttachmentRule__EAttachmentRule_MAX = 3
};


// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
	EDetachmentRule__KeepRelative  = 0,
	EDetachmentRule__KeepWorld     = 1,
	EDetachmentRule__EDetachmentRule_MAX = 2
};


// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
	EComponentMobility__Static     = 0,
	EComponentMobility__Stationary = 1,
	EComponentMobility__Movable    = 2,
	EComponentMobility__EComponentMobility_MAX = 3
};


// Enum Engine.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3
};


// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64
};


// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
	ENetworkSmoothingMode__Disabled = 0,
	ENetworkSmoothingMode__Linear  = 1,
	ENetworkSmoothingMode__Exponential = 2,
	ENetworkSmoothingMode__Replay  = 3,
	ENetworkSmoothingMode__ENetworkSmoothingMode_MAX = 4
};


// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33
};


// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
	EMouseLockMode__DoNotLock      = 0,
	EMouseLockMode__LockOnCapture  = 1,
	EMouseLockMode__LockAlways     = 2,
	EMouseLockMode__LockInFullscreen = 3,
	EMouseLockMode__EMouseLockMode_MAX = 4
};


// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
	EWindowTitleBarMode__Overlay   = 0,
	EWindowTitleBarMode__VerticalBox = 1,
	EWindowTitleBarMode__EWindowTitleBarMode_MAX = 2
};


// Enum Engine.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5
};


// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
	EActorUpdateOverlapsMethod__UseConfigDefault = 0,
	EActorUpdateOverlapsMethod__AlwaysUpdate = 1,
	EActorUpdateOverlapsMethod__OnlyUpdateMovable = 2,
	EActorUpdateOverlapsMethod__NeverUpdate = 3,
	EActorUpdateOverlapsMethod__EActorUpdateOverlapsMethod_MAX = 4
};


// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
	EAlphaBlendOption__Linear      = 0,
	EAlphaBlendOption__Cubic       = 1,
	EAlphaBlendOption__HermiteCubic = 2,
	EAlphaBlendOption__Sinusoidal  = 3,
	EAlphaBlendOption__QuadraticInOut = 4,
	EAlphaBlendOption__CubicInOut  = 5,
	EAlphaBlendOption__QuarticInOut = 6,
	EAlphaBlendOption__QuinticInOut = 7,
	EAlphaBlendOption__CircularIn  = 8,
	EAlphaBlendOption__CircularOut = 9,
	EAlphaBlendOption__CircularInOut = 10,
	EAlphaBlendOption__ExpIn       = 11,
	EAlphaBlendOption__ExpOut      = 12,
	EAlphaBlendOption__ExpInOut    = 13,
	EAlphaBlendOption__Custom      = 14,
	EAlphaBlendOption__EAlphaBlendOption_MAX = 15
};


// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
	EAnimGroupRole__CanBeLeader    = 0,
	EAnimGroupRole__AlwaysFollower = 1,
	EAnimGroupRole__AlwaysLeader   = 2,
	EAnimGroupRole__TransitionLeader = 3,
	EAnimGroupRole__TransitionFollower = 4,
	EAnimGroupRole__EAnimGroupRole_MAX = 5
};


// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
{
	EPreviewAnimationBlueprintApplicationMethod__LinkedLayers = 0,
	EPreviewAnimationBlueprintApplicationMethod__LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod__EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};


// Enum Engine.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3
};


// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
	ERawCurveTrackTypes__RCT_Float = 0,
	ERawCurveTrackTypes__RCT_Vector = 1,
	ERawCurveTrackTypes__RCT_Transform = 2,
	ERawCurveTrackTypes__RCT_MAX   = 3
};


// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
	AACF_NONE                      = 0,
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable                  = 3,
	AACF_DriveMaterial_DEPRECATED  = 4,
	AACF_Metadata                  = 5,
	AACF_DriveTrack                = 6,
	AACF_Disabled                  = 7,
	AACF_MAX                       = 8
};


// Enum Engine.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7
};


// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_MAX                       = 4
};


// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	ERootMotionMode__NoRootMotionExtraction = 0,
	ERootMotionMode__IgnoreRootMotion = 1,
	ERootMotionMode__RootMotionFromEverything = 2,
	ERootMotionMode__RootMotionFromMontagesOnly = 3,
	ERootMotionMode__ERootMotionMode_MAX = 4
};


// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
	ERootMotionRootLock__RefPose   = 0,
	ERootMotionRootLock__AnimFirstFrame = 1,
	ERootMotionRootLock__Zero      = 2,
	ERootMotionRootLock__ERootMotionRootLock_MAX = 3
};


// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
	EMontagePlayReturnType__MontageLength = 0,
	EMontagePlayReturnType__Duration = 1,
	EMontagePlayReturnType__EMontagePlayReturnType_MAX = 2
};


// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
	EDrawDebugItemType__DirectionalArrow = 0,
	EDrawDebugItemType__Sphere     = 1,
	EDrawDebugItemType__Line       = 2,
	EDrawDebugItemType__OnScreenMessage = 3,
	EDrawDebugItemType__CoordinateSystem = 4,
	EDrawDebugItemType__EDrawDebugItemType_MAX = 5
};


// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
	EAnimLinkMethod__Absolute      = 0,
	EAnimLinkMethod__Relative      = 1,
	EAnimLinkMethod__Proportional  = 2,
	EAnimLinkMethod__EAnimLinkMethod_MAX = 3
};


// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8_t
{
	EMontageSubStepResult__Moved   = 0,
	EMontageSubStepResult__NotMoved = 1,
	EMontageSubStepResult__InvalidSection = 2,
	EMontageSubStepResult__InvalidMontage = 3,
	EMontageSubStepResult__EMontageSubStepResult_MAX = 4
};


// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
	EAnimNotifyEventType__Begin    = 0,
	EAnimNotifyEventType__End      = 1,
	EAnimNotifyEventType__EAnimNotifyEventType_MAX = 2
};


// Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8_t
{
	EInertializationSpace__Default = 0,
	EInertializationSpace__WorldSpace = 1,
	EInertializationSpace__WorldRotation = 2,
	EInertializationSpace__EInertializationSpace_MAX = 3
};


// Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8_t
{
	EInertializationBoneState__Invalid = 0,
	EInertializationBoneState__Valid = 1,
	EInertializationBoneState__Excluded = 2,
	EInertializationBoneState__EInertializationBoneState_MAX = 3
};


// Enum Engine.EInertializationState
enum class EInertializationState : uint8_t
{
	EInertializationState__Inactive = 0,
	EInertializationState__Pending = 1,
	EInertializationState__Active  = 2,
	EInertializationState__EInertializationState_MAX = 3
};


// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
	EEvaluatorMode__EM_Standard    = 0,
	EEvaluatorMode__EM_Freeze      = 1,
	EEvaluatorMode__EM_DelayedFreeze = 2,
	EEvaluatorMode__EM_MAX         = 3
};


// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
	EEvaluatorDataSource__EDS_SourcePose = 0,
	EEvaluatorDataSource__EDS_DestinationPose = 1,
	EEvaluatorDataSource__EDS_MAX  = 2
};


// Enum Engine.ECopyType
enum class ECopyType : uint8_t
{
	ECopyType__PlainProperty       = 0,
	ECopyType__BoolProperty        = 1,
	ECopyType__StructProperty      = 2,
	ECopyType__ObjectProperty      = 3,
	ECopyType__NameProperty        = 4,
	ECopyType__ECopyType_MAX       = 5
};


// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
	EPostCopyOperation__None       = 0,
	EPostCopyOperation__LogicalNegateBool = 1,
	EPostCopyOperation__EPostCopyOperation_MAX = 2
};


// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
	EPinHidingMode__NeverAsPin     = 0,
	EPinHidingMode__PinHiddenByDefault = 1,
	EPinHidingMode__PinShownByDefault = 2,
	EPinHidingMode__AlwaysAsPin    = 3,
	EPinHidingMode__EPinHidingMode_MAX = 4
};


// Enum Engine.AnimPhysCollisionType
enum class EAnimPhysCollisionType : uint8_t
{
	AnimPhysCollisionType__CoM     = 0,
	AnimPhysCollisionType__CustomSphere = 1,
	AnimPhysCollisionType__InnerSphere = 2,
	AnimPhysCollisionType__OuterSphere = 3,
	AnimPhysCollisionType__AnimPhysCollisionType_MAX = 4
};


// Enum Engine.AnimPhysTwistAxis
enum class EAnimPhysTwistAxis : uint8_t
{
	AnimPhysTwistAxis__AxisX       = 0,
	AnimPhysTwistAxis__AxisY       = 1,
	AnimPhysTwistAxis__AxisZ       = 2,
	AnimPhysTwistAxis__AnimPhysTwistAxis_MAX = 3
};


// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3
};


// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
	ETransitionLogicType__TLT_StandardBlend = 0,
	ETransitionLogicType__TLT_Inertialization = 1,
	ETransitionLogicType__TLT_Custom = 2,
	ETransitionLogicType__TLT_MAX  = 3
};


// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
	ETransitionBlendMode__TBM_Linear = 0,
	ETransitionBlendMode__TBM_Cubic = 1,
	ETransitionBlendMode__TBM_MAX  = 2
};


// Enum Engine.EComponentType
enum class EComponentType : uint8_t
{
	EComponentType__None           = 0,
	EComponentType__TranslationX   = 1,
	EComponentType__TranslationY   = 2,
	EComponentType__TranslationZ   = 3,
	EComponentType__RotationX      = 4,
	EComponentType__RotationY      = 5,
	EComponentType__RotationZ      = 6,
	EComponentType__Scale          = 7,
	EComponentType__ScaleX         = 8,
	EComponentType__ScaleY         = 9,
	EComponentType__ScaleZ         = 10,
	EComponentType__EComponentType_MAX = 11
};


// Enum Engine.EAxisOption
enum class EAxisOption : uint8_t
{
	EAxisOption__X                 = 0,
	EAxisOption__Y                 = 1,
	EAxisOption__Z                 = 2,
	EAxisOption__X_Neg             = 3,
	EAxisOption__Y_Neg             = 4,
	EAxisOption__Z_Neg             = 5,
	EAxisOption__Custom            = 6,
	EAxisOption__EAxisOption_MAX   = 7
};


// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
	EAnimInterpolationType__Linear = 0,
	EAnimInterpolationType__Step   = 1,
	EAnimInterpolationType__EAnimInterpolationType_MAX = 2
};


// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
	ECurveBlendOption__Override    = 0,
	ECurveBlendOption__DoNotOverride = 1,
	ECurveBlendOption__NormalizeByWeight = 2,
	ECurveBlendOption__BlendByWeight = 3,
	ECurveBlendOption__UseBasePose = 4,
	ECurveBlendOption__UseMaxValue = 5,
	ECurveBlendOption__UseMinValue = 6,
	ECurveBlendOption__ECurveBlendOption_MAX = 7
};


// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3
};


// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
	ENotifyFilterType__NoFiltering = 0,
	ENotifyFilterType__LOD         = 1,
	ENotifyFilterType__ENotifyFilterType_MAX = 2
};


// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
	EMontageNotifyTickType__Queued = 0,
	EMontageNotifyTickType__BranchingPoint = 1,
	EMontageNotifyTickType__EMontageNotifyTickType_MAX = 2
};


// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3
};


// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4
};


// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3
};


// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
	EPrimaryAssetCookRule__Unknown = 0,
	EPrimaryAssetCookRule__NeverCook = 1,
	EPrimaryAssetCookRule__DevelopmentCook = 2,
	EPrimaryAssetCookRule__DevelopmentAlwaysCook = 3,
	EPrimaryAssetCookRule__AlwaysCook = 4,
	EPrimaryAssetCookRule__EPrimaryAssetCookRule_MAX = 5
};


// Enum Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8_t
{
	ENaturalSoundFalloffMode__Continues = 0,
	ENaturalSoundFalloffMode__Silent = 1,
	ENaturalSoundFalloffMode__Hold = 2,
	ENaturalSoundFalloffMode__ENaturalSoundFalloffMode_MAX = 3
};


// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
	EAttenuationShape__Sphere      = 0,
	EAttenuationShape__Capsule     = 1,
	EAttenuationShape__Box         = 2,
	EAttenuationShape__Cone        = 3,
	EAttenuationShape__EAttenuationShape_MAX = 4
};


// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
	EAttenuationDistanceModel__Linear = 0,
	EAttenuationDistanceModel__Logarithmic = 1,
	EAttenuationDistanceModel__Inverse = 2,
	EAttenuationDistanceModel__LogReverse = 3,
	EAttenuationDistanceModel__NaturalSound = 4,
	EAttenuationDistanceModel__Custom = 5,
	EAttenuationDistanceModel__EAttenuationDistanceModel_MAX = 6
};


// Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8_t
{
	EAudioFaderCurve__Linear       = 0,
	EAudioFaderCurve__Logarithmic  = 1,
	EAudioFaderCurve__SCurve       = 2,
	EAudioFaderCurve__Sin          = 3,
	EAudioFaderCurve__Count        = 4,
	EAudioFaderCurve__EAudioFaderCurve_MAX = 5
};


// Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8_t
{
	EAudioComponentPlayState__Playing = 0,
	EAudioComponentPlayState__Stopped = 1,
	EAudioComponentPlayState__Paused = 2,
	EAudioComponentPlayState__FadingIn = 3,
	EAudioComponentPlayState__FadingOut = 4,
	EAudioComponentPlayState__Count = 5,
	EAudioComponentPlayState__EAudioComponentPlayState_MAX = 6
};


// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	EAudioOutputTarget__Speaker    = 0,
	EAudioOutputTarget__Controller = 1,
	EAudioOutputTarget__ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget__EAudioOutputTarget_MAX = 3
};


// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8_t
{
	EMonoChannelUpmixMethod__Linear = 0,
	EMonoChannelUpmixMethod__EqualPower = 1,
	EMonoChannelUpmixMethod__FullVolume = 2,
	EMonoChannelUpmixMethod__EMonoChannelUpmixMethod_MAX = 3
};


// Enum Engine.EPanningMethod
enum class EPanningMethod : uint8_t
{
	EPanningMethod__Linear         = 0,
	EPanningMethod__EqualPower     = 1,
	EPanningMethod__EPanningMethod_MAX = 2
};


// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint8_t
{
	EVoiceSampleRate__Low16000Hz   = 0,
	EVoiceSampleRate__Normal24000Hz = 1,
	EVoiceSampleRate__EVoiceSampleRate_MAX = 2
};


// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_SSRInput                    = 4,
	BL_MAX                         = 5
};


// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
	ENotifyTriggerMode__AllAnimations = 0,
	ENotifyTriggerMode__HighestWeightedAnimation = 1,
	ENotifyTriggerMode__None       = 2,
	ENotifyTriggerMode__ENotifyTriggerMode_MAX = 3
};


// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_Max                        = 3
};


// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
	EBlueprintNativizationFlag__Disabled = 0,
	EBlueprintNativizationFlag__Dependency = 1,
	EBlueprintNativizationFlag__ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag__EBlueprintNativizationFlag_MAX = 3
};


// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
	EBlueprintCompileMode__Default = 0,
	EBlueprintCompileMode__Development = 1,
	EBlueprintCompileMode__FinalRelease = 2,
	EBlueprintCompileMode__EBlueprintCompileMode_MAX = 3
};


// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6
};


// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6
};


// Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{
	EDOFMode__Default              = 0,
	EDOFMode__SixDOF               = 1,
	EDOFMode__YZPlane              = 2,
	EDOFMode__XZPlane              = 3,
	EDOFMode__XYPlane              = 4,
	EDOFMode__CustomPlane          = 5,
	EDOFMode__None                 = 6,
	EDOFMode__EDOFMode_MAX         = 7
};


// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled = 0,
	EBodyCollisionResponse__BodyCollision_Disabled = 1,
	EBodyCollisionResponse__BodyCollision_MAX = 2
};


// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3
};


// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAndComplex        = 1,
	CTF_UseSimpleAsComplex         = 2,
	CTF_UseComplexAsSimple         = 3,
	CTF_MAX                        = 4
};


// Enum Engine.EBrushType
enum class EBrushType : uint8_t
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3
};


// Enum Engine.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6
};


// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2
};


// Enum Engine.EOscillatorWaveform
enum class EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave  = 0,
	EOscillatorWaveform__PerlinNoise = 1,
	EOscillatorWaveform__EOscillatorWaveform_MAX = 2
};


// Enum Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8_t
{
	ECameraShakeAttenuation__Linear = 0,
	ECameraShakeAttenuation__Quadratic = 1,
	ECameraShakeAttenuation__ECameraShakeAttenuation_MAX = 2
};


// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
	ECameraAlphaBlendMode__CABM_Linear = 0,
	ECameraAlphaBlendMode__CABM_Cubic = 1,
	ECameraAlphaBlendMode__CABM_MAX = 2
};


// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t
{
	ECameraAnimPlaySpace__CameraLocal = 0,
	ECameraAnimPlaySpace__World    = 1,
	ECameraAnimPlaySpace__UserDefined = 2,
	ECameraAnimPlaySpace__ECameraAnimPlaySpace_MAX = 3
};


// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
	ECameraProjectionMode__Perspective = 0,
	ECameraProjectionMode__Orthographic = 1,
	ECameraProjectionMode__ECameraProjectionMode_MAX = 2
};


// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7
};


// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
	EAngularDriveMode__SLERP       = 0,
	EAngularDriveMode__TwistAndSwing = 1,
	EAngularDriveMode__EAngularDriveMode_MAX = 2
};


// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3
};


// Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8_t
{
	ECurveTableMode__Empty         = 0,
	ECurveTableMode__SimpleCurves  = 1,
	ECurveTableMode__RichCurves    = 2,
	ECurveTableMode__ECurveTableMode_MAX = 3
};


// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
	EEvaluateCurveTableResult__RowFound = 0,
	EEvaluateCurveTableResult__RowNotFound = 1,
	EEvaluateCurveTableResult__EEvaluateCurveTableResult_MAX = 2
};


// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
	EGrammaticalNumber__Singular   = 0,
	EGrammaticalNumber__Plural     = 1,
	EGrammaticalNumber__EGrammaticalNumber_MAX = 2
};


// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
	EGrammaticalGender__Neuter     = 0,
	EGrammaticalGender__Masculine  = 1,
	EGrammaticalGender__Feminine   = 2,
	EGrammaticalGender__Mixed      = 3,
	EGrammaticalGender__EGrammaticalGender_MAX = 4
};


// Enum Engine.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3
};


// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3
};


// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5
};


// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
	ENodeEnabledState__Enabled     = 0,
	ENodeEnabledState__Disabled    = 1,
	ENodeEnabledState__DevelopmentOnly = 2,
	ENodeEnabledState__ENodeEnabledState_MAX = 3
};


// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
	ENodeAdvancedPins__NoPins      = 0,
	ENodeAdvancedPins__Shown       = 1,
	ENodeAdvancedPins__Hidden      = 2,
	ENodeAdvancedPins__ENodeAdvancedPins_MAX = 3
};


// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
	ENodeTitleType__FullTitle      = 0,
	ENodeTitleType__ListView       = 1,
	ENodeTitleType__EditableTitle  = 2,
	ENodeTitleType__MenuTitle      = 3,
	ENodeTitleType__MAX_TitleTypes = 4,
	ENodeTitleType__ENodeTitleType_MAX = 5
};


// Enum Engine.EPinContainerType
enum class EPinContainerType : uint8_t
{
	EPinContainerType__None        = 0,
	EPinContainerType__Array       = 1,
	EPinContainerType__Set         = 2,
	EPinContainerType__Map         = 3,
	EPinContainerType__EPinContainerType_MAX = 4
};


// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2
};


// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2
};


// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX           = 6
};


// Enum Engine.EGraphType
enum class EGraphType : uint8_t
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5
};


// Enum Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	ETransitionType__None          = 0,
	ETransitionType__Paused        = 1,
	ETransitionType__Loading       = 2,
	ETransitionType__Saving        = 3,
	ETransitionType__Connecting    = 4,
	ETransitionType__Precaching    = 5,
	ETransitionType__WaitingToConnect = 6,
	ETransitionType__MAX           = 7
};


// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5
};


// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 7,
	VMI_LightmapDensity            = 8,
	VMI_LitLightmapDensity         = 9,
	VMI_ReflectionOverride         = 10,
	VMI_VisualizeBuffer            = 11,
	VMI_StationaryLightOverlap     = 12,
	VMI_CollisionPawn              = 13,
	VMI_CollisionVisibility        = 14,
	VMI_LODColoration              = 15,
	VMI_QuadOverdraw               = 16,
	VMI_PrimitiveDistanceAccuracy  = 17,
	VMI_MeshUVDensityAccuracy      = 18,
	VMI_ShaderComplexityWithQuadOverdraw = 19,
	VMI_HLODColoration             = 20,
	VMI_GroupLODColoration         = 21,
	VMI_MaterialTextureScaleAccuracy = 22,
	VMI_RequiredTextureResolution  = 23,
	VMI_PathTracing                = 24,
	VMI_RayTracingDebug            = 25,
	VMI_WorldNormals               = 26,
	VMI_CollisionResponses         = 27,
	VMI_Max                        = 28,
	VMI_Unknown                    = 29
};


// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t
{
	EDemoPlayFailure__Generic      = 0,
	EDemoPlayFailure__DemoNotFound = 1,
	EDemoPlayFailure__Corrupt      = 2,
	EDemoPlayFailure__InvalidVersion = 3,
	EDemoPlayFailure__InitBase     = 4,
	EDemoPlayFailure__GameSpecificHeader = 5,
	EDemoPlayFailure__ReplayStreamerInternal = 6,
	EDemoPlayFailure__LoadMap      = 7,
	EDemoPlayFailure__Serialization = 8,
	EDemoPlayFailure__EDemoPlayFailure_MAX = 9
};


// Enum Engine.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3
};


// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
	ENetworkLagState__NotLagging   = 0,
	ENetworkLagState__Lagging      = 1,
	ENetworkLagState__ENetworkLagState_MAX = 2
};


// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
	EMouseCaptureMode__NoCapture   = 0,
	EMouseCaptureMode__CapturePermanently = 1,
	EMouseCaptureMode__CapturePermanently_IncludingInitialMouseDown = 2,
	EMouseCaptureMode__CaptureDuringMouseDown = 3,
	EMouseCaptureMode__CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode__EMouseCaptureMode_MAX = 5
};


// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t
{
	ECustomTimeStepSynchronizationState__Closed = 0,
	ECustomTimeStepSynchronizationState__Error = 1,
	ECustomTimeStepSynchronizationState__Synchronized = 2,
	ECustomTimeStepSynchronizationState__Synchronizing = 3,
	ECustomTimeStepSynchronizationState__ECustomTimeStepSynchronizationState_MAX = 4
};


// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
	EMeshBufferAccess__Default     = 0,
	EMeshBufferAccess__ForceCPUAndGPU = 1,
	EMeshBufferAccess__EMeshBufferAccess_MAX = 2
};


// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	ESpawnActorCollisionHandlingMethod__Undefined = 0,
	ESpawnActorCollisionHandlingMethod__AlwaysSpawn = 1,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButAlwaysSpawn = 2,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding = 3,
	ESpawnActorCollisionHandlingMethod__DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod__ESpawnActorCollisionHandlingMethod_MAX = 5
};


// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1       = 0,
	EConstraintFrame__Frame2       = 1,
	EConstraintFrame__EConstraintFrame_MAX = 2
};


// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3
};


// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
	EComponentSocketType__Invalid  = 0,
	EComponentSocketType__Bone     = 1,
	EComponentSocketType__Socket   = 2,
	EComponentSocketType__EComponentSocketType_MAX = 3
};


// Enum Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8_t
{
	EPhysicalMaterialMaskColor__Red = 0,
	EPhysicalMaterialMaskColor__Green = 1,
	EPhysicalMaterialMaskColor__Blue = 2,
	EPhysicalMaterialMaskColor__Cyan = 3,
	EPhysicalMaterialMaskColor__Magenta = 4,
	EPhysicalMaterialMaskColor__Yellow = 5,
	EPhysicalMaterialMaskColor__White = 6,
	EPhysicalMaterialMaskColor__Black = 7,
	EPhysicalMaterialMaskColor__MAX = 8
};


// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4
};


// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
	ERotatorQuantization__ByteComponents = 0,
	ERotatorQuantization__ShortComponents = 1,
	ERotatorQuantization__ERotatorQuantization_MAX = 2
};


// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
	EVectorQuantization__RoundWholeNumber = 0,
	EVectorQuantization__RoundOneDecimal = 1,
	EVectorQuantization__RoundTwoDecimals = 2,
	EVectorQuantization__EVectorQuantization_MAX = 3
};


// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
	EAutoPossessAI__Disabled       = 0,
	EAutoPossessAI__PlacedInWorld  = 1,
	EAutoPossessAI__Spawned        = 2,
	EAutoPossessAI__PlacedInWorldOrSpawned = 3,
	EAutoPossessAI__EAutoPossessAI_MAX = 4
};


// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
	EAutoReceiveInput__Disabled    = 0,
	EAutoReceiveInput__Player0     = 1,
	EAutoReceiveInput__Player1     = 2,
	EAutoReceiveInput__Player2     = 3,
	EAutoReceiveInput__Player3     = 4,
	EAutoReceiveInput__Player4     = 5,
	EAutoReceiveInput__Player5     = 6,
	EAutoReceiveInput__Player6     = 7,
	EAutoReceiveInput__Player7     = 8,
	EAutoReceiveInput__EAutoReceiveInput_MAX = 9
};


// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORM_MAX                       = 5
};


// Enum Engine.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4
};


// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
	EUpdateRateShiftBucket__ShiftBucket0 = 0,
	EUpdateRateShiftBucket__ShiftBucket1 = 1,
	EUpdateRateShiftBucket__ShiftBucket2 = 2,
	EUpdateRateShiftBucket__ShiftBucket3 = 3,
	EUpdateRateShiftBucket__ShiftBucket4 = 4,
	EUpdateRateShiftBucket__ShiftBucket5 = 5,
	EUpdateRateShiftBucket__ShiftBucketMax = 6,
	EUpdateRateShiftBucket__EUpdateRateShiftBucket_MAX = 7
};


// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2
};


// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3
};


// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
	ECollisionEnabled__NoCollision = 0,
	ECollisionEnabled__QueryOnly   = 1,
	ECollisionEnabled__PhysicsOnly = 2,
	ECollisionEnabled__QueryAndPhysics = 3,
	ECollisionEnabled__ECollisionEnabled_MAX = 4
};


// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5
};


// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8_t
{
	ESleepFamily__Normal           = 0,
	ESleepFamily__Sensitive        = 1,
	ESleepFamily__Custom           = 2,
	ESleepFamily__ESleepFamily_MAX = 3
};


// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2
};


// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_MAX                       = 3
};


// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3
};


// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3
};


// Enum Engine.ELightingScenarioQuality
enum class ELightingScenarioQuality : uint8_t
{
	LSQ_Any                        = 0,
	LSQ_Low                        = 1,
	LSQ_High                       = 2,
	LSQ_MAX                        = 3
};


// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4
};


// Enum Engine.EMaterialShadingRate
enum class EMaterialShadingRate : uint8_t
{
	MSR_1x1                        = 0,
	MSR_2x1                        = 1,
	MSR_1x2                        = 2,
	MSR_2x2                        = 3,
	MSR_Count                      = 4,
	MSR_MAX                        = 5
};


// Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8_t
{
	MSC_Less                       = 0,
	MSC_LessEqual                  = 1,
	MSC_Greater                    = 2,
	MSC_GreaterEqual               = 3,
	MSC_Equal                      = 4,
	MSC_NotEqual                   = 5,
	MSC_Never                      = 6,
	MSC_Always                     = 7,
	MSC_Count                      = 8,
	MSC_MAX                        = 9
};


// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_Data               = 8,
	SAMPLERTYPE_External           = 9,
	SAMPLERTYPE_VirtualColor       = 10,
	SAMPLERTYPE_VirtualGrayscale   = 11,
	SAMPLERTYPE_VirtualAlpha       = 12,
	SAMPLERTYPE_VirtualNormal      = 13,
	SAMPLERTYPE_VirtualMasks       = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX                = 17
};


// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3
};


// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_SingleLayerWater           = 10,
	MSM_ThinTranslucent            = 11,
	MSM_KSSkin                     = 12,
	MSM_KSColoredSpecular          = 13,
	MSM_NUM                        = 14,
	MSM_FromMaterialExpression     = 15,
	MSM_MAX                        = 16
};


// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
	EParticleCollisionMode__SceneDepth = 0,
	EParticleCollisionMode__DistanceField = 1,
	EParticleCollisionMode__EParticleCollisionMode_MAX = 2
};


// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3
};


// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
	EGBufferFormat__Force8BitsPerChannel = 0,
	EGBufferFormat__Default        = 1,
	EGBufferFormat__HighPrecisionNormals = 2,
	EGBufferFormat__Force16BitsPerChannel = 3,
	EGBufferFormat__EGBufferFormat_MAX = 4
};


// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite                 = 0,
	SCCM_Additive                  = 1,
	SCCM_Composite                 = 2,
	SCCM_MAX                       = 3
};


// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	SCS_SceneColorHDRNoAlpha       = 1,
	SCS_FinalColorLDR              = 2,
	SCS_SceneColorSceneDepth       = 3,
	SCS_SceneDepth                 = 4,
	SCS_DeviceDepth                = 5,
	SCS_Normal                     = 6,
	SCS_BaseColor                  = 7,
	SCS_FinalColorHDR              = 8,
	SCS_FinalToneCurveHDR          = 9,
	SCS_MAX                        = 10
};


// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
	ETranslucentSortPolicy__SortByDistance = 0,
	ETranslucentSortPolicy__SortByProjectedZ = 1,
	ETranslucentSortPolicy__SortAlongAxis = 2,
	ETranslucentSortPolicy__ETranslucentSortPolicy_MAX = 3
};


// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
	RM_IndexOfRefraction           = 0,
	RM_PixelNormalOffset           = 1,
	RM_MAX                         = 2
};


// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_MAX                        = 6
};


// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3
};


// Enum Engine.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_AlphaHoldout             = 6,
	BLEND_MAX                      = 7
};


// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
	OCM_Minimum                    = 0,
	OCM_Multiply                   = 1,
	OCM_MAX                        = 2
};


// Enum Engine.ELightmapType
enum class ELightmapType : uint8_t
{
	ELightmapType__Default         = 0,
	ELightmapType__ForceSurface    = 1,
	ELightmapType__ForceVolumetric = 2,
	ELightmapType__ELightmapType_MAX = 3
};


// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3
};


// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2
};


// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3
};


// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
	EFontCacheType__Offline        = 0,
	EFontCacheType__Runtime        = 1,
	EFontCacheType__EFontCacheType_MAX = 2
};


// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3
};


// Enum Engine.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3
};


// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	ESuggestProjVelocityTraceOption__DoNotTrace = 0,
	ESuggestProjVelocityTraceOption__TraceFullPath = 1,
	ESuggestProjVelocityTraceOption__OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption__ESuggestProjVelocityTraceOption_MAX = 3
};


// Enum Engine.EWindowMode
enum class EWindowMode : uint8_t
{
	EWindowMode__Fullscreen        = 0,
	EWindowMode__WindowedFullscreen = 1,
	EWindowMode__Windowed          = 2,
	EWindowMode__EWindowMode_MAX   = 3
};


// Enum Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8_t
{
	HPP_World                      = 0,
	HPP_Wireframe                  = 1,
	HPP_Foreground                 = 2,
	HPP_UI                         = 3,
	HPP_MAX                        = 4
};


// Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8_t
{
	EImportanceWeight__Luminance   = 0,
	EImportanceWeight__Red         = 1,
	EImportanceWeight__Green       = 2,
	EImportanceWeight__Blue        = 3,
	EImportanceWeight__Alpha       = 4,
	EImportanceWeight__EImportanceWeight_MAX = 5
};


// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2
};


// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
	EControllerAnalogStick__CAS_LeftStick = 0,
	EControllerAnalogStick__CAS_RightStick = 1,
	EControllerAnalogStick__CAS_MAX = 2
};


// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
	EAnimAlphaInputType__Float     = 0,
	EAnimAlphaInputType__Bool      = 1,
	EAnimAlphaInputType__Curve     = 2,
	EAnimAlphaInputType__EAnimAlphaInputType_MAX = 3
};


// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3
};


// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3
};


// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6
};


// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4
};


// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3
};


// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3
};


// Enum Engine.ESlateGesture
enum class ESlateGesture : uint8_t
{
	ESlateGesture__None            = 0,
	ESlateGesture__Scroll          = 1,
	ESlateGesture__Magnify         = 2,
	ESlateGesture__Swipe           = 3,
	ESlateGesture__Rotate          = 4,
	ESlateGesture__LongPress       = 5,
	ESlateGesture__ESlateGesture_MAX = 6
};


// Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8_t
{
	EMatrixColumns__First          = 0,
	EMatrixColumns__Second         = 1,
	EMatrixColumns__Third          = 2,
	EMatrixColumns__Fourth         = 3,
	EMatrixColumns__EMatrixColumns_MAX = 4
};


// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
	ELerpInterpolationMode__QuatInterp = 0,
	ELerpInterpolationMode__EulerInterp = 1,
	ELerpInterpolationMode__DualQuatInterp = 2,
	ELerpInterpolationMode__ELerpInterpolationMode_MAX = 3
};


// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
	EEasingFunc__Linear            = 0,
	EEasingFunc__Step              = 1,
	EEasingFunc__SinusoidalIn      = 2,
	EEasingFunc__SinusoidalOut     = 3,
	EEasingFunc__SinusoidalInOut   = 4,
	EEasingFunc__EaseIn            = 5,
	EEasingFunc__EaseOut           = 6,
	EEasingFunc__EaseInOut         = 7,
	EEasingFunc__ExpoIn            = 8,
	EEasingFunc__ExpoOut           = 9,
	EEasingFunc__ExpoInOut         = 10,
	EEasingFunc__CircularIn        = 11,
	EEasingFunc__CircularOut       = 12,
	EEasingFunc__CircularInOut     = 13,
	EEasingFunc__EEasingFunc_MAX   = 14
};


// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7
};


// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5
};


// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8
};


// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_DBuffer_Emissive           = 11,
	DBM_DBuffer_AlphaComposite     = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite             = 15,
	DBM_AmbientOcclusion           = 16,
	DBM_Forward                    = 17,
	DBM_MAX                        = 18
};


// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4
};


// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
	EMaterialAttributeBlend__Blend = 0,
	EMaterialAttributeBlend__UseA  = 1,
	EMaterialAttributeBlend__UseB  = 2,
	EMaterialAttributeBlend__EMaterialAttributeBlend_MAX = 3
};


// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8_t
{
	EChannelMaskParameterColor__Red = 0,
	EChannelMaskParameterColor__Green = 1,
	EChannelMaskParameterColor__Blue = 2,
	EChannelMaskParameterColor__Alpha = 3,
	EChannelMaskParameterColor__EChannelMaskParameterColor_MAX = 4
};


// Enum Engine.EClampMode
enum class EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3
};


// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4
};


// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_CircleOfConfusionRadius   = 3,
	TDOF_MAX                       = 4
};


// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_Texture2DArray   = 6,
	FunctionInput_VolumeTexture    = 7,
	FunctionInput_StaticBool       = 8,
	FunctionInput_MaterialAttributes = 9,
	FunctionInput_TextureExternal  = 10,
	FunctionInput_MAX              = 11
};


// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6
};


// Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8_t
{
	RVTMVM_None                    = 0,
	RVTMVM_MipLevel                = 1,
	RVTMVM_MipBias                 = 2,
	RVTMVM_MAX                     = 3
};


// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	EMaterialSceneAttributeInputMode__Coordinates = 0,
	EMaterialSceneAttributeInputMode__OffsetFraction = 1,
	EMaterialSceneAttributeInputMode__EMaterialSceneAttributeInputMode_MAX = 2
};


// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2
};


// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7
};


// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5
};


// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2
};


// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4
};


// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_MAX                  = 6
};


// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_MAX            = 6
};


// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_MAX         = 6
};


// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU               = 0,
	VNF_VectorALU                  = 1,
	VNF_GradientALU                = 2,
	VNF_CurlALU                    = 3,
	VNF_VoronoiALU                 = 4,
	VNF_MAX                        = 5
};


// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_ViewportOffset            = 6,
	MEVP_TemporalSampleCount       = 7,
	MEVP_TemporalSampleIndex       = 8,
	MEVP_TemporalSampleOffset      = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure               = 12,
	MEVP_MAX                       = 13
};


// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	WPT_ExcludeAllShaderOffsets    = 1,
	WPT_CameraRelative             = 2,
	WPT_CameraRelativeNoOffsets    = 3,
	WPT_MAX                        = 4
};


// Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8_t
{
	EMaterialFunctionUsage__Default = 0,
	EMaterialFunctionUsage__MaterialLayer = 1,
	EMaterialFunctionUsage__MaterialLayerBlend = 2,
	EMaterialFunctionUsage__EMaterialFunctionUsage_MAX = 3
};


// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_ParticleSprites       = 1,
	MATUSAGE_BeamTrails            = 2,
	MATUSAGE_MeshParticles         = 3,
	MATUSAGE_StaticLighting        = 4,
	MATUSAGE_MorphTargets          = 5,
	MATUSAGE_SplineMesh            = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections   = 8,
	MATUSAGE_Clothing              = 9,
	MATUSAGE_NiagaraSprites        = 10,
	MATUSAGE_NiagaraRibbons        = 11,
	MATUSAGE_NiagaraMeshParticles  = 12,
	MATUSAGE_GeometryCache         = 13,
	MATUSAGE_Water                 = 14,
	MATUSAGE_HairStrands           = 15,
	MATUSAGE_LidarPointCloud       = 16,
	MATUSAGE_MAX                   = 17
};


// Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8_t
{
	LayerParameter                 = 0,
	BlendParameter                 = 1,
	GlobalParameter                = 2,
	EMaterialParameterAssociation_MAX = 3
};


// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2
};


// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX          = 4
};


// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModelColor          = 22,
	PPI_ShadingModelID             = 23,
	PPI_AmbientOcclusion           = 24,
	PPI_CustomStencil              = 25,
	PPI_StoredBaseColor            = 26,
	PPI_StoredSpecular             = 27,
	PPI_Velocity                   = 28,
	PPI_WorldTangent               = 29,
	PPI_Anisotropy                 = 30,
	PPI_MAX                        = 31
};


// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_RuntimeVirtualTexture       = 6,
	MD_MAX                         = 7
};


// Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8_t
{
	EMeshInstancingReplacementMethod__RemoveOriginalActors = 0,
	EMeshInstancingReplacementMethod__KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod__EMeshInstancingReplacementMethod_MAX = 2
};


// Enum Engine.EUVOutput
enum class EUVOutput : uint8_t
{
	EUVOutput__DoNotOutputChannel  = 0,
	EUVOutput__OutputChannel       = 1,
	EUVOutput__EUVOutput_MAX       = 2
};


// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
	EMeshMergeType__MeshMergeType_Default = 0,
	EMeshMergeType__MeshMergeType_MergeActor = 1,
	EMeshMergeType__MeshMergeType_MAX = 2
};


// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
	EMeshLODSelectionType__AllLODs = 0,
	EMeshLODSelectionType__SpecificLOD = 1,
	EMeshLODSelectionType__CalculateLOD = 2,
	EMeshLODSelectionType__LowestDetailLOD = 3,
	EMeshLODSelectionType__EMeshLODSelectionType_MAX = 4
};


// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
	EProxyNormalComputationMethod__AngleWeighted = 0,
	EProxyNormalComputationMethod__AreaWeighted = 1,
	EProxyNormalComputationMethod__EqualWeighted = 2,
	EProxyNormalComputationMethod__EProxyNormalComputationMethod_MAX = 3
};


// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
	ELandscapeCullingPrecision__High = 0,
	ELandscapeCullingPrecision__Medium = 1,
	ELandscapeCullingPrecision__Low = 2,
	ELandscapeCullingPrecision__ELandscapeCullingPrecision_MAX = 3
};


// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	EStaticMeshReductionTerimationCriterion__Triangles = 0,
	EStaticMeshReductionTerimationCriterion__Vertices = 1,
	EStaticMeshReductionTerimationCriterion__Any = 2,
	EStaticMeshReductionTerimationCriterion__EStaticMeshReductionTerimationCriterion_MAX = 3
};


// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
	EMeshFeatureImportance__Off    = 0,
	EMeshFeatureImportance__Lowest = 1,
	EMeshFeatureImportance__Low    = 2,
	EMeshFeatureImportance__Normal = 3,
	EMeshFeatureImportance__High   = 4,
	EMeshFeatureImportance__Highest = 5,
	EMeshFeatureImportance__EMeshFeatureImportance_MAX = 6
};


// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
	EVertexPaintAxis__X            = 0,
	EVertexPaintAxis__Y            = 1,
	EVertexPaintAxis__Z            = 2,
	EVertexPaintAxis__EVertexPaintAxis_MAX = 3
};


// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4
};


// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2
};


// Enum Engine.FNavigationSystemRunMode
enum class EFNavigationSystemRunMode : uint8_t
{
	FNavigationSystemRunMode__InvalidMode = 0,
	FNavigationSystemRunMode__GameMode = 1,
	FNavigationSystemRunMode__EditorMode = 2,
	FNavigationSystemRunMode__SimulationMode = 3,
	FNavigationSystemRunMode__PIEMode = 4,
	FNavigationSystemRunMode__FNavigationSystemRunMode_MAX = 5
};


// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
	ENavigationQueryResult__Invalid = 0,
	ENavigationQueryResult__Error  = 1,
	ENavigationQueryResult__Fail   = 2,
	ENavigationQueryResult__Success = 3,
	ENavigationQueryResult__ENavigationQueryResult_MAX = 4
};


// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
	ENavPathEvent__Cleared         = 0,
	ENavPathEvent__NewPath         = 1,
	ENavPathEvent__UpdatedDueToGoalMoved = 2,
	ENavPathEvent__UpdatedDueToNavigationChanged = 3,
	ENavPathEvent__Invalidated     = 4,
	ENavPathEvent__RePathFailed    = 5,
	ENavPathEvent__MetaPathUpdate  = 6,
	ENavPathEvent__Custom          = 7,
	ENavPathEvent__ENavPathEvent_MAX = 8
};


// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
	ENavDataGatheringModeConfig__Invalid = 0,
	ENavDataGatheringModeConfig__Instant = 1,
	ENavDataGatheringModeConfig__Lazy = 2,
	ENavDataGatheringModeConfig__ENavDataGatheringModeConfig_MAX = 3
};


// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
	ENavDataGatheringMode__Default = 0,
	ENavDataGatheringMode__Instant = 1,
	ENavDataGatheringMode__Lazy    = 2,
	ENavDataGatheringMode__ENavDataGatheringMode_MAX = 3
};


// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
	ENavigationOptionFlag__Default = 0,
	ENavigationOptionFlag__Enable  = 1,
	ENavigationOptionFlag__Disable = 2,
	ENavigationOptionFlag__MAX     = 3
};


// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	ENavLinkDirection__BothWays    = 0,
	ENavLinkDirection__LeftToRight = 1,
	ENavLinkDirection__RightToLeft = 2,
	ENavLinkDirection__ENavLinkDirection_MAX = 3
};


// Enum Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8_t
{
	EFastArraySerializerDeltaFlags__None = 0,
	EFastArraySerializerDeltaFlags__HasBeenSerialized = 1,
	EFastArraySerializerDeltaFlags__HasDeltaBeenRequested = 2,
	EFastArraySerializerDeltaFlags__IsUsingDeltaSerialization = 3,
	EFastArraySerializerDeltaFlags__EFastArraySerializerDeltaFlags_MAX = 4
};


// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5
};


// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5
};


// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2
};


// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
	EParticleSystemInsignificanceReaction__Auto = 0,
	EParticleSystemInsignificanceReaction__Complete = 1,
	EParticleSystemInsignificanceReaction__DisableTick = 2,
	EParticleSystemInsignificanceReaction__DisableTickAndKill = 3,
	EParticleSystemInsignificanceReaction__Num = 4,
	EParticleSystemInsignificanceReaction__EParticleSystemInsignificanceReaction_MAX = 5
};


// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
	EParticleSignificanceLevel__Low = 0,
	EParticleSignificanceLevel__Medium = 1,
	EParticleSignificanceLevel__High = 2,
	EParticleSignificanceLevel__Critical = 3,
	EParticleSignificanceLevel__Num = 4,
	EParticleSignificanceLevel__EParticleSignificanceLevel_MAX = 5
};


// Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8_t
{
	PDM_Low                        = 0,
	PDM_Medium                     = 1,
	PDM_High                       = 2,
	PDM_MAX                        = 3
};


// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2
};


// Enum Engine.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_SubUV                     = 8,
	EPMT_MAX                       = 9
};


// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2
};


// Enum Engine.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4
};


// Enum Engine.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5
};


// Enum Engine.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2
};


// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3
};


// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6
};


// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	EParticleCollisionResponse__Bounce = 0,
	EParticleCollisionResponse__Stop = 1,
	EParticleCollisionResponse__Kill = 2,
	EParticleCollisionResponse__EParticleCollisionResponse_MAX = 3
};


// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2
};


// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2
};


// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2
};


// Enum Engine.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3
};


// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2
};


// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3
};


// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10
};


// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_AutoSet                   = 1,
	EDPV_VelocityX                 = 2,
	EDPV_VelocityY                 = 3,
	EDPV_VelocityZ                 = 4,
	EDPV_VelocityMag               = 5,
	EDPV_MAX                       = 6
};


// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3
};


// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5
};


// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
	EParticleUVFlipMode__None      = 0,
	EParticleUVFlipMode__FlipUV    = 1,
	EParticleUVFlipMode__FlipUOnly = 2,
	EParticleUVFlipMode__FlipVOnly = 3,
	EParticleUVFlipMode__RandomFlipUV = 4,
	EParticleUVFlipMode__RandomFlipUOnly = 5,
	EParticleUVFlipMode__RandomFlipVOnly = 6,
	EParticleUVFlipMode__RandomFlipUVIndependent = 7,
	EParticleUVFlipMode__EParticleUVFlipMode_MAX = 8
};


// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3
};


// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3
};


// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3
};


// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13
};


// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5
};


// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3
};


// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3
};


// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_FacingCameraDistanceBlend  = 6,
	PSA_MAX                        = 7
};


// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3
};


// Enum Engine.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3
};


// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2
};


// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6
};


// Enum Engine.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3
};


// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_VectorUnitRand            = 8,
	PSPT_MAX                       = 9
};


// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
	ESettingsLockedAxis__None      = 0,
	ESettingsLockedAxis__X         = 1,
	ESettingsLockedAxis__Y         = 2,
	ESettingsLockedAxis__Z         = 3,
	ESettingsLockedAxis__Invalid   = 4,
	ESettingsLockedAxis__ESettingsLockedAxis_MAX = 5
};


// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
	ESettingsDOF__Full3D           = 0,
	ESettingsDOF__YZPlane          = 1,
	ESettingsDOF__XZPlane          = 2,
	ESettingsDOF__XYPlane          = 3,
	ESettingsDOF__ESettingsDOF_MAX = 4
};


// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average  = 0,
	EFrictionCombineMode__Min      = 1,
	EFrictionCombineMode__Multiply = 2,
	EFrictionCombineMode__Max      = 3
};


// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5
};


// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	EDynamicForceFeedbackAction__Start = 0,
	EDynamicForceFeedbackAction__Update = 1,
	EDynamicForceFeedbackAction__Stop = 2,
	EDynamicForceFeedbackAction__EDynamicForceFeedbackAction_MAX = 3
};


// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
	ERendererStencilMask__ERSM_Default = 0,
	ERendererStencilMask__ERSM     = 1,
	ERendererStencilMask__ERSM01   = 2,
	ERendererStencilMask__ERSM02   = 3,
	ERendererStencilMask__ERSM03   = 4,
	ERendererStencilMask__ERSM04   = 5,
	ERendererStencilMask__ERSM05   = 6,
	ERendererStencilMask__ERSM06   = 7,
	ERendererStencilMask__ERSM07   = 8,
	ERendererStencilMask__ERSM08   = 9,
	ERendererStencilMask__ERSM_MAX = 10
};


// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
	EHasCustomNavigableGeometry__No = 0,
	EHasCustomNavigableGeometry__Yes = 1,
	EHasCustomNavigableGeometry__EvenIfNotCollidable = 2,
	EHasCustomNavigableGeometry__DontExport = 3,
	EHasCustomNavigableGeometry__EHasCustomNavigableGeometry_MAX = 4
};


// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3
};


// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6
};


// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4
};


// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
	EReflectionSourceType__CapturedScene = 0,
	EReflectionSourceType__SpecifiedCubemap = 1,
	EReflectionSourceType__EReflectionSourceType_MAX = 2
};


// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8_t
{
	EDefaultBackBufferPixelFormat__DBBPF_B8G8R8A8 = 0,
	EDefaultBackBufferPixelFormat__DBBPF_A16B16G16R16_DEPRECATED = 1,
	EDefaultBackBufferPixelFormat__DBBPF_FloatRGB_DEPRECATED = 2,
	EDefaultBackBufferPixelFormat__DBBPF_FloatRGBA = 3,
	EDefaultBackBufferPixelFormat__DBBPF_A2B10G10R10 = 4,
	EDefaultBackBufferPixelFormat__DBBPF_MAX = 5
};


// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
	EAutoExposureMethodUI__AEM_Histogram = 0,
	EAutoExposureMethodUI__AEM_Basic = 1,
	EAutoExposureMethodUI__AEM_Manual = 2,
	EAutoExposureMethodUI__AEM_MAX = 3
};


// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8_t
{
	EAlphaChannelMode__Disabled    = 0,
	EAlphaChannelMode__LinearColorSpaceOnly = 1,
	EAlphaChannelMode__AllowThroughTonemapper = 2,
	EAlphaChannelMode__EAlphaChannelMode_MAX = 3
};


// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
	EEarlyZPass__None              = 0,
	EEarlyZPass__OpaqueOnly        = 1,
	EEarlyZPass__OpaqueAndMasked   = 2,
	EEarlyZPass__Auto              = 3,
	EEarlyZPass__EEarlyZPass_MAX   = 4
};


// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
	ECustomDepthStencil__Disabled  = 0,
	ECustomDepthStencil__Enabled   = 1,
	ECustomDepthStencil__EnabledOnDemand = 2,
	ECustomDepthStencil__EnabledWithStencil = 3,
	ECustomDepthStencil__EnabledWithStencilOnDemand = 4,
	ECustomDepthStencil__ECustomDepthStencil_MAX = 5
};


// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8_t
{
	EMobileMSAASampleCount__One    = 0,
	EMobileMSAASampleCount__Two    = 1,
	EMobileMSAASampleCount__Four   = 2,
	EMobileMSAASampleCount__Eight  = 3,
	EMobileMSAASampleCount__EMobileMSAASampleCount_MAX = 4
};


// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
	ECompositingSampleCount__One   = 0,
	ECompositingSampleCount__Two   = 1,
	ECompositingSampleCount__Four  = 2,
	ECompositingSampleCount__Eight = 3,
	ECompositingSampleCount__ECompositingSampleCount_MAX = 4
};


// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
	EClearSceneOptions__NoClear    = 0,
	EClearSceneOptions__HardwareClear = 1,
	EClearSceneOptions__QuadAtMaxZ = 2,
	EClearSceneOptions__EClearSceneOptions_MAX = 3
};


// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
	EReporterLineStyle__Line       = 0,
	EReporterLineStyle__Dash       = 1,
	EReporterLineStyle__EReporterLineStyle_MAX = 2
};


// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
	ELegendPosition__Outside       = 0,
	ELegendPosition__Inside        = 1,
	ELegendPosition__ELegendPosition_MAX = 2
};


// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
	EGraphDataStyle__Lines         = 0,
	EGraphDataStyle__Filled        = 1,
	EGraphDataStyle__EGraphDataStyle_MAX = 2
};


// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
	EGraphAxisStyle__Lines         = 0,
	EGraphAxisStyle__Notches       = 1,
	EGraphAxisStyle__Grid          = 2,
	EGraphAxisStyle__EGraphAxisStyle_MAX = 3
};


// Enum Engine.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23
};


// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8_t
{
	RCKTCF_uint16                  = 0,
	RCKTCF_float32                 = 1,
	RCKTCF_MAX                     = 2
};


// Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8_t
{
	RCCF_Empty                     = 0,
	RCCF_Constant                  = 1,
	RCCF_Linear                    = 2,
	RCCF_Cubic                     = 3,
	RCCF_Mixed                     = 4,
	RCCF_MAX                       = 5
};


// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4
};


// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4
};


// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
	EConstraintTransform__Absolute = 0,
	EConstraintTransform__Relative = 1,
	EConstraintTransform__EConstraintTransform_MAX = 2
};


// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
	EControlConstraint__Orientation = 0,
	EControlConstraint__Translation = 1,
	EControlConstraint__MAX        = 2
};


// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
	ERootMotionFinishVelocityMode__MaintainLastRootMotionVelocity = 0,
	ERootMotionFinishVelocityMode__SetVelocity = 1,
	ERootMotionFinishVelocityMode__ClampVelocity = 2,
	ERootMotionFinishVelocityMode__ERootMotionFinishVelocityMode_MAX = 3
};


// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
	ERootMotionSourceSettingsFlags__UseSensitiveLiftoffCheck = 0,
	ERootMotionSourceSettingsFlags__DisablePartialEndTick = 1,
	ERootMotionSourceSettingsFlags__IgnoreZAccumulate = 2,
	ERootMotionSourceSettingsFlags__ERootMotionSourceSettingsFlags_MAX = 3
};


// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
	ERootMotionSourceStatusFlags__Prepared = 0,
	ERootMotionSourceStatusFlags__Finished = 1,
	ERootMotionSourceStatusFlags__MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags__ERootMotionSourceStatusFlags_MAX = 3
};


// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
	ERootMotionAccumulateMode__Override = 0,
	ERootMotionAccumulateMode__Additive = 1,
	ERootMotionAccumulateMode__ERootMotionAccumulateMode_MAX = 2
};


// Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8_t
{
	ERuntimeVirtualTextureMainPassType__Never = 0,
	ERuntimeVirtualTextureMainPassType__Exclusive = 1,
	ERuntimeVirtualTextureMainPassType__Always = 2,
	ERuntimeVirtualTextureMainPassType__ERuntimeVirtualTextureMainPassType_MAX = 3
};


// Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8_t
{
	ERuntimeVirtualTextureMaterialType__BaseColor = 0,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_DEPRECATED = 1,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular = 2,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular_YCoCg = 3,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular_Mask_YCoCg = 4,
	ERuntimeVirtualTextureMaterialType__WorldHeight = 5,
	ERuntimeVirtualTextureMaterialType__Count = 6,
	ERuntimeVirtualTextureMaterialType__ERuntimeVirtualTextureMaterialType_MAX = 7
};


// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8_t
{
	EReflectedAndRefractedRayTracedShadows__Disabled = 0,
	EReflectedAndRefractedRayTracedShadows__Hard_shadows = 1,
	EReflectedAndRefractedRayTracedShadows__Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows__EReflectedAndRefractedRayTracedShadows_MAX = 3
};


// Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8_t
{
	ERayTracingGlobalIlluminationType__Disabled = 0,
	ERayTracingGlobalIlluminationType__BruteForce = 1,
	ERayTracingGlobalIlluminationType__FinalGather = 2,
	ERayTracingGlobalIlluminationType__ERayTracingGlobalIlluminationType_MAX = 3
};


// Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8_t
{
	ETranslucencyType__Raster      = 0,
	ETranslucencyType__RayTracing  = 1,
	ETranslucencyType__ETranslucencyType_MAX = 2
};


// Enum Engine.EReflectionsType
enum class EReflectionsType : uint8_t
{
	EReflectionsType__ScreenSpace  = 0,
	EReflectionsType__RayTracing   = 1,
	EReflectionsType__EReflectionsType_MAX = 2
};


// Enum Engine.ELightUnits
enum class ELightUnits : uint8_t
{
	ELightUnits__Unitless          = 0,
	ELightUnits__Candelas          = 1,
	ELightUnits__Lumens            = 2,
	ELightUnits__ELightUnits_MAX   = 3
};


// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
	BM_SOG                         = 0,
	BM_FFT                         = 1,
	BM_MAX                         = 2
};


// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_Manual                     = 2,
	AEM_MAX                        = 3
};


// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MSAA                       = 3,
	AAM_MAX                        = 4
};


// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3
};


// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
	ESceneCapturePrimitiveRenderMode__PRM_LegacySceneCapture = 0,
	ESceneCapturePrimitiveRenderMode__PRM_RenderScenePrimitives = 1,
	ESceneCapturePrimitiveRenderMode__PRM_UseShowOnlyList = 2,
	ESceneCapturePrimitiveRenderMode__PRM_MAX = 3
};


// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor               = 0,
	MP_Opacity                     = 1,
	MP_OpacityMask                 = 2,
	MP_DiffuseColor                = 3,
	MP_SpecularColor               = 4,
	MP_BaseColor                   = 5,
	MP_Metallic                    = 6,
	MP_Specular                    = 7,
	MP_Roughness                   = 8,
	MP_Anisotropy                  = 9,
	MP_Normal                      = 10,
	MP_Tangent                     = 11,
	MP_WorldPositionOffset         = 12,
	MP_WorldDisplacement           = 13,
	MP_TessellationMultiplier      = 14,
	MP_SubsurfaceColor             = 15,
	MP_CustomData0                 = 16,
	MP_CustomData1                 = 17,
	MP_AmbientOcclusion            = 18,
	MP_Refraction                  = 19,
	MP_CustomizedUVs0              = 20,
	MP_CustomizedUVs1              = 21,
	MP_CustomizedUVs2              = 22,
	MP_CustomizedUVs3              = 23,
	MP_CustomizedUVs4              = 24,
	MP_CustomizedUVs5              = 25,
	MP_CustomizedUVs6              = 26,
	MP_CustomizedUVs7              = 27,
	MP_PixelDepthOffset            = 28,
	MP_ShadingModel                = 29,
	MP_MaterialAttributes          = 30,
	MP_CustomOutput                = 31,
	MP_MAX                         = 32
};


// Enum Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8_t
{
	ESkinCacheDefaultBehavior__Exclusive = 0,
	ESkinCacheDefaultBehavior__Inclusive = 1,
	ESkinCacheDefaultBehavior__ESkinCacheDefaultBehavior_MAX = 2
};


// Enum Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8_t
{
	ESkinCacheUsage__Auto          = 0,
	ESkinCacheUsage__Disabled      = 1,
	ESkinCacheUsage__Enabled       = 2,
	ESkinCacheUsage__ESkinCacheUsage_MAX = 3
};


// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
	EPhysicsTransformUpdateMode__SimulationUpatesComponentTransform = 0,
	EPhysicsTransformUpdateMode__ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode__EPhysicsTransformUpdateMode_MAX = 2
};


// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
	EAnimationMode__AnimationBlueprint = 0,
	EAnimationMode__AnimationSingleNode = 1,
	EAnimationMode__AnimationCustomMode = 2,
	EAnimationMode__EAnimationMode_MAX = 3
};


// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	EKinematicBonesUpdateToPhysics__SkipSimulatingBones = 0,
	EKinematicBonesUpdateToPhysics__SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics__EKinematicBonesUpdateToPhysics_MAX = 2
};


// Enum Engine.EClothMassMode
enum class EClothMassMode : uint8_t
{
	EClothMassMode__UniformMass    = 0,
	EClothMassMode__TotalMass      = 1,
	EClothMassMode__Density        = 2,
	EClothMassMode__MaxClothMassMode = 3,
	EClothMassMode__EClothMassMode_MAX = 4
};


// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
	EAnimCurveType__AttributeCurve = 0,
	EAnimCurveType__MaterialCurve  = 1,
	EAnimCurveType__MorphTargetCurve = 2,
	EAnimCurveType__MaxAnimCurveType = 3,
	EAnimCurveType__EAnimCurveType_MAX = 4
};


// Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8_t
{
	ESkeletalMeshSkinningImportVersions__Before_Versionning = 0,
	ESkeletalMeshSkinningImportVersions__SkeletalMeshBuildRefactor = 1,
	ESkeletalMeshSkinningImportVersions__VersionPlusOne = 2,
	ESkeletalMeshSkinningImportVersions__LatestVersion = 3,
	ESkeletalMeshSkinningImportVersions__ESkeletalMeshSkinningImportVersions_MAX = 4
};


// Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8_t
{
	ESkeletalMeshGeoImportVersions__Before_Versionning = 0,
	ESkeletalMeshGeoImportVersions__SkeletalMeshBuildRefactor = 1,
	ESkeletalMeshGeoImportVersions__VersionPlusOne = 2,
	ESkeletalMeshGeoImportVersions__LatestVersion = 3,
	ESkeletalMeshGeoImportVersions__ESkeletalMeshGeoImportVersions_MAX = 4
};


// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8_t
{
	EBoneFilterActionOption__Remove = 0,
	EBoneFilterActionOption__Keep  = 1,
	EBoneFilterActionOption__Invalid = 2,
	EBoneFilterActionOption__EBoneFilterActionOption_MAX = 3
};


// Enum Engine.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6
};


// Enum Engine.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_TriangleOrDeviation       = 2,
	SMOT_MAX                       = 3
};


// Enum Engine.SkeletalMeshTerminationCriterion
enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles            = 0,
	SMTC_NumOfVerts                = 1,
	SMTC_TriangleOrVert            = 2,
	SMTC_AbsNumOfTriangles         = 3,
	SMTC_AbsNumOfVerts             = 4,
	SMTC_AbsTriangleOrVert         = 5,
	SMTC_MAX                       = 6
};


// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
	EBoneTranslationRetargetingMode__Animation = 0,
	EBoneTranslationRetargetingMode__Skeleton = 1,
	EBoneTranslationRetargetingMode__AnimationScaled = 2,
	EBoneTranslationRetargetingMode__AnimationRelative = 3,
	EBoneTranslationRetargetingMode__OrientAndScale = 4,
	EBoneTranslationRetargetingMode__EBoneTranslationRetargetingMode_MAX = 5
};


// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
	EBoneSpaces__WorldSpace        = 0,
	EBoneSpaces__ComponentSpace    = 1,
	EBoneSpaces__EBoneSpaces_MAX   = 2
};


// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t
{
	EVisibilityBasedAnimTickOption__AlwaysTickPoseAndRefreshBones = 0,
	EVisibilityBasedAnimTickOption__AlwaysTickPose = 1,
	EVisibilityBasedAnimTickOption__OnlyTickMontagesWhenNotRendered = 2,
	EVisibilityBasedAnimTickOption__OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption__EVisibilityBasedAnimTickOption_MAX = 4
};


// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_MAX                        = 2
};


// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3
};


// Enum Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8_t
{
	ESkyAtmosphereTransformMode__PlanetTopAtAbsoluteWorldOrigin = 0,
	ESkyAtmosphereTransformMode__PlanetTopAtComponentTransform = 1,
	ESkyAtmosphereTransformMode__PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode__ESkyAtmosphereTransformMode_MAX = 3
};


// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2
};


// Enum Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8_t
{
	EPriorityAttenuationMethod__Linear = 0,
	EPriorityAttenuationMethod__CustomCurve = 1,
	EPriorityAttenuationMethod__Manual = 2,
	EPriorityAttenuationMethod__EPriorityAttenuationMethod_MAX = 3
};


// Enum Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8_t
{
	ESubmixSendMethod__Linear      = 0,
	ESubmixSendMethod__CustomCurve = 1,
	ESubmixSendMethod__Manual      = 2,
	ESubmixSendMethod__ESubmixSendMethod_MAX = 3
};


// Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8_t
{
	EReverbSendMethod__Linear      = 0,
	EReverbSendMethod__CustomCurve = 1,
	EReverbSendMethod__Manual      = 2,
	EReverbSendMethod__EReverbSendMethod_MAX = 3
};


// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8_t
{
	EAirAbsorptionMethod__Linear   = 0,
	EAirAbsorptionMethod__CustomCurve = 1,
	EAirAbsorptionMethod__EAirAbsorptionMethod_MAX = 2
};


// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2
};


// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4
};


// Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8_t
{
	EVirtualizationMode__Disabled  = 0,
	EVirtualizationMode__PlayWhenSilent = 1,
	EVirtualizationMode__Restart   = 2,
	EVirtualizationMode__EVirtualizationMode_MAX = 3
};


// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
	EMaxConcurrentResolutionRule__PreventNew = 0,
	EMaxConcurrentResolutionRule__StopOldest = 1,
	EMaxConcurrentResolutionRule__StopFarthestThenPreventNew = 2,
	EMaxConcurrentResolutionRule__StopFarthestThenOldest = 3,
	EMaxConcurrentResolutionRule__StopLowestPriority = 4,
	EMaxConcurrentResolutionRule__StopQuietest = 5,
	EMaxConcurrentResolutionRule__StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule__Count = 7,
	EMaxConcurrentResolutionRule__EMaxConcurrentResolutionRule_MAX = 8
};


// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25
};


// Enum Engine.ModulationParamMode
enum class EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3
};


// Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8_t
{
	ESourceBusChannels__Mono       = 0,
	ESourceBusChannels__Stereo     = 1,
	ESourceBusChannels__ESourceBusChannels_MAX = 2
};


// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8_t
{
	ESourceBusSendLevelControlMethod__Linear = 0,
	ESourceBusSendLevelControlMethod__CustomCurve = 1,
	ESourceBusSendLevelControlMethod__Manual = 2,
	ESourceBusSendLevelControlMethod__ESourceBusSendLevelControlMethod_MAX = 3
};


// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8_t
{
	ESendLevelControlMethod__Linear = 0,
	ESendLevelControlMethod__CustomCurve = 1,
	ESendLevelControlMethod__Manual = 2,
	ESendLevelControlMethod__ESendLevelControlMethod_MAX = 3
};


// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8_t
{
	EAudioRecordingExportType__SoundWave = 0,
	EAudioRecordingExportType__WavFile = 1,
	EAudioRecordingExportType__EAudioRecordingExportType_MAX = 2
};


// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8_t
{
	ESoundWaveFFTSize__VerySmall   = 0,
	ESoundWaveFFTSize__Small       = 1,
	ESoundWaveFFTSize__Medium      = 2,
	ESoundWaveFFTSize__Large       = 3,
	ESoundWaveFFTSize__VeryLarge   = 4,
	ESoundWaveFFTSize__ESoundWaveFFTSize_MAX = 5
};


// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8
};


// Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8_t
{
	ESoundWaveLoadingBehavior__Inherited = 0,
	ESoundWaveLoadingBehavior__RetainOnLoad = 1,
	ESoundWaveLoadingBehavior__PrimeOnLoad = 2,
	ESoundWaveLoadingBehavior__LoadOnDemand = 3,
	ESoundWaveLoadingBehavior__ForceInline = 4,
	ESoundWaveLoadingBehavior__Uninitialized = 5,
	ESoundWaveLoadingBehavior__ESoundWaveLoadingBehavior_MAX = 6
};


// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
	ESplineCoordinateSpace__Local  = 0,
	ESplineCoordinateSpace__World  = 1,
	ESplineCoordinateSpace__ESplineCoordinateSpace_MAX = 2
};


// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
	ESplinePointType__Linear       = 0,
	ESplinePointType__Curve        = 1,
	ESplinePointType__Constant     = 2,
	ESplinePointType__CurveClamped = 3,
	ESplinePointType__CurveCustomTangent = 4,
	ESplinePointType__ESplinePointType_MAX = 5
};


// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
	ESplineMeshAxis__X             = 0,
	ESplineMeshAxis__Y             = 1,
	ESplineMeshAxis__Z             = 2,
	ESplineMeshAxis__ESplineMeshAxis_MAX = 3
};


// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2
};


// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7
};


// Enum Engine.ENormalMode
enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5
};


// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer                 = 0,
	SLSH_CylinderLayer             = 1,
	SLSH_CubemapLayer              = 2,
	SLSH_EquirectLayer             = 3,
	SLSH_MAX                       = 4
};


// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3
};


// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5
};


// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2
};


// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4
};


// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3
};


// Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8_t
{
	TLCA_Default                   = 0,
	TLCA_None                      = 1,
	TLCA_Lowest                    = 2,
	TLCA_Low                       = 3,
	TLCA_Medium                    = 4,
	TLCA_High                      = 5,
	TLCA_Highest                   = 6,
	TLCA_MAX                       = 7
};


// Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8_t
{
	TCQ_Default                    = 0,
	TCQ_Lowest                     = 1,
	TCQ_Low                        = 2,
	TCQ_Medium                     = 3,
	TCQ_High                       = 4,
	TCQ_Highest                    = 5,
	TCQ_MAX                        = 6
};


// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
	TSF_G16                        = 8,
	TSF_MAX                        = 9
};


// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3
};


// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3
};


// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5
};


// Enum Engine.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3
};


// Enum Engine.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4
};


// Enum Engine.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_MAX                         = 12
};


// Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8_t
{
	ETextureMipLoadOptions__Default = 0,
	ETextureMipLoadOptions__AllMips = 1,
	ETextureMipLoadOptions__OnlyFirstMip = 2,
	ETextureMipLoadOptions__ETextureMipLoadOptions_MAX = 3
};


// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
	ETextureSamplerFilter__Point   = 0,
	ETextureSamplerFilter__Bilinear = 1,
	ETextureSamplerFilter__Trilinear = 2,
	ETextureSamplerFilter__AnisotropicPoint = 3,
	ETextureSamplerFilter__AnisotropicLinear = 4,
	ETextureSamplerFilter__ETextureSamplerFilter_MAX = 5
};


// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
	ETexturePowerOfTwoSetting__None = 0,
	ETexturePowerOfTwoSetting__PadToPowerOfTwo = 1,
	ETexturePowerOfTwoSetting__PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting__ETexturePowerOfTwoSetting_MAX = 3
};


// Enum Engine.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_Unfiltered                = 20,
	TMGS_MAX                       = 21
};


// Enum Engine.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh             = 26,
	TEXTUREGROUP_IESLightProfile   = 27,
	TEXTUREGROUP_Pixels2D          = 28,
	TEXTUREGROUP_HierarchicalLOD   = 29,
	TEXTUREGROUP_Impostor          = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData          = 32,
	TEXTUREGROUP_16BitData         = 33,
	TEXTUREGROUP_Project01         = 34,
	TEXTUREGROUP_Project02         = 35,
	TEXTUREGROUP_Project03         = 36,
	TEXTUREGROUP_Project04         = 37,
	TEXTUREGROUP_Project05         = 38,
	TEXTUREGROUP_Project06         = 39,
	TEXTUREGROUP_Project07         = 40,
	TEXTUREGROUP_Project08         = 41,
	TEXTUREGROUP_Project09         = 42,
	TEXTUREGROUP_Project10         = 43,
	TEXTUREGROUP_Project11         = 44,
	TEXTUREGROUP_Project12         = 45,
	TEXTUREGROUP_Project13         = 46,
	TEXTUREGROUP_Project14         = 47,
	TEXTUREGROUP_Project15         = 48,
	TEXTUREGROUP_MAX               = 49
};


// Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8_t
{
	RTF_R8                         = 0,
	RTF_RG8                        = 1,
	RTF_RGBA8                      = 2,
	RTF_RGBA8_SRGB                 = 3,
	RTF_R16f                       = 4,
	RTF_RG16f                      = 5,
	RTF_RGBA16f                    = 6,
	RTF_R32f                       = 7,
	RTF_RG32f                      = 8,
	RTF_RGBA32f                    = 9,
	RTF_RGB10A2                    = 10,
	RTF_MAX                        = 11
};


// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t
{
	ETimecodeProviderSynchronizationState__Closed = 0,
	ETimecodeProviderSynchronizationState__Error = 1,
	ETimecodeProviderSynchronizationState__Synchronized = 2,
	ETimecodeProviderSynchronizationState__Synchronizing = 3,
	ETimecodeProviderSynchronizationState__ETimecodeProviderSynchronizationState_MAX = 4
};


// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
	ETimelineDirection__Forward    = 0,
	ETimelineDirection__Backward   = 1,
	ETimelineDirection__ETimelineDirection_MAX = 2
};


// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2
};


// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8_t
{
	ETimeStretchCurveMapping__T_Original = 0,
	ETimeStretchCurveMapping__T_TargetMin = 1,
	ETimeStretchCurveMapping__T_TargetMax = 2,
	ETimeStretchCurveMapping__MAX  = 3
};


// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3
};


// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3
};


// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4
};


// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
	EUIScalingRule__ShortestSide   = 0,
	EUIScalingRule__LongestSide    = 1,
	EUIScalingRule__Horizontal     = 2,
	EUIScalingRule__Vertical       = 3,
	EUIScalingRule__Custom         = 4,
	EUIScalingRule__EUIScalingRule_MAX = 5
};


// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
	ERenderFocusRule__Always       = 0,
	ERenderFocusRule__NonPointer   = 1,
	ERenderFocusRule__NavigationOnly = 2,
	ERenderFocusRule__Never        = 3,
	ERenderFocusRule__ERenderFocusRule_MAX = 4
};


// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2
};


// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
	EWindSourceType__Directional   = 0,
	EWindSourceType__Point         = 1,
	EWindSourceType__EWindSourceType_MAX = 2
};


// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8_t
{
	EPSCPoolMethod__None           = 0,
	EPSCPoolMethod__AutoRelease    = 1,
	EPSCPoolMethod__ManualRelease  = 2,
	EPSCPoolMethod__ManualRelease_OnComplete = 3,
	EPSCPoolMethod__FreeInPool     = 4,
	EPSCPoolMethod__EPSCPoolMethod_MAX = 5
};


// Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8_t
{
	VLM_VolumetricLightmap         = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX                        = 2
};


// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.DistributionLookupTable
// 0x50BA9880
struct FDistributionLookupTable
{
	unsigned char                                      UnknownData00[0x50BA9880];                                // 0x0000(0x50BA9880) MISSED OFFSET
};

// ScriptStruct Engine.RawDistribution
// 0x50BA9800
struct FRawDistribution
{
	unsigned char                                      UnknownData00[0x50BA9800];                                // 0x0000(0x50BA9800) MISSED OFFSET
};

// ScriptStruct Engine.FloatDistribution
// 0x50BA9780
struct FFloatDistribution
{
	unsigned char                                      UnknownData00[0x50BA9780];                                // 0x0000(0x50BA9780) MISSED OFFSET
};

// ScriptStruct Engine.VectorDistribution
// 0x50BA9700
struct FVectorDistribution
{
	unsigned char                                      UnknownData00[0x50BA9700];                                // 0x0000(0x50BA9700) MISSED OFFSET
};

// ScriptStruct Engine.Vector4Distribution
// 0x50BA9680
struct FVector4Distribution
{
	unsigned char                                      UnknownData00[0x50BA9680];                                // 0x0000(0x50BA9680) MISSED OFFSET
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// 0x50BA9580
struct FFloatRK4SpringInterpolator
{
	unsigned char                                      UnknownData00[0x50BA9580];                                // 0x0000(0x50BA9580) MISSED OFFSET
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// 0x50BAB580
struct FVectorRK4SpringInterpolator
{
	unsigned char                                      UnknownData00[0x50BAB580];                                // 0x0000(0x50BAB580) MISSED OFFSET
};

// ScriptStruct Engine.FormatArgumentData
// 0x50BAB280
struct FFormatArgumentData
{
	unsigned char                                      UnknownData00[0x50BAB280];                                // 0x0000(0x50BAB280) MISSED OFFSET
};

// ScriptStruct Engine.ExpressionInput
// 0x50BAB180
struct FExpressionInput
{
	unsigned char                                      UnknownData00[0x50BAB180];                                // 0x0000(0x50BAB180) MISSED OFFSET
};

// ScriptStruct Engine.MaterialAttributesInput
// 0xFFFFFFFFFFFFFF80 (0x50BAB100 - 0x50BAB180)
struct FMaterialAttributesInput : public FExpressionInput
{

};

// ScriptStruct Engine.ExpressionOutput
// 0x50BAB080
struct FExpressionOutput
{
	unsigned char                                      UnknownData00[0x50BAB080];                                // 0x0000(0x50BAB080) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInput
// 0x50BAAF80
struct FMaterialInput
{
	unsigned char                                      UnknownData00[0x50BAAF80];                                // 0x0000(0x50BAAF80) MISSED OFFSET
};

// ScriptStruct Engine.ColorMaterialInput
// 0xFFFFFFFFAF455080 (0x0000 - 0x50BAAF80)
struct FColorMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.ScalarMaterialInput
// 0xFFFFFFFFAF455080 (0x0000 - 0x50BAAF80)
struct FScalarMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.ShadingModelMaterialInput
// 0xFFFFFFFFAF455080 (0x0000 - 0x50BAAF80)
struct FShadingModelMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.VectorMaterialInput
// 0xFFFFFFFFAF455080 (0x0000 - 0x50BAAF80)
struct FVectorMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.Vector2MaterialInput
// 0xFFFFFFFFAF455080 (0x0000 - 0x50BAAF80)
struct FVector2MaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.HitResult
// 0x50BABC80
struct FHitResult
{
	unsigned char                                      UnknownData00[0x50BABC80];                                // 0x0000(0x50BABC80) MISSED OFFSET
};

// ScriptStruct Engine.Vector_NetQuantize
// 0xFFFFFFFF9E662180 (0x0000 - 0x6199DE80)
struct FVector_NetQuantize : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0xFFFFFFFF9E662180 (0x0000 - 0x6199DE80)
struct FVector_NetQuantizeNormal : public FVector
{

};

// ScriptStruct Engine.BranchingPointNotifyPayload
// 0x0000
struct FBranchingPointNotifyPayload
{

};

// ScriptStruct Engine.SimpleMemberReference
// 0x50BAED00
struct FSimpleMemberReference
{
	unsigned char                                      UnknownData00[0x50BAED00];                                // 0x0000(0x50BAED00) MISSED OFFSET
};

// ScriptStruct Engine.TickFunction
// 0x50BAFB00
struct FTickFunction
{
	unsigned char                                      UnknownData00[0x50BAFB00];                                // 0x0000(0x50BAFB00) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentTickFunction
// 0xFFFFFFFFAF450500 (0x0000 - 0x50BAFB00)
struct FActorComponentTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.SubtitleCue
// 0x50C00B80
struct FSubtitleCue
{
	unsigned char                                      UnknownData00[0x50C00B80];                                // 0x0000(0x50C00B80) MISSED OFFSET
};

// ScriptStruct Engine.InterpControlPoint
// 0x50C02880
struct FInterpControlPoint
{
	unsigned char                                      UnknownData00[0x50C02880];                                // 0x0000(0x50C02880) MISSED OFFSET
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x50C03880
struct FPlatformInterfaceDelegateResult
{
	unsigned char                                      UnknownData00[0x50C03880];                                // 0x0000(0x50C03880) MISSED OFFSET
};

// ScriptStruct Engine.PlatformInterfaceData
// 0x50C03900
struct FPlatformInterfaceData
{
	unsigned char                                      UnknownData00[0x50C03900];                                // 0x0000(0x50C03900) MISSED OFFSET
};

// ScriptStruct Engine.DebugFloatHistory
// 0x618DF1A0
struct FDebugFloatHistory
{
	unsigned char                                      UnknownData00[0x618DF1A0];                                // 0x0000(0x618DF1A0) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionInfo
// 0x50C0EF80
struct FLatentActionInfo
{
	unsigned char                                      UnknownData00[0x50C0EF80];                                // 0x0000(0x50C0EF80) MISSED OFFSET
};

// ScriptStruct Engine.TimerHandle
// 0x50C46E80
struct FTimerHandle
{
	unsigned char                                      UnknownData00[0x50C46E80];                                // 0x0000(0x50C46E80) MISSED OFFSET
};

// ScriptStruct Engine.CollisionProfileName
// 0x50C4E100
struct FCollisionProfileName
{
	unsigned char                                      UnknownData00[0x50C4E100];                                // 0x0000(0x50C4E100) MISSED OFFSET
};

// ScriptStruct Engine.GenericStruct
// 0x50C4EE00
struct FGenericStruct
{
	unsigned char                                      UnknownData00[0x50C4EE00];                                // 0x0000(0x50C4EE00) MISSED OFFSET
};

// ScriptStruct Engine.UserActivity
// 0x50C4E800
struct FUserActivity
{
	unsigned char                                      UnknownData00[0x50C4E800];                                // 0x0000(0x50C4E800) MISSED OFFSET
};

// ScriptStruct Engine.ParticleCollisionPackedParams
// 0x50C93480
struct FParticleCollisionPackedParams
{
	unsigned char                                      UnknownData00[0x50C93480];                                // 0x0000(0x50C93480) MISSED OFFSET
};

// ScriptStruct Engine.FastArraySerializerItem
// 0x5A928080
struct FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x5A928080];                                // 0x0000(0x5A928080) MISSED OFFSET
};

// ScriptStruct Engine.MovementProperties
// 0x5A92E080
struct FMovementProperties
{
	unsigned char                                      UnknownData00[0x5A92E080];                                // 0x0000(0x5A92E080) MISSED OFFSET
};

// ScriptStruct Engine.NavAgentProperties
// 0xFFFFFFFFFFFFFB00 (0x5A92DB80 - 0x5A92E080)
struct FNavAgentProperties : public FMovementProperties
{

};

// ScriptStruct Engine.FindFloorResult
// 0x5A92FC80
struct FFindFloorResult
{
	unsigned char                                      UnknownData00[0x5A92FC80];                                // 0x0000(0x5A92FC80) MISSED OFFSET
};

// ScriptStruct Engine.NavAvoidanceMask
// 0x5AA42080
struct FNavAvoidanceMask
{
	unsigned char                                      UnknownData00[0x5AA42080];                                // 0x0000(0x5AA42080) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionMovementParams
// 0x5AA41A00
struct FRootMotionMovementParams
{
	unsigned char                                      UnknownData00[0x5AA41A00];                                // 0x0000(0x5AA41A00) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSourceGroup
// 0x5AA41600
struct alignas(8) FRootMotionSourceGroup
{
	unsigned char                                      UnknownData00[0x5AA41600];                                // 0x0000(0x5AA41600) MISSED OFFSET
};

// ScriptStruct Engine.Vector_NetQuantize10
// 0xFFFFFFFF9E662180 (0x0000 - 0x6199DE80)
struct FVector_NetQuantize10 : public FVector
{

};

// ScriptStruct Engine.RootMotionSourceSettings
// 0x5AA41800
struct FRootMotionSourceSettings
{
	unsigned char                                      UnknownData00[0x5AA41800];                                // 0x0000(0x5AA41800) MISSED OFFSET
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// 0xFFFFFFFFAF450500 (0x0000 - 0x50BAFB00)
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.TableRowBase
// 0x0000
struct FTableRowBase
{

};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x5ABFE000
struct FWalkableSlopeOverride
{
	unsigned char                                      UnknownData00[0x5ABFE000];                                // 0x0000(0x5ABFE000) MISSED OFFSET
};

// ScriptStruct Engine.BodyInstance
// 0x5AE05D80
struct FBodyInstance
{
	unsigned char                                      UnknownData00[0x5AE05D80];                                // 0x0000(0x5AE05D80) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponse
// 0x5AE03A00
struct FCollisionResponse
{
	unsigned char                                      UnknownData00[0x5AE03A00];                                // 0x0000(0x5AE03A00) MISSED OFFSET
};

// ScriptStruct Engine.ResponseChannel
// 0x5AE03A80
struct FResponseChannel
{
	unsigned char                                      UnknownData00[0x5AE03A80];                                // 0x0000(0x5AE03A80) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponseContainer
// 0x5AE04B00
struct FCollisionResponseContainer
{
	unsigned char                                      UnknownData00[0x5AE04B00];                                // 0x0000(0x5AE04B00) MISSED OFFSET
};

// ScriptStruct Engine.CustomPrimitiveData
// 0x50C3EFC0
struct FCustomPrimitiveData
{
	unsigned char                                      UnknownData00[0x50C3EFC0];                                // 0x0000(0x50C3EFC0) MISSED OFFSET
};

// ScriptStruct Engine.LightingChannels
// 0x5AE07380
struct FLightingChannels
{
	unsigned char                                      UnknownData00[0x5AE07380];                                // 0x0000(0x5AE07380) MISSED OFFSET
};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x50C3E520
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{
	unsigned char                                      UnknownData00[0x50C3E520];                                // 0x0000(0x50C3E520) MISSED OFFSET
};

// ScriptStruct Engine.FastArraySerializer
// 0x5AE0D900
struct FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x5AE0D900];                                // 0x0000(0x5AE0D900) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Base
// 0x0000
struct FAnimNode_Base
{

};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x5AEFA180
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5AEFA180];                                // 0x0000(0x5AEFA180) MISSED OFFSET
};

// ScriptStruct Engine.InputScaleBiasClamp
// 0x5AEF9500
struct FInputScaleBiasClamp
{
	unsigned char                                      UnknownData00[0x5AEF9500];                                // 0x0000(0x5AEF9500) MISSED OFFSET
};

// ScriptStruct Engine.InputRange
// 0x5AEF9700
struct FInputRange
{
	unsigned char                                      UnknownData00[0x5AEF9700];                                // 0x0000(0x5AEF9700) MISSED OFFSET
};

// ScriptStruct Engine.InputAlphaBoolBlend
// 0x5AEFB080
struct FInputAlphaBoolBlend
{
	unsigned char                                      UnknownData00[0x5AEFB080];                                // 0x0000(0x5AEFB080) MISSED OFFSET
};

// ScriptStruct Engine.AlphaBlend
// 0x5AEFB300
struct FAlphaBlend
{
	unsigned char                                      UnknownData00[0x5AEFB300];                                // 0x0000(0x5AEFB300) MISSED OFFSET
};

// ScriptStruct Engine.InputScaleBias
// 0x5AEFAF00
struct FInputScaleBias
{
	unsigned char                                      UnknownData00[0x5AEFAF00];                                // 0x0000(0x5AEFAF00) MISSED OFFSET
};

// ScriptStruct Engine.PoseLinkBase
// 0x5AEFAD00
struct FPoseLinkBase
{
	unsigned char                                      UnknownData00[0x5AEFAD00];                                // 0x0000(0x5AEFAD00) MISSED OFFSET
};

// ScriptStruct Engine.PoseLink
// 0xFFFFFFFFA5105300 (0x0000 - 0x5AEFAD00)
struct FPoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.BlendSampleData
// 0x5AEFC480
struct FBlendSampleData
{
	unsigned char                                      UnknownData00[0x5AEFC480];                                // 0x0000(0x5AEFC480) MISSED OFFSET
};

// ScriptStruct Engine.AnimInstanceProxy
// 0x0000
struct FAnimInstanceProxy
{

};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0xFFFFFFFFA5105300 (0x0000 - 0x5AEFAD00)
struct FComponentSpacePoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.SolverIterations
// 0x5AEFF280
struct FSolverIterations
{
	unsigned char                                      UnknownData00[0x5AEFF280];                                // 0x0000(0x5AEFF280) MISSED OFFSET
};

// ScriptStruct Engine.BoneReference
// 0x5AEFED80
struct FBoneReference
{
	unsigned char                                      UnknownData00[0x5AEFED80];                                // 0x0000(0x5AEFED80) MISSED OFFSET
};

// ScriptStruct Engine.KeyHandleLookupTable
// 0x0000
struct FKeyHandleLookupTable
{

};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x5AF8D400
struct FRuntimeFloatCurve
{
	unsigned char                                      UnknownData00[0x5AF8D400];                                // 0x0000(0x5AF8D400) MISSED OFFSET
};

// ScriptStruct Engine.IndexedCurve
// 0x5AF8D380
struct FIndexedCurve
{
	unsigned char                                      UnknownData00[0x5AF8D380];                                // 0x0000(0x5AF8D380) MISSED OFFSET
};

// ScriptStruct Engine.KeyHandleMap
// 0x0000
struct FKeyHandleMap
{

};

// ScriptStruct Engine.RealCurve
// 0xFFFFFFFFFFFFFE80 (0x5AF8D200 - 0x5AF8D380)
struct FRealCurve : public FIndexedCurve
{

};

// ScriptStruct Engine.RichCurve
// 0xFFFFFFFFFFFC8A40 (0x5AF55C40 - 0x5AF8D200)
struct FRichCurve : public FRealCurve
{

};

// ScriptStruct Engine.RichCurveKey
// 0x5AF8CD00
struct FRichCurveKey
{
	unsigned char                                      UnknownData00[0x5AF8CD00];                                // 0x0000(0x5AF8CD00) MISSED OFFSET
};

// ScriptStruct Engine.PerPlatformFloat
// 0x5AF8C880
struct FPerPlatformFloat
{
	unsigned char                                      UnknownData00[0x5AF8C880];                                // 0x0000(0x5AF8C880) MISSED OFFSET
};

// ScriptStruct Engine.PerPlatformInt
// 0x5AF8C780
struct FPerPlatformInt
{
	unsigned char                                      UnknownData00[0x5AF8C780];                                // 0x0000(0x5AF8C780) MISSED OFFSET
};

// ScriptStruct Engine.PerPlatformBool
// 0x5AF8E700
struct FPerPlatformBool
{
	unsigned char                                      UnknownData00[0x5AF8E700];                                // 0x0000(0x5AF8E700) MISSED OFFSET
};

// ScriptStruct Engine.RepAttachment
// 0x5AF9D580
struct FRepAttachment
{
	unsigned char                                      UnknownData00[0x5AF9D580];                                // 0x0000(0x5AF9D580) MISSED OFFSET
};

// ScriptStruct Engine.Vector_NetQuantize100
// 0xFFFFFFFF9E662180 (0x0000 - 0x6199DE80)
struct FVector_NetQuantize100 : public FVector
{

};

// ScriptStruct Engine.RepMovement
// 0x5AF9CF80
struct FRepMovement
{
	unsigned char                                      UnknownData00[0x5AF9CF80];                                // 0x0000(0x5AF9CF80) MISSED OFFSET
};

// ScriptStruct Engine.ActorTickFunction
// 0xFFFFFFFFAF450500 (0x0000 - 0x50BAFB00)
struct FActorTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x5AFD2600
struct FInputAxisKeyMapping
{
	unsigned char                                      UnknownData00[0x5AFD2600];                                // 0x0000(0x5AFD2600) MISSED OFFSET
};

// ScriptStruct Engine.InputActionKeyMapping
// 0x5AFD4080
struct FInputActionKeyMapping
{
	unsigned char                                      UnknownData00[0x5AFD4080];                                // 0x0000(0x5AFD4080) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x5B01D400
struct FPerBoneBlendWeight
{
	unsigned char                                      UnknownData00[0x5B01D400];                                // 0x0000(0x5B01D400) MISSED OFFSET
};

// ScriptStruct Engine.InputBlendPose
// 0x5AFE5920
struct FInputBlendPose
{
	unsigned char                                      UnknownData00[0x5AFE5920];                                // 0x0000(0x5AFE5920) MISSED OFFSET
};

// ScriptStruct Engine.BranchFilter
// 0x5B01CF00
struct FBranchFilter
{
	unsigned char                                      UnknownData00[0x5B01CF00];                                // 0x0000(0x5B01CF00) MISSED OFFSET
};

// ScriptStruct Engine.PoseSnapshot
// 0x5AFE74A0
struct FPoseSnapshot
{
	unsigned char                                      UnknownData00[0x5AFE74A0];                                // 0x0000(0x5AFE74A0) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Root
// 0x5B022F00
struct FAnimNode_Root : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B022F00];                                // 0x0000(0x5B022F00) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveParam
// 0x5B022300
struct FAnimCurveParam
{
	unsigned char                                      UnknownData00[0x5B022300];                                // 0x0000(0x5B022300) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentInstanceData
// 0x5B02AF80
struct FActorComponentInstanceData
{
	unsigned char                                      UnknownData00[0x5B02AF80];                                // 0x0000(0x5B02AF80) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentDuplicatedObjectData
// 0x0000
struct FActorComponentDuplicatedObjectData
{

};

// ScriptStruct Engine.SceneComponentInstanceData
// 0xFFFFFFFFFFFE1E40 (0x5B00CDC0 - 0x5B02AF80)
struct FSceneComponentInstanceData : public FActorComponentInstanceData
{

};

// ScriptStruct Engine.DirectoryPath
// 0x5B035E00
struct FDirectoryPath
{
	unsigned char                                      UnknownData00[0x5B035E00];                                // 0x0000(0x5B035E00) MISSED OFFSET
};

// ScriptStruct Engine.KAggregateGeom
// 0x5AFEAE20
struct FKAggregateGeom
{
	unsigned char                                      UnknownData00[0x5AFEAE20];                                // 0x0000(0x5AFEAE20) MISSED OFFSET
};

// ScriptStruct Engine.KShapeElem
// 0x5B035B00
struct FKShapeElem
{
	unsigned char                                      UnknownData00[0x5B035B00];                                // 0x0000(0x5B035B00) MISSED OFFSET
};

// ScriptStruct Engine.KTaperedCapsuleElem
// 0xFFFFFFFFFFFFFD80 (0x5B035880 - 0x5B035B00)
struct FKTaperedCapsuleElem : public FKShapeElem
{

};

// ScriptStruct Engine.KConvexElem
// 0xFFFFFFFFFFFB5500 (0x5AFEB000 - 0x5B035B00)
struct FKConvexElem : public FKShapeElem
{

};

// ScriptStruct Engine.KSphylElem
// 0xFFFFFFFFFFFFF880 (0x5B035380 - 0x5B035B00)
struct FKSphylElem : public FKShapeElem
{

};

// ScriptStruct Engine.KBoxElem
// 0x1680 (0x5B037180 - 0x5B035B00)
struct FKBoxElem : public FKShapeElem
{
	unsigned char                                      UnknownData00[0x1680];                                    // 0x5B035B00(0x1680) MISSED OFFSET
};

// ScriptStruct Engine.KSphereElem
// 0x1500 (0x5B037000 - 0x5B035B00)
struct FKSphereElem : public FKShapeElem
{
	unsigned char                                      UnknownData00[0x1500];                                    // 0x5B035B00(0x1500) MISSED OFFSET
};

// ScriptStruct Engine.AnimationGroupReference
// 0x5B036F00
struct FAnimationGroupReference
{
	unsigned char                                      UnknownData00[0x5B036F00];                                // 0x0000(0x5B036F00) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInstance
// 0x0000
struct FAnimGroupInstance
{

};

// ScriptStruct Engine.AnimTickRecord
// 0x5B036E80
struct FAnimTickRecord
{
	unsigned char                                      UnknownData00[0x5B036E80];                                // 0x0000(0x5B036E80) MISSED OFFSET
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// 0x5B036D00
struct FMarkerSyncAnimPosition
{
	unsigned char                                      UnknownData00[0x5B036D00];                                // 0x0000(0x5B036D00) MISSED OFFSET
};

// ScriptStruct Engine.BlendFilter
// 0x0000
struct FBlendFilter
{

};

// ScriptStruct Engine.AnimationRecordingSettings
// 0x5B036980
struct FAnimationRecordingSettings
{
	unsigned char                                      UnknownData00[0x5B036980];                                // 0x0000(0x5B036980) MISSED OFFSET
};

// ScriptStruct Engine.ComponentSpacePose
// 0x5AFEACE0
struct FComponentSpacePose
{
	unsigned char                                      UnknownData00[0x5AFEACE0];                                // 0x0000(0x5AFEACE0) MISSED OFFSET
};

// ScriptStruct Engine.LocalSpacePose
// 0x5AFEABA0
struct FLocalSpacePose
{
	unsigned char                                      UnknownData00[0x5AFEABA0];                                // 0x0000(0x5AFEABA0) MISSED OFFSET
};

// ScriptStruct Engine.NamedTransform
// 0x5B036680
struct FNamedTransform
{
	unsigned char                                      UnknownData00[0x5B036680];                                // 0x0000(0x5B036680) MISSED OFFSET
};

// ScriptStruct Engine.NamedColor
// 0x5B036580
struct FNamedColor
{
	unsigned char                                      UnknownData00[0x5B036580];                                // 0x0000(0x5B036580) MISSED OFFSET
};

// ScriptStruct Engine.NamedVector
// 0x5B036480
struct FNamedVector
{
	unsigned char                                      UnknownData00[0x5B036480];                                // 0x0000(0x5B036480) MISSED OFFSET
};

// ScriptStruct Engine.NamedFloat
// 0x5B036380
struct FNamedFloat
{
	unsigned char                                      UnknownData00[0x5B036380];                                // 0x0000(0x5B036380) MISSED OFFSET
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x5B038380
struct FAnimParentNodeAssetOverride
{
	unsigned char                                      UnknownData00[0x5B038380];                                // 0x0000(0x5B038380) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInfo
// 0x5B038280
struct FAnimGroupInfo
{
	unsigned char                                      UnknownData00[0x5B038280];                                // 0x0000(0x5B038280) MISSED OFFSET
};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0000
struct FAnimBlueprintDebugData
{

};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0000
struct FAnimationFrameSnapshot
{

};

// ScriptStruct Engine.StateMachineDebugData
// 0x0000
struct FStateMachineDebugData
{

};

// ScriptStruct Engine.StateMachineStateDebugData
// 0x0000
struct FStateMachineStateDebugData
{

};

// ScriptStruct Engine.AnimBlueprintFunctionData
// 0x5B038100
struct FAnimBlueprintFunctionData
{
	unsigned char                                      UnknownData00[0x5B038100];                                // 0x0000(0x5B038100) MISSED OFFSET
};

// ScriptStruct Engine.AnimGraphBlendOptions
// 0x5B038000
struct FAnimGraphBlendOptions
{
	unsigned char                                      UnknownData00[0x5B038000];                                // 0x0000(0x5B038000) MISSED OFFSET
};

// ScriptStruct Engine.GraphAssetPlayerInformation
// 0x5AFEA9C0
struct FGraphAssetPlayerInformation
{
	unsigned char                                      UnknownData00[0x5AFEA9C0];                                // 0x0000(0x5AFEA9C0) MISSED OFFSET
};

// ScriptStruct Engine.CachedPoseIndices
// 0x5AFEA920
struct FCachedPoseIndices
{
	unsigned char                                      UnknownData00[0x5AFEA920];                                // 0x0000(0x5AFEA920) MISSED OFFSET
};

// ScriptStruct Engine.AnimBlueprintFunction
// 0x5B037C00
struct FAnimBlueprintFunction
{
	unsigned char                                      UnknownData00[0x5B037C00];                                // 0x0000(0x5B037C00) MISSED OFFSET
};

// ScriptStruct Engine.AnimTrack
// 0x5AFEA740
struct FAnimTrack
{
	unsigned char                                      UnknownData00[0x5AFEA740];                                // 0x0000(0x5AFEA740) MISSED OFFSET
};

// ScriptStruct Engine.AnimSegment
// 0x5B037880
struct FAnimSegment
{
	unsigned char                                      UnknownData00[0x5B037880];                                // 0x0000(0x5B037880) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x5B037700
struct FRootMotionExtractionStep
{
	unsigned char                                      UnknownData00[0x5B037700];                                // 0x0000(0x5B037700) MISSED OFFSET
};

// ScriptStruct Engine.AnimationErrorStats
// 0x0000
struct FAnimationErrorStats
{

};

// ScriptStruct Engine.RawCurveTracks
// 0x5AFEA6A0
struct FRawCurveTracks
{
	unsigned char                                      UnknownData00[0x5AFEA6A0];                                // 0x0000(0x5AFEA6A0) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveBase
// 0x5B037480
struct FAnimCurveBase
{
	unsigned char                                      UnknownData00[0x5B037480];                                // 0x0000(0x5B037480) MISSED OFFSET
};

// ScriptStruct Engine.SmartName
// 0x5B037500
struct FSmartName
{
	unsigned char                                      UnknownData00[0x5B037500];                                // 0x0000(0x5B037500) MISSED OFFSET
};

// ScriptStruct Engine.FloatCurve
// 0xFFFFFFFFFFFFFF80 (0x5B037400 - 0x5B037480)
struct FFloatCurve : public FAnimCurveBase
{

};

// ScriptStruct Engine.TransformCurve
// 0x1E80 (0x5B039300 - 0x5B037480)
struct FTransformCurve : public FAnimCurveBase
{
	unsigned char                                      UnknownData00[0x1E80];                                    // 0x5B037480(0x1E80) MISSED OFFSET
};

// ScriptStruct Engine.VectorCurve
// 0x1F80 (0x5B039400 - 0x5B037480)
struct FVectorCurve : public FAnimCurveBase
{
	unsigned char                                      UnknownData00[0x1F80];                                    // 0x5B037480(0x1F80) MISSED OFFSET
};

// ScriptStruct Engine.SlotEvaluationPose
// 0x5B039200
struct FSlotEvaluationPose
{
	unsigned char                                      UnknownData00[0x5B039200];                                // 0x0000(0x5B039200) MISSED OFFSET
};

// ScriptStruct Engine.A2Pose
// 0x5AFEA600
struct FA2Pose
{
	unsigned char                                      UnknownData00[0x5AFEA600];                                // 0x0000(0x5AFEA600) MISSED OFFSET
};

// ScriptStruct Engine.A2CSPose
// 0xFFFFFFFFFFFFFF60 (0x5AFEA560 - 0x5AFEA600)
struct FA2CSPose : public FA2Pose
{

};

// ScriptStruct Engine.QueuedDrawDebugItem
// 0x5B038A00
struct FQueuedDrawDebugItem
{
	unsigned char                                      UnknownData00[0x5B038A00];                                // 0x0000(0x5B038A00) MISSED OFFSET
};

// ScriptStruct Engine.AnimLinkableElement
// 0x5B038580
struct FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x5B038580];                                // 0x0000(0x5B038580) MISSED OFFSET
};

// ScriptStruct Engine.AnimMontageInstance
// 0x5B039900
struct FAnimMontageInstance
{
	unsigned char                                      UnknownData00[0x5B039900];                                // 0x0000(0x5B039900) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyEvent
// 0x1600 (0x5B039B80 - 0x5B038580)
struct FAnimNotifyEvent : public FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x1600];                                    // 0x5B038580(0x1600) MISSED OFFSET
};

// ScriptStruct Engine.BranchingPointMarker
// 0x5B039780
struct FBranchingPointMarker
{
	unsigned char                                      UnknownData00[0x5B039780];                                // 0x0000(0x5B039780) MISSED OFFSET
};

// ScriptStruct Engine.BranchingPoint
// 0x1080 (0x5B039600 - 0x5B038580)
struct FBranchingPoint : public FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x1080];                                    // 0x5B038580(0x1080) MISSED OFFSET
};

// ScriptStruct Engine.SlotAnimationTrack
// 0x5B039500
struct FSlotAnimationTrack
{
	unsigned char                                      UnknownData00[0x5B039500];                                // 0x0000(0x5B039500) MISSED OFFSET
};

// ScriptStruct Engine.CompositeSection
// 0x2E80 (0x5B03B400 - 0x5B038580)
struct FCompositeSection : public FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x2E80];                                    // 0x5B038580(0x2E80) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// 0x5B03AF00
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B03AF00];                                // 0x0000(0x5B03AF00) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_CustomProperty
// 0x5AFECA40
struct FAnimNode_CustomProperty : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5AFECA40];                                // 0x0000(0x5AFECA40) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Inertialization
// 0x5B03AD00
struct FAnimNode_Inertialization : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B03AD00];                                // 0x0000(0x5B03AD00) MISSED OFFSET
};

// ScriptStruct Engine.InertializationPoseDiff
// 0x0000
struct FInertializationPoseDiff
{

};

// ScriptStruct Engine.InertializationCurveDiff
// 0x0000
struct FInertializationCurveDiff
{

};

// ScriptStruct Engine.InertializationBoneDiff
// 0x0000
struct FInertializationBoneDiff
{

};

// ScriptStruct Engine.InertializationPose
// 0x0000
struct FInertializationPose
{

};

// ScriptStruct Engine.AnimNode_LinkedAnimGraph
// 0xFFFFFFFFFFFFFE20 (0x5AFEC860 - 0x5AFECA40)
struct FAnimNode_LinkedAnimGraph : public FAnimNode_CustomProperty
{

};

// ScriptStruct Engine.AnimNode_LinkedAnimLayer
// 0xFFFFFFFFFFFFFF60 (0x5AFEC7C0 - 0x5AFEC860)
struct FAnimNode_LinkedAnimLayer : public FAnimNode_LinkedAnimGraph
{

};

// ScriptStruct Engine.AnimNode_LinkedInputPose
// 0x5B03A880
struct FAnimNode_LinkedInputPose : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B03A880];                                // 0x0000(0x5B03A880) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x5B03A700
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B03A700];                                // 0x0000(0x5B03A700) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x142380 (0x5B03C500 - 0x5AEFA180)
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
	unsigned char                                      UnknownData00[0x142380];                                  // 0x5AEFA180(0x142380) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x5B03C300
struct FAnimNode_StateMachine : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B03C300];                                // 0x0000(0x5B03C300) MISSED OFFSET
};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0000
struct FAnimationPotentialTransition
{

};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x5B03C280
struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData00[0x5B03C280];                                // 0x0000(0x5B03C280) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x5B03C100
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B03C100];                                // 0x0000(0x5B03C100) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x5B03C080
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B03C080];                                // 0x0000(0x5B03C080) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x5B03BF80
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B03BF80];                                // 0x0000(0x5B03BF80) MISSED OFFSET
};

// ScriptStruct Engine.ExposedValueHandler
// 0x5B03B800
struct FExposedValueHandler
{
	unsigned char                                      UnknownData00[0x5B03B800];                                // 0x0000(0x5B03B800) MISSED OFFSET
};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x5B03B880
struct FExposedValueCopyRecord
{
	unsigned char                                      UnknownData00[0x5B03B880];                                // 0x0000(0x5B03B880) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x5B03B780
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B03B780];                                // 0x0000(0x5B03B780) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x5B03B700
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B03B700];                                // 0x0000(0x5B03B700) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyQueue
// 0x5AFEC4A0
struct FAnimNotifyQueue
{
	unsigned char                                      UnknownData00[0x5AFEC4A0];                                // 0x0000(0x5AFEC4A0) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyArray
// 0x5AFEC540
struct FAnimNotifyArray
{
	unsigned char                                      UnknownData00[0x5AFEC540];                                // 0x0000(0x5AFEC540) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyEventReference
// 0x5B03D600
struct FAnimNotifyEventReference
{
	unsigned char                                      UnknownData00[0x5B03D600];                                // 0x0000(0x5B03D600) MISSED OFFSET
};

// ScriptStruct Engine.CompressedTrack
// 0x5AFEC360
struct FCompressedTrack
{
	unsigned char                                      UnknownData00[0x5AFEC360];                                // 0x0000(0x5AFEC360) MISSED OFFSET
};

// ScriptStruct Engine.CurveTrack
// 0x5B03D280
struct FCurveTrack
{
	unsigned char                                      UnknownData00[0x5B03D280];                                // 0x0000(0x5B03D280) MISSED OFFSET
};

// ScriptStruct Engine.ScaleTrack
// 0x5AFEC180
struct FScaleTrack
{
	unsigned char                                      UnknownData00[0x5AFEC180];                                // 0x0000(0x5AFEC180) MISSED OFFSET
};

// ScriptStruct Engine.RotationTrack
// 0x5AFEC040
struct FRotationTrack
{
	unsigned char                                      UnknownData00[0x5AFEC040];                                // 0x0000(0x5AFEC040) MISSED OFFSET
};

// ScriptStruct Engine.TranslationTrack
// 0x5AFEBF00
struct FTranslationTrack
{
	unsigned char                                      UnknownData00[0x5AFEBF00];                                // 0x0000(0x5AFEBF00) MISSED OFFSET
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x5AFEBDC0
struct FAnimSequenceTrackContainer
{
	unsigned char                                      UnknownData00[0x5AFEBDC0];                                // 0x0000(0x5AFEBDC0) MISSED OFFSET
};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x5AFEBBE0
struct FRawAnimSequenceTrack
{
	unsigned char                                      UnknownData00[0x5AFEBBE0];                                // 0x0000(0x5AFEBBE0) MISSED OFFSET
};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x5AFEBB40
struct FAnimSetMeshLinkup
{
	unsigned char                                      UnknownData00[0x5AFEBB40];                                // 0x0000(0x5AFEBB40) MISSED OFFSET
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// 0x0000
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct Engine.AnimNode_SingleNode
// 0x5B03CC00
struct FAnimNode_SingleNode : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B03CC00];                                // 0x0000(0x5B03CC00) MISSED OFFSET
};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x5B03DD00
struct FBakedAnimationStateMachine
{
	unsigned char                                      UnknownData00[0x5B03DD00];                                // 0x0000(0x5B03DD00) MISSED OFFSET
};

// ScriptStruct Engine.AnimationStateBase
// 0x5B03CB00
struct FAnimationStateBase
{
	unsigned char                                      UnknownData00[0x5B03CB00];                                // 0x0000(0x5B03CB00) MISSED OFFSET
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x1C00 (0x5B03E700 - 0x5B03CB00)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	unsigned char                                      UnknownData00[0x1C00];                                    // 0x5B03CB00(0x1C00) MISSED OFFSET
};

// ScriptStruct Engine.BakedAnimationState
// 0x5B03DE00
struct FBakedAnimationState
{
	unsigned char                                      UnknownData00[0x5B03DE00];                                // 0x0000(0x5B03DE00) MISSED OFFSET
};

// ScriptStruct Engine.BakedStateExitTransition
// 0x5B03DE80
struct FBakedStateExitTransition
{
	unsigned char                                      UnknownData00[0x5B03DE80];                                // 0x0000(0x5B03DE80) MISSED OFFSET
};

// ScriptStruct Engine.AnimationState
// 0xFFFFFFFFFFFB1480 (0x5AFEDF80 - 0x5B03CB00)
struct FAnimationState : public FAnimationStateBase
{

};

// ScriptStruct Engine.AnimationTransitionRule
// 0x5B03D900
struct FAnimationTransitionRule
{
	unsigned char                                      UnknownData00[0x5B03D900];                                // 0x0000(0x5B03D900) MISSED OFFSET
};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x5B03D880
struct FTrackToSkeletonMap
{
	unsigned char                                      UnknownData00[0x5B03D880];                                // 0x0000(0x5B03D880) MISSED OFFSET
};

// ScriptStruct Engine.MarkerSyncData
// 0x5AFEDEE0
struct FMarkerSyncData
{
	unsigned char                                      UnknownData00[0x5AFEDEE0];                                // 0x0000(0x5AFEDEE0) MISSED OFFSET
};

// ScriptStruct Engine.AnimSyncMarker
// 0x5B03D700
struct FAnimSyncMarker
{
	unsigned char                                      UnknownData00[0x5B03D700];                                // 0x0000(0x5B03D700) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyTrack
// 0x5B03F700
struct FAnimNotifyTrack
{
	unsigned char                                      UnknownData00[0x5B03F700];                                // 0x0000(0x5B03F700) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x5AFEDE40
struct FPerBoneBlendWeights
{
	unsigned char                                      UnknownData00[0x5AFEDE40];                                // 0x0000(0x5AFEDE40) MISSED OFFSET
};

// ScriptStruct Engine.AssetImportInfo
// 0x0000
struct FAssetImportInfo
{

};

// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// 0x5B03F280
struct FPrimaryAssetRulesCustomOverride
{
	unsigned char                                      UnknownData00[0x5B03F280];                                // 0x0000(0x5B03F280) MISSED OFFSET
};

// ScriptStruct Engine.PrimaryAssetRules
// 0x5B03F400
struct FPrimaryAssetRules
{
	unsigned char                                      UnknownData00[0x5B03F400];                                // 0x0000(0x5B03F400) MISSED OFFSET
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// 0x5B03F180
struct FPrimaryAssetRulesOverride
{
	unsigned char                                      UnknownData00[0x5B03F180];                                // 0x0000(0x5B03F180) MISSED OFFSET
};

// ScriptStruct Engine.AssetManagerRedirect
// 0x5B03F080
struct FAssetManagerRedirect
{
	unsigned char                                      UnknownData00[0x5B03F080];                                // 0x0000(0x5B03F080) MISSED OFFSET
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// 0x5B03EC00
struct FPrimaryAssetTypeInfo
{
	unsigned char                                      UnknownData00[0x5B03EC00];                                // 0x0000(0x5B03EC00) MISSED OFFSET
};

// ScriptStruct Engine.AssetMapping
// 0x5B03EB00
struct FAssetMapping
{
	unsigned char                                      UnknownData00[0x5B03EB00];                                // 0x0000(0x5B03EB00) MISSED OFFSET
};

// ScriptStruct Engine.AtmospherePrecomputeInstanceData
// 0xFFFFFFFFA4FF3240 (0x0000 - 0x5B00CDC0)
struct FAtmospherePrecomputeInstanceData : public FSceneComponentInstanceData
{

};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// 0x5B03FE00
struct FAtmospherePrecomputeParameters
{
	unsigned char                                      UnknownData00[0x5B03FE00];                                // 0x0000(0x5B03FE00) MISSED OFFSET
};

// ScriptStruct Engine.BaseAttenuationSettings
// 0x5AFED940
struct FBaseAttenuationSettings
{
	unsigned char                                      UnknownData00[0x5AFED940];                                // 0x0000(0x5AFED940) MISSED OFFSET
};

// ScriptStruct Engine.AudioComponentParam
// 0x5B051080
struct FAudioComponentParam
{
	unsigned char                                      UnknownData00[0x5B051080];                                // 0x0000(0x5B051080) MISSED OFFSET
};

// ScriptStruct Engine.AudioEffectParameters
// 0x0000
struct FAudioEffectParameters
{

};

// ScriptStruct Engine.AudioReverbEffect
// 0x0000
struct FAudioReverbEffect : public FAudioEffectParameters
{

};

// ScriptStruct Engine.AudioQualitySettings
// 0x5B050F80
struct FAudioQualitySettings
{
	unsigned char                                      UnknownData00[0x5B050F80];                                // 0x0000(0x5B050F80) MISSED OFFSET
};

// ScriptStruct Engine.InteriorSettings
// 0x5B050B00
struct FInteriorSettings
{
	unsigned char                                      UnknownData00[0x5B050B00];                                // 0x0000(0x5B050B00) MISSED OFFSET
};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x5B050A00
struct FLaunchOnTestSettings
{
	unsigned char                                      UnknownData00[0x5B050A00];                                // 0x0000(0x5B050A00) MISSED OFFSET
};

// ScriptStruct Engine.FilePath
// 0x5B050980
struct FFilePath
{
	unsigned char                                      UnknownData00[0x5B050980];                                // 0x0000(0x5B050980) MISSED OFFSET
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x5B050880
struct FEditorMapPerformanceTestDefinition
{
	unsigned char                                      UnknownData00[0x5B050880];                                // 0x0000(0x5B050880) MISSED OFFSET
};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x5B051B80
struct FBuildPromotionTestSettings
{
	unsigned char                                      UnknownData00[0x5B051B80];                                // 0x0000(0x5B051B80) MISSED OFFSET
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x5B050680
struct FBuildPromotionNewProjectSettings
{
	unsigned char                                      UnknownData00[0x5B050680];                                // 0x0000(0x5B050680) MISSED OFFSET
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x5B050300
struct FBuildPromotionOpenAssetSettings
{
	unsigned char                                      UnknownData00[0x5B050300];                                // 0x0000(0x5B050300) MISSED OFFSET
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x5B051C00
struct FBuildPromotionImportWorkflowSettings
{
	unsigned char                                      UnknownData00[0x5B051C00];                                // 0x0000(0x5B051C00) MISSED OFFSET
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x5B052100
struct FEditorImportWorkflowDefinition
{
	unsigned char                                      UnknownData00[0x5B052100];                                // 0x0000(0x5B052100) MISSED OFFSET
};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x5B050080
struct FImportFactorySettingValues
{
	unsigned char                                      UnknownData00[0x5B050080];                                // 0x0000(0x5B050080) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// 0x5B051A00
struct FBlueprintEditorPromotionSettings
{
	unsigned char                                      UnknownData00[0x5B051A00];                                // 0x0000(0x5B051A00) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x5B051980
struct FParticleEditorPromotionSettings
{
	unsigned char                                      UnknownData00[0x5B051980];                                // 0x0000(0x5B051980) MISSED OFFSET
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x5B051800
struct FMaterialEditorPromotionSettings
{
	unsigned char                                      UnknownData00[0x5B051800];                                // 0x0000(0x5B051800) MISSED OFFSET
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x5B051600
struct FEditorImportExportTestDefinition
{
	unsigned char                                      UnknownData00[0x5B051600];                                // 0x0000(0x5B051600) MISSED OFFSET
};

// ScriptStruct Engine.ExternalToolDefinition
// 0x5B051300
struct FExternalToolDefinition
{
	unsigned char                                      UnknownData00[0x5B051300];                                // 0x0000(0x5B051300) MISSED OFFSET
};

// ScriptStruct Engine.NavAvoidanceData
// 0x0000
struct FNavAvoidanceData
{

};

// ScriptStruct Engine.BandwidthTestGenerator
// 0x5AFED6C0
struct FBandwidthTestGenerator
{
	unsigned char                                      UnknownData00[0x5AFED6C0];                                // 0x0000(0x5AFED6C0) MISSED OFFSET
};

// ScriptStruct Engine.BandwidthTestItem
// 0x5AFED620
struct FBandwidthTestItem
{
	unsigned char                                      UnknownData00[0x5AFED620];                                // 0x0000(0x5AFED620) MISSED OFFSET
};

// ScriptStruct Engine.BlendProfileBoneEntry
// 0x5B051100
struct FBlendProfileBoneEntry
{
	unsigned char                                      UnknownData00[0x5B051100];                                // 0x0000(0x5B051100) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneInterpolation
// 0x5B053100
struct FPerBoneInterpolation
{
	unsigned char                                      UnknownData00[0x5B053100];                                // 0x0000(0x5B053100) MISSED OFFSET
};

// ScriptStruct Engine.GridBlendSample
// 0x5B053000
struct FGridBlendSample
{
	unsigned char                                      UnknownData00[0x5B053000];                                // 0x0000(0x5B053000) MISSED OFFSET
};

// ScriptStruct Engine.EditorElement
// 0x5B052F00
struct FEditorElement
{
	unsigned char                                      UnknownData00[0x5B052F00];                                // 0x0000(0x5B052F00) MISSED OFFSET
};

// ScriptStruct Engine.BlendSample
// 0x5B052D80
struct FBlendSample
{
	unsigned char                                      UnknownData00[0x5B052D80];                                // 0x0000(0x5B052D80) MISSED OFFSET
};

// ScriptStruct Engine.BlendParameter
// 0x5B052B80
struct FBlendParameter
{
	unsigned char                                      UnknownData00[0x5B052B80];                                // 0x0000(0x5B052B80) MISSED OFFSET
};

// ScriptStruct Engine.InterpolationParameter
// 0x5B052A80
struct FInterpolationParameter
{
	unsigned char                                      UnknownData00[0x5B052A80];                                // 0x0000(0x5B052A80) MISSED OFFSET
};

// ScriptStruct Engine.BPEditorBookmarkNode
// 0x5B052900
struct FBPEditorBookmarkNode
{
	unsigned char                                      UnknownData00[0x5B052900];                                // 0x0000(0x5B052900) MISSED OFFSET
};

// ScriptStruct Engine.EditedDocumentInfo
// 0x5B052700
struct FEditedDocumentInfo
{
	unsigned char                                      UnknownData00[0x5B052700];                                // 0x0000(0x5B052700) MISSED OFFSET
};

// ScriptStruct Engine.BPInterfaceDescription
// 0x5AFED4E0
struct FBPInterfaceDescription
{
	unsigned char                                      UnknownData00[0x5AFED4E0];                                // 0x0000(0x5AFED4E0) MISSED OFFSET
};

// ScriptStruct Engine.BPVariableDescription
// 0x5B053A00
struct FBPVariableDescription
{
	unsigned char                                      UnknownData00[0x5B053A00];                                // 0x0000(0x5B053A00) MISSED OFFSET
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x5B052480
struct FBPVariableMetaDataEntry
{
	unsigned char                                      UnknownData00[0x5B052480];                                // 0x0000(0x5B052480) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphPinType
// 0x5B053B00
struct FEdGraphPinType
{
	unsigned char                                      UnknownData00[0x5B053B00];                                // 0x0000(0x5B053B00) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphTerminalType
// 0x5B053D00
struct FEdGraphTerminalType
{
	unsigned char                                      UnknownData00[0x5B053D00];                                // 0x0000(0x5B053D00) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// 0x0000
struct FBlueprintMacroCosmeticInfo
{

};

// ScriptStruct Engine.CompilerNativizationOptions
// 0x5B053680
struct FCompilerNativizationOptions
{
	unsigned char                                      UnknownData00[0x5B053680];                                // 0x0000(0x5B053680) MISSED OFFSET
};

// ScriptStruct Engine.BPComponentClassOverride
// 0x5B053600
struct FBPComponentClassOverride
{
	unsigned char                                      UnknownData00[0x5B053600];                                // 0x0000(0x5B053600) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// 0x5AFED080
struct FBlueprintCookedComponentInstancingData
{
	unsigned char                                      UnknownData00[0x5AFED080];                                // 0x0000(0x5AFED080) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// 0x5B053380
struct FBlueprintComponentChangedPropertyInfo
{
	unsigned char                                      UnknownData00[0x5B053380];                                // 0x0000(0x5B053380) MISSED OFFSET
};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x5B053280
struct FEventGraphFastCallPair
{
	unsigned char                                      UnknownData00[0x5B053280];                                // 0x0000(0x5B053280) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintDebugData
// 0x0000
struct FBlueprintDebugData
{

};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0000
struct FPointerToUberGraphFrame
{

};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x0000
struct FDebuggingInfoForSingleFunction
{

};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0000
struct FNodeToCodeAssociation
{

};

// ScriptStruct Engine.AnimCurveType
// 0x0000
struct FAnimCurveType
{

};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
// 0x0000
struct FBookmarkBaseJumpToSettings
{

};

// ScriptStruct Engine.BookmarkJumpToSettings
// 0x0000
struct FBookmarkJumpToSettings : public FBookmarkBaseJumpToSettings
{

};

// ScriptStruct Engine.Bookmark2DJumpToSettings
// 0x0000
struct FBookmark2DJumpToSettings
{

};

// ScriptStruct Engine.GeomSelection
// 0x5B055200
struct FGeomSelection
{
	unsigned char                                      UnknownData00[0x5B055200];                                // 0x0000(0x5B055200) MISSED OFFSET
};

// ScriptStruct Engine.BuilderPoly
// 0x5AFECFE0
struct FBuilderPoly
{
	unsigned char                                      UnknownData00[0x5AFECFE0];                                // 0x0000(0x5AFECFE0) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimTransitionData
// 0x5B054E80
struct FCachedAnimTransitionData
{
	unsigned char                                      UnknownData00[0x5B054E80];                                // 0x0000(0x5B054E80) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimRelevancyData
// 0x5B054D80
struct FCachedAnimRelevancyData
{
	unsigned char                                      UnknownData00[0x5B054D80];                                // 0x0000(0x5B054D80) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// 0x5B054C80
struct FCachedAnimAssetPlayerData
{
	unsigned char                                      UnknownData00[0x5B054C80];                                // 0x0000(0x5B054C80) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimStateArray
// 0x5AFECF40
struct FCachedAnimStateArray
{
	unsigned char                                      UnknownData00[0x5AFECF40];                                // 0x0000(0x5AFECF40) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimStateData
// 0x5B054B00
struct FCachedAnimStateData
{
	unsigned char                                      UnknownData00[0x5B054B00];                                // 0x0000(0x5B054B00) MISSED OFFSET
};

// ScriptStruct Engine.ActiveCameraShakeInfo
// 0x5B054A00
struct FActiveCameraShakeInfo
{
	unsigned char                                      UnknownData00[0x5B054A00];                                // 0x0000(0x5B054A00) MISSED OFFSET
};

// ScriptStruct Engine.PooledCameraShakes
// 0x5AFECEA0
struct FPooledCameraShakes
{
	unsigned char                                      UnknownData00[0x5AFECEA0];                                // 0x0000(0x5AFECEA0) MISSED OFFSET
};

// ScriptStruct Engine.VOscillator
// 0x5B054600
struct FVOscillator
{
	unsigned char                                      UnknownData00[0x5B054600];                                // 0x0000(0x5B054600) MISSED OFFSET
};

// ScriptStruct Engine.FOscillator
// 0x5B054700
struct FFOscillator
{
	unsigned char                                      UnknownData00[0x5B054700];                                // 0x0000(0x5B054700) MISSED OFFSET
};

// ScriptStruct Engine.ROscillator
// 0x5B054480
struct FROscillator
{
	unsigned char                                      UnknownData00[0x5B054480];                                // 0x0000(0x5B054480) MISSED OFFSET
};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0000
struct FDummySpacerCameraTypes
{

};

// ScriptStruct Engine.MinimalViewInfo
// 0x5B070480
struct FMinimalViewInfo
{
	unsigned char                                      UnknownData00[0x5B070480];                                // 0x0000(0x5B070480) MISSED OFFSET
};

// ScriptStruct Engine.PostProcessSettings
// 0x5B070A80
struct FPostProcessSettings
{
	unsigned char                                      UnknownData00[0x5B070A80];                                // 0x0000(0x5B070A80) MISSED OFFSET
};

// ScriptStruct Engine.WeightedBlendables
// 0x5AFEF6A0
struct FWeightedBlendables
{
	unsigned char                                      UnknownData00[0x5AFEF6A0];                                // 0x0000(0x5AFEF6A0) MISSED OFFSET
};

// ScriptStruct Engine.WeightedBlendable
// 0x5B056280
struct FWeightedBlendable
{
	unsigned char                                      UnknownData00[0x5B056280];                                // 0x0000(0x5B056280) MISSED OFFSET
};

// ScriptStruct Engine.CanvasIcon
// 0x5B070200
struct FCanvasIcon
{
	unsigned char                                      UnknownData00[0x5B070200];                                // 0x0000(0x5B070200) MISSED OFFSET
};

// ScriptStruct Engine.WrappedStringElement
// 0x5B070100
struct FWrappedStringElement
{
	unsigned char                                      UnknownData00[0x5B070100];                                // 0x0000(0x5B070100) MISSED OFFSET
};

// ScriptStruct Engine.TextSizingParameters
// 0x5B071E80
struct FTextSizingParameters
{
	unsigned char                                      UnknownData00[0x5B071E80];                                // 0x0000(0x5B071E80) MISSED OFFSET
};

// ScriptStruct Engine.BasedMovementInfo
// 0x5B071B00
struct FBasedMovementInfo
{
	unsigned char                                      UnknownData00[0x5B071B00];                                // 0x0000(0x5B071B00) MISSED OFFSET
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x5B071400
struct FSimulatedRootMotionReplicatedMove
{
	unsigned char                                      UnknownData00[0x5B071400];                                // 0x0000(0x5B071400) MISSED OFFSET
};

// ScriptStruct Engine.RepRootMotionMontage
// 0x5B071480
struct FRepRootMotionMontage
{
	unsigned char                                      UnknownData00[0x5B071480];                                // 0x0000(0x5B071480) MISSED OFFSET
};

// ScriptStruct Engine.ChildActorComponentInstanceData
// 0xFFFFFFFFFFFE2480 (0x5AFEF240 - 0x5B00CDC0)
struct FChildActorComponentInstanceData : public FSceneComponentInstanceData
{

};

// ScriptStruct Engine.ChildActorAttachedActorInfo
// 0x5B071200
struct FChildActorAttachedActorInfo
{
	unsigned char                                      UnknownData00[0x5B071200];                                // 0x0000(0x5B071200) MISSED OFFSET
};

// ScriptStruct Engine.CustomProfile
// 0x5B073180
struct FCustomProfile
{
	unsigned char                                      UnknownData00[0x5B073180];                                // 0x0000(0x5B073180) MISSED OFFSET
};

// ScriptStruct Engine.CustomChannelSetup
// 0x5B072F00
struct FCustomChannelSetup
{
	unsigned char                                      UnknownData00[0x5B072F00];                                // 0x0000(0x5B072F00) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x5B072C80
struct FCollisionResponseTemplate
{
	unsigned char                                      UnknownData00[0x5B072C80];                                // 0x0000(0x5B072C80) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x5B072B00
struct FBlueprintComponentDelegateBinding
{
	unsigned char                                      UnknownData00[0x5B072B00];                                // 0x0000(0x5B072B00) MISSED OFFSET
};

// ScriptStruct Engine.MeshUVChannelInfo
// 0x5B072980
struct FMeshUVChannelInfo
{
	unsigned char                                      UnknownData00[0x5B072980];                                // 0x0000(0x5B072980) MISSED OFFSET
};

// ScriptStruct Engine.AutoCompleteNode
// 0x5B072880
struct FAutoCompleteNode
{
	unsigned char                                      UnknownData00[0x5B072880];                                // 0x0000(0x5B072880) MISSED OFFSET
};

// ScriptStruct Engine.AngularDriveConstraint
// 0x5B072300
struct FAngularDriveConstraint
{
	unsigned char                                      UnknownData00[0x5B072300];                                // 0x0000(0x5B072300) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintDrive
// 0x5B072400
struct FConstraintDrive
{
	unsigned char                                      UnknownData00[0x5B072400];                                // 0x0000(0x5B072400) MISSED OFFSET
};

// ScriptStruct Engine.LinearDriveConstraint
// 0x5B074100
struct FLinearDriveConstraint
{
	unsigned char                                      UnknownData00[0x5B074100];                                // 0x0000(0x5B074100) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintInstance
// 0x5B074D80
struct FConstraintInstance
{
	unsigned char                                      UnknownData00[0x5B074D80];                                // 0x0000(0x5B074D80) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintProfileProperties
// 0x5B073200
struct FConstraintProfileProperties
{
	unsigned char                                      UnknownData00[0x5B073200];                                // 0x0000(0x5B073200) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintBaseParams
// 0x5B073A00
struct FConstraintBaseParams
{
	unsigned char                                      UnknownData00[0x5B073A00];                                // 0x0000(0x5B073A00) MISSED OFFSET
};

// ScriptStruct Engine.TwistConstraint
// 0xFFFFFFFFFFFFFF00 (0x5B073900 - 0x5B073A00)
struct FTwistConstraint : public FConstraintBaseParams
{

};

// ScriptStruct Engine.ConeConstraint
// 0xFFFFFFFFFFFFFC80 (0x5B073680 - 0x5B073A00)
struct FConeConstraint : public FConstraintBaseParams
{

};

// ScriptStruct Engine.LinearConstraint
// 0xFFFFFFFFFFFFFA00 (0x5B073400 - 0x5B073A00)
struct FLinearConstraint : public FConstraintBaseParams
{

};

// ScriptStruct Engine.CullDistanceSizePair
// 0x5B074C80
struct FCullDistanceSizePair
{
	unsigned char                                      UnknownData00[0x5B074C80];                                // 0x0000(0x5B074C80) MISSED OFFSET
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x5B074B80
struct FRuntimeCurveLinearColor
{
	unsigned char                                      UnknownData00[0x5B074B80];                                // 0x0000(0x5B074B80) MISSED OFFSET
};

// ScriptStruct Engine.NamedCurveValue
// 0x5B074A80
struct FNamedCurveValue
{
	unsigned char                                      UnknownData00[0x5B074A80];                                // 0x0000(0x5B074A80) MISSED OFFSET
};

// ScriptStruct Engine.CurveTableRowHandle
// 0x5B074980
struct FCurveTableRowHandle
{
	unsigned char                                      UnknownData00[0x5B074980];                                // 0x0000(0x5B074980) MISSED OFFSET
};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x5B074800
struct FDataTableCategoryHandle
{
	unsigned char                                      UnknownData00[0x5B074800];                                // 0x0000(0x5B074800) MISSED OFFSET
};

// ScriptStruct Engine.DataTableRowHandle
// 0x5B074700
struct FDataTableRowHandle
{
	unsigned char                                      UnknownData00[0x5B074700];                                // 0x0000(0x5B074700) MISSED OFFSET
};

// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
// 0x5B074680
struct FDebugCameraControllerSettingsViewModeIndex
{
	unsigned char                                      UnknownData00[0x5B074680];                                // 0x0000(0x5B074680) MISSED OFFSET
};

// ScriptStruct Engine.DebugDisplayProperty
// 0x5B074600
struct FDebugDisplayProperty
{
	unsigned char                                      UnknownData00[0x5B074600];                                // 0x0000(0x5B074600) MISSED OFFSET
};

// ScriptStruct Engine.DebugTextInfo
// 0x5B076080
struct FDebugTextInfo
{
	unsigned char                                      UnknownData00[0x5B076080];                                // 0x0000(0x5B076080) MISSED OFFSET
};

// ScriptStruct Engine.MulticastRecordOptions
// 0x5B075F00
struct FMulticastRecordOptions
{
	unsigned char                                      UnknownData00[0x5B075F00];                                // 0x0000(0x5B075F00) MISSED OFFSET
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// 0x5B075D80
struct FRollbackNetStartupActorInfo
{
	unsigned char                                      UnknownData00[0x5B075D80];                                // 0x0000(0x5B075D80) MISSED OFFSET
};

// ScriptStruct Engine.LevelNameAndTime
// 0x5B075C80
struct FLevelNameAndTime
{
	unsigned char                                      UnknownData00[0x5B075C80];                                // 0x0000(0x5B075C80) MISSED OFFSET
};

// ScriptStruct Engine.DialogueWaveParameter
// 0x5B075A80
struct FDialogueWaveParameter
{
	unsigned char                                      UnknownData00[0x5B075A80];                                // 0x0000(0x5B075A80) MISSED OFFSET
};

// ScriptStruct Engine.DialogueContext
// 0x5B075B00
struct FDialogueContext
{
	unsigned char                                      UnknownData00[0x5B075B00];                                // 0x0000(0x5B075B00) MISSED OFFSET
};

// ScriptStruct Engine.DialogueContextMapping
// 0x5B075880
struct FDialogueContextMapping
{
	unsigned char                                      UnknownData00[0x5B075880];                                // 0x0000(0x5B075880) MISSED OFFSET
};

// ScriptStruct Engine.RawDistributionFloat
// 0xA4CBF00 (0x5B075700 - 0x50BA9800)
struct FRawDistributionFloat : public FRawDistribution
{
	unsigned char                                      UnknownData00[0xA4CBF00];                                 // 0x50BA9800(0xA4CBF00) MISSED OFFSET
};

// ScriptStruct Engine.RawDistributionVector
// 0xA4CBC80 (0x5B075480 - 0x50BA9800)
struct FRawDistributionVector : public FRawDistribution
{
	unsigned char                                      UnknownData00[0xA4CBC80];                                 // 0x50BA9800(0xA4CBC80) MISSED OFFSET
};

// ScriptStruct Engine.GraphReference
// 0x5B075300
struct FGraphReference
{
	unsigned char                                      UnknownData00[0x5B075300];                                // 0x0000(0x5B075300) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphPinReference
// 0x5B077300
struct FEdGraphPinReference
{
	unsigned char                                      UnknownData00[0x5B077300];                                // 0x0000(0x5B077300) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x5B076B80
struct FEdGraphSchemaAction
{
	unsigned char                                      UnknownData00[0x5B076B80];                                // 0x0000(0x5B076B80) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0xFFFFFFFFFFFFFF80 (0x5B076B00 - 0x5B076B80)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{

};

// ScriptStruct Engine.PluginRedirect
// 0x5B076A00
struct FPluginRedirect
{
	unsigned char                                      UnknownData00[0x5B076A00];                                // 0x0000(0x5B076A00) MISSED OFFSET
};

// ScriptStruct Engine.StructRedirect
// 0x5B076900
struct FStructRedirect
{
	unsigned char                                      UnknownData00[0x5B076900];                                // 0x0000(0x5B076900) MISSED OFFSET
};

// ScriptStruct Engine.ClassRedirect
// 0x5B076500
struct FClassRedirect
{
	unsigned char                                      UnknownData00[0x5B076500];                                // 0x0000(0x5B076500) MISSED OFFSET
};

// ScriptStruct Engine.GameNameRedirect
// 0x5B076400
struct FGameNameRedirect
{
	unsigned char                                      UnknownData00[0x5B076400];                                // 0x0000(0x5B076400) MISSED OFFSET
};

// ScriptStruct Engine.ScreenMessageString
// 0x5B078200
struct FScreenMessageString
{
	unsigned char                                      UnknownData00[0x5B078200];                                // 0x0000(0x5B078200) MISSED OFFSET
};

// ScriptStruct Engine.DropNoteInfo
// 0x5B078080
struct FDropNoteInfo
{
	unsigned char                                      UnknownData00[0x5B078080];                                // 0x0000(0x5B078080) MISSED OFFSET
};

// ScriptStruct Engine.StatColorMapping
// 0x5B077E00
struct FStatColorMapping
{
	unsigned char                                      UnknownData00[0x5B077E00];                                // 0x0000(0x5B077E00) MISSED OFFSET
};

// ScriptStruct Engine.StatColorMapEntry
// 0x5B077E80
struct FStatColorMapEntry
{
	unsigned char                                      UnknownData00[0x5B077E80];                                // 0x0000(0x5B077E80) MISSED OFFSET
};

// ScriptStruct Engine.WorldContext
// 0x5B079180
struct FWorldContext
{
	unsigned char                                      UnknownData00[0x5B079180];                                // 0x0000(0x5B079180) MISSED OFFSET
};

// ScriptStruct Engine.NamedNetDriver
// 0x5B077D00
struct FNamedNetDriver
{
	unsigned char                                      UnknownData00[0x5B077D00];                                // 0x0000(0x5B077D00) MISSED OFFSET
};

// ScriptStruct Engine.LevelStreamingStatus
// 0x5B077980
struct FLevelStreamingStatus
{
	unsigned char                                      UnknownData00[0x5B077980];                                // 0x0000(0x5B077980) MISSED OFFSET
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x5B077600
struct FFullyLoadedPackagesInfo
{
	unsigned char                                      UnknownData00[0x5B077600];                                // 0x0000(0x5B077600) MISSED OFFSET
};

// ScriptStruct Engine.URL
// 0x5B079200
struct FURL
{
	unsigned char                                      UnknownData00[0x5B079200];                                // 0x0000(0x5B079200) MISSED OFFSET
};

// ScriptStruct Engine.NetDriverDefinition
// 0x5B079000
struct FNetDriverDefinition
{
	unsigned char                                      UnknownData00[0x5B079000];                                // 0x0000(0x5B079000) MISSED OFFSET
};

// ScriptStruct Engine.ExposureSettings
// 0x5B078F00
struct FExposureSettings
{
	unsigned char                                      UnknownData00[0x5B078F00];                                // 0x0000(0x5B078F00) MISSED OFFSET
};

// ScriptStruct Engine.TickPrerequisite
// 0x0000
struct FTickPrerequisite
{

};

// ScriptStruct Engine.CanvasUVTri
// 0x5B078A80
struct FCanvasUVTri
{
	unsigned char                                      UnknownData00[0x5B078A80];                                // 0x0000(0x5B078A80) MISSED OFFSET
};

// ScriptStruct Engine.FontRenderInfo
// 0x5B078700
struct FFontRenderInfo
{
	unsigned char                                      UnknownData00[0x5B078700];                                // 0x0000(0x5B078700) MISSED OFFSET
};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x5B078800
struct FDepthFieldGlowInfo
{
	unsigned char                                      UnknownData00[0x5B078800];                                // 0x0000(0x5B078800) MISSED OFFSET
};

// ScriptStruct Engine.Redirector
// 0x5B078600
struct FRedirector
{
	unsigned char                                      UnknownData00[0x5B078600];                                // 0x0000(0x5B078600) MISSED OFFSET
};

// ScriptStruct Engine.CollectionReference
// 0x5B078580
struct FCollectionReference
{
	unsigned char                                      UnknownData00[0x5B078580];                                // 0x0000(0x5B078580) MISSED OFFSET
};

// ScriptStruct Engine.ComponentReference
// 0x5B07A500
struct FComponentReference
{
	unsigned char                                      UnknownData00[0x5B07A500];                                // 0x0000(0x5B07A500) MISSED OFFSET
};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x5B07A480
struct FConstrainComponentPropName
{
	unsigned char                                      UnknownData00[0x5B07A480];                                // 0x0000(0x5B07A480) MISSED OFFSET
};

// ScriptStruct Engine.DamageEvent
// 0x5AFEE340
struct FDamageEvent
{
	unsigned char                                      UnknownData00[0x5AFEE340];                                // 0x0000(0x5AFEE340) MISSED OFFSET
};

// ScriptStruct Engine.RadialDamageEvent
// 0x8BFC0 (0x5B07A300 - 0x5AFEE340)
struct FRadialDamageEvent : public FDamageEvent
{
	unsigned char                                      UnknownData00[0x8BFC0];                                   // 0x5AFEE340(0x8BFC0) MISSED OFFSET
};

// ScriptStruct Engine.RadialDamageParams
// 0x5B07A080
struct FRadialDamageParams
{
	unsigned char                                      UnknownData00[0x5B07A080];                                // 0x0000(0x5B07A080) MISSED OFFSET
};

// ScriptStruct Engine.PointDamageEvent
// 0x8BBC0 (0x5B079F00 - 0x5AFEE340)
struct FPointDamageEvent : public FDamageEvent
{
	unsigned char                                      UnknownData00[0x8BBC0];                                   // 0x5AFEE340(0x8BBC0) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshBuildSettings
// 0x5B079900
struct FSkeletalMeshBuildSettings
{
	unsigned char                                      UnknownData00[0x5B079900];                                // 0x0000(0x5B079900) MISSED OFFSET
};

// ScriptStruct Engine.MeshBuildSettings
// 0x5B07B000
struct FMeshBuildSettings
{
	unsigned char                                      UnknownData00[0x5B07B000];                                // 0x0000(0x5B07B000) MISSED OFFSET
};

// ScriptStruct Engine.POV
// 0x5B07AE80
struct FPOV
{
	unsigned char                                      UnknownData00[0x5B07AE80];                                // 0x0000(0x5B07AE80) MISSED OFFSET
};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x5AFEFE20
struct FAnimUpdateRateParameters
{
	unsigned char                                      UnknownData00[0x5AFEFE20];                                // 0x0000(0x5AFEFE20) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotDesc
// 0x5B07C600
struct FAnimSlotDesc
{
	unsigned char                                      UnknownData00[0x5B07C600];                                // 0x0000(0x5B07C600) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotInfo
// 0x5B07C500
struct FAnimSlotInfo
{
	unsigned char                                      UnknownData00[0x5B07C500];                                // 0x0000(0x5B07C500) MISSED OFFSET
};

// ScriptStruct Engine.MTDResult
// 0x5B07C400
struct FMTDResult
{
	unsigned char                                      UnknownData00[0x5B07C400];                                // 0x0000(0x5B07C400) MISSED OFFSET
};

// ScriptStruct Engine.OverlapResult
// 0x5B07C280
struct FOverlapResult
{
	unsigned char                                      UnknownData00[0x5B07C280];                                // 0x0000(0x5B07C280) MISSED OFFSET
};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x5B07C100
struct FPrimitiveMaterialRef
{
	unsigned char                                      UnknownData00[0x5B07C100];                                // 0x0000(0x5B07C100) MISSED OFFSET
};

// ScriptStruct Engine.SwarmDebugOptions
// 0x5B07BF80
struct FSwarmDebugOptions
{
	unsigned char                                      UnknownData00[0x5B07BF80];                                // 0x0000(0x5B07BF80) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDebugOptions
// 0x5B07B780
struct FLightmassDebugOptions
{
	unsigned char                                      UnknownData00[0x5B07B780];                                // 0x0000(0x5B07B780) MISSED OFFSET
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x5B07D400
struct FLightmassPrimitiveSettings
{
	unsigned char                                      UnknownData00[0x5B07D400];                                // 0x0000(0x5B07D400) MISSED OFFSET
};

// ScriptStruct Engine.LightmassLightSettings
// 0x5B07D200
struct FLightmassLightSettings
{
	unsigned char                                      UnknownData00[0x5B07D200];                                // 0x0000(0x5B07D200) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0xFFFFFFFFFFFFFF80 (0x5B07D180 - 0x5B07D200)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.LightmassPointLightSettings
// 0xFFFFFFFFA4F82E00 (0x0000 - 0x5B07D200)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.BasedPosition
// 0x5B07CF00
struct FBasedPosition
{
	unsigned char                                      UnknownData00[0x5B07CF00];                                // 0x0000(0x5B07CF00) MISSED OFFSET
};

// ScriptStruct Engine.FractureEffect
// 0x5B07CE00
struct FFractureEffect
{
	unsigned char                                      UnknownData00[0x5B07CE00];                                // 0x0000(0x5B07CE00) MISSED OFFSET
};

// ScriptStruct Engine.CollisionImpactData
// 0x5AFEFCE0
struct FCollisionImpactData
{
	unsigned char                                      UnknownData00[0x5AFEFCE0];                                // 0x0000(0x5AFEFCE0) MISSED OFFSET
};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x5B07CA80
struct FRigidBodyContactInfo
{
	unsigned char                                      UnknownData00[0x5B07CA80];                                // 0x0000(0x5B07CA80) MISSED OFFSET
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x5B07E500
struct FRigidBodyErrorCorrection
{
	unsigned char                                      UnknownData00[0x5B07E500];                                // 0x0000(0x5B07E500) MISSED OFFSET
};

// ScriptStruct Engine.RigidBodyState
// 0x5B07E280
struct FRigidBodyState
{
	unsigned char                                      UnknownData00[0x5B07E280];                                // 0x0000(0x5B07E280) MISSED OFFSET
};

// ScriptStruct Engine.MaterialShadingModelField
// 0x5B07E200
struct FMaterialShadingModelField
{
	unsigned char                                      UnknownData00[0x5B07E200];                                // 0x0000(0x5B07E200) MISSED OFFSET
};

// ScriptStruct Engine.ExponentialHeightFogData
// 0x5B07E080
struct FExponentialHeightFogData
{
	unsigned char                                      UnknownData00[0x5B07E080];                                // 0x0000(0x5B07E080) MISSED OFFSET
};

// ScriptStruct Engine.FontCharacter
// 0x5B07DD80
struct FFontCharacter
{
	unsigned char                                      UnknownData00[0x5B07DD80];                                // 0x0000(0x5B07DD80) MISSED OFFSET
};

// ScriptStruct Engine.FontImportOptionsData
// 0x5B07F000
struct FFontImportOptionsData
{
	unsigned char                                      UnknownData00[0x5B07F000];                                // 0x0000(0x5B07F000) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// 0xFFFFFFFFA50126C0 (0x0000 - 0x5AFED940)
struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings
{

};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x5B07EF80
struct FActiveForceFeedbackEffect
{
	unsigned char                                      UnknownData00[0x5B07EF80];                                // 0x0000(0x5B07EF80) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackParameters
// 0x5B07ED80
struct FForceFeedbackParameters
{
	unsigned char                                      UnknownData00[0x5B07ED80];                                // 0x0000(0x5B07ED80) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x5B07EB00
struct FForceFeedbackChannelDetails
{
	unsigned char                                      UnknownData00[0x5B07EB00];                                // 0x0000(0x5B07EB00) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathResult
// 0x5AFEFC40
struct FPredictProjectilePathResult
{
	unsigned char                                      UnknownData00[0x5AFEFC40];                                // 0x0000(0x5AFEFC40) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathPointData
// 0x5B07E880
struct FPredictProjectilePathPointData
{
	unsigned char                                      UnknownData00[0x5B07E880];                                // 0x0000(0x5B07E880) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathParams
// 0x5B07F980
struct FPredictProjectilePathParams
{
	unsigned char                                      UnknownData00[0x5B07F980];                                // 0x0000(0x5B07F980) MISSED OFFSET
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x5B07F900
struct FActiveHapticFeedbackEffect
{
	unsigned char                                      UnknownData00[0x5B07F900];                                // 0x0000(0x5B07F900) MISSED OFFSET
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// 0x5B07F800
struct FHapticFeedbackDetails_Curve
{
	unsigned char                                      UnknownData00[0x5B07F800];                                // 0x0000(0x5B07F800) MISSED OFFSET
};

// ScriptStruct Engine.ClusterNode
// 0x5B080D00
struct FClusterNode
{
	unsigned char                                      UnknownData00[0x5B080D00];                                // 0x0000(0x5B080D00) MISSED OFFSET
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// 0x5B080A00
struct FClusterNode_DEPRECATED
{
	unsigned char                                      UnknownData00[0x5B080A00];                                // 0x0000(0x5B080A00) MISSED OFFSET
};

// ScriptStruct Engine.HirezObjectPool
// 0x5B04EA40
struct FHirezObjectPool
{
	unsigned char                                      UnknownData00[0x5B04EA40];                                // 0x0000(0x5B04EA40) MISSED OFFSET
};

// ScriptStruct Engine.HirezObjectPoolQueuedEntry
// 0x5B080880
struct FHirezObjectPoolQueuedEntry
{
	unsigned char                                      UnknownData00[0x5B080880];                                // 0x0000(0x5B080880) MISSED OFFSET
};

// ScriptStruct Engine.HirezObjectPoolItem
// 0x5AFEF880
struct FHirezObjectPoolItem
{
	unsigned char                                      UnknownData00[0x5AFEF880];                                // 0x0000(0x5AFEF880) MISSED OFFSET
};

// ScriptStruct Engine.HLODProxyMesh
// 0x5B080600
struct FHLODProxyMesh
{
	unsigned char                                      UnknownData00[0x5B080600];                                // 0x0000(0x5B080600) MISSED OFFSET
};

// ScriptStruct Engine.ImportanceTexture
// 0x5B080280
struct FImportanceTexture
{
	unsigned char                                      UnknownData00[0x5B080280];                                // 0x0000(0x5B080280) MISSED OFFSET
};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x5B091280
struct FComponentOverrideRecord
{
	unsigned char                                      UnknownData00[0x5B091280];                                // 0x0000(0x5B091280) MISSED OFFSET
};

// ScriptStruct Engine.ComponentKey
// 0x5B091320
struct FComponentKey
{
	unsigned char                                      UnknownData00[0x5B091320];                                // 0x0000(0x5B091320) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x5B081F80
struct FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x5B081F80];                                // 0x0000(0x5B081F80) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0xFFFFFFFFFFFFFE80 (0x5B081E00 - 0x5B081F80)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{

};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0xFFFFFFFFFFFFFD80 (0x5B081D00 - 0x5B081F80)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{

};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0xFFFFFFFFFFFFFC80 (0x5B081C00 - 0x5B081F80)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{

};

// ScriptStruct Engine.CachedKeyToActionInfo
// 0x5B081B80
struct FCachedKeyToActionInfo
{
	unsigned char                                      UnknownData00[0x5B081B80];                                // 0x0000(0x5B081B80) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0xFFFFFFFFFFFFFA80 (0x5B081A00 - 0x5B081F80)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{

};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0xFFFFFFFFFFFFF980 (0x5B081900 - 0x5B081F80)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{

};

// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// 0x74740 (0x5B081500 - 0x5B00CDC0)
struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x74740];                                   // 0x5B00CDC0(0x74740) MISSED OFFSET
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x5B081700
struct FInstancedStaticMeshInstanceData
{
	unsigned char                                      UnknownData00[0x5B081700];                                // 0x0000(0x5B081700) MISSED OFFSET
};

// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// 0x5B081580
struct FInstancedStaticMeshLightMapInstanceData
{
	unsigned char                                      UnknownData00[0x5B081580];                                // 0x0000(0x5B081580) MISSED OFFSET
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0000
struct FInstancedStaticMeshMappingInfo
{

};

// ScriptStruct Engine.IntegralCurve
// 0x103C80 (0x5B091000 - 0x5AF8D380)
struct FIntegralCurve : public FIndexedCurve
{
	unsigned char                                      UnknownData00[0x103C80];                                  // 0x5AF8D380(0x103C80) MISSED OFFSET
};

// ScriptStruct Engine.IntegralKey
// 0x5B081280
struct FIntegralKey
{
	unsigned char                                      UnknownData00[0x5B081280];                                // 0x0000(0x5B081280) MISSED OFFSET
};

// ScriptStruct Engine.CurveEdTab
// 0x5B082C00
struct FCurveEdTab
{
	unsigned char                                      UnknownData00[0x5B082C00];                                // 0x0000(0x5B082C00) MISSED OFFSET
};

// ScriptStruct Engine.CurveEdEntry
// 0x5B082C80
struct FCurveEdEntry
{
	unsigned char                                      UnknownData00[0x5B082C80];                                // 0x0000(0x5B082C80) MISSED OFFSET
};

// ScriptStruct Engine.InterpEdSelKey
// 0x5B082A00
struct FInterpEdSelKey
{
	unsigned char                                      UnknownData00[0x5B082A00];                                // 0x0000(0x5B082A00) MISSED OFFSET
};

// ScriptStruct Engine.CameraPreviewInfo
// 0x5B090EC0
struct FCameraPreviewInfo
{
	unsigned char                                      UnknownData00[0x5B090EC0];                                // 0x0000(0x5B090EC0) MISSED OFFSET
};

// ScriptStruct Engine.SubTrackGroup
// 0x5B082600
struct FSubTrackGroup
{
	unsigned char                                      UnknownData00[0x5B082600];                                // 0x0000(0x5B082600) MISSED OFFSET
};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x5B090D80
struct FSupportedSubTrackInfo
{
	unsigned char                                      UnknownData00[0x5B090D80];                                // 0x0000(0x5B090D80) MISSED OFFSET
};

// ScriptStruct Engine.AnimControlTrackKey
// 0x5B082180
struct FAnimControlTrackKey
{
	unsigned char                                      UnknownData00[0x5B082180];                                // 0x0000(0x5B082180) MISSED OFFSET
};

// ScriptStruct Engine.BoolTrackKey
// 0x5B084180
struct FBoolTrackKey
{
	unsigned char                                      UnknownData00[0x5B084180];                                // 0x0000(0x5B084180) MISSED OFFSET
};

// ScriptStruct Engine.DirectorTrackCut
// 0x5B083F80
struct FDirectorTrackCut
{
	unsigned char                                      UnknownData00[0x5B083F80];                                // 0x0000(0x5B083F80) MISSED OFFSET
};

// ScriptStruct Engine.EventTrackKey
// 0x5B083E80
struct FEventTrackKey
{
	unsigned char                                      UnknownData00[0x5B083E80];                                // 0x0000(0x5B083E80) MISSED OFFSET
};

// ScriptStruct Engine.InterpLookupTrack
// 0x5B090CE0
struct FInterpLookupTrack
{
	unsigned char                                      UnknownData00[0x5B090CE0];                                // 0x0000(0x5B090CE0) MISSED OFFSET
};

// ScriptStruct Engine.InterpLookupPoint
// 0x5B083D00
struct FInterpLookupPoint
{
	unsigned char                                      UnknownData00[0x5B083D00];                                // 0x0000(0x5B083D00) MISSED OFFSET
};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x5B083B80
struct FParticleReplayTrackKey
{
	unsigned char                                      UnknownData00[0x5B083B80];                                // 0x0000(0x5B083B80) MISSED OFFSET
};

// ScriptStruct Engine.SoundTrackKey
// 0x5B083980
struct FSoundTrackKey
{
	unsigned char                                      UnknownData00[0x5B083980];                                // 0x0000(0x5B083980) MISSED OFFSET
};

// ScriptStruct Engine.ToggleTrackKey
// 0x5B083880
struct FToggleTrackKey
{
	unsigned char                                      UnknownData00[0x5B083880];                                // 0x0000(0x5B083880) MISSED OFFSET
};

// ScriptStruct Engine.VisibilityTrackKey
// 0x5B083700
struct FVisibilityTrackKey
{
	unsigned char                                      UnknownData00[0x5B083700];                                // 0x0000(0x5B083700) MISSED OFFSET
};

// ScriptStruct Engine.VectorSpringState
// 0x0000
struct FVectorSpringState
{

};

// ScriptStruct Engine.FloatSpringState
// 0x0000
struct FFloatSpringState
{

};

// ScriptStruct Engine.DrawToRenderTargetContext
// 0x5B083680
struct FDrawToRenderTargetContext
{
	unsigned char                                      UnknownData00[0x5B083680];                                // 0x0000(0x5B083680) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionManager
// 0x0000
struct FLatentActionManager
{

};

// ScriptStruct Engine.LayerActorStats
// 0x5B090C40
struct FLayerActorStats
{
	unsigned char                                      UnknownData00[0x5B090C40];                                // 0x0000(0x5B090C40) MISSED OFFSET
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// 0x5B090BA0
struct FReplicatedStaticActorDestructionInfo
{
	unsigned char                                      UnknownData00[0x5B090BA0];                                // 0x0000(0x5B090BA0) MISSED OFFSET
};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x5B085F00
struct FLevelSimplificationDetails
{
	unsigned char                                      UnknownData00[0x5B085F00];                                // 0x0000(0x5B085F00) MISSED OFFSET
};

// ScriptStruct Engine.MaterialProxySettings
// 0x5B086180
struct FMaterialProxySettings
{
	unsigned char                                      UnknownData00[0x5B086180];                                // 0x0000(0x5B086180) MISSED OFFSET
};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0000
struct FStreamableTextureInstance
{

};

// ScriptStruct Engine.DynamicTextureInstance
// 0x5B085D80
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	unsigned char                                      UnknownData00[0x5B085D80];                                // 0x0000(0x5B085D80) MISSED OFFSET
};

// ScriptStruct Engine.PrecomputedLightInstanceData
// 0x78E40 (0x5B085C00 - 0x5B00CDC0)
struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x78E40];                                   // 0x5B00CDC0(0x78E40) MISSED OFFSET
};

// ScriptStruct Engine.BatchedPoint
// 0x5B085980
struct FBatchedPoint
{
	unsigned char                                      UnknownData00[0x5B085980];                                // 0x0000(0x5B085980) MISSED OFFSET
};

// ScriptStruct Engine.BatchedLine
// 0x5B085680
struct FBatchedLine
{
	unsigned char                                      UnknownData00[0x5B085680];                                // 0x0000(0x5B085680) MISSED OFFSET
};

// ScriptStruct Engine.ClientReceiveData
// 0x5B085300
struct FClientReceiveData
{
	unsigned char                                      UnknownData00[0x5B085300];                                // 0x0000(0x5B085300) MISSED OFFSET
};

// ScriptStruct Engine.ParameterGroupData
// 0x5B087300
struct FParameterGroupData
{
	unsigned char                                      UnknownData00[0x5B087300];                                // 0x0000(0x5B087300) MISSED OFFSET
};

// ScriptStruct Engine.MaterialSpriteElement
// 0x5B087000
struct FMaterialSpriteElement
{
	unsigned char                                      UnknownData00[0x5B087000];                                // 0x0000(0x5B087000) MISSED OFFSET
};

// ScriptStruct Engine.MaterialCachedExpressionData
// 0x5B086880
struct FMaterialCachedExpressionData
{
	unsigned char                                      UnknownData00[0x5B086880];                                // 0x0000(0x5B086880) MISSED OFFSET
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x5B086B00
struct FMaterialParameterCollectionInfo
{
	unsigned char                                      UnknownData00[0x5B086B00];                                // 0x0000(0x5B086B00) MISSED OFFSET
};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x5B086980
struct FMaterialFunctionInfo
{
	unsigned char                                      UnknownData00[0x5B086980];                                // 0x0000(0x5B086980) MISSED OFFSET
};

// ScriptStruct Engine.MaterialCachedParameters
// 0x5B086500
struct FMaterialCachedParameters
{
	unsigned char                                      UnknownData00[0x5B086500];                                // 0x0000(0x5B086500) MISSED OFFSET
};

// ScriptStruct Engine.MaterialCachedParameterEntry
// 0x5B090060
struct FMaterialCachedParameterEntry
{
	unsigned char                                      UnknownData00[0x5B090060];                                // 0x0000(0x5B090060) MISSED OFFSET
};

// ScriptStruct Engine.MaterialParameterInfo
// 0x5B088300
struct FMaterialParameterInfo
{
	unsigned char                                      UnknownData00[0x5B088300];                                // 0x0000(0x5B088300) MISSED OFFSET
};

// ScriptStruct Engine.ParameterChannelNames
// 0x5B088080
struct FParameterChannelNames
{
	unsigned char                                      UnknownData00[0x5B088080];                                // 0x0000(0x5B088080) MISSED OFFSET
};

// ScriptStruct Engine.CustomDefine
// 0x5B087F80
struct FCustomDefine
{
	unsigned char                                      UnknownData00[0x5B087F80];                                // 0x0000(0x5B087F80) MISSED OFFSET
};

// ScriptStruct Engine.CustomInput
// 0x5B087E80
struct FCustomInput
{
	unsigned char                                      UnknownData00[0x5B087E80];                                // 0x0000(0x5B087E80) MISSED OFFSET
};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x5B087D00
struct FFunctionExpressionOutput
{
	unsigned char                                      UnknownData00[0x5B087D00];                                // 0x0000(0x5B087D00) MISSED OFFSET
};

// ScriptStruct Engine.FunctionExpressionInput
// 0x5B087B80
struct FFunctionExpressionInput
{
	unsigned char                                      UnknownData00[0x5B087B80];                                // 0x0000(0x5B087B80) MISSED OFFSET
};

// ScriptStruct Engine.FontParameterValue
// 0x5B087980
struct FFontParameterValue
{
	unsigned char                                      UnknownData00[0x5B087980];                                // 0x0000(0x5B087980) MISSED OFFSET
};

// ScriptStruct Engine.RuntimeVirtualTextureParameterValue
// 0x5B087800
struct FRuntimeVirtualTextureParameterValue
{
	unsigned char                                      UnknownData00[0x5B087800];                                // 0x0000(0x5B087800) MISSED OFFSET
};

// ScriptStruct Engine.TextureParameterValue
// 0x5B087680
struct FTextureParameterValue
{
	unsigned char                                      UnknownData00[0x5B087680];                                // 0x0000(0x5B087680) MISSED OFFSET
};

// ScriptStruct Engine.VectorParameterValue
// 0x5B087500
struct FVectorParameterValue
{
	unsigned char                                      UnknownData00[0x5B087500];                                // 0x0000(0x5B087500) MISSED OFFSET
};

// ScriptStruct Engine.ScalarParameterValue
// 0x5B089480
struct FScalarParameterValue
{
	unsigned char                                      UnknownData00[0x5B089480];                                // 0x0000(0x5B089480) MISSED OFFSET
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// 0x5B089300
struct FScalarParameterAtlasInstanceData
{
	unsigned char                                      UnknownData00[0x5B089300];                                // 0x0000(0x5B089300) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x5B088B00
struct FMaterialInstanceBasePropertyOverrides
{
	unsigned char                                      UnknownData00[0x5B088B00];                                // 0x0000(0x5B088B00) MISSED OFFSET
};

// ScriptStruct Engine.MaterialTextureInfo
// 0x5B088980
struct FMaterialTextureInfo
{
	unsigned char                                      UnknownData00[0x5B088980];                                // 0x0000(0x5B088980) MISSED OFFSET
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x5B088580
struct FLightmassMaterialInterfaceSettings
{
	unsigned char                                      UnknownData00[0x5B088580];                                // 0x0000(0x5B088580) MISSED OFFSET
};

// ScriptStruct Engine.MaterialLayersFunctions
// 0x5B0927C0
struct FMaterialLayersFunctions
{
	unsigned char                                      UnknownData00[0x5B0927C0];                                // 0x0000(0x5B0927C0) MISSED OFFSET
};

// ScriptStruct Engine.CollectionParameterBase
// 0x5B08A380
struct FCollectionParameterBase
{
	unsigned char                                      UnknownData00[0x5B08A380];                                // 0x0000(0x5B08A380) MISSED OFFSET
};

// ScriptStruct Engine.CollectionVectorParameter
// 0xFFFFFFFFFFFFFF80 (0x5B08A300 - 0x5B08A380)
struct FCollectionVectorParameter : public FCollectionParameterBase
{

};

// ScriptStruct Engine.CollectionScalarParameter
// 0xFFFFFFFFFFFFFF00 (0x5B08A280 - 0x5B08A380)
struct FCollectionScalarParameter : public FCollectionParameterBase
{

};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x5B08A180
struct FInterpGroupActorInfo
{
	unsigned char                                      UnknownData00[0x5B08A180];                                // 0x0000(0x5B08A180) MISSED OFFSET
};

// ScriptStruct Engine.CameraCutInfo
// 0x5B08A080
struct FCameraCutInfo
{
	unsigned char                                      UnknownData00[0x5B08A080];                                // 0x0000(0x5B08A080) MISSED OFFSET
};

// ScriptStruct Engine.MemberReference
// 0x5B089D80
struct FMemberReference
{
	unsigned char                                      UnknownData00[0x5B089D80];                                // 0x0000(0x5B089D80) MISSED OFFSET
};

// ScriptStruct Engine.MeshInstancingSettings
// 0x5B092540
struct FMeshInstancingSettings
{
	unsigned char                                      UnknownData00[0x5B092540];                                // 0x0000(0x5B092540) MISSED OFFSET
};

// ScriptStruct Engine.MeshMergingSettings
// 0x5B08B100
struct FMeshMergingSettings
{
	unsigned char                                      UnknownData00[0x5B08B100];                                // 0x0000(0x5B08B100) MISSED OFFSET
};

// ScriptStruct Engine.MeshProxySettings
// 0x5B08A580
struct FMeshProxySettings
{
	unsigned char                                      UnknownData00[0x5B08A580];                                // 0x0000(0x5B08A580) MISSED OFFSET
};

// ScriptStruct Engine.MeshReductionSettings
// 0x5B08BD80
struct FMeshReductionSettings
{
	unsigned char                                      UnknownData00[0x5B08BD80];                                // 0x0000(0x5B08BD80) MISSED OFFSET
};

// ScriptStruct Engine.PurchaseInfo
// 0x5B08BB80
struct FPurchaseInfo
{
	unsigned char                                      UnknownData00[0x5B08BB80];                                // 0x0000(0x5B08BB80) MISSED OFFSET
};

// ScriptStruct Engine.NameCurve
// 0x104F40 (0x5B0922C0 - 0x5AF8D380)
struct FNameCurve : public FIndexedCurve
{
	unsigned char                                      UnknownData00[0x104F40];                                  // 0x5AF8D380(0x104F40) MISSED OFFSET
};

// ScriptStruct Engine.NameCurveKey
// 0x5B08BA00
struct FNameCurveKey
{
	unsigned char                                      UnknownData00[0x5B08BA00];                                // 0x0000(0x5B08BA00) MISSED OFFSET
};

// ScriptStruct Engine.NavDataConfig
// 0x75DD00 (0x5B08B880 - 0x5A92DB80)
struct FNavDataConfig : public FNavAgentProperties
{
	unsigned char                                      UnknownData00[0x75DD00];                                  // 0x5A92DB80(0x75DD00) MISSED OFFSET
};

// ScriptStruct Engine.NavAgentSelector
// 0x5B08D180
struct FNavAgentSelector
{
	unsigned char                                      UnknownData00[0x5B08D180];                                // 0x0000(0x5B08D180) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLinkBase
// 0x5B08E280
struct FNavigationLinkBase
{
	unsigned char                                      UnknownData00[0x5B08E280];                                // 0x0000(0x5B08E280) MISSED OFFSET
};

// ScriptStruct Engine.NavigationSegmentLink
// 0xFFFFFFFFFFFFFE00 (0x5B08E080 - 0x5B08E280)
struct FNavigationSegmentLink : public FNavigationLinkBase
{

};

// ScriptStruct Engine.NavigationLink
// 0xFFFFFFFFFFFFFD00 (0x5B08DF80 - 0x5B08E280)
struct FNavigationLink : public FNavigationLinkBase
{

};

// ScriptStruct Engine.ChannelDefinition
// 0x5B08DB80
struct FChannelDefinition
{
	unsigned char                                      UnknownData00[0x5B08DB80];                                // 0x0000(0x5B08DB80) MISSED OFFSET
};

// ScriptStruct Engine.PacketSimulationSettings
// 0x5B08F600
struct FPacketSimulationSettings
{
	unsigned char                                      UnknownData00[0x5B08F600];                                // 0x0000(0x5B08F600) MISSED OFFSET
};

// ScriptStruct Engine.NetworkEmulationProfileDescription
// 0x5B08F500
struct FNetworkEmulationProfileDescription
{
	unsigned char                                      UnknownData00[0x5B08F500];                                // 0x0000(0x5B08F500) MISSED OFFSET
};

// ScriptStruct Engine.NodeItem
// 0x5B08F400
struct FNodeItem
{
	unsigned char                                      UnknownData00[0x5B08F400];                                // 0x0000(0x5B08F400) MISSED OFFSET
};

// ScriptStruct Engine.ParticleChannelContainer
// 0x5B08ED80
struct FParticleChannelContainer
{
	unsigned char                                      UnknownData00[0x5B08ED80];                                // 0x0000(0x5B08ED80) MISSED OFFSET
};

// ScriptStruct Engine.ParticleBurst
// 0x5B08EC00
struct FParticleBurst
{
	unsigned char                                      UnknownData00[0x5B08EC00];                                // 0x0000(0x5B08EC00) MISSED OFFSET
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x5B08E900
struct FParticleRandomSeedInfo
{
	unsigned char                                      UnknownData00[0x5B08E900];                                // 0x0000(0x5B08E900) MISSED OFFSET
};

// ScriptStruct Engine.ParticleCurvePair
// 0x5B08E800
struct FParticleCurvePair
{
	unsigned char                                      UnknownData00[0x5B08E800];                                // 0x0000(0x5B08E800) MISSED OFFSET
};

// ScriptStruct Engine.BeamModifierOptions
// 0x5B08FF00
struct FBeamModifierOptions
{
	unsigned char                                      UnknownData00[0x5B08FF00];                                // 0x0000(0x5B08FF00) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x5B08FA80
struct FParticleEvent_GenerateInfo
{
	unsigned char                                      UnknownData00[0x5B08FA80];                                // 0x0000(0x5B08FA80) MISSED OFFSET
};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x5B08F980
struct FLocationBoneSocketInfo
{
	unsigned char                                      UnknownData00[0x5B08F980];                                // 0x0000(0x5B08F980) MISSED OFFSET
};

// ScriptStruct Engine.OrbitOptions
// 0x5B08F800
struct FOrbitOptions
{
	unsigned char                                      UnknownData00[0x5B08F800];                                // 0x0000(0x5B08F800) MISSED OFFSET
};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x5B0B0E00
struct FEmitterDynamicParameter
{
	unsigned char                                      UnknownData00[0x5B0B0E00];                                // 0x0000(0x5B0B0E00) MISSED OFFSET
};

// ScriptStruct Engine.BeamTargetData
// 0x5B0B0D00
struct FBeamTargetData
{
	unsigned char                                      UnknownData00[0x5B0B0D00];                                // 0x0000(0x5B0B0D00) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x5B091D20
struct FGPUSpriteResourceData
{
	unsigned char                                      UnknownData00[0x5B091D20];                                // 0x0000(0x5B091D20) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x5B0B2680
struct FGPUSpriteEmitterInfo
{
	unsigned char                                      UnknownData00[0x5B0B2680];                                // 0x0000(0x5B0B2680) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x5B0B2880
struct FGPUSpriteLocalVectorFieldInfo
{
	unsigned char                                      UnknownData00[0x5B0B2880];                                // 0x0000(0x5B0B2880) MISSED OFFSET
};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x5B0B2580
struct FNamedEmitterMaterial
{
	unsigned char                                      UnknownData00[0x5B0B2580];                                // 0x0000(0x5B0B2580) MISSED OFFSET
};

// ScriptStruct Engine.LODSoloTrack
// 0x5B091BE0
struct FLODSoloTrack
{
	unsigned char                                      UnknownData00[0x5B091BE0];                                // 0x0000(0x5B091BE0) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0000
struct FParticleSystemLOD
{

};

// ScriptStruct Engine.ParticleSysParam
// 0x5B0B4180
struct FParticleSysParam
{
	unsigned char                                      UnknownData00[0x5B0B4180];                                // 0x0000(0x5B0B4180) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// 0xFFFFFFFFAF450500 (0x0000 - 0x50BAFB00)
struct FParticleSystemWorldManagerTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x0000
struct FParticleSystemReplayFrame
{

};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x0000
struct FParticleEmitterReplayFrame
{

};

// ScriptStruct Engine.FreezablePerPlatformInt
// 0x0000
struct FFreezablePerPlatformInt
{

};

// ScriptStruct Engine.PhysicalAnimationData
// 0x5B0B3D80
struct FPhysicalAnimationData
{
	unsigned char                                      UnknownData00[0x5B0B3D80];                                // 0x0000(0x5B0B3D80) MISSED OFFSET
};

// ScriptStruct Engine.TireFrictionScalePair
// 0x5B0B3C80
struct FTireFrictionScalePair
{
	unsigned char                                      UnknownData00[0x5B0B3C80];                                // 0x0000(0x5B0B3C80) MISSED OFFSET
};

// ScriptStruct Engine.PhysicalAnimationProfile
// 0x5B0B3B80
struct FPhysicalAnimationProfile
{
	unsigned char                                      UnknownData00[0x5B0B3B80];                                // 0x0000(0x5B0B3B80) MISSED OFFSET
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// 0x5B0B3A80
struct FPhysicsConstraintProfileHandle
{
	unsigned char                                      UnknownData00[0x5B0B3A80];                                // 0x0000(0x5B0B3A80) MISSED OFFSET
};

// ScriptStruct Engine.ChaosPhysicsSettings
// 0x5B091A00
struct FChaosPhysicsSettings
{
	unsigned char                                      UnknownData00[0x5B091A00];                                // 0x0000(0x5B091A00) MISSED OFFSET
};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x5B0B3800
struct FPhysicalSurfaceName
{
	unsigned char                                      UnknownData00[0x5B0B3800];                                // 0x0000(0x5B0B3800) MISSED OFFSET
};

// ScriptStruct Engine.DelegateArray
// 0x5B091960
struct FDelegateArray
{
	unsigned char                                      UnknownData00[0x5B091960];                                // 0x0000(0x5B091960) MISSED OFFSET
};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x5B0B3580
struct FViewTargetTransitionParams
{
	unsigned char                                      UnknownData00[0x5B0B3580];                                // 0x0000(0x5B0B3580) MISSED OFFSET
};

// ScriptStruct Engine.TViewTarget
// 0x5B0B3400
struct FTViewTarget
{
	unsigned char                                      UnknownData00[0x5B0B3400];                                // 0x0000(0x5B0B3400) MISSED OFFSET
};

// ScriptStruct Engine.CameraCacheEntry
// 0x5B0B3300
struct FCameraCacheEntry
{
	unsigned char                                      UnknownData00[0x5B0B3300];                                // 0x0000(0x5B0B3300) MISSED OFFSET
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// 0x5B0B5280
struct FUpdateLevelVisibilityLevelInfo
{
	unsigned char                                      UnknownData00[0x5B0B5280];                                // 0x0000(0x5B0B5280) MISSED OFFSET
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// 0x5B0B5000
struct FUpdateLevelStreamingLevelStatus
{
	unsigned char                                      UnknownData00[0x5B0B5000];                                // 0x0000(0x5B0B5000) MISSED OFFSET
};

// ScriptStruct Engine.InputActionSpeechMapping
// 0x5B0B4F00
struct FInputActionSpeechMapping
{
	unsigned char                                      UnknownData00[0x5B0B4F00];                                // 0x0000(0x5B0B4F00) MISSED OFFSET
};

// ScriptStruct Engine.TouchRegion
// 0x5B0B4C00
struct FTouchRegion
{
	unsigned char                                      UnknownData00[0x5B0B4C00];                                // 0x0000(0x5B0B4C00) MISSED OFFSET
};

// ScriptStruct Engine.TouchRegionTap
// 0x0000
struct FTouchRegionTap
{

};

// ScriptStruct Engine.TouchRegionTouchData
// 0x0000
struct FTouchRegionTouchData
{

};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x5B0B4900
struct FInputAxisConfigEntry
{
	unsigned char                                      UnknownData00[0x5B0B4900];                                // 0x0000(0x5B0B4900) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisProperties
// 0x5B0B4980
struct FInputAxisProperties
{
	unsigned char                                      UnknownData00[0x5B0B4980];                                // 0x0000(0x5B0B4980) MISSED OFFSET
};

// ScriptStruct Engine.KeyBind
// 0x5B0B4380
struct FKeyBind
{
	unsigned char                                      UnknownData00[0x5B0B4380];                                // 0x0000(0x5B0B4380) MISSED OFFSET
};

// ScriptStruct Engine.PlayerMuteList
// 0x5B0B4280
struct FPlayerMuteList
{
	unsigned char                                      UnknownData00[0x5B0B4280];                                // 0x0000(0x5B0B4280) MISSED OFFSET
};

// ScriptStruct Engine.PoseDataContainer
// 0x5B0915A0
struct FPoseDataContainer
{
	unsigned char                                      UnknownData00[0x5B0915A0];                                // 0x0000(0x5B0915A0) MISSED OFFSET
};

// ScriptStruct Engine.PoseData
// 0x5B0916E0
struct FPoseData
{
	unsigned char                                      UnknownData00[0x5B0916E0];                                // 0x0000(0x5B0916E0) MISSED OFFSET
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x5B091500
struct FPreviewAssetAttachContainer
{
	unsigned char                                      UnknownData00[0x5B091500];                                // 0x0000(0x5B091500) MISSED OFFSET
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x5B0B5C80
struct FPreviewAttachedObjectPair
{
	unsigned char                                      UnknownData00[0x5B0B5C80];                                // 0x0000(0x5B0B5C80) MISSED OFFSET
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// 0x5B0B5C00
struct FPreviewMeshCollectionEntry
{
	unsigned char                                      UnknownData00[0x5B0B5C00];                                // 0x0000(0x5B0B5C00) MISSED OFFSET
};

// ScriptStruct Engine.PrimitiveComponentInstanceData
// 0xA8CC0 (0x5B0B5A80 - 0x5B00CDC0)
struct FPrimitiveComponentInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0xA8CC0];                                   // 0x5B00CDC0(0xA8CC0) MISSED OFFSET
};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x5B0B5900
struct FSpriteCategoryInfo
{
	unsigned char                                      UnknownData00[0x5B0B5900];                                // 0x0000(0x5B0B5900) MISSED OFFSET
};

// ScriptStruct Engine.ReverbSettings
// 0x5B0B5680
struct FReverbSettings
{
	unsigned char                                      UnknownData00[0x5B0B5680];                                // 0x0000(0x5B0B5680) MISSED OFFSET
};

// ScriptStruct Engine.CompressedRichCurve
// 0x0000
struct FCompressedRichCurve
{

};

// ScriptStruct Engine.TransformBase
// 0x5B0B5380
struct FTransformBase
{
	unsigned char                                      UnknownData00[0x5B0B5380];                                // 0x0000(0x5B0B5380) MISSED OFFSET
};

// ScriptStruct Engine.TransformBaseConstraint
// 0x5B093DA0
struct FTransformBaseConstraint
{
	unsigned char                                      UnknownData00[0x5B093DA0];                                // 0x0000(0x5B093DA0) MISSED OFFSET
};

// ScriptStruct Engine.RigTransformConstraint
// 0x5B0B5400
struct FRigTransformConstraint
{
	unsigned char                                      UnknownData00[0x5B0B5400];                                // 0x0000(0x5B0B5400) MISSED OFFSET
};

// ScriptStruct Engine.Node
// 0x5B0B7200
struct FNode
{
	unsigned char                                      UnknownData00[0x5B0B7200];                                // 0x0000(0x5B0B7200) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource
// 0x5B0B6980
struct FRootMotionSource
{
	unsigned char                                      UnknownData00[0x5B0B6980];                                // 0x0000(0x5B0B6980) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// 0x5B093D00
struct FRootMotionFinishVelocitySettings
{
	unsigned char                                      UnknownData00[0x5B093D00];                                // 0x0000(0x5B093D00) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSourceStatus
// 0x5B0B6D80
struct FRootMotionSourceStatus
{
	unsigned char                                      UnknownData00[0x5B0B6D80];                                // 0x0000(0x5B0B6D80) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// 0xFFFFFFFFFFFFFD00 (0x5B0B6680 - 0x5B0B6980)
struct FRootMotionSource_JumpForce : public FRootMotionSource
{

};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// 0xFFFFFFFFFFFFFA00 (0x5B0B6380 - 0x5B0B6980)
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{

};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// 0x1900 (0x5B0B8280 - 0x5B0B6980)
struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
	unsigned char                                      UnknownData00[0x1900];                                    // 0x5B0B6980(0x1900) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// 0x1400 (0x5B0B7D80 - 0x5B0B6980)
struct FRootMotionSource_RadialForce : public FRootMotionSource
{
	unsigned char                                      UnknownData00[0x1400];                                    // 0x5B0B6980(0x1400) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// 0x1300 (0x5B0B7C80 - 0x5B0B6980)
struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
	unsigned char                                      UnknownData00[0x1300];                                    // 0x5B0B6980(0x1300) MISSED OFFSET
};

// ScriptStruct Engine.CameraExposureSettings
// 0x5B0B7580
struct FCameraExposureSettings
{
	unsigned char                                      UnknownData00[0x5B0B7580];                                // 0x0000(0x5B0B7580) MISSED OFFSET
};

// ScriptStruct Engine.LensSettings
// 0x5B0B9380
struct FLensSettings
{
	unsigned char                                      UnknownData00[0x5B0B9380];                                // 0x0000(0x5B0B9380) MISSED OFFSET
};

// ScriptStruct Engine.LensImperfectionSettings
// 0x5B0B9400
struct FLensImperfectionSettings
{
	unsigned char                                      UnknownData00[0x5B0B9400];                                // 0x0000(0x5B0B9400) MISSED OFFSET
};

// ScriptStruct Engine.LensBloomSettings
// 0x5B0B8E80
struct FLensBloomSettings
{
	unsigned char                                      UnknownData00[0x5B0B8E80];                                // 0x0000(0x5B0B8E80) MISSED OFFSET
};

// ScriptStruct Engine.ConvolutionBloomSettings
// 0x5B0B8F00
struct FConvolutionBloomSettings
{
	unsigned char                                      UnknownData00[0x5B0B8F00];                                // 0x0000(0x5B0B8F00) MISSED OFFSET
};

// ScriptStruct Engine.GaussianSumBloomSettings
// 0x5B0B8700
struct FGaussianSumBloomSettings
{
	unsigned char                                      UnknownData00[0x5B0B8700];                                // 0x0000(0x5B0B8700) MISSED OFFSET
};

// ScriptStruct Engine.FilmStockSettings
// 0x5B0B8480
struct FFilmStockSettings
{
	unsigned char                                      UnknownData00[0x5B0B8480];                                // 0x0000(0x5B0B8480) MISSED OFFSET
};

// ScriptStruct Engine.ColorGradingSettings
// 0x5B0BA000
struct FColorGradingSettings
{
	unsigned char                                      UnknownData00[0x5B0BA000];                                // 0x0000(0x5B0BA000) MISSED OFFSET
};

// ScriptStruct Engine.ColorGradePerRangeSettings
// 0x5B0BA180
struct FColorGradePerRangeSettings
{
	unsigned char                                      UnknownData00[0x5B0BA180];                                // 0x0000(0x5B0BA180) MISSED OFFSET
};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x5B0B9F00
struct FEngineShowFlagsSetting
{
	unsigned char                                      UnknownData00[0x5B0B9F00];                                // 0x0000(0x5B0B9F00) MISSED OFFSET
};

// ScriptStruct Engine.SimpleCurve
// 0x12CB00 (0x5B0B9D00 - 0x5AF8D200)
struct FSimpleCurve : public FRealCurve
{
	unsigned char                                      UnknownData00[0x12CB00];                                  // 0x5AF8D200(0x12CB00) MISSED OFFSET
};

// ScriptStruct Engine.SimpleCurveKey
// 0x5B0B9D80
struct FSimpleCurveKey
{
	unsigned char                                      UnknownData00[0x5B0B9D80];                                // 0x0000(0x5B0B9D80) MISSED OFFSET
};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x5B0B9A80
struct FSingleAnimationPlayData
{
	unsigned char                                      UnknownData00[0x5B0B9A80];                                // 0x0000(0x5B0B9A80) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMaterial
// 0x5B0B9900
struct FSkeletalMaterial
{
	unsigned char                                      UnknownData00[0x5B0B9900];                                // 0x0000(0x5B0B9900) MISSED OFFSET
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// 0x5B0BAE00
struct FClothingAssetData_Legacy
{
	unsigned char                                      UnknownData00[0x5B0BAE00];                                // 0x0000(0x5B0BAE00) MISSED OFFSET
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// 0x5B0BAF80
struct FClothPhysicsProperties_Legacy
{
	unsigned char                                      UnknownData00[0x5B0BAF80];                                // 0x0000(0x5B0BAF80) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x5B0BBC80
struct FSkeletalMeshLODInfo
{
	unsigned char                                      UnknownData00[0x5B0BBC80];                                // 0x0000(0x5B0BBC80) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x5B0BBE80
struct FSkeletalMeshOptimizationSettings
{
	unsigned char                                      UnknownData00[0x5B0BBE80];                                // 0x0000(0x5B0BBE80) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// 0x5B0BB880
struct FSkeletalMeshClothBuildParams
{
	unsigned char                                      UnknownData00[0x5B0BB880];                                // 0x0000(0x5B0BB880) MISSED OFFSET
};

// ScriptStruct Engine.BoneMirrorExport
// 0x5B0BB700
struct FBoneMirrorExport
{
	unsigned char                                      UnknownData00[0x5B0BB700];                                // 0x0000(0x5B0BB700) MISSED OFFSET
};

// ScriptStruct Engine.BoneMirrorInfo
// 0x5B0BB600
struct FBoneMirrorInfo
{
	unsigned char                                      UnknownData00[0x5B0BB600];                                // 0x0000(0x5B0BB600) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// 0xFFFFFFFFAF450500 (0x0000 - 0x50BAFB00)
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// 0xFFFFFFFFAF450500 (0x0000 - 0x50BAFB00)
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// 0x5B0BD100
struct FSkeletalMeshLODGroupSettings
{
	unsigned char                                      UnknownData00[0x5B0BD100];                                // 0x0000(0x5B0BD100) MISSED OFFSET
};

// ScriptStruct Engine.BoneFilter
// 0x5B0BD380
struct FBoneFilter
{
	unsigned char                                      UnknownData00[0x5B0BD380];                                // 0x0000(0x5B0BD380) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// 0x5B0934E0
struct FSkeletalMeshSamplingInfo
{
	unsigned char                                      UnknownData00[0x5B0934E0];                                // 0x0000(0x5B0934E0) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// 0x5B093580
struct FSkeletalMeshSamplingBuiltData
{
	unsigned char                                      UnknownData00[0x5B093580];                                // 0x0000(0x5B093580) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// 0x0000
struct FSkeletalMeshSamplingRegionBuiltData
{

};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// 0x0000
struct FSkeletalMeshSamplingLODBuiltData
{

};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// 0x5B0BCA80
struct FSkeletalMeshSamplingRegion
{
	unsigned char                                      UnknownData00[0x5B0BCA80];                                // 0x0000(0x5B0BCA80) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// 0x5B0BCD00
struct FSkeletalMeshSamplingRegionBoneFilter
{
	unsigned char                                      UnknownData00[0x5B0BCD00];                                // 0x0000(0x5B0BCD00) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// 0x5B0BCC00
struct FSkeletalMeshSamplingRegionMaterialFilter
{
	unsigned char                                      UnknownData00[0x5B0BCC00];                                // 0x0000(0x5B0BCC00) MISSED OFFSET
};

// ScriptStruct Engine.VirtualBone
// 0x5B0BC900
struct FVirtualBone
{
	unsigned char                                      UnknownData00[0x5B0BC900];                                // 0x0000(0x5B0BC900) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotGroup
// 0x5B0BC800
struct FAnimSlotGroup
{
	unsigned char                                      UnknownData00[0x5B0BC800];                                // 0x0000(0x5B0BC800) MISSED OFFSET
};

// ScriptStruct Engine.RigConfiguration
// 0x5B0BE700
struct FRigConfiguration
{
	unsigned char                                      UnknownData00[0x5B0BE700];                                // 0x0000(0x5B0BE700) MISSED OFFSET
};

// ScriptStruct Engine.NameMapping
// 0x5B0BC680
struct FNameMapping
{
	unsigned char                                      UnknownData00[0x5B0BC680];                                // 0x0000(0x5B0BC680) MISSED OFFSET
};

// ScriptStruct Engine.BoneReductionSetting
// 0x5B0931C0
struct FBoneReductionSetting
{
	unsigned char                                      UnknownData00[0x5B0931C0];                                // 0x0000(0x5B0931C0) MISSED OFFSET
};

// ScriptStruct Engine.ReferencePose
// 0x5B0BE580
struct FReferencePose
{
	unsigned char                                      UnknownData00[0x5B0BE580];                                // 0x0000(0x5B0BE580) MISSED OFFSET
};

// ScriptStruct Engine.BoneNode
// 0x5B0BE400
struct FBoneNode
{
	unsigned char                                      UnknownData00[0x5B0BE400];                                // 0x0000(0x5B0BE400) MISSED OFFSET
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x5B092FE0
struct FSkeletonToMeshLinkup
{
	unsigned char                                      UnknownData00[0x5B092FE0];                                // 0x0000(0x5B092FE0) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x5B092F40
struct FSkelMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0x5B092F40];                                // 0x0000(0x5B092F40) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// 0x5B0BE180
struct FSkelMeshSkinWeightInfo
{
	unsigned char                                      UnknownData00[0x5B0BE180];                                // 0x0000(0x5B0BE180) MISSED OFFSET
};

// ScriptStruct Engine.SkinWeightProfileInfo
// 0x5B0BE000
struct FSkinWeightProfileInfo
{
	unsigned char                                      UnknownData00[0x5B0BE000];                                // 0x0000(0x5B0BE000) MISSED OFFSET
};

// ScriptStruct Engine.TentDistribution
// 0x5B0BDE80
struct FTentDistribution
{
	unsigned char                                      UnknownData00[0x5B0BDE80];                                // 0x0000(0x5B0BDE80) MISSED OFFSET
};

// ScriptStruct Engine.PrecomputedSkyLightInstanceData
// 0xB0FC0 (0x5B0BDD80 - 0x5B00CDC0)
struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0xB0FC0];                                   // 0x5B00CDC0(0xB0FC0) MISSED OFFSET
};

// ScriptStruct Engine.SmartNameContainer
// 0x0000
struct FSmartNameContainer
{

};

// ScriptStruct Engine.SmartNameMapping
// 0x0000
struct FSmartNameMapping
{

};

// ScriptStruct Engine.CurveMetaData
// 0x0000
struct FCurveMetaData
{

};

// ScriptStruct Engine.SoundAttenuationSettings
// 0xD35C0 (0x5B0C0F00 - 0x5AFED940)
struct FSoundAttenuationSettings : public FBaseAttenuationSettings
{
	unsigned char                                      UnknownData00[0xD35C0];                                   // 0x5AFED940(0xD35C0) MISSED OFFSET
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// 0x5B092D60
struct FSoundAttenuationPluginSettings
{
	unsigned char                                      UnknownData00[0x5B092D60];                                // 0x0000(0x5B092D60) MISSED OFFSET
};

// ScriptStruct Engine.AttenuationSubmixSendSettings
// 0x5B0BF500
struct FAttenuationSubmixSendSettings
{
	unsigned char                                      UnknownData00[0x5B0BF500];                                // 0x0000(0x5B0BF500) MISSED OFFSET
};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x5B0C0D80
struct FPassiveSoundMixModifier
{
	unsigned char                                      UnknownData00[0x5B0C0D80];                                // 0x0000(0x5B0C0D80) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassProperties
// 0x5B0C0300
struct FSoundClassProperties
{
	unsigned char                                      UnknownData00[0x5B0C0300];                                // 0x0000(0x5B0C0300) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassEditorData
// 0x0000
struct FSoundClassEditorData
{

};

// ScriptStruct Engine.SoundConcurrencySettings
// 0x5B0C2000
struct FSoundConcurrencySettings
{
	unsigned char                                      UnknownData00[0x5B0C2000];                                // 0x0000(0x5B0C2000) MISSED OFFSET
};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0000
struct FSoundNodeEditorData
{

};

// ScriptStruct Engine.SourceEffectChainEntry
// 0x5B0C1F00
struct FSourceEffectChainEntry
{
	unsigned char                                      UnknownData00[0x5B0C1F00];                                // 0x0000(0x5B0C1F00) MISSED OFFSET
};

// ScriptStruct Engine.SoundGroup
// 0x5B0C1D00
struct FSoundGroup
{
	unsigned char                                      UnknownData00[0x5B0C1D00];                                // 0x0000(0x5B0C1D00) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassAdjuster
// 0x5B0C1A00
struct FSoundClassAdjuster
{
	unsigned char                                      UnknownData00[0x5B0C1A00];                                // 0x0000(0x5B0C1A00) MISSED OFFSET
};

// ScriptStruct Engine.AudioEQEffect
// 0x5B0C1400
struct FAudioEQEffect : public FAudioEffectParameters
{
	unsigned char                                      UnknownData00[0x5B0C1400];                                // 0x0000(0x5B0C1400) MISSED OFFSET
};

// ScriptStruct Engine.DistanceDatum
// 0x5B0C1180
struct FDistanceDatum
{
	unsigned char                                      UnknownData00[0x5B0C1180];                                // 0x0000(0x5B0C1180) MISSED OFFSET
};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x5B0C2F00
struct FModulatorContinuousParams
{
	unsigned char                                      UnknownData00[0x5B0C2F00];                                // 0x0000(0x5B0C2F00) MISSED OFFSET
};

// ScriptStruct Engine.SoundSourceBusSendInfo
// 0x5B095240
struct FSoundSourceBusSendInfo
{
	unsigned char                                      UnknownData00[0x5B095240];                                // 0x0000(0x5B095240) MISSED OFFSET
};

// ScriptStruct Engine.SoundSubmixSendInfo
// 0x5B0951A0
struct FSoundSubmixSendInfo
{
	unsigned char                                      UnknownData00[0x5B0951A0];                                // 0x0000(0x5B0951A0) MISSED OFFSET
};

// ScriptStruct Engine.SoundWaveEnvelopeTimeData
// 0x5B0C2600
struct FSoundWaveEnvelopeTimeData
{
	unsigned char                                      UnknownData00[0x5B0C2600];                                // 0x0000(0x5B0C2600) MISSED OFFSET
};

// ScriptStruct Engine.SoundWaveSpectralTimeData
// 0x5B095100
struct FSoundWaveSpectralTimeData
{
	unsigned char                                      UnknownData00[0x5B095100];                                // 0x0000(0x5B095100) MISSED OFFSET
};

// ScriptStruct Engine.SoundWaveSpectralDataEntry
// 0x5B0C2400
struct FSoundWaveSpectralDataEntry
{
	unsigned char                                      UnknownData00[0x5B0C2400];                                // 0x0000(0x5B0C2400) MISSED OFFSET
};

// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// 0x5B0C2280
struct FSoundWaveEnvelopeDataPerSound
{
	unsigned char                                      UnknownData00[0x5B0C2280];                                // 0x0000(0x5B0C2280) MISSED OFFSET
};

// ScriptStruct Engine.SoundWaveSpectralDataPerSound
// 0x5B095060
struct FSoundWaveSpectralDataPerSound
{
	unsigned char                                      UnknownData00[0x5B095060];                                // 0x0000(0x5B095060) MISSED OFFSET
};

// ScriptStruct Engine.SoundWaveSpectralData
// 0x5B0C4080
struct FSoundWaveSpectralData
{
	unsigned char                                      UnknownData00[0x5B0C4080];                                // 0x0000(0x5B0C4080) MISSED OFFSET
};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0000
struct FStreamedAudioPlatformData
{

};

// ScriptStruct Engine.SplineInstanceData
// 0xB6EC0 (0x5B0C3C80 - 0x5B00CDC0)
struct FSplineInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0xB6EC0];                                   // 0x5B00CDC0(0xB6EC0) MISSED OFFSET
};

// ScriptStruct Engine.SplineCurves
// 0x5B0C3D80
struct FSplineCurves
{
	unsigned char                                      UnknownData00[0x5B0C3D80];                                // 0x0000(0x5B0C3D80) MISSED OFFSET
};

// ScriptStruct Engine.SplinePoint
// 0x5B0C3900
struct FSplinePoint
{
	unsigned char                                      UnknownData00[0x5B0C3900];                                // 0x0000(0x5B0C3900) MISSED OFFSET
};

// ScriptStruct Engine.SplineMeshInstanceData
// 0xB6940 (0x5B0C3700 - 0x5B00CDC0)
struct FSplineMeshInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0xB6940];                                   // 0x5B00CDC0(0xB6940) MISSED OFFSET
};

// ScriptStruct Engine.SplineMeshParams
// 0x5B0C3200
struct FSplineMeshParams
{
	unsigned char                                      UnknownData00[0x5B0C3200];                                // 0x0000(0x5B0C3200) MISSED OFFSET
};

// ScriptStruct Engine.MaterialRemapIndex
// 0x5B0C5200
struct FMaterialRemapIndex
{
	unsigned char                                      UnknownData00[0x5B0C5200];                                // 0x0000(0x5B0C5200) MISSED OFFSET
};

// ScriptStruct Engine.StaticMaterial
// 0x5B0C5000
struct FStaticMaterial
{
	unsigned char                                      UnknownData00[0x5B0C5000];                                // 0x0000(0x5B0C5000) MISSED OFFSET
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x5B0C4E00
struct FAssetEditorOrbitCameraPosition
{
	unsigned char                                      UnknownData00[0x5B0C4E00];                                // 0x0000(0x5B0C4E00) MISSED OFFSET
};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x5B0AA300
struct FMeshSectionInfoMap
{
	unsigned char                                      UnknownData00[0x5B0AA300];                                // 0x0000(0x5B0AA300) MISSED OFFSET
};

// ScriptStruct Engine.MeshSectionInfo
// 0x5B0C4B00
struct FMeshSectionInfo
{
	unsigned char                                      UnknownData00[0x5B0C4B00];                                // 0x0000(0x5B0C4B00) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x5B0C4880
struct FStaticMeshSourceModel
{
	unsigned char                                      UnknownData00[0x5B0C4880];                                // 0x0000(0x5B0C4880) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x5B0C4400
struct FStaticMeshOptimizationSettings
{
	unsigned char                                      UnknownData00[0x5B0C4400];                                // 0x0000(0x5B0C4400) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshComponentInstanceData
// 0x10400 (0x5B0C5E80 - 0x5B0B5A80)
struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData
{
	unsigned char                                      UnknownData00[0x10400];                                   // 0x5B0B5A80(0x10400) MISSED OFFSET
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// 0x5B0C6300
struct FStreamingTextureBuildInfo
{
	unsigned char                                      UnknownData00[0x5B0C6300];                                // 0x0000(0x5B0C6300) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshVertexColorLODData
// 0x5B094CA0
struct FStaticMeshVertexColorLODData
{
	unsigned char                                      UnknownData00[0x5B094CA0];                                // 0x0000(0x5B094CA0) MISSED OFFSET
};

// ScriptStruct Engine.PaintedVertex
// 0x5B0C5F00
struct FPaintedVertex
{
	unsigned char                                      UnknownData00[0x5B0C5F00];                                // 0x0000(0x5B0C5F00) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x0000
struct FStaticMeshComponentLODInfo
{

};

// ScriptStruct Engine.StaticParameterSet
// 0x5B094A20
struct FStaticParameterSet
{
	unsigned char                                      UnknownData00[0x5B094A20];                                // 0x0000(0x5B094A20) MISSED OFFSET
};

// ScriptStruct Engine.StaticParameterBase
// 0x5B0C5C80
struct FStaticParameterBase
{
	unsigned char                                      UnknownData00[0x5B0C5C80];                                // 0x0000(0x5B0C5C80) MISSED OFFSET
};

// ScriptStruct Engine.StaticMaterialLayersParameter
// 0xFFFFFFFFFFFFFF80 (0x5B0C5C00 - 0x5B0C5C80)
struct FStaticMaterialLayersParameter : public FStaticParameterBase
{

};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// 0xFFFFFFFFFFFFFE00 (0x5B0C5A80 - 0x5B0C5C80)
struct FStaticTerrainLayerWeightParameter : public FStaticParameterBase
{

};

// ScriptStruct Engine.StaticComponentMaskParameter
// 0xFFFFFFFFFFFFFB80 (0x5B0C5800 - 0x5B0C5C80)
struct FStaticComponentMaskParameter : public FStaticParameterBase
{

};

// ScriptStruct Engine.StaticSwitchParameter
// 0xFFFFFFFFFFFFFA80 (0x5B0C5700 - 0x5B0C5C80)
struct FStaticSwitchParameter : public FStaticParameterBase
{

};

// ScriptStruct Engine.EquirectProps
// 0x5B0C5400
struct FEquirectProps
{
	unsigned char                                      UnknownData00[0x5B0C5400];                                // 0x0000(0x5B0C5400) MISSED OFFSET
};

// ScriptStruct Engine.StringCurve
// 0x139F80 (0x5B0C7300 - 0x5AF8D380)
struct FStringCurve : public FIndexedCurve
{
	unsigned char                                      UnknownData00[0x139F80];                                  // 0x5AF8D380(0x139F80) MISSED OFFSET
};

// ScriptStruct Engine.StringCurveKey
// 0x5B0C7380
struct FStringCurveKey
{
	unsigned char                                      UnknownData00[0x5B0C7380];                                // 0x0000(0x5B0C7380) MISSED OFFSET
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x5B0C6A80
struct FSubsurfaceProfileStruct
{
	unsigned char                                      UnknownData00[0x5B0C6A80];                                // 0x0000(0x5B0C6A80) MISSED OFFSET
};

// ScriptStruct Engine.TextureFormatSettings
// 0x5B0C6800
struct FTextureFormatSettings
{
	unsigned char                                      UnknownData00[0x5B0C6800];                                // 0x0000(0x5B0C6800) MISSED OFFSET
};

// ScriptStruct Engine.TexturePlatformData
// 0x0000
struct FTexturePlatformData
{

};

// ScriptStruct Engine.TextureSource
// 0x0000
struct FTextureSource
{

};

// ScriptStruct Engine.TextureSourceBlock
// 0x5B0C6500
struct FTextureSourceBlock
{
	unsigned char                                      UnknownData00[0x5B0C6500];                                // 0x0000(0x5B0C6500) MISSED OFFSET
};

// ScriptStruct Engine.TextureLODGroup
// 0x5B0C7E00
struct FTextureLODGroup
{
	unsigned char                                      UnknownData00[0x5B0C7E00];                                // 0x0000(0x5B0C7E00) MISSED OFFSET
};

// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
// 0x5B0C7B80
struct FStreamingRenderAssetPrimitiveInfo
{
	unsigned char                                      UnknownData00[0x5B0C7B80];                                // 0x0000(0x5B0C7B80) MISSED OFFSET
};

// ScriptStruct Engine.Timeline
// 0x5B0C8E00
struct FTimeline
{
	unsigned char                                      UnknownData00[0x5B0C8E00];                                // 0x0000(0x5B0C8E00) MISSED OFFSET
};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x5B0C7700
struct FTimelineLinearColorTrack
{
	unsigned char                                      UnknownData00[0x5B0C7700];                                // 0x0000(0x5B0C7700) MISSED OFFSET
};

// ScriptStruct Engine.TimelineFloatTrack
// 0x5B0C7480
struct FTimelineFloatTrack
{
	unsigned char                                      UnknownData00[0x5B0C7480];                                // 0x0000(0x5B0C7480) MISSED OFFSET
};

// ScriptStruct Engine.TimelineVectorTrack
// 0x5B0C9300
struct FTimelineVectorTrack
{
	unsigned char                                      UnknownData00[0x5B0C9300];                                // 0x0000(0x5B0C9300) MISSED OFFSET
};

// ScriptStruct Engine.TimelineEventEntry
// 0x5B0C9180
struct FTimelineEventEntry
{
	unsigned char                                      UnknownData00[0x5B0C9180];                                // 0x0000(0x5B0C9180) MISSED OFFSET
};

// ScriptStruct Engine.TTTrackBase
// 0x5B0C8D00
struct FTTTrackBase
{
	unsigned char                                      UnknownData00[0x5B0C8D00];                                // 0x0000(0x5B0C8D00) MISSED OFFSET
};

// ScriptStruct Engine.TTPropertyTrack
// 0xFFFFFFFFFFFFFF80 (0x5B0C8C80 - 0x5B0C8D00)
struct FTTPropertyTrack : public FTTTrackBase
{

};

// ScriptStruct Engine.TTLinearColorTrack
// 0xFFFFFFFFFFFFFF80 (0x5B0C8C00 - 0x5B0C8C80)
struct FTTLinearColorTrack : public FTTPropertyTrack
{

};

// ScriptStruct Engine.TTVectorTrack
// 0xFFFFFFFFFFFFFF00 (0x5B0C8B80 - 0x5B0C8C80)
struct FTTVectorTrack : public FTTPropertyTrack
{

};

// ScriptStruct Engine.TTFloatTrack
// 0xFFFFFFFFFFFFFE80 (0x5B0C8B00 - 0x5B0C8C80)
struct FTTFloatTrack : public FTTPropertyTrack
{

};

// ScriptStruct Engine.TTEventTrack
// 0xFFFFFFFFFFFFFD00 (0x5B0C8A00 - 0x5B0C8D00)
struct FTTEventTrack : public FTTTrackBase
{

};

// ScriptStruct Engine.TimeStretchCurveInstance
// 0x5B0C8980
struct FTimeStretchCurveInstance
{
	unsigned char                                      UnknownData00[0x5B0C8980];                                // 0x0000(0x5B0C8980) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurve
// 0x5B0C8680
struct FTimeStretchCurve
{
	unsigned char                                      UnknownData00[0x5B0C8680];                                // 0x0000(0x5B0C8680) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurveMarker
// 0x5B0C8780
struct FTimeStretchCurveMarker
{
	unsigned char                                      UnknownData00[0x5B0C8780];                                // 0x0000(0x5B0C8780) MISSED OFFSET
};

// ScriptStruct Engine.TouchInputControl
// 0x5B0CA300
struct FTouchInputControl
{
	unsigned char                                      UnknownData00[0x5B0CA300];                                // 0x0000(0x5B0CA300) MISSED OFFSET
};

// ScriptStruct Engine.HardwareCursorReference
// 0x5B0CA200
struct FHardwareCursorReference
{
	unsigned char                                      UnknownData00[0x5B0CA200];                                // 0x0000(0x5B0CA200) MISSED OFFSET
};

// ScriptStruct Engine.VirtualTextureBuildSettings
// 0x5B0CA000
struct FVirtualTextureBuildSettings
{
	unsigned char                                      UnknownData00[0x5B0CA000];                                // 0x0000(0x5B0CA000) MISSED OFFSET
};

// ScriptStruct Engine.VirtualTextureSpacePoolConfig
// 0x5B0C9D80
struct FVirtualTextureSpacePoolConfig
{
	unsigned char                                      UnknownData00[0x5B0C9D80];                                // 0x0000(0x5B0C9D80) MISSED OFFSET
};

// ScriptStruct Engine.VoiceSettings
// 0x5B0C9C00
struct FVoiceSettings
{
	unsigned char                                      UnknownData00[0x5B0C9C00];                                // 0x0000(0x5B0C9C00) MISSED OFFSET
};

// ScriptStruct Engine.StreamingLevelsToConsider
// 0x5B094480
struct FStreamingLevelsToConsider
{
	unsigned char                                      UnknownData00[0x5B094480];                                // 0x0000(0x5B094480) MISSED OFFSET
};

// ScriptStruct Engine.LevelStreamingWrapper
// 0x5B0C9B00
struct FLevelStreamingWrapper
{
	unsigned char                                      UnknownData00[0x5B0C9B00];                                // 0x0000(0x5B0C9B00) MISSED OFFSET
};

// ScriptStruct Engine.LevelCollection
// 0x5B0C9880
struct FLevelCollection
{
	unsigned char                                      UnknownData00[0x5B0C9880];                                // 0x0000(0x5B0C9880) MISSED OFFSET
};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0xFFFFFFFFAF450500 (0x0000 - 0x50BAFB00)
struct FEndPhysicsTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0xFFFFFFFFAF450500 (0x0000 - 0x50BAFB00)
struct FStartPhysicsTickFunction : public FTickFunction
{

};

// ScriptStruct Engine.LevelViewportInfo
// 0x5B0C9680
struct FLevelViewportInfo
{
	unsigned char                                      UnknownData00[0x5B0C9680];                                // 0x0000(0x5B0C9680) MISSED OFFSET
};

// ScriptStruct Engine.WorldPSCPool
// 0x5B0AAE40
struct FWorldPSCPool
{
	unsigned char                                      UnknownData00[0x5B0AAE40];                                // 0x0000(0x5B0AAE40) MISSED OFFSET
};

// ScriptStruct Engine.PSCPool
// 0x5B094200
struct FPSCPool
{
	unsigned char                                      UnknownData00[0x5B094200];                                // 0x0000(0x5B094200) MISSED OFFSET
};

// ScriptStruct Engine.PSCPoolElem
// 0x5B0CB480
struct FPSCPoolElem
{
	unsigned char                                      UnknownData00[0x5B0CB480];                                // 0x0000(0x5B0CB480) MISSED OFFSET
};

// ScriptStruct Engine.BroadphaseSettings
// 0x5B0CB180
struct FBroadphaseSettings
{
	unsigned char                                      UnknownData00[0x5B0CB180];                                // 0x0000(0x5B0CB180) MISSED OFFSET
};

// ScriptStruct Engine.HierarchicalSimplification
// 0x5B0CAB80
struct FHierarchicalSimplification
{
	unsigned char                                      UnknownData00[0x5B0CAB80];                                // 0x0000(0x5B0CAB80) MISSED OFFSET
};

// ScriptStruct Engine.NetViewer
// 0x5B0CA900
struct FNetViewer
{
	unsigned char                                      UnknownData00[0x5B0CA900];                                // 0x0000(0x5B0CA900) MISSED OFFSET
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x5B0CBC00
struct FLightmassWorldInfoSettings
{
	unsigned char                                      UnknownData00[0x5B0CBC00];                                // 0x0000(0x5B0CBC00) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
