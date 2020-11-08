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

// WidgetBlueprintGeneratedClass WBP_LeaveParty.WBP_LeaveParty_C
// 0xFFFFFFFFC5F65880 (0x20B5A200 - 0x5ABF4980)
class UWBP_LeaveParty_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LeaveParty.WBP_LeaveParty_C");
		return ptr;
	}


	void NavigateConfirm();
	void HandleInputStateChanged();
	void SocialLeavePartyHoverSFX();
	void SocialLeavePartyClickSFX();
	void InitializeWidget();
	void HandlePartyUpdated();
	void CallLeaveParty();
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void ExecuteUbergraph_WBP_LeaveParty();
	void OnPartyLeaveVisibilityChange__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
