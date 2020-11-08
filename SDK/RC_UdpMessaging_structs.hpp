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

// Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8_t
{
	EUdpMessageFormat__None        = 0,
	EUdpMessageFormat__Json        = 1,
	EUdpMessageFormat__TaggedProperty = 2,
	EUdpMessageFormat__CborPlatformEndianness = 3,
	EUdpMessageFormat__CborStandardEndianness = 4,
	EUdpMessageFormat__EUdpMessageFormat_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UdpMessaging.UdpMockMessage
// 0x5AF57C20
struct FUdpMockMessage
{
	unsigned char                                      UnknownData00[0x5AF57C20];                                // 0x0000(0x5AF57C20) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
