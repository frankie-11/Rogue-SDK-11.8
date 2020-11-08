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

// BlueprintGeneratedClass FriendlyLobbyCharacter.FriendlyLobbyCharacter_C
// 0xFFFFFFFFFFFFEE80 (0x38D580 - 0x38E700)
class AFriendlyLobbyCharacter_C : public ALobbyMainCharacter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FriendlyLobbyCharacter.FriendlyLobbyCharacter_C");
		return ptr;
	}


	void ReceiveTick();
	void SetLobbyNameplate();
	void HideLobbyNameplate();
	void ShowLobbyNameplate();
	void ExecuteUbergraph_FriendlyLobbyCharacter();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
