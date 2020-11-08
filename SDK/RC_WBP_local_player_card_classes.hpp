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

// WidgetBlueprintGeneratedClass WBP_local_player_card.WBP_local_player_card_C
// 0xFFFFFFFFD17E2180 (0x2C3D6B00 - 0x5ABF4980)
class UWBP_local_player_card_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_local_player_card.WBP_local_player_card_C");
		return ptr;
	}


	void UpdatePendingPurchaseWarning();
	void SetPlayerAvatar();
	void SetPlayerCurrency();
	void SetPlayerLevel();
	void SetPlayerInfo();
	void InitializeWidget();
	void UninitializeWidget();
	void ExecuteUbergraph_WBP_local_player_card();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
