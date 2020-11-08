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

// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success  = 0,
	EPathFollowingResult__Blocked  = 1,
	EPathFollowingResult__OffPath  = 2,
	EPathFollowingResult__Aborted  = 3,
	EPathFollowingResult__Skipped_DEPRECATED = 4,
	EPathFollowingResult__Invalid  = 5,
	EPathFollowingResult__EPathFollowingResult_MAX = 6
};


// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing    = 0,
	EEnvQueryStatus__Success       = 1,
	EEnvQueryStatus__Failed        = 2,
	EEnvQueryStatus__Aborted       = 3,
	EEnvQueryStatus__OwnerLost     = 4,
	EEnvQueryStatus__MissingParam  = 5,
	EEnvQueryStatus__EEnvQueryStatus_MAX = 6
};


// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
	EAISenseNotifyType__OnEveryPerception = 0,
	EAISenseNotifyType__OnPerceptionChange = 1,
	EAISenseNotifyType__EAISenseNotifyType_MAX = 2
};


// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
	EAITaskPriority__Lowest        = 0,
	EAITaskPriority__Low           = 1,
	EAITaskPriority__AutonomousAI  = 2,
	EAITaskPriority__High          = 3,
	EAITaskPriority__Ultimate      = 4,
	EAITaskPriority__EAITaskPriority_MAX = 5
};


// Enum AIModule.EGenericAICheck
enum class EGenericAICheck : uint8_t
{
	EGenericAICheck__Less          = 0,
	EGenericAICheck__LessOrEqual   = 1,
	EGenericAICheck__Equal         = 2,
	EGenericAICheck__NotEqual      = 3,
	EGenericAICheck__GreaterOrEqual = 4,
	EGenericAICheck__Greater       = 5,
	EGenericAICheck__IsTrue        = 6,
	EGenericAICheck__MAX           = 7
};


// Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
	EAILockSource__Animation       = 0,
	EAILockSource__Logic           = 1,
	EAILockSource__Script          = 2,
	EAILockSource__Gameplay        = 3,
	EAILockSource__MAX             = 4
};


// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript = 0,
	EAIRequestPriority__Logic      = 1,
	EAIRequestPriority__HardScript = 2,
	EAIRequestPriority__Reaction   = 3,
	EAIRequestPriority__Ultimate   = 4,
	EAIRequestPriority__MAX        = 5
};


// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid  = 0,
	EPawnActionEventType__FailedToStart = 1,
	EPawnActionEventType__InstantAbort = 2,
	EPawnActionEventType__FinishedAborting = 3,
	EPawnActionEventType__FinishedExecution = 4,
	EPawnActionEventType__Push     = 5,
	EPawnActionEventType__EPawnActionEventType_MAX = 6
};


// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
	EPawnActionResult__NotStarted  = 0,
	EPawnActionResult__InProgress  = 1,
	EPawnActionResult__Success     = 2,
	EPawnActionResult__Failed      = 3,
	EPawnActionResult__Aborted     = 4,
	EPawnActionResult__EPawnActionResult_MAX = 5
};


// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NeverStarted = 0,
	EPawnActionAbortState__NotBeingAborted = 1,
	EPawnActionAbortState__MarkPendingAbort = 2,
	EPawnActionAbortState__LatentAbortInProgress = 3,
	EPawnActionAbortState__AbortDone = 4,
	EPawnActionAbortState__MAX     = 5
};


// Enum AIModule.FAIDistanceType
enum class EFAIDistanceType : uint8_t
{
	FAIDistanceType__Distance3D    = 0,
	FAIDistanceType__Distance2D    = 1,
	FAIDistanceType__DistanceZ     = 2,
	FAIDistanceType__MAX           = 3
};


// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default         = 0,
	EAIOptionFlag__Enable          = 1,
	EAIOptionFlag__Disable         = 2,
	EAIOptionFlag__MAX             = 3
};


// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None         = 0,
	EBTFlowAbortMode__LowerPriority = 1,
	EBTFlowAbortMode__Self         = 2,
	EBTFlowAbortMode__Both         = 3,
	EBTFlowAbortMode__EBTFlowAbortMode_MAX = 4
};


// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded       = 0,
	EBTNodeResult__Failed          = 1,
	EBTNodeResult__Aborted         = 2,
	EBTNodeResult__InProgress      = 3,
	EBTNodeResult__EBTNodeResult_MAX = 4
};


// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal       = 0,
	ETextKeyOperation__NotEqual    = 1,
	ETextKeyOperation__Contain     = 2,
	ETextKeyOperation__NotContain  = 3,
	ETextKeyOperation__ETextKeyOperation_MAX = 4
};


// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal = 0,
	EArithmeticKeyOperation__NotEqual = 1,
	EArithmeticKeyOperation__Less  = 2,
	EArithmeticKeyOperation__LessOrEqual = 3,
	EArithmeticKeyOperation__Greater = 4,
	EArithmeticKeyOperation__GreaterOrEqual = 5,
	EArithmeticKeyOperation__EArithmeticKeyOperation_MAX = 6
};


// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set        = 0,
	EBasicKeyOperation__NotSet     = 1,
	EBasicKeyOperation__EBasicKeyOperation_MAX = 2
};


// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground = 0,
	EBTParallelMode__WaitForBackground = 1,
	EBTParallelMode__EBTParallelMode_MAX = 2
};


// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid     = 0,
	EBTDecoratorLogic__Test        = 1,
	EBTDecoratorLogic__And         = 2,
	EBTDecoratorLogic__Or          = 3,
	EBTDecoratorLogic__Not         = 4,
	EBTDecoratorLogic__EBTDecoratorLogic_MAX = 5
};


// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode       = 0,
	EBTChildIndex__TaskNode        = 1,
	EBTChildIndex__EBTChildIndex_MAX = 2
};


// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange = 0,
	EBTBlackboardRestart__ResultChange = 1,
	EBTBlackboardRestart__EBTBlackboardRestart_MAX = 2
};


// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal = 0,
	EBlackBoardEntryComparison__NotEqual = 1,
	EBlackBoardEntryComparison__EBlackBoardEntryComparison_MAX = 2
};


// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D = 0,
	EPathExistanceQueryType__HierarchicalQuery = 1,
	EPathExistanceQueryType__RegularPathFinding = 2,
	EPathExistanceQueryType__EPathExistanceQueryType_MAX = 3
};


// Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t
{
	EPointOnCircleSpacingMethod__BySpaceBetween = 0,
	EPointOnCircleSpacingMethod__ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod__EPointOnCircleSpacingMethod_MAX = 2
};


// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
	EEQSNormalizationType__Absolute = 0,
	EEQSNormalizationType__RelativeToScores = 1,
	EEQSNormalizationType__EEQSNormalizationType_MAX = 2
};


// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D   = 0,
	EEnvTestDistance__Distance2D   = 1,
	EEnvTestDistance__DistanceZ    = 2,
	EEnvTestDistance__DistanceAbsoluteZ = 3,
	EEnvTestDistance__EEnvTestDistance_MAX = 4
};


// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
	EEnvTestDot__Dot3D             = 0,
	EEnvTestDot__Dot2D             = 1,
	EEnvTestDot__EEnvTestDot_MAX   = 2
};


// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist = 0,
	EEnvTestPathfinding__PathCost  = 1,
	EEnvTestPathfinding__PathLength = 2,
	EEnvTestPathfinding__EEnvTestPathfinding_MAX = 3
};


// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None    = 0,
	EEnvQueryTestClamping__SpecifiedValue = 1,
	EEnvQueryTestClamping__FilterThreshold = 2,
	EEnvQueryTestClamping__EEnvQueryTestClamping_MAX = 3
};


// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints       = 0,
	EEnvDirection__Rotation        = 1,
	EEnvDirection__EEnvDirection_MAX = 2
};


// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{
	EEnvOverlapShape__Box          = 0,
	EEnvOverlapShape__Sphere       = 1,
	EEnvOverlapShape__Capsule      = 2,
	EEnvOverlapShape__EEnvOverlapShape_MAX = 3
};


// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line           = 0,
	EEnvTraceShape__Box            = 1,
	EEnvTraceShape__Sphere         = 2,
	EEnvTraceShape__Capsule        = 3,
	EEnvTraceShape__EEnvTraceShape_MAX = 4
};


// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None           = 0,
	EEnvQueryTrace__Navigation     = 1,
	EEnvQueryTrace__Geometry       = 2,
	EEnvQueryTrace__NavigationOverLedges = 3,
	EEnvQueryTrace__EEnvQueryTrace_MAX = 4
};


// Enum AIModule.EAIParamType
enum class EAIParamType : uint8_t
{
	EAIParamType__Float            = 0,
	EAIParamType__Int              = 1,
	EAIParamType__Bool             = 2,
	EAIParamType__MAX              = 3
};


// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float          = 0,
	EEnvQueryParam__Int            = 1,
	EEnvQueryParam__Bool           = 2,
	EEnvQueryParam__EEnvQueryParam_MAX = 3
};


// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult = 0,
	EEnvQueryRunMode__RandomBest5Pct = 1,
	EEnvQueryRunMode__RandomBest25Pct = 2,
	EEnvQueryRunMode__AllMatching  = 3,
	EEnvQueryRunMode__EEnvQueryRunMode_MAX = 4
};


// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore = 0,
	EEnvTestScoreOperator__MinScore = 1,
	EEnvTestScoreOperator__MaxScore = 2,
	EEnvTestScoreOperator__Multiply = 3,
	EEnvTestScoreOperator__EEnvTestScoreOperator_MAX = 4
};


// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass = 0,
	EEnvTestFilterOperator__AnyPass = 1,
	EEnvTestFilterOperator__EEnvTestFilterOperator_MAX = 2
};


// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
	EEnvTestCost__Low              = 0,
	EEnvTestCost__Medium           = 1,
	EEnvTestCost__High             = 2,
	EEnvTestCost__EEnvTestCost_MAX = 3
};


// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None           = 0,
	EEnvTestWeight__Square         = 1,
	EEnvTestWeight__Inverse        = 2,
	EEnvTestWeight__Unused         = 3,
	EEnvTestWeight__Constant       = 4,
	EEnvTestWeight__Skip           = 5,
	EEnvTestWeight__EEnvTestWeight_MAX = 6
};


// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear  = 0,
	EEnvTestScoreEquation__Square  = 1,
	EEnvTestScoreEquation__InverseLinear = 2,
	EEnvTestScoreEquation__SquareRoot = 3,
	EEnvTestScoreEquation__Constant = 4,
	EEnvTestScoreEquation__EEnvTestScoreEquation_MAX = 5
};


// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum    = 0,
	EEnvTestFilterType__Maximum    = 1,
	EEnvTestFilterType__Range      = 2,
	EEnvTestFilterType__Match      = 3,
	EEnvTestFilterType__EEnvTestFilterType_MAX = 4
};


// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter        = 0,
	EEnvTestPurpose__Score         = 1,
	EEnvTestPurpose__FilterAndScore = 2,
	EEnvTestPurpose__EEnvTestPurpose_MAX = 3
};


// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode__All   = 0,
	EEnvQueryHightlightMode__Best5Pct = 1,
	EEnvQueryHightlightMode__Best25Pct = 2,
	EEnvQueryHightlightMode__EEnvQueryHightlightMode_MAX = 3
};


// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly        = 0,
	ETeamAttitude__Neutral         = 1,
	ETeamAttitude__Hostile         = 2,
	ETeamAttitude__ETeamAttitude_MAX = 3
};


// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed = 0,
	EPathFollowingRequestResult__AlreadyAtGoal = 1,
	EPathFollowingRequestResult__RequestSuccessful = 2,
	EPathFollowingRequestResult__EPathFollowingRequestResult_MAX = 3
};


// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error    = 0,
	EPathFollowingAction__NoMove   = 1,
	EPathFollowingAction__DirectMove = 2,
	EPathFollowingAction__PartialPath = 3,
	EPathFollowingAction__PathToGoal = 4,
	EPathFollowingAction__EPathFollowingAction_MAX = 5
};


// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle     = 0,
	EPathFollowingStatus__Waiting  = 1,
	EPathFollowingStatus__Paused   = 2,
	EPathFollowingStatus__Moving   = 3,
	EPathFollowingStatus__EPathFollowingStatus_MAX = 4
};


// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess = 0,
	EPawnActionFailHandling__IgnoreFailure = 1,
	EPawnActionFailHandling__EPawnActionFailHandling_MAX = 2
};


// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy__EPawnSubActionTriggeringPolicy_MAX = 2
};


// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding = 0,
	EPawnActionMoveMode__StraightLine = 1,
	EPawnActionMoveMode__EPawnActionMoveMode_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIModule.AIRequestID
// 0x5ABF9000
struct FAIRequestID
{
	unsigned char                                      UnknownData00[0x5ABF9000];                                // 0x0000(0x5ABF9000) MISSED OFFSET
};

// ScriptStruct AIModule.AIStimulus
// 0x5ABFA380
struct FAIStimulus
{
	unsigned char                                      UnknownData00[0x5ABFA380];                                // 0x0000(0x5ABFA380) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderValue
// 0x5B0D3080
struct FAIDataProviderValue
{
	unsigned char                                      UnknownData00[0x5B0D3080];                                // 0x0000(0x5B0D3080) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderTypedValue
// 0xFFFFFFFFFFFC2800 (0x5B095880 - 0x5B0D3080)
struct FAIDataProviderTypedValue : public FAIDataProviderValue
{

};

// ScriptStruct AIModule.AIDataProviderBoolValue
// 0x3D780 (0x5B0D3000 - 0x5B095880)
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{
	unsigned char                                      UnknownData00[0x3D780];                                   // 0x5B095880(0x3D780) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// 0x3D700 (0x5B0D2F80 - 0x5B095880)
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{
	unsigned char                                      UnknownData00[0x3D700];                                   // 0x5B095880(0x3D700) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderIntValue
// 0x3D680 (0x5B0D2F00 - 0x5B095880)
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
{
	unsigned char                                      UnknownData00[0x3D680];                                   // 0x5B095880(0x3D680) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderStructValue
// 0xFFFFFFFFA4F2CF80 (0x0000 - 0x5B0D3080)
struct FAIDataProviderStructValue : public FAIDataProviderValue
{

};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// 0x5B0D2D80
struct FActorPerceptionBlueprintInfo
{
	unsigned char                                      UnknownData00[0x5B0D2D80];                                // 0x0000(0x5B0D2D80) MISSED OFFSET
};

// ScriptStruct AIModule.AISenseAffiliationFilter
// 0x5B0D2C00
struct FAISenseAffiliationFilter
{
	unsigned char                                      UnknownData00[0x5B0D2C00];                                // 0x0000(0x5B0D2C00) MISSED OFFSET
};

// ScriptStruct AIModule.AIDamageEvent
// 0x5B0D2980
struct FAIDamageEvent
{
	unsigned char                                      UnknownData00[0x5B0D2980];                                // 0x0000(0x5B0D2980) MISSED OFFSET
};

// ScriptStruct AIModule.AINoiseEvent
// 0x5B0D2700
struct FAINoiseEvent
{
	unsigned char                                      UnknownData00[0x5B0D2700];                                // 0x0000(0x5B0D2700) MISSED OFFSET
};

// ScriptStruct AIModule.AIPredictionEvent
// 0x5B0D2600
struct FAIPredictionEvent
{
	unsigned char                                      UnknownData00[0x5B0D2600];                                // 0x0000(0x5B0D2600) MISSED OFFSET
};

// ScriptStruct AIModule.AISightEvent
// 0x5B0D2500
struct FAISightEvent
{
	unsigned char                                      UnknownData00[0x5B0D2500];                                // 0x0000(0x5B0D2500) MISSED OFFSET
};

// ScriptStruct AIModule.AITeamStimulusEvent
// 0x5B0D2400
struct FAITeamStimulusEvent
{
	unsigned char                                      UnknownData00[0x5B0D2400];                                // 0x0000(0x5B0D2400) MISSED OFFSET
};

// ScriptStruct AIModule.AITouchEvent
// 0x5B0D2300
struct FAITouchEvent
{
	unsigned char                                      UnknownData00[0x5B0D2300];                                // 0x0000(0x5B0D2300) MISSED OFFSET
};

// ScriptStruct AIModule.IntervalCountdown
// 0x5B0D2280
struct FIntervalCountdown
{
	unsigned char                                      UnknownData00[0x5B0D2280];                                // 0x0000(0x5B0D2280) MISSED OFFSET
};

// ScriptStruct AIModule.AIMoveRequest
// 0x5B0D2200
struct FAIMoveRequest
{
	unsigned char                                      UnknownData00[0x5B0D2200];                                // 0x0000(0x5B0D2200) MISSED OFFSET
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// 0x5B0D4200
struct FBehaviorTreeTemplateInfo
{
	unsigned char                                      UnknownData00[0x5B0D4200];                                // 0x0000(0x5B0D4200) MISSED OFFSET
};

// ScriptStruct AIModule.BlackboardKeySelector
// 0x5B0956A0
struct FBlackboardKeySelector
{
	unsigned char                                      UnknownData00[0x5B0956A0];                                // 0x0000(0x5B0956A0) MISSED OFFSET
};

// ScriptStruct AIModule.BlackboardEntry
// 0x5B0D3E80
struct FBlackboardEntry
{
	unsigned char                                      UnknownData00[0x5B0D3E80];                                // 0x0000(0x5B0D3E80) MISSED OFFSET
};

// ScriptStruct AIModule.BTCompositeChild
// 0x5B0D3B80
struct FBTCompositeChild
{
	unsigned char                                      UnknownData00[0x5B0D3B80];                                // 0x0000(0x5B0D3B80) MISSED OFFSET
};

// ScriptStruct AIModule.BTDecoratorLogic
// 0x5B0D3D00
struct FBTDecoratorLogic
{
	unsigned char                                      UnknownData00[0x5B0D3D00];                                // 0x0000(0x5B0D3D00) MISSED OFFSET
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// 0x5B095420
struct FCrowdAvoidanceSamplingPattern
{
	unsigned char                                      UnknownData00[0x5B095420];                                // 0x0000(0x5B095420) MISSED OFFSET
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
// 0x5B0D3580
struct FCrowdAvoidanceConfig
{
	unsigned char                                      UnknownData00[0x5B0D3580];                                // 0x0000(0x5B0D3580) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryInstanceCache
// 0x5B0D3500
struct FEnvQueryInstanceCache
{
	unsigned char                                      UnknownData00[0x5B0D3500];                                // 0x0000(0x5B0D3500) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryRequest
// 0x5B0D3380
struct FEnvQueryRequest
{
	unsigned char                                      UnknownData00[0x5B0D3380];                                // 0x0000(0x5B0D3380) MISSED OFFSET
};

// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// 0x5B0D5000
struct FEQSParametrizedQueryExecutionRequest
{
	unsigned char                                      UnknownData00[0x5B0D5000];                                // 0x0000(0x5B0D5000) MISSED OFFSET
};

// ScriptStruct AIModule.AIDynamicParam
// 0x5B0D5080
struct FAIDynamicParam
{
	unsigned char                                      UnknownData00[0x5B0D5080];                                // 0x0000(0x5B0D5080) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryResult
// 0x5B097B80
struct FEnvQueryResult
{
	unsigned char                                      UnknownData00[0x5B097B80];                                // 0x0000(0x5B097B80) MISSED OFFSET
};

// ScriptStruct AIModule.EnvOverlapData
// 0x5B0D4A80
struct FEnvOverlapData
{
	unsigned char                                      UnknownData00[0x5B0D4A80];                                // 0x0000(0x5B0D4A80) MISSED OFFSET
};

// ScriptStruct AIModule.EnvTraceData
// 0x5B0D6300
struct FEnvTraceData
{
	unsigned char                                      UnknownData00[0x5B0D6300];                                // 0x0000(0x5B0D6300) MISSED OFFSET
};

// ScriptStruct AIModule.EnvDirection
// 0x5B097900
struct FEnvDirection
{
	unsigned char                                      UnknownData00[0x5B097900];                                // 0x0000(0x5B097900) MISSED OFFSET
};

// ScriptStruct AIModule.EnvNamedValue
// 0x5B0D6100
struct FEnvNamedValue
{
	unsigned char                                      UnknownData00[0x5B0D6100];                                // 0x0000(0x5B0D6100) MISSED OFFSET
};

// ScriptStruct AIModule.GenericTeamId
// 0x5B0D6080
struct FGenericTeamId
{
	unsigned char                                      UnknownData00[0x5B0D6080];                                // 0x0000(0x5B0D6080) MISSED OFFSET
};

// ScriptStruct AIModule.PawnActionStack
// 0x5B0D6000
struct FPawnActionStack
{
	unsigned char                                      UnknownData00[0x5B0D6000];                                // 0x0000(0x5B0D6000) MISSED OFFSET
};

// ScriptStruct AIModule.PawnActionEvent
// 0x5B0D5F80
struct FPawnActionEvent
{
	unsigned char                                      UnknownData00[0x5B0D5F80];                                // 0x0000(0x5B0D5F80) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
