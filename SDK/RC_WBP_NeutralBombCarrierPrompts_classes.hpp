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

// WidgetBlueprintGeneratedClass WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C
// 0xFFFFFFFFC3BF9C80 (0x217B2780 - 0x5DBB8B00)
class UWBP_NeutralBombCarrierPrompts_C : public UKSViewedPawnInventoryWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C");
		return ptr;
	}


	void InitializeWidget();
	void EquipmentAdded();
	void EquipmentRemoved();
	void Update_Prompt();
	void PostSetPawn();
	void PreClearPawn();
	void Handle_Interact_Start();
	void Handle_Interact_End();
	void Handle_Bomb_Hidden_Interactable_Update();
	void Handle_Tracked_Bomb_Active_Changed();
	void OnRoundOver();
	void ExecuteUbergraph_WBP_NeutralBombCarrierPrompts();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
