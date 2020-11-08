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

// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8_t
{
	ELiveLinkCameraProjectionMode__Perspective = 0,
	ELiveLinkCameraProjectionMode__Orthographic = 1,
	ELiveLinkCameraProjectionMode__ELiveLinkCameraProjectionMode_MAX = 2
};


// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8_t
{
	ELiveLinkSourceMode__Latest    = 0,
	ELiveLinkSourceMode__EngineTime = 1,
	ELiveLinkSourceMode__Timecode  = 2,
	ELiveLinkSourceMode__ELiveLinkSourceMode_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// 0x5AEFFD80
struct FLiveLinkSubjectName
{
	unsigned char                                      UnknownData00[0x5AEFFD80];                                // 0x0000(0x5AEFFD80) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
// 0x5AF81780
struct FLiveLinkSubjectPreset
{
	unsigned char                                      UnknownData00[0x5AF81780];                                // 0x0000(0x5AF81780) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
// 0x5AF81680
struct FLiveLinkSubjectKey
{
	unsigned char                                      UnknownData00[0x5AF81680];                                // 0x0000(0x5AF81680) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// 0x0000
struct FLiveLinkSourceHandle
{

};

// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
// 0x0000
struct FLiveLinkBaseBlueprintData
{

};

// ScriptStruct LiveLinkInterface.SubjectFrameHandle
// 0x0000
struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTransform
// 0x0000
struct FLiveLinkTransform
{

};

// ScriptStruct LiveLinkInterface.CachedSubjectFrame
// 0x0000
struct FCachedSubjectFrame
{

};

// ScriptStruct LiveLinkInterface.SubjectMetadata
// 0x5B0E1240
struct FSubjectMetadata
{
	unsigned char                                      UnknownData00[0x5B0E1240];                                // 0x0000(0x5B0E1240) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
// 0x5B0D5A80
struct FLiveLinkBaseFrameData
{
	unsigned char                                      UnknownData00[0x5B0D5A80];                                // 0x0000(0x5B0D5A80) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// 0x5B0E1000
struct FLiveLinkMetaData
{
	unsigned char                                      UnknownData00[0x5B0E1000];                                // 0x0000(0x5B0E1000) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// 0x5B0D5980
struct FLiveLinkWorldTime
{
	unsigned char                                      UnknownData00[0x5B0D5980];                                // 0x0000(0x5B0D5980) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
// 0xFFFFFFFFFFFC1CA0 (0x5B097720 - 0x5B0D5A80)
struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
// 0x5B097680
struct FLiveLinkBaseStaticData
{
	unsigned char                                      UnknownData00[0x5B097680];                                // 0x0000(0x5B097680) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
// 0xFFFFFFFFFFFFFEC0 (0x5B097540 - 0x5B097680)
struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
// 0x5B0D5680
struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{
	unsigned char                                      UnknownData00[0x5B0D5680];                                // 0x0000(0x5B0D5680) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
// 0x5B0D7300
struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{
	unsigned char                                      UnknownData00[0x5B0D7300];                                // 0x0000(0x5B0D7300) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
// 0xFFFFFFFFFFFFFB00 (0x5B0D5580 - 0x5B0D5A80)
struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
// 0x1E00 (0x5B0D7380 - 0x5B0D5580)
struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{
	unsigned char                                      UnknownData00[0x1E00];                                    // 0x5B0D5580(0x1E00) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
// 0xFFFFFFFFA4F68980 (0x0000 - 0x5B097680)
struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
// 0x5B0D6F00
struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{
	unsigned char                                      UnknownData00[0x5B0D6F00];                                // 0x0000(0x5B0D6F00) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// 0x5B0E0700
struct FLiveLinkCurveConversionSettings
{
	unsigned char                                      UnknownData00[0x5B0E0700];                                // 0x0000(0x5B0E0700) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
// 0x5B0D6880
struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{
	unsigned char                                      UnknownData00[0x5B0D6880];                                // 0x0000(0x5B0D6880) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
// 0x1380 (0x5B0D6900 - 0x5B0D5580)
struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{
	unsigned char                                      UnknownData00[0x1380];                                    // 0x5B0D5580(0x1380) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
// 0x5B0D6400
struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{
	unsigned char                                      UnknownData00[0x5B0D6400];                                // 0x0000(0x5B0D6400) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
// 0x5B0D8380
struct FLiveLinkSourcePreset
{
	unsigned char                                      UnknownData00[0x5B0D8380];                                // 0x0000(0x5B0D8380) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// 0x5B097360
struct FLiveLinkRefSkeleton
{
	unsigned char                                      UnknownData00[0x5B097360];                                // 0x0000(0x5B097360) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
// 0x5B0D8200
struct FLiveLinkSubjectRepresentation
{
	unsigned char                                      UnknownData00[0x5B0D8200];                                // 0x0000(0x5B0D8200) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// 0x5B0D8100
struct FLiveLinkInterpolationSettings
{
	unsigned char                                      UnknownData00[0x5B0D8100];                                // 0x0000(0x5B0D8100) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// 0x5B0D8000
struct FLiveLinkTimeSynchronizationSettings
{
	unsigned char                                      UnknownData00[0x5B0D8000];                                // 0x0000(0x5B0D8000) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
// 0x5B0D7E80
struct FLiveLinkSourceDebugInfo
{
	unsigned char                                      UnknownData00[0x5B0D7E80];                                // 0x0000(0x5B0D7E80) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// 0x5B0D7700
struct FLiveLinkSourceBufferManagementSettings
{
	unsigned char                                      UnknownData00[0x5B0D7700];                                // 0x0000(0x5B0D7700) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
// 0x5B0D7680
struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{
	unsigned char                                      UnknownData00[0x5B0D7680];                                // 0x0000(0x5B0D7680) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// 0x5B097180
struct FLiveLinkFrameData
{
	unsigned char                                      UnknownData00[0x5B097180];                                // 0x0000(0x5B097180) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// 0x5B0D7400
struct FLiveLinkCurveElement
{
	unsigned char                                      UnknownData00[0x5B0D7400];                                // 0x0000(0x5B0D7400) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// 0x5B0D9300
struct FLiveLinkTimeCode_Base_DEPRECATED
{
	unsigned char                                      UnknownData00[0x5B0D9300];                                // 0x0000(0x5B0D9300) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// 0xFFFFFFFFAF45E680 (0x0000 - 0x50BA1980)
struct FLiveLinkFrameRate : public FFrameRate
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// 0xFFFFFFFFA4F26D00 (0x0000 - 0x5B0D9300)
struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTime
// 0x5B0D9200
struct FLiveLinkTime
{
	unsigned char                                      UnknownData00[0x5B0D9200];                                // 0x0000(0x5B0D9200) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
