#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioExtensions.SoundModulationParameter
// 0x5B02BB80
struct FSoundModulationParameter
{
	unsigned char                                      UnknownData00[0x5B02BB80];                                // 0x0000(0x5B02BB80) MISSED OFFSET
};

// ScriptStruct AudioExtensions.SoundModulation
// 0x5AFEA1A0
struct FSoundModulation
{
	unsigned char                                      UnknownData00[0x5AFEA1A0];                                // 0x0000(0x5AFEA1A0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
