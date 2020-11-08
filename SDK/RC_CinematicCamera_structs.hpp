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

// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride = 0,
	ECameraFocusMethod__Manual     = 1,
	ECameraFocusMethod__Tracking   = 2,
	ECameraFocusMethod__Disable    = 3,
	ECameraFocusMethod__MAX        = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// 0x5B02A980
struct FCameraLookatTrackingSettings
{
	unsigned char                                      UnknownData00[0x5B02A980];                                // 0x0000(0x5B02A980) MISSED OFFSET
};

// ScriptStruct CinematicCamera.CameraFocusSettings
// 0x5AFEA240
struct FCameraFocusSettings
{
	unsigned char                                      UnknownData00[0x5AFEA240];                                // 0x0000(0x5AFEA240) MISSED OFFSET
};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// 0x5B02C600
struct FCameraTrackingFocusSettings
{
	unsigned char                                      UnknownData00[0x5B02C600];                                // 0x0000(0x5B02C600) MISSED OFFSET
};

// ScriptStruct CinematicCamera.NamedLensPreset
// 0x5B02C100
struct FNamedLensPreset
{
	unsigned char                                      UnknownData00[0x5B02C100];                                // 0x0000(0x5B02C100) MISSED OFFSET
};

// ScriptStruct CinematicCamera.CameraLensSettings
// 0x5B02C180
struct FCameraLensSettings
{
	unsigned char                                      UnknownData00[0x5B02C180];                                // 0x0000(0x5B02C180) MISSED OFFSET
};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// 0x5B02BE80
struct FNamedFilmbackPreset
{
	unsigned char                                      UnknownData00[0x5B02BE80];                                // 0x0000(0x5B02BE80) MISSED OFFSET
};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// 0x5B02BF00
struct FCameraFilmbackSettings
{
	unsigned char                                      UnknownData00[0x5B02BF00];                                // 0x0000(0x5B02BF00) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
