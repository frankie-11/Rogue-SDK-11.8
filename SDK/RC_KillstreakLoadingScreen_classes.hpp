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

// Class KillstreakLoadingScreen.KSLoadingScreenSettings
// 0x5E40E700
class UKSLoadingScreenSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5E40E700];                                // 0x0000(0x5E40E700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakLoadingScreen.KSLoadingScreenSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
