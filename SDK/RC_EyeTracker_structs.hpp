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

// Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t
{
	EEyeTrackerStatus__NotConnected = 0,
	EEyeTrackerStatus__NotTracking = 1,
	EEyeTrackerStatus__Tracking    = 2,
	EEyeTrackerStatus__EEyeTrackerStatus_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// 0x5B031480
struct FEyeTrackerStereoGazeData
{
	unsigned char                                      UnknownData00[0x5B031480];                                // 0x0000(0x5B031480) MISSED OFFSET
};

// ScriptStruct EyeTracker.EyeTrackerGazeData
// 0x5B031280
struct FEyeTrackerGazeData
{
	unsigned char                                      UnknownData00[0x5B031280];                                // 0x0000(0x5B031280) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
