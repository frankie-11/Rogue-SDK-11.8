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

// BlueprintGeneratedClass GamePlayerControllerNoHUD.GamePlayerControllerNoHUD_C
// 0xD7C7D00 (0x6B1E7E80 - 0x5DA20180)
class AGamePlayerControllerNoHUD_C : public AKSPlayerController
{
public:
	unsigned char                                      UnknownData00[0xD7C7D00];                                 // 0x5DA20180(0xD7C7D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GamePlayerControllerNoHUD.GamePlayerControllerNoHUD_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
