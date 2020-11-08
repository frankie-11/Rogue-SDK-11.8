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

// BlueprintGeneratedClass BP_LobbyMode.BP_LobbyMode_C
// 0x25671B80
class ABP_LobbyMode_C : public APGame_GameModeBase
{
public:
	unsigned char                                      UnknownData00[0x25671B80];                                // 0x0000(0x25671B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LobbyMode.BP_LobbyMode_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
