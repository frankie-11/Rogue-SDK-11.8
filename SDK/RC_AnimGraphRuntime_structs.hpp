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

// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner     = 0,
	ESphericalLimitType__Outer     = 1,
	ESphericalLimitType__ESphericalLimitType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component = 0,
	AnimPhysSimSpaceType__Actor    = 1,
	AnimPhysSimSpaceType__World    = 2,
	AnimPhysSimSpaceType__RootRelative = 3,
	AnimPhysSimSpaceType__BoneRelative = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5
};


// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend = 0,
	EBlendListTransitionType__Inertialization = 1,
	EBlendListTransitionType__EBlendListTransitionType_MAX = 2
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone   = 0,
	EDrivenDestinationMode__MorphTarget = 1,
	EDrivenDestinationMode__MaterialParameter = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput = 0,
	EDrivenBoneModificationMode__ReplaceComponent = 1,
	EDrivenBoneModificationMode__AddToRefPose = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None  = 0,
	EConstraintOffsetOption__Offset_RefPose = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX = 2
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate  = 0,
	CopyBoneDeltaMode__Copy        = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear    = 0,
	EInterpolationBlend__Cubic     = 1,
	EInterpolationBlend__Sinusoidal = 2,
	EInterpolationBlend__EaseInOutExponent2 = 3,
	EInterpolationBlend__EaseInOutExponent3 = 4,
	EInterpolationBlend__EaseInOutExponent4 = 5,
	EInterpolationBlend__EaseInOutExponent5 = 6,
	EInterpolationBlend__MAX       = 7
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};


// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add     = 0,
	EModifyCurveApplyMode__Scale   = 1,
	EModifyCurveApplyMode__Blend   = 2,
	EModifyCurveApplyMode__WeightedMovingAverage = 3,
	EModifyCurveApplyMode__RemapCurve = 4,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX = 5
};


// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses  = 0,
	EPoseDriverOutput__DriveCurves = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX = 2
};


// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation    = 0,
	EPoseDriverSource__Translation = 1,
	EPoseDriverSource__EPoseDriverSource_MAX = 2
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist = 0,
	EPoseDriverType__SwingOnly     = 1,
	EPoseDriverType__Translation   = 2,
	EPoseDriverType__EPoseDriverType_MAX = 3
};


// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot = 0,
	ESnapshotSourceMode__SnapshotPin = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX = 2
};


// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};


// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace = 0,
	ESimulationSpace__WorldSpace   = 1,
	ESimulationSpace__BaseBoneSpace = 2,
	ESimulationSpace__ESimulationSpace_MAX = 3
};


// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue = 0,
	EScaleChainInitialLength__Distance = 1,
	EScaleChainInitialLength__ChainLength = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX = 3
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset   = 0,
	ESequenceEvalReinit__StartPosition = 1,
	ESequenceEvalReinit__ExplicitTime = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3
};


// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None          = 0,
	ESplineBoneAxis__X             = 1,
	ESplineBoneAxis__Y             = 2,
	ESplineBoneAxis__Z             = 3,
	ESplineBoneAxis__ESplineBoneAxis_MAX = 4
};


// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t
{
	ERotationComponent__EulerX     = 0,
	ERotationComponent__EulerY     = 1,
	ERotationComponent__EulerZ     = 2,
	ERotationComponent__QuaternionAngle = 3,
	ERotationComponent__SwingAngle = 4,
	ERotationComponent__TwistAngle = 5,
	ERotationComponent__ERotationComponent_MAX = 6
};


// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t
{
	EEasingFuncType__Linear        = 0,
	EEasingFuncType__Sinusoidal    = 1,
	EEasingFuncType__Cubic         = 2,
	EEasingFuncType__QuadraticInOut = 3,
	EEasingFuncType__CubicInOut    = 4,
	EEasingFuncType__HermiteCubic  = 5,
	EEasingFuncType__QuarticInOut  = 6,
	EEasingFuncType__QuinticInOut  = 7,
	EEasingFuncType__CircularIn    = 8,
	EEasingFuncType__CircularOut   = 9,
	EEasingFuncType__CircularInOut = 10,
	EEasingFuncType__ExpIn         = 11,
	EEasingFuncType__ExpOut        = 12,
	EEasingFuncType__ExpInOut      = 13,
	EEasingFuncType__CustomCurve   = 14,
	EEasingFuncType__EEasingFuncType_MAX = 15
};


// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne = 0,
	ERBFNormalizeMethod__AlwaysNormalize = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian = 2,
	ERBFNormalizeMethod__NoNormalization = 3,
	ERBFNormalizeMethod__ERBFNormalizeMethod_MAX = 4
};


// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean  = 0,
	ERBFDistanceMethod__Quaternion = 1,
	ERBFDistanceMethod__SwingAngle = 2,
	ERBFDistanceMethod__TwistAngle = 3,
	ERBFDistanceMethod__DefaultMethod = 4,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX = 5
};


// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian     = 0,
	ERBFFunctionType__Exponential  = 1,
	ERBFFunctionType__Linear       = 2,
	ERBFFunctionType__Cubic        = 3,
	ERBFFunctionType__Quintic      = 4,
	ERBFFunctionType__DefaultFunction = 5,
	ERBFFunctionType__ERBFFunctionType_MAX = 6
};


// Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8_t
{
	ERBFSolverType__Additive       = 0,
	ERBFSolverType__Interpolative  = 1,
	ERBFSolverType__ERBFSolverType_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0xFFFFFFFFFFFFFB80 (0x5AEF9D00 - 0x5AEFA180)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x1080 (0x5AEFAD80 - 0x5AEF9D00)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	unsigned char                                      UnknownData00[0x1080];                                    // 0x5AEF9D00(0x1080) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0980 (0x5AEFAB00 - 0x5AEFA180)
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
	unsigned char                                      UnknownData00[0x980];                                     // 0x5AEFA180(0x0980) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0xFFFFFFFFFFFFFE80 (0x5AEFA980 - 0x5AEFAB00)
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x2000 (0x5AEFBD00 - 0x5AEF9D00)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	unsigned char                                      UnknownData00[0x2000];                                    // 0x5AEF9D00(0x2000) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x3180 (0x5AEFD300 - 0x5AEFA180)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	unsigned char                                      UnknownData00[0x3180];                                    // 0x5AEFA180(0x3180) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x5AF52220
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5AF52220];                                // 0x0000(0x5AF52220) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x5AEFF600
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5AEFF600];                                // 0x0000(0x5AEFF600) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// 0xFFFFFFFFFFFFF400 (0x5AEFEA00 - 0x5AEFF600)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// 0x11CD00 (0x5B016A00 - 0x5AEF9D00)
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
	unsigned char                                      UnknownData00[0x11CD00];                                  // 0x5AEF9D00(0x11CD00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x119280 (0x5B018880 - 0x5AEFF600)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x119280];                                  // 0x5AEFF600(0x119280) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// 0x5B018300
struct FRotationRetargetingInfo
{
	unsigned char                                      UnknownData00[0x5B018300];                                // 0x0000(0x5B018300) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x5B017A80
struct FAnimPhysPlanarLimit
{
	unsigned char                                      UnknownData00[0x5B017A80];                                // 0x0000(0x5B017A80) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x5B017700
struct FAnimPhysSphericalLimit
{
	unsigned char                                      UnknownData00[0x5B017700];                                // 0x0000(0x5B017700) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x5AFE6460
struct FAnimPhysConstraintSetup
{
	unsigned char                                      UnknownData00[0x5AFE6460];                                // 0x0000(0x5AFE6460) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x5B01A500
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B01A500];                                // 0x0000(0x5B01A500) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// 0xE6C80 (0x5AFE6280 - 0x5AEFF600)
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0xE6C80];                                   // 0x5AEFF600(0xE6C80) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// 0x5B01A280
struct FAngularRangeLimit
{
	unsigned char                                      UnknownData00[0x5B01A280];                                // 0x0000(0x5B01A280) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// 0x5B019D00
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B019D00];                                // 0x0000(0x5B019D00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// 0x5B019E00
struct FBlendBoneByChannelEntry
{
	unsigned char                                      UnknownData00[0x5B019E00];                                // 0x0000(0x5B019E00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0xC7A60 (0x5B019C80 - 0x5AF52220)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	unsigned char                                      UnknownData00[0xC7A60];                                   // 0x5AF52220(0xC7A60) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x93F20 (0x5AFE6140 - 0x5AF52220)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	unsigned char                                      UnknownData00[0x93F20];                                   // 0x5AF52220(0x93F20) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0xC78E0 (0x5B019B00 - 0x5AF52220)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	unsigned char                                      UnknownData00[0xC78E0];                                   // 0x5AF52220(0xC78E0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x11BB00 (0x5B01B100 - 0x5AEFF600)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x11BB00];                                  // 0x5AEFF600(0x11BB00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// 0x11B400 (0x5B01AA00 - 0x5AEFF600)
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x11B400];                                  // 0x5AEFF600(0x11B400) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// 0x5B01AB00
struct FBoneSocketTarget
{
	unsigned char                                      UnknownData00[0x5B01AB00];                                // 0x0000(0x5B01AB00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SocketReference
// 0x5B01AC00
struct FSocketReference
{
	unsigned char                                      UnknownData00[0x5B01AC00];                                // 0x0000(0x5B01AC00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// 0x11B080 (0x5B01A680 - 0x5AEFF600)
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x11B080];                                  // 0x5AEFF600(0x11B080) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.Constraint
// 0x5B01A700
struct FConstraint
{
	unsigned char                                      UnknownData00[0x5B01A700];                                // 0x0000(0x5B01A700) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x11CE80 (0x5B01C480 - 0x5AEFF600)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x11CE80];                                  // 0x5AEFF600(0x11CE80) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x11CA00 (0x5B01C000 - 0x5AEFF600)
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x11CA00];                                  // 0x5AEFF600(0x11CA00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x5B01BE80
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B01BE80];                                // 0x0000(0x5B01BE80) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// 0x5B01BC80
struct FAnimNode_CurveSource : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B01BC80];                                // 0x0000(0x5B01BC80) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x11C280 (0x5B01B880 - 0x5AEFF600)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x11C280];                                  // 0x5AEFF600(0x11C280) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x11E080 (0x5B01D680 - 0x5AEFF600)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x11E080];                                  // 0x5AEFF600(0x11E080) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x5B01CE00
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B01CE00];                                // 0x0000(0x5B01CE00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// 0x11D280 (0x5B01C880 - 0x5AEFF600)
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x11D280];                                  // 0x5AEFF600(0x11D280) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x5B01C980
struct FAnimLegIKDefinition
{
	unsigned char                                      UnknownData00[0x5B01C980];                                // 0x0000(0x5B01C980) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x0000
struct FAnimLegIKData
{

};

// ScriptStruct AnimGraphRuntime.IKChain
// 0x0000
struct FIKChain
{

};

// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x0000
struct FIKChainLink
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x11EE80 (0x5B01E480 - 0x5AEFF600)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x11EE80];                                  // 0x5AEFF600(0x11EE80) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// 0x5B01E300
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B01E300];                                // 0x0000(0x5B01E300) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x11E800 (0x5B01DE00 - 0x5AEFF600)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x11E800];                                  // 0x5AEFF600(0x11E800) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// 0x5B01DB80
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B01DB80];                                // 0x0000(0x5B01DB80) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// 0x5AFE54C0
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5AFE54C0];                                // 0x0000(0x5AFE54C0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x120100 (0x5B01F700 - 0x5AEFF600)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x120100];                                  // 0x5AEFF600(0x120100) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x124B00 (0x5B01F600 - 0x5AEFAB00)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
	unsigned char                                      UnknownData00[0x124B00];                                  // 0x5AEFAB00(0x124B00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x125400 (0x5B01FF00 - 0x5AEFAB00)
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
	unsigned char                                      UnknownData00[0x125400];                                  // 0x5AEFAB00(0x125400) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFParams
// 0x5B01EE80
struct FRBFParams
{
	unsigned char                                      UnknownData00[0x5B01EE80];                                // 0x0000(0x5B01EE80) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// 0x5AFE77C0
struct FPoseDriverTarget
{
	unsigned char                                      UnknownData00[0x5AFE77C0];                                // 0x0000(0x5AFE77C0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// 0x5B01E800
struct FPoseDriverTransform
{
	unsigned char                                      UnknownData00[0x5B01E800];                                // 0x0000(0x5B01E800) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// 0x5B01FB00
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B01FB00];                                // 0x0000(0x5B01FB00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x5AFE7400
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5AFE7400];                                // 0x0000(0x5AFE7400) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x5B020F80
struct FRandomPlayerSequenceEntry
{
	unsigned char                                      UnknownData00[0x5B020F80];                                // 0x0000(0x5B020F80) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x5B020F00
struct FAnimNode_RefPose : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B020F00];                                // 0x0000(0x5B020F00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// 0xFFFFFFFFA5100A00 (0x0000 - 0x5AEFF600)
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
// 0x121080 (0x5B020680 - 0x5AEFF600)
struct FAnimNode_RigidBody_Chaos : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x121080];                                  // 0x5AEFF600(0x121080) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x5B020380
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B020380];                                // 0x0000(0x5B020380) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x120B00 (0x5B020100 - 0x5AEFF600)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x120B00];                                  // 0x5AEFF600(0x120B00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// 0x5B021E00
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B021E00];                                // 0x0000(0x5B021E00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x5B021C80
struct FAnimNode_Slot : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B021C80];                                // 0x0000(0x5B021C80) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// 0x122080 (0x5B021680 - 0x5AEFF600)
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x122080];                                  // 0x5AEFF600(0x122080) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x5B021580
struct FSplineIKCachedBoneData
{
	unsigned char                                      UnknownData00[0x5B021580];                                // 0x0000(0x5B021580) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x123A80 (0x5B023080 - 0x5AEFF600)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x123A80];                                  // 0x5AEFF600(0x123A80) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// 0xFFFFFFFFA4FDD100 (0x0000 - 0x5B022F00)
struct FAnimNode_StateResult : public FAnimNode_Root
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x122E00 (0x5B022400 - 0x5AEFF600)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x122E00];                                  // 0x5AEFF600(0x122E00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RotationLimit
// 0x5B022A80
struct FRotationLimit
{
	unsigned char                                      UnknownData00[0x5B022A80];                                // 0x0000(0x5B022A80) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x124A00 (0x5B024000 - 0x5AEFF600)
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x124A00];                                  // 0x5AEFF600(0x124A00) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x5B024080
struct FReferenceBoneFrame
{
	unsigned char                                      UnknownData00[0x5B024080];                                // 0x0000(0x5B024080) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x124300 (0x5B023900 - 0x5AEFF600)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x124300];                                  // 0x5AEFF600(0x124300) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// 0x5B023400
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5B023400];                                // 0x0000(0x5B023400) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// 0x0000
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct AnimGraphRuntime.PositionHistory
// 0x5AFE6E60
struct FPositionHistory
{
	unsigned char                                      UnknownData00[0x5AFE6E60];                                // 0x0000(0x5AFE6E60) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// 0x5AFE6DC0
struct FRBFEntry
{
	unsigned char                                      UnknownData00[0x5AFE6DC0];                                // 0x0000(0x5AFE6DC0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// 0x3E340 (0x5B025100 - 0x5AFE6DC0)
struct FRBFTarget : public FRBFEntry
{
	unsigned char                                      UnknownData00[0x3E340];                                   // 0x5AFE6DC0(0x3E340) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
