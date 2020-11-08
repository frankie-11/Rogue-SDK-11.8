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

// WidgetBlueprintGeneratedClass WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C
// 0xFFFFFFFFCB536780 (0x2612B100 - 0x5ABF4980)
class UWBP_PlayerContextMenuOption_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C");
		return ptr;
	}


	void GetCurrentOptionText();
	void NavigateConfirm();
	void IsActiveForNavigation();
	void Update_Callout_Visibility();
	void SocialPlayerContextMenuOptionClickSFX();
	void SocialPlayerContextMenuOptionHoverSFX();
	void PreConstruct();
	void SetActiveInMenu();
	void Handle_Input_State_Changed();
	void GamepadHover();
	void GamepadUnhover();
	void Construct();
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature();
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature();
	void OnInitialized();
	void ExecuteUbergraph_WBP_PlayerContextMenuOption();
	void OnContextOptionSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
