#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SoundFields.AmbisonicsEncodingSettings
// 0x5B243B80
class UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase
{
public:
	unsigned char                                      UnknownData00[0x5B243B80];                                // 0x0000(0x5B243B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundFields.AmbisonicsEncodingSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
