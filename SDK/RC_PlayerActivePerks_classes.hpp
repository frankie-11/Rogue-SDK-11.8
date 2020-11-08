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

// WidgetBlueprintGeneratedClass PlayerActivePerks.PlayerActivePerks_C
// 0x2B26FB80
class UPlayerActivePerks_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x2B26FB80];                                // 0x0000(0x2B26FB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerActivePerks.PlayerActivePerks_C");
		return ptr;
	}


	void PostSetPawn();
	void PreClearPawn();
	void HandleModsUpdated();
	void HandleDownedElim();
	void Bind_Callbacks_to_Player_State();
	void Unbind_Callbacks_to_Player_State();
	void Bind_Callbacks_to_Pawn();
	void Unbind_Callbacks_to_Pawn();
	void PreClearPlayerState();
	void PostSetPlayerState();
	void SetPlayerStateUIRelevanceChanged();
	void Try_To_Show_On_UI_Relevant();
	void ExecuteUbergraph_PlayerActivePerks();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
