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

// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay = 0,
	EXRTrackedDeviceType__Controller = 1,
	EXRTrackedDeviceType__TrackingReference = 2,
	EXRTrackedDeviceType__Other    = 3,
	EXRTrackedDeviceType__Invalid  = 4,
	EXRTrackedDeviceType__Any      = 5,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX = 6
};


// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed = 1,
	ESpectatorScreenMode__Undistorted = 2,
	ESpectatorScreenMode__Distorted = 3,
	ESpectatorScreenMode__SingleEye = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill = 5,
	ESpectatorScreenMode__Texture  = 6,
	ESpectatorScreenMode__TexturePlusEye = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX = 8
};


// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown         = 0,
	EHMDWornState__Worn            = 1,
	EHMDWornState__NotWorn         = 2,
	EHMDWornState__EHMDWornState_MAX = 3
};


// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor      = 0,
	EHMDTrackingOrigin__Eye        = 1,
	EHMDTrackingOrigin__Stage      = 2,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX = 3
};


// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation = 0,
	EOrientPositionSelector__Position = 1,
	EOrientPositionSelector__OrientationAndPosition = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX = 3
};


// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked    = 0,
	ETrackingStatus__InertialOnly  = 1,
	ETrackingStatus__Tracked       = 2,
	ETrackingStatus__ETrackingStatus_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HeadMountedDisplay.XRDeviceId
// 0x5AFFC100
struct FXRDeviceId
{
	unsigned char                                      UnknownData00[0x5AFFC100];                                // 0x0000(0x5AFFC100) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
