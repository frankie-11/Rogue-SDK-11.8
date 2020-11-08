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

// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X = 0,
	MovieScene3DPathSection_Axis__Y = 1,
	MovieScene3DPathSection_Axis__Z = 2,
	MovieScene3DPathSection_Axis__NEG_X = 3,
	MovieScene3DPathSection_Axis__NEG_Y = 4,
	MovieScene3DPathSection_Axis__NEG_Z = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX = 6
};


// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation = 0,
	EFireEventsAtPosition__AtEndOfEvaluation = 1,
	EFireEventsAtPosition__AfterSpawn = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX = 3
};


// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible      = 0,
	ELevelVisibility__Hidden       = 1,
	ELevelVisibility__ELevelVisibility_MAX = 2
};


// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
	EParticleKey__Activate         = 0,
	EParticleKey__Deactivate       = 1,
	EParticleKey__Trigger          = 2,
	EParticleKey__EParticleKey_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// 0x5AF53DA0
struct FMovieSceneStringChannel : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x5AF53DA0];                                // 0x0000(0x5AF53DA0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// 0xD47C0 (0x5B024C80 - 0x5AF504C0)
struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xD47C0];                                   // 0x5AF504C0(0xD47C0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// 0xD4440 (0x5B024900 - 0x5AF504C0)
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xD4440];                                   // 0x5AF504C0(0xD4440) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// 0x5B024880
struct FMovieSceneTransformMask
{
	unsigned char                                      UnknownData00[0x5B024880];                                // 0x0000(0x5B024880) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// 0x5B024680
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x5B024680];                                // 0x0000(0x5B024680) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// 0x5B024580
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x5B024580];                                // 0x0000(0x5B024580) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// 0x5B024480
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x5B024480];                                // 0x0000(0x5B024480) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// 0x5B024380
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x5B024380];                                // 0x0000(0x5B024380) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// 0xD3E40 (0x5B024300 - 0x5AF504C0)
struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xD3E40];                                   // 0x5AF504C0(0xD3E40) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// 0x5B026080
struct FMovieScene3DTransformTemplateData
{
	unsigned char                                      UnknownData00[0x5B026080];                                // 0x0000(0x5B026080) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// 0x5AFE8EE0
struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x5AFE8EE0];                                // 0x0000(0x5AFE8EE0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// 0x5B025E80
struct FMovieSceneActorReferenceKey
{
	unsigned char                                      UnknownData00[0x5B025E80];                                // 0x0000(0x5B025E80) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// 0xD5840 (0x5B025D00 - 0x5AF504C0)
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xD5840];                                   // 0x5AF504C0(0xD5840) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// 0xD57C0 (0x5B025C80 - 0x5AF504C0)
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xD57C0];                                   // 0x5AF504C0(0xD57C0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// 0x5B025980
struct FMovieSceneCameraAnimSectionData
{
	unsigned char                                      UnknownData00[0x5B025980];                                // 0x0000(0x5B025980) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// 0xFFFFFFFFA50AFB40 (0x0000 - 0x5AF504C0)
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// 0x5B025880
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	unsigned char                                      UnknownData00[0x5B025880];                                // 0x0000(0x5B025880) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// 0x5AFE8E40
struct FMovieSceneCameraShakeSectionData
{
	unsigned char                                      UnknownData00[0x5AFE8E40];                                // 0x0000(0x5AFE8E40) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// 0x5B025600
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	unsigned char                                      UnknownData00[0x5B025600];                                // 0x0000(0x5B025600) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// 0xD4F40 (0x5B025400 - 0x5AF504C0)
struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xD4F40];                                   // 0x5AF504C0(0xD4F40) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// 0x5B025300
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x5B025300];                                // 0x0000(0x5B025300) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// 0x127B00 (0x5B027300 - 0x5AEFF800)
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x127B00];                                  // 0x5AEFF800(0x127B00) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
// 0x5B027280
struct FMovieSceneEvent
{
	unsigned char                                      UnknownData00[0x5B027280];                                // 0x0000(0x5B027280) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// 0x5B027180
struct FMovieSceneEventPtrs
{
	unsigned char                                      UnknownData00[0x5B027180];                                // 0x0000(0x5B027180) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// 0x5B027100
struct FMovieSceneEventPayloadVariable
{
	unsigned char                                      UnknownData00[0x5B027100];                                // 0x0000(0x5B027100) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// 0x5AFE8C60
struct FMovieSceneEventChannel : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x5AFE8C60];                                // 0x0000(0x5AFE8C60) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// 0x5AFE8B20
struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x5AFE8B20];                                // 0x0000(0x5AFE8B20) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.EventPayload
// 0x5B026E80
struct FEventPayload
{
	unsigned char                                      UnknownData00[0x5B026E80];                                // 0x0000(0x5B026E80) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// 0x0000
struct FMovieSceneEventParameters
{

};

// ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
// 0x985C0 (0x5AFE8A80 - 0x5AF504C0)
struct FMovieSceneEventTemplateBase : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x985C0];                                   // 0x5AF504C0(0x985C0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
// 0x3E180 (0x5B026C00 - 0x5AFE8A80)
struct FMovieSceneEventRepeaterTemplate : public FMovieSceneEventTemplateBase
{
	unsigned char                                      UnknownData00[0x3E180];                                   // 0x5AFE8A80(0x3E180) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
// 0xFFFFFFFFFFFFFEC0 (0x5AFE8940 - 0x5AFE8A80)
struct FMovieSceneEventTriggerTemplate : public FMovieSceneEventTemplateBase
{

};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// 0x3E000 (0x5B026A80 - 0x5AFE8A80)
struct FMovieSceneEventSectionTemplate : public FMovieSceneEventTemplateBase
{
	unsigned char                                      UnknownData00[0x3E000];                                   // 0x5AFE8A80(0x3E000) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// 0xD6440 (0x5B026900 - 0x5AF504C0)
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xD6440];                                   // 0x5AF504C0(0xD6440) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// 0x98340 (0x5AFE8800 - 0x5AF504C0)
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x98340];                                   // 0x5AF504C0(0x98340) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// 0x97F80 (0x5AFE8440 - 0x5AF504C0)
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x97F80];                                   // 0x5AF504C0(0x97F80) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// 0x5B026580
struct FTransformParameterNameAndCurves
{
	unsigned char                                      UnknownData00[0x5B026580];                                // 0x0000(0x5B026580) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// 0x5B028380
struct FColorParameterNameAndCurves
{
	unsigned char                                      UnknownData00[0x5B028380];                                // 0x0000(0x5B028380) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x5B028100
struct FVectorParameterNameAndCurves
{
	unsigned char                                      UnknownData00[0x5B028100];                                // 0x0000(0x5B028100) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
// 0x5B027F00
struct FVector2DParameterNameAndCurves
{
	unsigned char                                      UnknownData00[0x5B027F00];                                // 0x0000(0x5B027F00) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
// 0x5B027D80
struct FBoolParameterNameAndCurve
{
	unsigned char                                      UnknownData00[0x5B027D80];                                // 0x0000(0x5B027D80) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x5B027C00
struct FScalarParameterNameAndCurve
{
	unsigned char                                      UnknownData00[0x5B027C00];                                // 0x0000(0x5B027C00) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// 0x3F740 (0x5B027B80 - 0x5AFE8440)
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
	unsigned char                                      UnknownData00[0x3F740];                                   // 0x5AFE8440(0x3F740) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// 0x128300 (0x5B027B00 - 0x5AEFF800)
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x128300];                                  // 0x5AEFF800(0x128300) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// 0x3F640 (0x5B027A80 - 0x5AFE8440)
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	unsigned char                                      UnknownData00[0x3F640];                                   // 0x5AFE8440(0x3F640) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// 0xFFFFFFFFA5017BC0 (0x0000 - 0x5AFE8440)
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// 0xFFFFFFFFA50AE600 (0x0000 - 0x5AF51A00)
struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// 0xD7540 (0x5B027A00 - 0x5AF504C0)
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xD7540];                                   // 0x5AF504C0(0xD7540) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// 0xD7440 (0x5B027900 - 0x5AF504C0)
struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xD7440];                                   // 0x5AF504C0(0xD7440) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
// 0x128080 (0x5B027880 - 0x5AEFF800)
struct FMovieSceneEulerTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x128080];                                  // 0x5AEFF800(0x128080) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// 0x128000 (0x5B027800 - 0x5AEFF800)
struct FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x128000];                                  // 0x5AEFF800(0x128000) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// 0x127E80 (0x5B027680 - 0x5AEFF800)
struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x127E80];                                  // 0x5AEFF800(0x127E80) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// 0x127E00 (0x5B027600 - 0x5AEFF800)
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x127E00];                                  // 0x5AEFF800(0x127E00) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// 0x127D00 (0x5B027500 - 0x5AEFF800)
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x127D00];                                  // 0x5AEFF800(0x127D00) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// 0x127C80 (0x5B027480 - 0x5AEFF800)
struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x127C80];                                  // 0x5AEFF800(0x127C80) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// 0x127C00 (0x5B027400 - 0x5AEFF800)
struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x127C00];                                  // 0x5AEFF800(0x127C00) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// 0x129C00 (0x5B029400 - 0x5AEFF800)
struct FMovieSceneFloatPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x129C00];                                  // 0x5AEFF800(0x129C00) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// 0x129B80 (0x5B029380 - 0x5AEFF800)
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x129B80];                                  // 0x5AEFF800(0x129B80) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// 0x5B028D80
struct FMovieSceneSkeletalAnimationParams
{
	unsigned char                                      UnknownData00[0x5B028D80];                                // 0x0000(0x5B028D80) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// 0xD8840 (0x5B028D00 - 0x5AF504C0)
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xD8840];                                   // 0x5AF504C0(0xD8840) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// 0xFFFFFFFFFFFFFE80 (0x5B028C00 - 0x5B028D80)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{

};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// 0xD86C0 (0x5B028B80 - 0x5AF504C0)
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xD86C0];                                   // 0x5AF504C0(0xD86C0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// 0xD8640 (0x5B028B00 - 0x5AF504C0)
struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xD8640];                                   // 0x5AF504C0(0xD8640) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// 0x5B028A80
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x5B028A80];                                // 0x0000(0x5B028A80) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// 0xFFFFFFFFFFFFFF80 (0x5B028A00 - 0x5B028A80)
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{

};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// 0xFFFFFFFFFFFFFF00 (0x5B028980 - 0x5B028A80)
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{

};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// 0xFFFFFFFFFFFFFE80 (0x5B028900 - 0x5B028A80)
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{

};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// 0xFFFFFFFFA4FD6C80 (0x0000 - 0x5B029380)
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
