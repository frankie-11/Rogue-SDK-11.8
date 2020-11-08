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

// WidgetBlueprintGeneratedClass WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C
// 0xFFFFFFFFD196B700 (0x2C560080 - 0x5ABF4980)
class UWBP_CustomMassInviteEntry_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C");
		return ptr;
	}


	void GetPlayerInfo();
	void BndEvt__HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BP_OnItemSelectionChanged();
	void BP_OnItemExpansionChanged();
	void BP_OnEntryReleased();
	void OnListItemObjectSet();
	void ForceHovered();
	void ForceUnhovered();
	void PlaySelection();
	void PlayDeselection();
	void SetSelected();
	void OnMouseEnter();
	void OnMouseLeave();
	void ExecuteUbergraph_WBP_CustomMassInviteEntry();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
