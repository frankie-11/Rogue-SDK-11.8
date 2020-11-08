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

// BlueprintGeneratedClass WalkinCinematicCharacter.WalkinCinematicCharacter_C
// 0xFFFFFFFFCE381D00 (0x2BDA6580 - 0x5DA24880)
class AWalkinCinematicCharacter_C : public AKSLobbyCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WalkinCinematicCharacter.WalkinCinematicCharacter_C");
		return ptr;
	}


	void InitBodyApperal();
	void ReceiveBeginPlay();
	void Add_Body_Apparel_As_Parent();
	void ExecuteUbergraph_WalkinCinematicCharacter();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
