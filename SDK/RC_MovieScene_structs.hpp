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

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto = 0,
	EMovieSceneKeyInterpolation__User = 1,
	EMovieSceneKeyInterpolation__Break = 2,
	EMovieSceneKeyInterpolation__Linear = 3,
	EMovieSceneKeyInterpolation__Constant = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5
};


// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t
{
	EMovieSceneBlendType__Invalid  = 0,
	EMovieSceneBlendType__Absolute = 1,
	EMovieSceneBlendType__Additive = 2,
	EMovieSceneBlendType__Relative = 3,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX = 4
};


// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t
{
	EMovieSceneBuiltInEasing__Linear = 0,
	EMovieSceneBuiltInEasing__SinIn = 1,
	EMovieSceneBuiltInEasing__SinOut = 2,
	EMovieSceneBuiltInEasing__SinInOut = 3,
	EMovieSceneBuiltInEasing__QuadIn = 4,
	EMovieSceneBuiltInEasing__QuadOut = 5,
	EMovieSceneBuiltInEasing__QuadInOut = 6,
	EMovieSceneBuiltInEasing__CubicIn = 7,
	EMovieSceneBuiltInEasing__CubicOut = 8,
	EMovieSceneBuiltInEasing__CubicInOut = 9,
	EMovieSceneBuiltInEasing__QuartIn = 10,
	EMovieSceneBuiltInEasing__QuartOut = 11,
	EMovieSceneBuiltInEasing__QuartInOut = 12,
	EMovieSceneBuiltInEasing__QuintIn = 13,
	EMovieSceneBuiltInEasing__QuintOut = 14,
	EMovieSceneBuiltInEasing__QuintInOut = 15,
	EMovieSceneBuiltInEasing__ExpoIn = 16,
	EMovieSceneBuiltInEasing__ExpoOut = 17,
	EMovieSceneBuiltInEasing__ExpoInOut = 18,
	EMovieSceneBuiltInEasing__CircIn = 19,
	EMovieSceneBuiltInEasing__CircOut = 20,
	EMovieSceneBuiltInEasing__CircInOut = 21,
	EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX = 22
};


// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static      = 0,
	EEvaluationMethod__Swept       = 1,
	EEvaluationMethod__EEvaluationMethod_MAX = 2
};


// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
	EUpdateClockSource__Tick       = 0,
	EUpdateClockSource__Platform   = 1,
	EUpdateClockSource__Audio      = 2,
	EUpdateClockSource__RelativeTimecode = 3,
	EUpdateClockSource__Timecode   = 4,
	EUpdateClockSource__Custom     = 5,
	EUpdateClockSource__EUpdateClockSource_MAX = 6
};


// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t
{
	EMovieSceneEvaluationType__FrameLocked = 0,
	EMovieSceneEvaluationType__WithSubFrames = 1,
	EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX = 2
};


// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t
{
	EMovieScenePlayerStatus__Stopped = 0,
	EMovieScenePlayerStatus__Playing = 1,
	EMovieScenePlayerStatus__Recording = 2,
	EMovieScenePlayerStatus__Scrubbing = 3,
	EMovieScenePlayerStatus__Jumping = 4,
	EMovieScenePlayerStatus__Stepping = 5,
	EMovieScenePlayerStatus__Paused = 6,
	EMovieScenePlayerStatus__MAX   = 7
};


// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local = 0,
	EMovieSceneObjectBindingSpace__Root = 1,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX = 2
};


// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState = 0,
	EMovieSceneCompletionMode__RestoreState = 1,
	EMovieSceneCompletionMode__ProjectDefault = 2,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 3
};


// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None  = 0,
	ESectionEvaluationFlags__PreRoll = 1,
	ESectionEvaluationFlags__PostRoll = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 3
};


// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t
{
	EUpdatePositionMethod__Play    = 0,
	EUpdatePositionMethod__Jump    = 1,
	EUpdatePositionMethod__Scrub   = 2,
	EUpdatePositionMethod__EUpdatePositionMethod_MAX = 3
};


// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence = 0,
	ESpawnOwnership__MasterSequence = 1,
	ESpawnOwnership__External      = 2,
	ESpawnOwnership__ESpawnOwnership_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// 0x0000
struct FMovieSceneEvalTemplateBase
{

};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// 0x5AF504C0
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
	unsigned char                                      UnknownData00[0x5AF504C0];                                // 0x0000(0x5AF504C0) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// 0xFFFFFFFFFFFAF340 (0x5AEFF800 - 0x5AF504C0)
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// 0x5AF80F00
struct FMovieScenePropertySectionData
{
	unsigned char                                      UnknownData00[0x5AF80F00];                                // 0x0000(0x5AF80F00) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneChannel
// 0x0000
struct FMovieSceneChannel
{

};

// ScriptStruct MovieScene.MovieSceneByteChannel
// 0x5AF51A00
struct FMovieSceneByteChannel : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x5AF51A00];                                // 0x0000(0x5AF51A00) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneBoolChannel
// 0x5AF51820
struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x5AF51820];                                // 0x0000(0x5AF51820) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
// 0x5AF51640
struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x5AF51640];                                // 0x0000(0x5AF51640) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneFloatChannel
// 0x5AF81B00
struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x5AF81B00];                                // 0x0000(0x5AF81B00) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// 0x0000
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{

};

// ScriptStruct MovieScene.MovieSceneFloatValue
// 0x5AF81C80
struct FMovieSceneFloatValue
{
	unsigned char                                      UnknownData00[0x5AF81C80];                                // 0x0000(0x5AF81C80) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTangentData
// 0x5AF81D00
struct FMovieSceneTangentData
{
	unsigned char                                      UnknownData00[0x5AF81D00];                                // 0x0000(0x5AF81D00) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// 0x0000
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{

};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// 0x0000
struct FMovieSceneSequenceInstanceData
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// 0x5AFA3100
struct FMovieSceneEvaluationOperand
{
	unsigned char                                      UnknownData00[0x5AFA3100];                                // 0x0000(0x5AFA3100) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceID
// 0x5AFA3180
struct FMovieSceneSequenceID
{
	unsigned char                                      UnknownData00[0x5AFA3180];                                // 0x0000(0x5AFA3180) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSectionGroup
// 0x5AFE3120
struct FMovieSceneSectionGroup
{
	unsigned char                                      UnknownData00[0x5AFE3120];                                // 0x0000(0x5AFE3120) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// 0x5AFE3080
struct FMovieSceneObjectBindingIDs
{
	unsigned char                                      UnknownData00[0x5AFE3080];                                // 0x0000(0x5AFE3080) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// 0x5AFFFD80
struct FMovieSceneObjectBindingID
{
	unsigned char                                      UnknownData00[0x5AFFFD80];                                // 0x0000(0x5AFFFD80) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// 0x5AFE2F40
struct FMovieSceneTrackLabels
{
	unsigned char                                      UnknownData00[0x5AFE2F40];                                // 0x0000(0x5AFE2F40) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEditorData
// 0x5B002B00
struct FMovieSceneEditorData
{
	unsigned char                                      UnknownData00[0x5B002B00];                                // 0x0000(0x5B002B00) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x5B011080
struct FMovieSceneExpansionState
{
	unsigned char                                      UnknownData00[0x5B011080];                                // 0x0000(0x5B011080) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneMarkedFrame
// 0x5B010F80
struct FMovieSceneMarkedFrame
{
	unsigned char                                      UnknownData00[0x5B010F80];                                // 0x0000(0x5B010F80) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
// 0x5B010E80
struct FMovieSceneTimecodeSource
{
	unsigned char                                      UnknownData00[0x5B010E80];                                // 0x0000(0x5B010E80) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneBinding
// 0x5B010D00
struct FMovieSceneBinding
{
	unsigned char                                      UnknownData00[0x5B010D00];                                // 0x0000(0x5B010D00) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// 0x5B010B80
struct FMovieSceneBindingOverrideData
{
	unsigned char                                      UnknownData00[0x5B010B80];                                // 0x0000(0x5B010B80) MISSED OFFSET
};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// 0x5AFE2CC0
struct FOptionalMovieSceneBlendType
{
	unsigned char                                      UnknownData00[0x5AFE2CC0];                                // 0x0000(0x5AFE2CC0) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// 0x0000
struct FMovieSceneEvalTemplatePtr
{

};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// 0x0000
struct FMovieSceneEmptyStruct
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// 0x5AFE51A0
struct FMovieSceneEvaluationField
{
	unsigned char                                      UnknownData00[0x5AFE51A0];                                // 0x0000(0x5AFE51A0) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// 0x5AFE2AE0
struct FMovieSceneEvaluationMetaData
{
	unsigned char                                      UnknownData00[0x5AFE2AE0];                                // 0x0000(0x5AFE2AE0) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// 0x5B010700
struct FMovieSceneOrderedEvaluationKey
{
	unsigned char                                      UnknownData00[0x5B010700];                                // 0x0000(0x5B010700) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
// 0x5B010500
struct FMovieSceneEvaluationKey
{
	unsigned char                                      UnknownData00[0x5B010500];                                // 0x0000(0x5B010500) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// 0x5B010580
struct FMovieSceneTrackIdentifier
{
	unsigned char                                      UnknownData00[0x5B010580];                                // 0x0000(0x5B010580) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// 0x5AFE5240
struct FMovieSceneEvaluationGroup
{
	unsigned char                                      UnknownData00[0x5AFE5240];                                // 0x0000(0x5AFE5240) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// 0x5B010280
struct FMovieSceneEvaluationFieldTrackPtr
{
	unsigned char                                      UnknownData00[0x5B010280];                                // 0x0000(0x5B010280) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// 0xFFFFFFFFFFFFFF80 (0x5B010200 - 0x5B010280)
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{

};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// 0x5B010180
struct FMovieSceneSegmentIdentifier
{
	unsigned char                                      UnknownData00[0x5B010180];                                // 0x0000(0x5B010180) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// 0x5B012080
struct FMovieSceneEvaluationGroupLUTIndex
{
	unsigned char                                      UnknownData00[0x5B012080];                                // 0x0000(0x5B012080) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneFrameRange
// 0x0000
struct FMovieSceneFrameRange
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// 0x5B004000
struct FMovieSceneEvaluationTemplate
{
	unsigned char                                      UnknownData00[0x5B004000];                                // 0x0000(0x5B004000) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSubSectionFieldData
// 0x0000
struct FMovieSceneSubSectionFieldData
{

};

// ScriptStruct MovieScene.MovieSceneTrackFieldData
// 0x0000
struct FMovieSceneTrackFieldData
{

};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// 0x5B011C00
struct FMovieSceneTemplateGenerationLedger
{
	unsigned char                                      UnknownData00[0x5B011C00];                                // 0x0000(0x5B011C00) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// 0x5B011B00
struct FMovieSceneEvaluationTemplateSerialNumber
{
	unsigned char                                      UnknownData00[0x5B011B00];                                // 0x0000(0x5B011B00) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// 0x5B004540
struct FMovieSceneSequenceHierarchy
{
	unsigned char                                      UnknownData00[0x5B004540];                                // 0x0000(0x5B004540) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// 0x5B011800
struct FMovieSceneSequenceHierarchyNode
{
	unsigned char                                      UnknownData00[0x5B011800];                                // 0x0000(0x5B011800) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// 0x5B012D80
struct FMovieSceneSubSequenceData
{
	unsigned char                                      UnknownData00[0x5B012D80];                                // 0x0000(0x5B012D80) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// 0x5B011280
struct FMovieSceneSequenceTransform
{
	unsigned char                                      UnknownData00[0x5B011280];                                // 0x0000(0x5B011280) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
// 0x5B011400
struct FMovieSceneNestedSequenceTransform
{
	unsigned char                                      UnknownData00[0x5B011400];                                // 0x0000(0x5B011400) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTimeWarping
// 0x5B011480
struct FMovieSceneTimeWarping
{
	unsigned char                                      UnknownData00[0x5B011480];                                // 0x0000(0x5B011480) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTimeTransform
// 0x5B011300
struct FMovieSceneTimeTransform
{
	unsigned char                                      UnknownData00[0x5B011300];                                // 0x0000(0x5B011300) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// 0x0000
struct FMovieSceneSequenceInstanceDataPtr
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// 0x5B012500
struct FMovieSceneEvaluationTrack
{
	unsigned char                                      UnknownData00[0x5B012500];                                // 0x0000(0x5B012500) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// 0x0000
struct FMovieSceneTrackImplementationPtr
{

};

// ScriptStruct MovieScene.SectionEvaluationDataTree
// 0x0000
struct FSectionEvaluationDataTree
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
// 0x5AFE4E80
struct FMovieSceneEvaluationTrackSegments
{
	unsigned char                                      UnknownData00[0x5AFE4E80];                                // 0x0000(0x5AFE4E80) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSegment
// 0x0000
struct FMovieSceneSegment
{

};

// ScriptStruct MovieScene.MovieSceneSubSectionData
// 0x5B012380
struct FMovieSceneSubSectionData
{
	unsigned char                                      UnknownData00[0x5B012380];                                // 0x0000(0x5B012380) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// 0x5B003A00
struct FMovieSceneRootEvaluationTemplateInstance
{
	unsigned char                                      UnknownData00[0x5B003A00];                                // 0x0000(0x5B003A00) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// 0x0000
struct FMovieSceneKeyStruct
{

};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// 0x5B012200
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x5B012200];                                // 0x0000(0x5B012200) MISSED OFFSET
};

// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// 0x0000
struct FGeneratedMovieSceneKeyStruct
{

};

// ScriptStruct MovieScene.MovieSceneObjectPathChannel
// 0x5AFE4B60
struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x5AFE4B60];                                // 0x0000(0x5AFE4B60) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// 0x5B014180
struct FMovieSceneObjectPathChannelKeyValue
{
	unsigned char                                      UnknownData00[0x5B014180];                                // 0x0000(0x5B014180) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieScenePossessable
// 0x5AFE4A20
struct FMovieScenePossessable
{
	unsigned char                                      UnknownData00[0x5AFE4A20];                                // 0x0000(0x5AFE4A20) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEasingSettings
// 0x5B013A80
struct FMovieSceneEasingSettings
{
	unsigned char                                      UnknownData00[0x5B013A80];                                // 0x0000(0x5B013A80) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// 0x5B013980
struct FMovieSceneSectionEvalOptions
{
	unsigned char                                      UnknownData00[0x5B013980];                                // 0x0000(0x5B013980) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// 0x5B013500
struct FMovieSceneSectionParameters
{
	unsigned char                                      UnknownData00[0x5B013500];                                // 0x0000(0x5B013500) MISSED OFFSET
};

// ScriptStruct MovieScene.SectionEvaluationData
// 0x5B013380
struct FSectionEvaluationData
{
	unsigned char                                      UnknownData00[0x5B013380];                                // 0x0000(0x5B013380) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// 0x5B014E00
struct FMovieSceneSequencePlaybackSettings
{
	unsigned char                                      UnknownData00[0x5B014E00];                                // 0x0000(0x5B014E00) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// 0x5B014E80
struct FMovieSceneSequenceLoopCount
{
	unsigned char                                      UnknownData00[0x5B014E80];                                // 0x0000(0x5B014E80) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// 0x5B014C80
struct FMovieSceneSequenceReplProperties
{
	unsigned char                                      UnknownData00[0x5B014C80];                                // 0x0000(0x5B014C80) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneWarpCounter
// 0x5AFE4840
struct FMovieSceneWarpCounter
{
	unsigned char                                      UnknownData00[0x5AFE4840];                                // 0x0000(0x5AFE4840) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x5B014780
struct FMovieSceneSpawnable
{
	unsigned char                                      UnknownData00[0x5B014780];                                // 0x0000(0x5B014780) MISSED OFFSET
};

// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// 0xFFFFFFFFA50AFB40 (0x0000 - 0x5AF504C0)
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// 0x5B014700
struct FMovieSceneTrackDisplayOptions
{
	unsigned char                                      UnknownData00[0x5B014700];                                // 0x0000(0x5B014700) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// 0x5B014480
struct FMovieSceneTrackEvalOptions
{
	unsigned char                                      UnknownData00[0x5B014480];                                // 0x0000(0x5B014480) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
