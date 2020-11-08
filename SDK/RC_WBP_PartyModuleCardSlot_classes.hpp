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

// WidgetBlueprintGeneratedClass WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C
// 0xFFFFFFFFC5F66780 (0x20B5B100 - 0x5ABF4980)
class UWBP_PartyModuleCardSlot_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C");
		return ptr;
	}


	void NavigateConfirm();
	void SetPlayerView();
	void SetEmptyView();
	void InitializeWidget();
	void BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void Add_Party_Member_Selected();
	void Add_Party_Member_Hovered();
	void Add_Party_Member_Unhovered();
	void ExecuteUbergraph_WBP_PartyModuleCardSlot();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
