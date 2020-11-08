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

// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_Linear                    = 5,
	HCGM_MAX                       = 6
};


// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8_t
{
	EMovieSceneCaptureProtocolState__Idle = 0,
	EMovieSceneCaptureProtocolState__Initialized = 1,
	EMovieSceneCaptureProtocolState__Capturing = 2,
	EMovieSceneCaptureProtocolState__Finalizing = 3,
	EMovieSceneCaptureProtocolState__EMovieSceneCaptureProtocolState_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x5AFEB320
struct FCompositionGraphCapturePasses
{
	unsigned char                                      UnknownData00[0x5AFEB320];                                // 0x0000(0x5AFEB320) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.FrameMetrics
// 0x5B034880
struct FFrameMetrics
{
	unsigned char                                      UnknownData00[0x5B034880];                                // 0x0000(0x5B034880) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x5B035E80
struct FMovieSceneCaptureSettings
{
	unsigned char                                      UnknownData00[0x5B035E80];                                // 0x0000(0x5B035E80) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x5B034280
struct FCaptureResolution
{
	unsigned char                                      UnknownData00[0x5B034280];                                // 0x0000(0x5B034280) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.CapturedPixels
// 0x0000
struct FCapturedPixels
{

};

// ScriptStruct MovieSceneCapture.CapturedPixelsID
// 0x5B040400
struct FCapturedPixelsID
{
	unsigned char                                      UnknownData00[0x5B040400];                                // 0x0000(0x5B040400) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
