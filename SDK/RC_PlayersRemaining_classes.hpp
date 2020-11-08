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

// WidgetBlueprintGeneratedClass PlayersRemaining.PlayersRemaining_C
// 0xFFFFFFFFCCAF9400 (0x276EDD80 - 0x5ABF4980)
class UPlayersRemaining_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayersRemaining.PlayersRemaining_C");
		return ptr;
	}


	void Construct();
	void RefreshPlayerCount();
	void HandlePlayerEliminated();
	void HandlePlayerSpawn();
	void HandlePhaseChange();
	void ExecuteUbergraph_PlayersRemaining();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
