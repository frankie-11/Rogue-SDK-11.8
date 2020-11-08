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

// BlueprintGeneratedClass LocalPlayerLobbyCharacter.LocalPlayerLobbyCharacter_C
// 0x664B0280 (0x6683E980 - 0x38E700)
class ALocalPlayerLobbyCharacter_C : public ALobbyMainCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x664B0280];                                // 0x38E700(0x664B0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LocalPlayerLobbyCharacter.LocalPlayerLobbyCharacter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
