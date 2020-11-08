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

// Enum MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
	EMediaPlayerOptionBooleanOverride__UseMediaPlayerSetting = 0,
	EMediaPlayerOptionBooleanOverride__Enabled = 1,
	EMediaPlayerOptionBooleanOverride__Disabled = 2,
	EMediaPlayerOptionBooleanOverride__EMediaPlayerOptionBooleanOverride_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaUtils.MediaPlayerOptions
// 0x5B033100
struct FMediaPlayerOptions
{
	unsigned char                                      UnknownData00[0x5B033100];                                // 0x0000(0x5B033100) MISSED OFFSET
};

// ScriptStruct MediaUtils.MediaPlayerTrackOptions
// 0x5B032D80
struct FMediaPlayerTrackOptions
{
	unsigned char                                      UnknownData00[0x5B032D80];                                // 0x0000(0x5B032D80) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
